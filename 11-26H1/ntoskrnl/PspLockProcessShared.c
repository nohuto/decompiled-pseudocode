/*
 * XREFs of PspLockProcessShared @ 0x140275C70
 * Callers:
 *     PspAssignPrimaryToken @ 0x140776B18 (PspAssignPrimaryToken.c)
 *     PspApplyCoreIsolationPolicy @ 0x1407799A4 (PspApplyCoreIsolationPolicy.c)
 *     PsSwapProcessWorkingSet @ 0x1407F67E8 (PsSwapProcessWorkingSet.c)
 *     PspInheritSyscallProvider @ 0x140946994 (PspInheritSyscallProvider.c)
 *     PspGetPreviousProcessThread @ 0x14094AD00 (PspGetPreviousProcessThread.c)
 *     NtSetInformationThread @ 0x14094C4F0 (NtSetInformationThread.c)
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 *     DbgkForwardException @ 0x1409CEF30 (DbgkForwardException.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 *     PsCaptureExceptionPort @ 0x140A9FC4C (PsCaptureExceptionPort.c)
 *     PspAssignCpuPartitionsToProcessByHandle @ 0x140B715F4 (PspAssignCpuPartitionsToProcessByHandle.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
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
