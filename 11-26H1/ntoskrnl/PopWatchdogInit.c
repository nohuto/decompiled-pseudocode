/*
 * XREFs of PopWatchdogInit @ 0x140CDC178
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024F100 (KeRegisterBugCheckReasonCallback.c)
 *     KeInitializeTriageDumpDataArray @ 0x1404EA880 (KeInitializeTriageDumpDataArray.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

char __fastcall PopWatchdogInit(__int64 a1, __int64 a2, __int64 a3, struct _SINGLE_LIST_ENTRY *a4)
{
  NTSTATUS v4; // eax

  qword_140F0C4E8 = (__int64)&PopWatchdogList;
  PopWatchdogList = (__int64)&PopWatchdogList;
  PopWatchdogLock = 0LL;
  PopAcquirePolicyLock(a1, a2, a3, a4);
  *(_QWORD *)&stru_140F10590.Header.Lock = 8LL;
  stru_140F10590.Header.WaitListHead.Blink = &stru_140F10590.Header.WaitListHead;
  stru_140F10590.Header.WaitListHead.Flink = &stru_140F10590.Header.WaitListHead;
  qword_140F10568 = (__int64)PopPowerActionWatchdog;
  qword_140F10278 = 0LL;
  qword_140F10548 = 0LL;
  stru_140F10590.DueTime.QuadPart = 0LL;
  stru_140F10590.Period = 0;
  stru_140F10590.Processor = 0;
  stru_140F10590.TimerDifObjTracking = 0;
  dword_140F10550 = 275;
  qword_140F10570 = 0LL;
  qword_140F10588 = 0LL;
  qword_140F10560 = 0LL;
  byte_140F105D0 = 1;
  PopReleasePolicyLock();
  stru_140E01D38.State = 0;
  v4 = KeInitializeTriageDumpDataArray(&KtriageDumpDataArray, 0x40u);
  if ( v4 >= 0 )
  {
    LOBYTE(v4) = KeRegisterBugCheckReasonCallback(
                   &stru_140E01D38,
                   CallbackRoutine,
                   KbCallbackTriageDumpData,
                   off_140E01D30);
    if ( (_BYTE)v4 )
      PopWatchdogDumpControlContext = 1;
  }
  return v4;
}
