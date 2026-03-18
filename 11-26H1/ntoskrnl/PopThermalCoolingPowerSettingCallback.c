/*
 * XREFs of PopThermalCoolingPowerSettingCallback @ 0x140435E10
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x140B3F8C8 (PopThermalZoneUpdateCoolingPolicy.c)
 */

__int64 __fastcall PopThermalCoolingPowerSettingCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v6; // r9
  int v7; // eax

  PopAcquireRwLockExclusive(&unk_140F10DB0);
  v6 = *(_QWORD *)&GUID_SYSTEM_COOLING_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_SYSTEM_COOLING_POLICY.Data1 == *a1 )
    v6 = *(_QWORD *)GUID_SYSTEM_COOLING_POLICY.Data4 - a1[1];
  if ( !v6 && a3 == 4 )
    dword_140F10708 = *a2;
  if ( !*(_DWORD *)&stru_140E66FF0.WaitBlockFill11[80]
    || !stru_140E66FF0.WaitBlockFill6[84]
    || (v7 = 1, PopConsoleDisplayState) )
  {
    v7 = dword_140F10708;
  }
  if ( v7 != dword_140E67608 )
  {
    dword_140E67608 = v7;
    PopThermalZoneUpdateCoolingPolicy();
  }
  PopReleaseRwLock((struct _KTHREAD *)&unk_140F10DB0);
  return 0LL;
}
