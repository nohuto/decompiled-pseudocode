/*
 * XREFs of KxFlushNonGlobalTb @ 0x140252950
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x1402516EC (MiFlushEntireTbDueToAttributeChange.c)
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 * Callees:
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140230FF0 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxSetTimeStampBusy @ 0x140252AF4 (KxSetTimeStampBusy.c)
 *     KiIpiWaitForRequestBarrier @ 0x140252F00 (KiIpiWaitForRequestBarrier.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiIpiSendRequestEx @ 0x14032BD90 (KiIpiSendRequestEx.c)
 *     KiIpiSendRequest @ 0x14032BF00 (KiIpiSendRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KxFlushNonGlobalTb(__int64 a1)
{
  int v1; // ebx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rsi
  struct _KAFFINITY_EX *ActiveProcessors; // rbx
  unsigned int v6; // r8d
  int v7; // r11d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 result; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 12LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !v1 )
  {
    _InterlockedOr(v11, 0);
    p_StaticAffinity = &CurrentPrcb->StaticAffinity;
    ActiveProcessors = (struct _KAFFINITY_EX *)CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors;
    *(_QWORD *)&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
    memset_0(&CurrentPrcb->StaticAffinity.KeRcuAffinity.8, 0, sizeof(CurrentPrcb->StaticAffinity.KeRcuAffinity.8));
    RtlpCopyAffinityEx(
      &CurrentPrcb->StaticAffinity.KeFlushTbAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      ActiveProcessors);
    v6 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + CurrentPrcb->Number);
    if ( CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count > v6 >> 6 )
      p_StaticAffinity->KeFlushTbAffinity.Bitmap[v6 >> 6] &= ~(1LL << (v6 & 0x3F));
    if ( !(unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                          (__int64)CurrentPrcb,
                          &CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count) )
      goto LABEL_9;
LABEL_14:
    KiIpiSendRequest((_DWORD)CurrentPrcb, v7, (_DWORD)p_StaticAffinity, 0, 1LL);
    v9 = __readcr3();
    __writecr3(v9);
    KiIpiWaitForRequestBarrier(CurrentPrcb);
    goto LABEL_15;
  }
  LODWORD(p_StaticAffinity) = 0;
  v7 = 1;
  if ( !KiKvaShadow )
  {
    if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    {
LABEL_9:
      v8 = __readcr3();
      __writecr3(v8);
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
  {
    KiIpiSendRequestEx((_DWORD)CurrentPrcb, 1, 0, 0, 1LL, (__int64)KiFlushProcessTbWorker, 0LL);
    _InterlockedAdd(&KiTbFlushTimeStamp, 1u);
  }
LABEL_15:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
