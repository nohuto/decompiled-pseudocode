/*
 * XREFs of PopQueryPowerSettingUlong @ 0x140B41710
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140BFD500 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x140A3E9D0 (PopFindPowerSettingConfiguration.c)
 */

char __fastcall PopQueryPowerSettingUlong(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  char v6; // di
  volatile unsigned int *PowerSettingConfiguration; // rax
  volatile unsigned int *v8; // r9
  __int64 v9; // rax
  __int64 v11; // rax

  v6 = 0;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, -1);
  v8 = PowerSettingConfiguration;
  if ( PowerSettingConfiguration )
  {
    v9 = *((_QWORD *)PowerSettingConfiguration + 8);
    if ( v9 )
    {
      if ( *(_DWORD *)(v9 + 4) >= 4u )
      {
        *a2 = *(_DWORD *)(v9 + 12);
        v11 = *((_QWORD *)v8 + 9);
        if ( v11 )
        {
          if ( *(_DWORD *)(v11 + 4) >= 4u )
          {
            v6 = 1;
            *a3 = *(_DWORD *)(v11 + 12);
          }
        }
      }
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&stru_140F11D08.LastXStateSaveDebugInfo);
  return v6;
}
