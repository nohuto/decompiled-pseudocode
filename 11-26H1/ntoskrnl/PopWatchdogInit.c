/*
 * XREFs of PopWatchdogInit @ 0x140CD5E24
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14024D7A0 (KeRegisterBugCheckReasonCallback.c)
 *     KeInitializeTriageDumpDataArray @ 0x1404F12A0 (KeInitializeTriageDumpDataArray.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

char __fastcall PopWatchdogInit(__int64 a1, __int64 a2, __int64 a3, struct _SINGLE_LIST_ENTRY *a4)
{
  NTSTATUS v4; // eax

  PopModernStandbyStateNotify.SuspendEvent.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&PopModernStandbyStateNotify.SuspendEvent;
  *(_QWORD *)&PopModernStandbyStateNotify.SuspendEvent.Header.Lock = &PopModernStandbyStateNotify.SuspendEvent;
  PopModernStandbyStateNotify.SchedulerApc.SystemArgument2 = 0LL;
  PopAcquirePolicyLock(a1, a2, a3, a4);
  *(_QWORD *)&qword_140F0FCD0.Header.Lock = 8LL;
  qword_140F0FCE0 = (__int64)&qword_140F0FCD8;
  qword_140F0FCD8 = (__int64)&qword_140F0FCD8;
  qword_140F0FCA8 = (__int64)PopPowerActionWatchdog;
  unk_140F10EF8 = 0LL;
  qword_140F0FC88 = 0LL;
  qword_140F0FCE8 = 0LL;
  dword_140F0FD0C = 0;
  word_140F0FD08 = 0;
  byte_140F0FD0B = 0;
  dword_140F0FC90 = 275;
  qword_140F0FCB0 = 0LL;
  qword_140F0FCC8 = 0LL;
  qword_140F0FCA0 = 0LL;
  byte_140F0FD10 = 1;
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
