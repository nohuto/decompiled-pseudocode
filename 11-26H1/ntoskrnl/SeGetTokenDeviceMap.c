/*
 * XREFs of SeGetTokenDeviceMap @ 0x140A18788
 * Callers:
 *     ObpLookupObjectName @ 0x1408FE2F0 (ObpLookupObjectName.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A18420 (ObpReferenceCurrentDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x140A189CC (ObpSetCurrentProcessDeviceMap.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PsGetServerSiloServiceSessionId @ 0x140487140 (PsGetServerSiloServiceSessionId.c)
 *     Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline @ 0x14051205C (Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline.c)
 *     swprintf_s @ 0x14053B0E0 (swprintf_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateDirectoryObject @ 0x140724970 (ZwCreateDirectoryObject.c)
 *     ZwCreateSymbolicLinkObject @ 0x140724CF0 (ZwCreateSymbolicLinkObject.c)
 *     ObDereferenceDeviceMap @ 0x1409007F4 (ObDereferenceDeviceMap.c)
 *     ObpSetDeviceMap @ 0x140A18D3C (ObpSetDeviceMap.c)
 *     RtlQueryElevationFlags @ 0x140AB0350 (RtlQueryElevationFlags.c)
 */

NTSTATUS __fastcall SeGetTokenDeviceMap(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  NTSTATUS result; // eax
  unsigned int ServerSiloServiceSessionId; // eax
  int SymbolicLinkObject; // esi
  volatile signed __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE DirectoryHandle; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING v18; // [rsp+90h] [rbp-70h] BYREF
  wchar_t Dst[64]; // [rsp+A0h] [rbp-60h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  Handle = 0LL;
  v14 = 0LL;
  *a2 = 0LL;
  DestinationString = 0LL;
  v18 = 0LL;
  if ( !a1 )
    return -1073741811;
  if ( (*(_DWORD *)(a1 + 200) & 0x20) != 0 )
    return -1073741729;
  v4 = *(_QWORD *)(a1 + 216);
  if ( !v4 )
    return -1073741729;
  v5 = *(_QWORD *)(v4 + 48);
  if ( v5 )
  {
    *a2 = v5;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 240), 1uLL) <= 0 )
      __fastfail(0xEu);
    return 0;
  }
  else if ( (unsigned int)Feature_ShadowAdmin__private_IsEnabledDeviceUsageNoInline()
         && (v12 = 0, RtlQueryElevationFlags(&v12), (v12 & 0x18) == 0x10)
         && *(_DWORD *)(a1 + 192) == 2
         && *(int *)(a1 + 196) < 2
         && (v10 = *(_QWORD *)(v4 + 56)) != 0
         && (*(_DWORD *)(v10 + 200) & 0x8000000) != 0 )
  {
    return -1073741790;
  }
  else
  {
    ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(*(_QWORD *)(v4 + 168));
    swprintf_s(
      Dst,
      0x40uLL,
      L"\\Sessions\\%d\\DosDevices\\%08x-%08x",
      ServerSiloServiceSessionId,
      *(_DWORD *)(a1 + 28),
      *(_DWORD *)(a1 + 24));
    RtlInitUnicodeString(&DestinationString, Dst);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 704;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      SymbolicLinkObject = ObpSetDeviceMap(*(PVOID *)(v4 + 168), 2, (__int64)&v14);
      if ( SymbolicLinkObject >= 0 )
      {
        RtlInitUnicodeString(&v18, L"Global");
        RtlInitUnicodeString(&DestinationString, L"\\Global??");
        ObjectAttributes.RootDirectory = DirectoryHandle;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &v18;
        ObjectAttributes.Attributes = 720;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
        if ( SymbolicLinkObject >= 0 )
        {
          ZwClose(Handle);
          v9 = (volatile signed __int64 *)v14;
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 48), v14, 0LL) )
            ObDereferenceDeviceMap(v9, 1u);
          v11 = *(_QWORD *)(v4 + 48);
          *a2 = v11;
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 240), 1uLL) <= 0 )
            __fastfail(0xEu);
        }
        else
        {
          ObDereferenceDeviceMap((volatile signed __int64 *)v14, 1u);
        }
      }
      ZwClose(DirectoryHandle);
      return SymbolicLinkObject;
    }
  }
  return result;
}
