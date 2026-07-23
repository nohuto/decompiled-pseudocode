/*
 * XREFs of NtSetSystemEnvironmentValueEx @ 0x140844CE0
 * Callers:
 *     DifNtSetSystemEnvironmentValueExWrapper @ 0x140691360 (DifNtSetSystemEnvironmentValueExWrapper.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1408410B0 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x140842D5C (ExpSetFirmwareEnvironmentVariable.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x1409A7110 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B48CF8 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        ULONG ValueLength,
        ULONG Attributes)
{
  unsigned __int16 ULongFromUser; // di
  volatile void *ULong64FromUser; // rax
  size_t v12; // r14
  unsigned int v13; // r15d
  BOOLEAN v14; // bl
  _WORD *Pool2; // rax
  _WORD *v16; // rdi
  NTSTATUS v17; // ebx
  void *Src_8; // [rsp+48h] [rbp-80h]
  __int128 Buf1; // [rsp+70h] [rbp-58h] BYREF

  Buf1 = 0LL;
  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 || PsIsCurrentThreadInServerSilo() )
    return -1073741822;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExSetFirmwareEnvironmentVariable(
             (__int64)VariableName,
             (int)VendorGuid,
             (__int64)Value,
             ValueLength,
             Attributes);
  if ( ((unsigned __int8)VariableName & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ULongFromUser = RtlReadULongFromUser((unsigned int *)&VariableName->Length);
  ULong64FromUser = (volatile void *)RtlReadULong64FromUser(&VariableName->Buffer);
  Src_8 = (void *)ULong64FromUser;
  if ( !ULongFromUser )
    return -1073741819;
  v12 = ULongFromUser;
  ProbeForRead(ULong64FromUser, ULongFromUser, 2u);
  ProbeForRead((volatile void *)VendorGuid, 1uLL, 4u);
  v13 = Value != 0LL ? ValueLength : 0;
  if ( v13 )
    ProbeForRead(Value, v13, 1u);
  v14 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( !v14 )
  {
    if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      v14 = ExpFirmwareAccessAppContainerCheck(2LL);
    if ( !v14 )
      return -1073741727;
  }
  RtlCopyFromUser(&Buf1, (void *)VendorGuid, 0x10uLL);
  Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
  v16 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  RtlCopyFromUser(Pool2, Src_8, v12);
  v16[v12 >> 1] = 0;
  if ( memcmp(&Buf1, ExpSecureBootVendorGuid, 0x10uLL) || wcsnicmp(v16, L"Kernel_", 7uLL) )
  {
    v17 = ExpSetFirmwareEnvironmentVariable((int)v16, (int)&Buf1, (__int64)Value, v13, Attributes, 1);
    ExFreePoolWithTag(v16, 0);
    return v17;
  }
  else
  {
    ExFreePoolWithTag(v16, 0);
    return -1073741790;
  }
}
