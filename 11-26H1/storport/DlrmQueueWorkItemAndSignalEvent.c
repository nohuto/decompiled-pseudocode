/*
 * XREFs of DlrmQueueWorkItemAndSignalEvent @ 0x14007DCF0
 * Callers:
 *     DlrmCheckAndScheduleScaleDown @ 0x14012CD88 (DlrmCheckAndScheduleScaleDown.c)
 *     DlrmCheckAndScheduleScaleUp @ 0x14012CE6C (DlrmCheckAndScheduleScaleUp.c)
 *     DlrmEffectivePowerModeCallback @ 0x14012CFB0 (DlrmEffectivePowerModeCallback.c)
 *     DlrmProcessReadWriteRequest @ 0x14012D264 (DlrmProcessReadWriteRequest.c)
 *     StorProcessDripsCallbackForDlrm @ 0x14012ECF0 (StorProcessDripsCallbackForDlrm.c)
 * Callees:
 *     <none>
 */

LONG __fastcall DlrmQueueWorkItemAndSignalEvent(__int64 a1, struct _LIST_ENTRY *a2)
{
  LONG result; // eax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      ExInterlockedInsertTailList((PLIST_ENTRY)(a1 + 144), a2, (PKSPIN_LOCK)(a1 + 160));
      _InterlockedOr(v4, 0);
      return KeSetEvent((PRKEVENT)(a1 + 88), 0, 0);
    }
  }
  return result;
}
