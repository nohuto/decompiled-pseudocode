/*
 * XREFs of PopInitializePowerSettings @ 0x140CD7644
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

const WNF_STATE_NAME *PopInitializePowerSettings()
{
  _QWORD *v0; // rax
  __int64 v1; // rdx
  char *v2; // rcx
  const WNF_STATE_NAME *result; // rax

  v0 = &PopSessionSpecificLists;
  v1 = 2LL;
  v2 = (char *)&PopSessionSpecificLists;
  do
  {
    v0[1] = v2;
    *v0 = v2;
    v2 += 16;
    v0 += 2;
    --v1;
  }
  while ( v1 );
  PopSettingLock.Count = 1;
  PopPendingPowerSettingUpdateLock = 0LL;
  PopSettingLock.Event.Header.WaitListHead.Blink = &PopSettingLock.Event.Header.WaitListHead;
  PopSettingLock.Event.Header.WaitListHead.Flink = &PopSettingLock.Event.Header.WaitListHead;
  qword_140F0FFC8 = (__int64)&PopRegisteredPowerSettingCallbacks;
  PopRegisteredPowerSettingCallbacks = (__int64)&PopRegisteredPowerSettingCallbacks;
  qword_140F0FFD8 = (__int64)&PopPowerSettings;
  PopPowerSettings = &PopPowerSettings;
  result = &WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE;
  PopPrimaryDisplayVisibleStateErratum = (__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE;
  PopSettingLock.Owner = 0LL;
  PopSettingLock.Contention = 0;
  LOWORD(PopSettingLock.Event.Header.Lock) = 1;
  PopSettingLock.Event.Header.Size = 6;
  PopSettingLock.Event.Header.SignalState = 0;
  xmmword_140F12288 = 0LL;
  qword_140F12298 = 0LL;
  return result;
}
