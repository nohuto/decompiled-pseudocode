/*
 * XREFs of DlrmRecordPciGenerationTime @ 0x14012D358
 * Callers:
 *     DlrmHandlePowerStateAction @ 0x14012D0B4 (DlrmHandlePowerStateAction.c)
 *     DlrmHandleScaleAction @ 0x14012D1A8 (DlrmHandleScaleAction.c)
 *     StorAdapterDlrmSystemThread @ 0x14012DE30 (StorAdapterDlrmSystemThread.c)
 * Callees:
 *     <none>
 */

void __fastcall DlrmRecordPciGenerationTime(__int64 a1, int a2)
{
  __int64 v2; // rdi
  ULONGLONG UnbiasedInterruptTime; // rax
  ULONGLONG *v5; // r9

  if ( a1 )
  {
    v2 = a2;
    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
    v5 = (ULONGLONG *)(a1 + 168);
    if ( (unsigned int)v2 <= 5 )
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 8 * v2 + 176), UnbiasedInterruptTime - *v5);
    *v5 = UnbiasedInterruptTime;
  }
}
