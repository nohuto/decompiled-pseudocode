/*
 * XREFs of PopRecorderInit @ 0x140CDB644
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 */

BOOLEAN PopRecorderInit()
{
  unsigned __int64 i; // rbx
  UCHAR *v1; // r9
  BOOLEAN result; // al

  PopPdcDeviceListLock.ApcState.ApcListHead[0] = 0uLL;
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
