/*
 * XREFs of PopBSDiagInitialize @ 0x140CD5F20
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024D7A0 (KeRegisterBugCheckReasonCallback.c)
 *     PopBSDiagSetTriageData @ 0x1407DC970 (PopBSDiagSetTriageData.c)
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 */

__int64 __fastcall PopBSDiagInitialize(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KLOCK_ENTRIES *v4; // r9
  struct _KLOCK_ENTRIES *v5; // r9

  *(_OWORD *)&PopModernStandbyStateNotify.RelativeTimerBias = 0LL;
  PopModernStandbyStateNotify.RelativeTimerBias = 0LL;
  PopBSDiagSetTriageData(3, (struct _LIST_ENTRY *)&byte_140F0FB60, 480LL, a4);
  PopBSDiagSetTriageData(0, (struct _LIST_ENTRY *)&PopModernStandbyStateNotify.WaitBlockFill11[160], 12LL, v4);
  PopBSDiagSetTriageData(10, (struct _LIST_ENTRY *)&PopModernStandbyStateNotify.WaitBlockFill11[128], 32LL, v5);
  BYTE4(PopModernStandbyStateNotify.Queue) = 0;
  KeRegisterBugCheckReasonCallback(
    (PKBUGCHECK_REASON_CALLBACK_RECORD)&PopModernStandbyStateNotify.ApcStateFill[40],
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PopBSDiagBugcheckCallback,
    KbCallbackTriageDumpData,
    (PUCHAR)"POP_BLACK_SCREEN_DIAGNOSTICS");
  return ExSubscribeWnfStateChange((__int64)&PopModernStandbyStateNotify.Teb, (__int64)&WNF_PO_POWER_BUTTON_STATE);
}
