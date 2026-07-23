/*
 * XREFs of PopBSDiagInitialize @ 0x140CDC274
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     PopBSDiagSetTriageData @ 0x1407E0B90 (PopBSDiagSetTriageData.c)
 *     ExSubscribeWnfStateChange @ 0x1409C4400 (ExSubscribeWnfStateChange.c)
 */

__int64 __fastcall PopBSDiagInitialize(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KLOCK_ENTRIES *v4; // r9
  struct _KLOCK_ENTRIES *v5; // r9

  xmmword_140F0C2F8 = 0LL;
  *(_QWORD *)&xmmword_140F0C2F8 = 0LL;
  PopBSDiagSetTriageData(3, (__int64)&PopAction, 480LL, a4);
  PopBSDiagSetTriageData(0, (__int64)&unk_140F0C3E0, 12LL, v4);
  PopBSDiagSetTriageData(10, (__int64)qword_140F0C3C0, 32LL, v5);
  PopBlackScreenDiagContext.State = 0;
  KeRegisterBugCheckReasonCallback(
    &PopBlackScreenDiagContext,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PopBSDiagBugcheckCallback,
    KbCallbackTriageDumpData,
    (PUCHAR)"POP_BLACK_SCREEN_DIAGNOSTICS");
  return ExSubscribeWnfStateChange((__int64)&unk_140F0C2F0, (__int64)&WNF_PO_POWER_BUTTON_STATE);
}
