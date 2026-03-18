/*
 * XREFs of KxFlushNonGlobalTb @ 0x140250FF0
 * Callers:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14024FD8C (MiFlushEntireTbDueToAttributeChange.c)
 *     MiIssueFlushTbEntire @ 0x140250040 (MiIssueFlushTbEntire.c)
 *     KeFlushTb @ 0x1402507D0 (KeFlushTb.c)
 * Callees:
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x14022F660 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxSetTimeStampBusy @ 0x140251194 (KxSetTimeStampBusy.c)
 *     KiIpiWaitForRequestBarrier @ 0x1402515A0 (KiIpiWaitForRequestBarrier.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1402518B0 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiIpiSendRequestEx @ 0x140329D60 (KiIpiSendRequestEx.c)
 *     KiIpiSendRequest @ 0x140329ED0 (KiIpiSendRequest.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
    v6 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * CurrentPrcb->Number);
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
