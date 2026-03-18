/*
 * XREFs of EtwpCovSampTryAcquireBufferLock @ 0x1402BFE94
 * Callers:
 *     EtwpCovSampCaptureBufferQueue @ 0x1402BFCD0 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureFlushSampleBuffers @ 0x1405250F8 (EtwpCovSampCaptureFlushSampleBuffers.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     KxTryToAcquireSpinLock @ 0x140330C68 (KxTryToAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall EtwpCovSampTryAcquireBufferLock(volatile signed __int32 *a1, unsigned __int8 *a2)
{
  unsigned __int8 CurrentIrql; // al
  __int64 v4; // rcx

  CurrentIrql = KeGetCurrentIrql();
  *a2 = CurrentIrql;
  if ( CurrentIrql && CurrentIrql != 1 )
  {
    if ( CurrentIrql != 2 )
      return (unsigned __int8)KxTryToAcquireSpinLock();
  }
  else
  {
    v4 = KeGetCurrentIrql();
    if ( (_BYTE)v4 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v4, 2LL);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    if ( _interlockedbittestandset64(a1, 0LL) )
      KxWaitForSpinLockAndAcquire(a1);
  }
  else
  {
    KiAcquireSpinLockInstrumented(a1);
  }
  return 1LL;
}
