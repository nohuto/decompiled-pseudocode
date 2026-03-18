/*
 * XREFs of PopInitilizeAcDcSettings @ 0x140438218
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140946EB0 (PopBatteryApplyCompositeState.c)
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PopSetNotificationWork @ 0x1404385A0 (PopSetNotificationWork.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x140A3E9D0 (PopFindPowerSettingConfiguration.c)
 */

void PopInitilizeAcDcSettings()
{
  char v0; // bl
  _DWORD *PowerSettingConfiguration; // rax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v0 = 0;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL, 0LL, 4LL, &v2);
  v2 = 1;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL, 1LL, 4LL, &v2);
  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  PowerSettingConfiguration = (_DWORD *)PopFindPowerSettingConfiguration(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL);
  if ( PowerSettingConfiguration[14] || PowerSettingConfiguration[15] )
  {
    PowerSettingConfiguration[13] |= 1u;
    v0 = 1;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  if ( HIDWORD(stru_140F10070.Spare35[0]) >= 3 )
  {
    if ( v0 )
      PopSetNotificationWork(128LL);
    PopSetNotificationWork(32LL);
  }
}
