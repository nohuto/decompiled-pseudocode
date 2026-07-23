/*
 * XREFs of PopQueryPowerSettingUlong @ 0x140B43720
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140C03500 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x1409FA3F0 (PopFindPowerSettingConfiguration.c)
 */

char __fastcall PopQueryPowerSettingUlong(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // di
  PVOID *PowerSettingConfiguration; // rax
  PVOID *v8; // r9
  _DWORD *v9; // rax
  _DWORD *v11; // rax

  v6 = 0;
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, -1);
  v8 = PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v9 = PowerSettingConfiguration[8];
    if ( v9 )
    {
      if ( v9[1] >= 4u )
      {
        *a2 = v9[3];
        v11 = v8[9];
        if ( v11 )
        {
          if ( v11[1] >= 4u )
          {
            v6 = 1;
            *a3 = v11[3];
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return v6;
}
