/*
 * XREFs of ExLockUserBuffer @ 0x140907E40
 * Callers:
 *     ExpGetLookasideInformation @ 0x1406C9D20 (ExpGetLookasideInformation.c)
 *     ExpGetObjectInformation @ 0x1407744F4 (ExpGetObjectInformation.c)
 *     ExpGetLockInformation @ 0x140775318 (ExpGetLockInformation.c)
 *     KdSystemDebugControl @ 0x14077D2F0 (KdSystemDebugControl.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14083CB1C (ExpSetFirmwareEnvironmentVariable.c)
 *     NtEnumerateDriverEntries @ 0x14083D430 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x14083D8B0 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtQueryDriverEntryOrder @ 0x14083DB70 (NtQueryDriverEntryOrder.c)
 *     NtSystemDebugControl @ 0x1408459A0 (NtSystemDebugControl.c)
 *     MiCopyLargeVad @ 0x14087FE1C (MiCopyLargeVad.c)
 *     ExpGetHandleInformationEx @ 0x140906AA4 (ExpGetHandleInformationEx.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140907320 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetHandleInformation @ 0x140907690 (ExpGetHandleInformation.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140907D64 (ExpGetFirmwareEnvironmentVariable.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093E008 (EtwQueryPerformanceTraceInformation.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     NtEnumerateBootEntries @ 0x140A94460 (NtEnumerateBootEntries.c)
 *     NtQueryBootEntryOrder @ 0x140B34660 (NtQueryBootEntryOrder.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPagesEx @ 0x14039FAC0 (MmProbeAndLockPagesEx.c)
 *     ExUnlockUserBuffer @ 0x14040FE00 (ExUnlockUserBuffer.c)
 *     MmSizeOfMdl @ 0x140488370 (MmSizeOfMdl.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExLockUserBuffer(
        unsigned __int64 a1,
        unsigned int a2,
        char a3,
        char a4,
        _QWORD *a5,
        struct _MDL **a6)
{
  __int64 v9; // r15
  __int64 Pool2; // rax
  struct _MDL *v12; // rbx
  int v13; // ebp
  PVOID MappedSystemVa; // rax

  v9 = a2;
  *a5 = 0LL;
  *a6 = 0LL;
  MmSizeOfMdl((PVOID)a1, a2);
  Pool2 = ExAllocatePool2(0x41uLL);
  v12 = (struct _MDL *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    *(_DWORD *)(Pool2 + 40) = a2;
    *(_QWORD *)(Pool2 + 32) = a1 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(Pool2 + 44) = a1 & 0xFFF;
    *(_WORD *)(Pool2 + 8) = 8 * (((v9 + 4095 + (a1 & 0xFFF)) >> 12) + 6);
    *(_WORD *)(Pool2 + 10) = 0;
    v13 = MmProbeAndLockPagesEx(Pool2, a3 & 1 | (2LL * (a4 & 3)));
    if ( v13 < 0 )
    {
      ExFreePoolWithTag(v12, 0);
      return (unsigned int)v13;
    }
    v12->MdlFlags |= 0x2000u;
    if ( (v12->MdlFlags & 5) != 0 )
      MappedSystemVa = v12->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v12, 0, MmCached, 0LL, 0, 0x40000020u);
    *a5 = MappedSystemVa;
    if ( MappedSystemVa )
    {
      *a6 = v12;
      return 0LL;
    }
    ExUnlockUserBuffer(v12);
  }
  return 3221225626LL;
}
