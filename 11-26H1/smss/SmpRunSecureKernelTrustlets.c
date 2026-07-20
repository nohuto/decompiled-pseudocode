/*
 * XREFs of SmpRunSecureKernelTrustlets @ 0x140017AB0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpExecuteCommand @ 0x1400030A0 (SmpExecuteCommand.c)
 *     RtlUnicodeStringCat @ 0x140013090 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x140013168 (RtlUnicodeStringCatString.c)
 *     NtPnpGetDeviceInterfaceList @ 0x14001DD20 (NtPnpGetDeviceInterfaceList.c)
 *     NtPnpInitializeLibrary @ 0x14001E3C4 (NtPnpInitializeLibrary.c)
 *     NtPnpOpenDeviceInterfaceKey @ 0x14001E4A8 (NtPnpOpenDeviceInterfaceKey.c)
 *     memset_0 @ 0x14001E843 (memset_0.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall SmpRunSecureKernelTrustlets(_BYTE *a1)
{
  HANDLE v2; // r15
  signed int v3; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  unsigned int v7; // ebx
  _WORD *Heap; // rdi
  unsigned int v9; // r14d
  int DeviceInterfaceList; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  _WORD *v14; // r12
  int v15; // eax
  unsigned int v16; // r9d
  const wchar_t *v17; // r8
  unsigned int v18; // edx
  USHORT v19; // r14
  NTSTATUS v20; // eax
  const wchar_t *v21; // r8
  unsigned int v22; // edx
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned int v25; // [rsp+38h] [rbp-D0h] BYREF
  ULONG ResultLength; // [rsp+3Ch] [rbp-CCh] BYREF
  struct _UNICODE_STRING v27; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE SourceString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING SourceString_8; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  _DWORD KeyValueInformation[2]; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v32; // [rsp+80h] [rbp-88h]
  wchar_t pszSrc[514]; // [rsp+84h] [rbp-84h] BYREF
  _BYTE BaseAddress[1024]; // [rsp+488h] [rbp+380h] BYREF

  DestinationString_8 = 0LL;
  v27 = 0LL;
  SourceString_8 = 0LL;
  memset_0(BaseAddress, 0, sizeof(BaseAddress));
  v25 = 0;
  v2 = 0LL;
  SourceString = 0LL;
  ResultLength = 0;
  *a1 = 0;
  RtlInitUnicodeString(&DestinationString_8, L"SecureKernelTrustlet");
  RtlInitUnicodeString(&SourceString_8, L"async secure ");
  v3 = NtPnpInitializeLibrary();
  v7 = v3;
  if ( v3 < 0 )
  {
    SmpLogFailureString((__int64)"SmpRunSecureKernelTrustlets", 0x7F7u, (__int64)L"Failed to initialize NtPnpApi.", v3);
    return v7;
  }
  Heap = BaseAddress;
  v9 = 512;
  while ( 1 )
  {
    DeviceInterfaceList = NtPnpGetDeviceInterfaceList(v5, v4, v6, v9, (__int64)Heap, (__int64)&v25);
    v7 = DeviceInterfaceList;
    if ( DeviceInterfaceList != -1073741789 )
      break;
    if ( v25 <= v9 )
    {
      v7 = -1073741595;
      SmpLogFailureString(
        (__int64)"SmpRunSecureKernelTrustlets",
        0x816u,
        (__int64)L"Retrieving the list of interfaces returned that the buffer is too small but the required size is not larger.",
        0xC00000E5);
      goto LABEL_13;
    }
    if ( Heap && Heap != (_WORD *)BaseAddress )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
    v9 = v25;
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, 2LL * v25);
    if ( !Heap )
    {
      v7 = -1073741670;
      goto LABEL_13;
    }
  }
  if ( DeviceInterfaceList < 0 )
  {
LABEL_13:
    SmpLogFailureString(
      (__int64)"SmpRunSecureKernelTrustlets",
      0x82Eu,
      (__int64)L"Failed to get list of interfaces.",
      v7);
    goto LABEL_14;
  }
  v14 = Heap;
  if ( !*Heap )
  {
LABEL_14:
    if ( Heap )
      goto LABEL_15;
    goto LABEL_17;
  }
  do
  {
    if ( v2 )
    {
      NtClose(v2);
      SourceString = 0LL;
    }
    v15 = NtPnpOpenDeviceInterfaceKey(v14, v11, v12, &SourceString);
    v2 = SourceString;
    v7 = v15;
    if ( v15 != -1073741772 )
    {
      if ( v15 < 0 )
      {
        v16 = v15;
        v17 = L"Failed to open interface key.";
        v18 = 2120;
        goto LABEL_49;
      }
      ResultLength = 0;
      v7 = NtQueryValueKey(
             SourceString,
             &DestinationString_8,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x410u,
             &ResultLength);
      if ( v7 == -1073741772 )
      {
        v16 = -1073741772;
        v17 = L"SecureKernelTrustlet registry key not found";
        v18 = 2135;
        goto LABEL_49;
      }
      if ( v7 == -2147483643 || v7 == -1073741789 )
      {
        v17 = L"Registry Buffer too small";
        v18 = 2142;
LABEL_48:
        v16 = v7;
LABEL_49:
        SmpLogFailureString((__int64)"SmpRunSecureKernelTrustlets", v18, (__int64)v17, v16);
        goto LABEL_50;
      }
      if ( (v7 & 0x80000000) != 0 )
      {
        v17 = L"Failed to query SecureKernelTrustlet registry value.";
        v18 = 2148;
        goto LABEL_48;
      }
      if ( KeyValueInformation[1] != 1 )
      {
        v16 = -1073741788;
        v17 = L"SecureKernelTrustlet registry value is the wrong type.";
        v18 = 2156;
        goto LABEL_49;
      }
      v19 = SourceString_8.Length + v32;
      if ( (unsigned __int16)(SourceString_8.Length + v32) < SourceString_8.Length || v19 < v32 )
      {
        v16 = -1073741811;
        v17 = L"Provided trustlet path is too long.";
        v18 = 2164;
        goto LABEL_49;
      }
      *a1 = 1;
      v27.Buffer = (PWSTR)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v19);
      if ( !v27.Buffer )
      {
        v16 = -1073741670;
        v17 = L"Failed to allocate memory for trustlet path buffer.";
        v18 = 2178;
        goto LABEL_49;
      }
      v27.Length = 0;
      v27.MaximumLength = v19;
      v20 = RtlUnicodeStringCat(&v27, &SourceString_8);
      v7 = v20;
      if ( v20 >= 0 )
      {
        v20 = RtlUnicodeStringCatString(&v27, pszSrc);
        v7 = v20;
        if ( v20 >= 0 )
        {
          v7 = SmpExecuteCommand((__int64)&v27, 0, v23, 0, 0LL);
LABEL_44:
          if ( v27.Buffer )
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v27.Buffer);
          goto LABEL_50;
        }
        v21 = L"Failed to append registry data to trustlet path.";
        v22 = 2197;
      }
      else
      {
        v21 = L"Failed to add prefix to trustlet path.";
        v22 = 2189;
      }
      SmpLogFailureString((__int64)"SmpRunSecureKernelTrustlets", v22, (__int64)v21, v20);
      goto LABEL_44;
    }
LABEL_50:
    v24 = -1LL;
    do
      ++v24;
    while ( v14[v24] );
    v14 += v24 + 1;
  }
  while ( *v14 );
  if ( v2 )
    NtClose(v2);
LABEL_15:
  if ( Heap != (_WORD *)BaseAddress )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
LABEL_17:
  if ( NtPnpDeviceApiDriverHandle )
  {
    NtClose(NtPnpDeviceApiDriverHandle);
    NtPnpDeviceApiDriverHandle = 0LL;
  }
  return v7;
}
