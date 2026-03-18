/*
 * XREFs of PspLockProcessShared @ 0x140276700
 * Callers:
 *     PspAssignPrimaryToken @ 0x140773B18 (PspAssignPrimaryToken.c)
 *     PspApplyCoreIsolationPolicy @ 0x140776AFC (PspApplyCoreIsolationPolicy.c)
 *     PsSwapProcessWorkingSet @ 0x1407F0C88 (PsSwapProcessWorkingSet.c)
 *     DbgkForwardException @ 0x1409535F0 (DbgkForwardException.c)
 *     PspGetPreviousProcessThread @ 0x1409572D8 (PspGetPreviousProcessThread.c)
 *     PspInheritSyscallProvider @ 0x140984984 (PspInheritSyscallProvider.c)
 *     PspChargeProcessWakeCounter @ 0x1409BE2C0 (PspChargeProcessWakeCounter.c)
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 *     NtSetInformationThread @ 0x140A833F0 (NtSetInformationThread.c)
 *     PsCaptureExceptionPort @ 0x140A9F91C (PsCaptureExceptionPort.c)
 *     PspAssignCpuPartitionsToProcessByHandle @ 0x140B6E144 (PspAssignCpuPartitionsToProcessByHandle.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 */

__int64 __fastcall PspLockProcessShared(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax

  --*(_WORD *)(a2 + 484);
  v2 = (volatile signed __int64 *)(a1 + 456);
  v3 = KeAbPreAcquire((struct _KTHREAD *)(a1 + 456), 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(v2, 0LL, v3, v2);
  if ( v3 )
  {
    result = KiAbpGlobalState;
    if ( (KiAbpGlobalState & 1) != 0 )
      *(_BYTE *)(v3 + 33) |= 2u;
    else
      *(_BYTE *)(v3 + 10) = 1;
  }
  return result;
}
