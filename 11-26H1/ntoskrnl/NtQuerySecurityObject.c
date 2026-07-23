/*
 * XREFs of NtQuerySecurityObject @ 0x140A99610
 * Callers:
 *     DifNtQuerySecurityObjectWrapper @ 0x1406890E0 (DifNtQuerySecurityObjectWrapper.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140A992E0 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  KPROCESSOR_MODE PreviousMode; // bl
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  ACCESS_MASK v13; // edx
  NTSTATUS result; // eax
  PVOID v15; // rdi
  NTSTATUS v16; // esi
  int ULongFromUser; // eax
  PVOID Object; // [rsp+58h] [rbp-20h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-18h] BYREF

  HandleInformation = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULongFromUser = RtlReadULongFromUser(LengthNeeded);
    RtlWriteULongToUser(LengthNeeded, ULongFromUser);
    ProbeForWrite(SecurityDescriptor, Length, 4u);
  }
  v8 = ((SecurityInformation & 0x10000) != 0 ? 0x1000000 : 0) | 0x20000;
  if ( (SecurityInformation & 0x17) == 0 )
    v8 = (SecurityInformation & 0x10000) != 0 ? 0x1020000 : 0;
  v9 = v8 | 0x20000;
  if ( (SecurityInformation & 0x20) == 0 )
    v9 = v8;
  v10 = v9 | 0x20000;
  if ( (SecurityInformation & 0x40) == 0 )
    v10 = v9;
  v11 = v10 | 0x20000;
  if ( (SecurityInformation & 0x80u) == 0 )
    v11 = v10;
  v12 = v11 | 0x20000;
  if ( (SecurityInformation & 0x100) == 0 )
    v12 = v11;
  Object = 0LL;
  v13 = v12 | 0x1000000;
  if ( (SecurityInformation & 8) == 0 )
    v13 = v12;
  result = ObReferenceObjectByHandle(Handle, v13, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( result >= 0 )
  {
    v15 = Object;
    v16 = guard_dispatch_icall_no_overrides((__int64)Object, 1LL);
    if ( PreviousMode )
      RtlWriteULongToUser(LengthNeeded, Length);
    else
      *LengthNeeded = Length;
    ObfDereferenceObject(v15);
    return v16;
  }
  return result;
}
