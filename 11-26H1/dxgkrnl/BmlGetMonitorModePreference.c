/*
 * XREFs of BmlGetMonitorModePreference @ 0x1402DF8B0
 * Callers:
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1402DF3E4 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 *     BmlFillPreferredMonitorMode @ 0x1402DF5D4 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ?DivideAndRound@@YA_K_K0@Z @ 0x1400542F0 (-DivideAndRound@@YA_K_K0@Z.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1402DF9F8 (BmlIsLowResAnalogTvOutput.c)
 *     BmlGetMonitorModeVSyncPreference @ 0x1402DFA24 (BmlGetMonitorModeVSyncPreference.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1402DFA9C (BmlIsEDIDCapableOutputTechonology.c)
 */

__int64 __fastcall BmlGetMonitorModePreference(__int64 a1, int a2, __int64 a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r9
  int v11; // edx
  __int64 v12; // r9
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  __int64 v18; // r9

  v3 = *(_DWORD *)(a1 + 84) - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( !v6 )
          return 5LL;
        if ( v6 == 1 )
        {
          if ( !(unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3) && *(_DWORD *)(v8 + 88) == 1 )
            return 11LL;
          if ( !(unsigned __int8)BmlIsLowResAnalogTvOutput(v7) )
            return BmlGetMonitorModeVSyncPreference(v9);
          if ( (unsigned int)DivideAndRound(*(unsigned int *)(v9 + 28), *(unsigned int *)(v9 + 32)) == 60 )
          {
            if ( *(_DWORD *)(v18 + 20) == 800 && *(_DWORD *)(v18 + 24) == 600 )
              return 4LL;
            return 3LL;
          }
          return 7LL;
        }
      }
      else
      {
        v15 = a2 - 1;
        if ( !v15 )
          return 9LL;
        v16 = v15 - 1;
        if ( !v16 )
          return 9LL;
        v17 = v16 - 1;
        if ( !v17 )
          return 9LL;
        if ( v17 == 1 )
          return 10LL;
      }
    }
    else
    {
      v11 = a2 - 1;
      if ( !v11 )
        return 6LL;
      v13 = v11 - 1;
      if ( !v13 )
        return 6LL;
      v14 = v13 - 1;
      if ( !v14 )
        return 6LL;
      if ( v14 == 1 )
        return 8LL;
    }
    return 0xFFFFFFFFLL;
  }
  if ( !(unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
    return BmlGetMonitorModeVSyncPreference(v9);
  if ( (unsigned int)DivideAndRound(*(unsigned int *)(v9 + 28), *(unsigned int *)(v9 + 32)) == 60 )
  {
    if ( *(_DWORD *)(v12 + 20) == 800 )
      return 4 - (unsigned int)(*(_DWORD *)(v12 + 24) != 600);
    return 3LL;
  }
  return 0LL;
}
