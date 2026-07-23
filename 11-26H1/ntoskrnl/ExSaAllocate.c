/*
 * XREFs of ExSaAllocate @ 0x140492F00
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x140492E50 (ExpAllocateFannedOutPushLock.c)
 *     RtlpHpEnvTlsAlloc @ 0x14063C094 (RtlpHpEnvTlsAlloc.c)
 *     KiTraceCpuPartitionRundown @ 0x1407BE260 (KiTraceCpuPartitionRundown.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083699C (EtwpCovSampCaptureContextStart.c)
 *     KeInitializeProcess @ 0x140B58704 (KeInitializeProcess.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExpSaAllocatorAllocate @ 0x140492F8C (ExpSaAllocatorAllocate.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSaAllocate(int a1, unsigned int a2)
{
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax

  if ( (a2 & 0xFFFFFFFE) != 0 )
    KeBugCheckEx(0x16Du, a2, 0LL, 0LL, 0LL);
  Flink = ExSaPageGroupDescriptorArrayLock.Header.WaitListHead.Flink;
  if ( (a2 & 1) != 0 )
    Flink = ExSaPageGroupDescriptorArrayLock.Header.WaitListHead.Blink;
  v4 = -1LL;
  if ( Flink && (unsigned int)(a1 - 1) <= 0xFFF )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v4 = ExpSaAllocatorAllocate((struct _KTHREAD *)Flink);
    KeLeaveGuardedRegion();
  }
  return v4;
}
