/*
 * XREFs of BmlFillPreferredMonitorMode @ 0x1402DF5D4
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x140342C10 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?MonitorGetNextMonitorSourceMode@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE@@@Z @ 0x1402CC598 (-MonitorGetNextMonitorSourceMode@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEB.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402DF3B0 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlGetMonitorModePreference @ 0x1402DF8B0 (BmlGetMonitorModePreference.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1402DF9F8 (BmlIsLowResAnalogTvOutput.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1402DFA9C (BmlIsEDIDCapableOutputTechonology.c)
 *     ?MonitorGetNextFrequencyRange@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1402DFAF0 (-MonitorGetNextFrequencyRange@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPE.c)
 */

__int64 __fastcall BmlFillPreferredMonitorMode(__int64 a1, unsigned int a2, __int64 a3)
{
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v3; // rdi
  unsigned int v5; // r14d
  unsigned int v6; // r12d
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v7; // rdx
  int v8; // r13d
  struct HDXGMONITOR__ *v9; // rcx
  int NextFrequencyRange; // eax
  int v11; // esi
  D3DKMDT_2DREGION ActiveSize; // rbx
  __int64 v13; // r10
  struct HDXGMONITOR__ *v14; // rcx
  int NextMonitorSourceMode; // eax
  int MonitorModePreference; // eax
  char v17; // r11
  char v18; // cl
  int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // r11d
  unsigned int v23; // r10d
  __int64 v24; // rdx
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  enum _D3DKMDT_MONITOR_TIMING_TYPE v29[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-20h] BYREF
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v31; // [rsp+30h] [rbp-18h] BYREF
  D3DKMDT_2DREGION v32; // [rsp+38h] [rbp-10h]
  int v35; // [rsp+A0h] [rbp+58h]
  __int64 v36; // [rsp+A0h] [rbp+58h]
  char v37; // [rsp+A8h] [rbp+60h]

  v3 = 0LL;
  v5 = 0;
  v30 = 0LL;
  v6 = 0;
  v32 = 0LL;
  if ( !*(_QWORD *)(a3 + 112) )
    return 3223192376LL;
  v35 = 0;
  v7 = 0LL;
  v37 = 0;
  *(_QWORD *)v29 = 0LL;
  v8 = -1;
  while ( 1 )
  {
    v9 = *(struct HDXGMONITOR__ **)(a3 + 112);
    if ( !v9 )
    {
      v11 = -1071774920;
LABEL_45:
      WdLogSingleEntry3(2LL, v3, *(_QWORD *)(a3 + 112), v11);
      WdLogGlobalForLineNumber = 1016;
      return (unsigned int)v11;
    }
    NextFrequencyRange = MonitorGetNextFrequencyRange(v9, v7, (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v29);
    v11 = NextFrequencyRange;
    if ( NextFrequencyRange == 1075708748 )
      break;
    if ( NextFrequencyRange < 0 )
    {
      v3 = *(struct _D3DKMDT_MONITOR_SOURCE_MODE **)v29;
      goto LABEL_45;
    }
    v7 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v29;
    if ( *(_DWORD *)(*(_QWORD *)v29 + 36LL) == 1 )
    {
      v26 = *(_DWORD *)(*(_QWORD *)v29 + 40LL);
      if ( v5 >= v26 )
        v26 = v5;
      v5 = v26;
      if ( v6 < *(_DWORD *)(*(_QWORD *)v29 + 44LL) )
        v6 = *(_DWORD *)(*(_QWORD *)v29 + 44LL);
    }
  }
  ActiveSize = v32;
  v13 = 0LL;
  v31 = 0LL;
  v29[0] = D3DKMDT_MTT_UNINITIALIZED;
  while ( 1 )
  {
    v14 = *(struct HDXGMONITOR__ **)(a3 + 112);
    if ( !v14 )
    {
      v11 = -1071774920;
      goto LABEL_51;
    }
    NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(
                              v14,
                              (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v13,
                              (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v31,
                              v29);
    v11 = NextMonitorSourceMode;
    if ( NextMonitorSourceMode == 1075708748 )
      break;
    if ( NextMonitorSourceMode < 0 )
    {
      v3 = v31;
LABEL_51:
      WdLogSingleEntry3(2LL, v3, *(_QWORD *)(a3 + 112), v11);
      WdLogGlobalForLineNumber = 1049;
      return (unsigned int)v11;
    }
    if ( v31->Preference == D3DKMDT_MP_PREFERRED && v31->Origin == D3DKMDT_MCO_DRIVER )
    {
      ++v35;
      ActiveSize = v31->VideoSignalInfo.ActiveSize;
    }
    MonitorModePreference = BmlGetMonitorModePreference(v31, (unsigned int)v29[0], a3);
    v18 = v37;
    if ( MonitorModePreference == 11 )
      v18 = v17;
    v37 = v18;
    v19 = 0;
    if ( MonitorModePreference != 11 )
      v19 = MonitorModePreference;
    if ( v19 > v8 )
    {
      v8 = v19;
      v30 = *(_QWORD *)(v13 + 20);
    }
    v20 = *(_DWORD *)(v13 + 20);
    v21 = *(_DWORD *)(v13 + 24);
    if ( v5 >= v20 )
      v20 = v5;
    v5 = v20;
    if ( v6 >= v21 )
      v21 = v6;
    v6 = v21;
  }
  if ( v35 == 1 && (v37 || (unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3) && v8 >= 8) )
  {
    v8 = 11;
    v30 = (unsigned __int64)ActiveSize;
  }
  if ( (unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
  {
    if ( v5 < 0x400 )
      v5 = 1024;
    if ( v6 < 0x300 )
      v6 = 768;
    v27 = BmlCompareModeExtents(&qword_140133D10, (int *)&v30);
    v28 = v30;
    if ( v27 == 1 )
      v28 = 0x30000000400LL;
    v30 = v28;
  }
  if ( v8 < 8 )
  {
    if ( (unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
    {
      v23 = 800;
      v22 = 600;
    }
    v30 = __PAIR64__(v22, v23);
  }
  else
  {
    v22 = HIDWORD(v30);
    v23 = v30;
  }
  if ( v5 < v23 )
    v5 = v23;
  LODWORD(v36) = v5;
  if ( v6 < v22 )
    v6 = v22;
  v24 = 120LL * a2;
  HIDWORD(v36) = v6;
  *(_QWORD *)(v24 + a1 + 52) = v30;
  *(_QWORD *)(v24 + a1 + 44) = v36;
  return 1075708748LL;
}
