/*
 * XREFs of ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1402DF3E4
 * Callers:
 *     BmlCompareTargetModesWithMonitor @ 0x1402DE108 (BmlCompareTargetModesWithMonitor.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x14004B4D4 (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?MonitorGetNextMonitorSourceMode@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE@@@Z @ 0x1402CC598 (-MonitorGetNextMonitorSourceMode@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEB.c)
 *     BmlGetMonitorModePreference @ 0x1402DF8B0 (BmlGetMonitorModePreference.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1402DFA9C (BmlIsEDIDCapableOutputTechonology.c)
 */

__int64 __fastcall BmlGetTargetModePreferenceOnMonitor(__int64 a1, char a2, __int64 a3)
{
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v3; // rbx
  __int64 v6; // r11
  int v7; // esi
  int v8; // r13d
  unsigned int v9; // r12d
  unsigned int v10; // r15d
  char v11; // r14
  struct HDXGMONITOR__ *v12; // rcx
  int NextMonitorSourceMode; // eax
  int MonitorModePreference; // eax
  int v15; // r10d
  char v16; // dl
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v22; // [rsp+20h] [rbp-48h]
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v23; // [rsp+28h] [rbp-40h] BYREF
  char v25; // [rsp+80h] [rbp+18h]
  _D3DKMDT_MONITOR_TIMING_TYPE v26; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( !*(_QWORD *)(a3 + 112) )
    return 0xFFFFFFFFLL;
  v23 = 0LL;
  v6 = 0LL;
  v26 = D3DKMDT_MTT_UNINITIALIZED;
  v7 = -1;
  v8 = 0;
  v25 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    v12 = *(struct HDXGMONITOR__ **)(a3 + 112);
    if ( !v12 )
    {
      NextMonitorSourceMode = -1071774920;
LABEL_32:
      WdLogSingleEntry3(2LL, v3, *(_QWORD *)(a3 + 112), NextMonitorSourceMode);
      WdLogGlobalForLineNumber = 856;
      return 0xFFFFFFFFLL;
    }
    NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(
                              v12,
                              (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v6,
                              (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v23,
                              &v26);
    if ( NextMonitorSourceMode == 1075708748 )
      break;
    if ( NextMonitorSourceMode < 0 )
    {
      v3 = v23;
      goto LABEL_32;
    }
    if ( v23->Preference == D3DKMDT_MP_PREFERRED && v23->Origin == D3DKMDT_MCO_DRIVER )
      ++v8;
    MonitorModePreference = BmlGetMonitorModePreference(v23, (unsigned int)v26, a3);
    v16 = v25;
    v17 = MonitorModePreference;
    if ( MonitorModePreference == 8 )
      v16 = v15;
    v22 = MonitorModePreference;
    v25 = v16;
    if ( *(_DWORD *)(v6 + 20) == *(_DWORD *)(a1 + 84) && *(_DWORD *)(v6 + 24) == *(_DWORD *)(a1 + 88) )
    {
      if ( a2 )
      {
LABEL_14:
        if ( *(_DWORD *)(v6 + 88) == v15 && *(_DWORD *)(v6 + 84) == 5 )
        {
          v9 = *(_QWORD *)(v6 + 20);
          v10 = HIDWORD(*(_QWORD *)(v6 + 20));
        }
        v18 = 0;
        if ( v17 == 11 )
          v11 = v15;
        else
          v18 = v17;
        if ( v18 > v7 )
          v7 = v18;
      }
      else if ( DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
                  (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a1 + 72),
                  (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v6 + 8),
                  0) )
      {
        v17 = v22;
        v15 = 1;
        goto LABEL_14;
      }
    }
  }
  if ( v8 == 1 )
  {
    if ( v11 )
      return 11;
    if ( (unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3) )
    {
      if ( v25 )
      {
        v19 = *(_DWORD *)(a1 + 84);
        if ( v19 <= v9 )
        {
          v20 = *(_DWORD *)(a1 + 88);
          if ( v20 <= v10 && v19 == v9 && v20 == v10 )
            return 11;
        }
      }
    }
  }
  return (unsigned int)v7;
}
