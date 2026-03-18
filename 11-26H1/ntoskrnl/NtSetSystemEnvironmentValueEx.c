/*
 * XREFs of NtSetSystemEnvironmentValueEx @ 0x14083EAA0
 * Callers:
 *     DifNtSetSystemEnvironmentValueExWrapper @ 0x14068D780 (DifNtSetSystemEnvironmentValueExWrapper.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     _wcsnicmp @ 0x1405366B0 (_wcsnicmp.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memcmp @ 0x14073D750 (memcmp.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x14083AE70 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14083CB1C (ExpSetFirmwareEnvironmentVariable.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PsIsProcessAppContainer @ 0x1409D6220 (PsIsProcessAppContainer.c)
 *     ExpFirmwareAccessAppContainerCheck @ 0x140B46CC8 (ExpFirmwareAccessAppContainerCheck.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetSystemEnvironmentValueEx(
        unsigned int *a1,
        volatile void *a2,
        volatile void *a3,
        int a4,
        int a5)
{
  unsigned __int16 ULongFromUser; // di
  volatile void *ULong64FromUser; // rax
  size_t v12; // r14
  unsigned int v13; // r15d
  BOOLEAN v14; // bl
  _WORD *Pool2; // rax
  _WORD *v16; // rdi
  unsigned int v17; // ebx
  void *Src_8; // [rsp+48h] [rbp-80h]
  __int128 Buf1; // [rsp+70h] [rbp-58h] BYREF

  Buf1 = 0LL;
  if ( *(_DWORD *)&ExpSysDbgLock.SchedulerApcFill5[64] != 2 || PsIsCurrentThreadInServerSilo() )
    return 3221225474LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return ExSetFirmwareEnvironmentVariable((__int64)a1, (int)a2, (__int64)a3, a4, a5);
  if ( ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ULongFromUser = RtlReadULongFromUser(a1);
  ULong64FromUser = (volatile void *)RtlReadULong64FromUser(a1 + 2);
  Src_8 = (void *)ULong64FromUser;
  if ( !ULongFromUser )
    return 3221225477LL;
  v12 = ULongFromUser;
  ProbeForRead(ULong64FromUser, ULongFromUser, 2u);
  ProbeForRead(a2, 1uLL, 4u);
  v13 = a3 != 0LL ? a4 : 0;
  if ( v13 )
    ProbeForRead(a3, v13, 1u);
  v14 = SeSinglePrivilegeCheck(SeSystemEnvironmentPrivilege, 1);
  if ( !v14 )
  {
    if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      v14 = ExpFirmwareAccessAppContainerCheck(2LL);
    if ( !v14 )
      return 3221225569LL;
  }
  RtlCopyFromUser(&Buf1, (void *)a2, 0x10uLL);
  Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
  v16 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  RtlCopyFromUser(Pool2, Src_8, v12);
  v16[v12 >> 1] = 0;
  if ( memcmp(&Buf1, ExpSecureBootVendorGuid, 0x10uLL) || wcsnicmp(v16, L"Kernel_", 7uLL) )
  {
    v17 = ExpSetFirmwareEnvironmentVariable((int)v16, (int)&Buf1, (__int64)a3, v13, a5, 1);
    ExFreePoolWithTag(v16, 0);
    return v17;
  }
  else
  {
    ExFreePoolWithTag(v16, 0);
    return 3221225506LL;
  }
}
