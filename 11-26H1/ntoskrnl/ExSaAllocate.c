/*
 * XREFs of ExSaAllocate @ 0x1404993B0
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x140499300 (ExpAllocateFannedOutPushLock.c)
 *     RtlpHpEnvTlsAlloc @ 0x140639084 (RtlpHpEnvTlsAlloc.c)
 *     KiTraceCpuPartitionRundown @ 0x1407BB200 (KiTraceCpuPartitionRundown.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083075C (EtwpCovSampCaptureContextStart.c)
 *     KeInitializeProcess @ 0x140963BE4 (KeInitializeProcess.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027DB10 (KeLeaveGuardedRegion.c)
 *     ExpSaAllocatorAllocate @ 0x14049943C (ExpSaAllocatorAllocate.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
