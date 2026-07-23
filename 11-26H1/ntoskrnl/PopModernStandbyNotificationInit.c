/*
 * XREFs of PopModernStandbyNotificationInit @ 0x140CDC888
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PoRegisterPowerSettingCallback @ 0x140B080C0 (PoRegisterPowerSettingCallback.c)
 *     PoUnregisterPowerSettingCallback @ 0x140B1B9C0 (PoUnregisterPowerSettingCallback.c)
 */

__int64 __fastcall PopModernStandbyNotificationInit(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  qword_140F0C208 = 0LL;
  PopModernStandbyStateNotify = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify, a2, a3, a4);
  if ( PoRegisterPowerSettingCallback(
         0LL,
         &GUID_GLOBAL_USER_PRESENCE,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F0C220) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_CONSOLE_DISPLAY_STATE,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F0C228) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_LOW_POWER_EPOCH,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F0C230) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F0C238) < 0 )
  {
    if ( qword_140F0C238 )
    {
      PoUnregisterPowerSettingCallback(qword_140F0C238);
      qword_140F0C238 = 0LL;
    }
    if ( qword_140F0C230 )
    {
      PoUnregisterPowerSettingCallback(qword_140F0C230);
      qword_140F0C230 = 0LL;
    }
    if ( qword_140F0C228 )
    {
      PoUnregisterPowerSettingCallback(qword_140F0C228);
      qword_140F0C228 = 0LL;
    }
    if ( qword_140F0C220 )
    {
      PoUnregisterPowerSettingCallback(qword_140F0C220);
      qword_140F0C220 = 0LL;
    }
  }
  return PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify);
}
