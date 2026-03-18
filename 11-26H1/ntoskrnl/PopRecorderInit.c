/*
 * XREFs of PopRecorderInit @ 0x140CD52A4
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024D7A0 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN PopRecorderInit()
{
  unsigned __int64 i; // rbx
  UCHAR *v1; // r9
  BOOLEAN result; // al

  PopModernStandbyStateNotify.SchedulerAssist = 0LL;
  PopModernStandbyStateNotify.AbWaitObject = 0LL;
  for ( i = 0LL; i < 0x9C0; i += 104LL )
  {
    v1 = *(UCHAR **)((char *)&PopBlackBoxEntries + i + 8);
    *((_BYTE *)&PopBlackBoxEntries + i + 68) = 0;
    result = KeRegisterBugCheckReasonCallback(
               (PKBUGCHECK_REASON_CALLBACK_RECORD)((char *)&unk_140E076D8 + i),
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PopBlackBoxBugcheckCallback,
               KbCallbackSecondaryDumpData,
               v1);
  }
  return result;
}
