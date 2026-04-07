/*
 * XREFs of ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18007A244
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180077088 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800965F0 (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x180096B38 (-_AddProjectionBorderForAllDisplays@CProjectionBorderManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY.c)
 *     ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800ACE54 (-GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800AD610 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800ADA4C (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetAllDisplaysNoRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 i; // rsi
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned int v8; // edx
  int v9; // edi
  unsigned int v10; // eax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 64); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * i);
    v7 = *(unsigned int *)(a2 + 24);
    v12 = v6;
    v8 = v7 + 1;
    if ( (int)v7 + 1 < (unsigned int)v7 )
    {
      v2 = -2147024362;
      v10 = 179;
      v9 = -2147024362;
      goto LABEL_7;
    }
    v9 = 0;
    if ( v8 <= *(_DWORD *)(a2 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v7) = v6;
      *(_DWORD *)(a2 + 24) = v8;
    }
    else
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet(a2, 8, 1, &v12);
      v2 = v9;
      if ( v9 < 0 )
      {
        v10 = 190;
LABEL_7:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, v10, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x148u, 0LL);
        return v2;
      }
    }
    v2 = v9;
  }
  return v2;
}
