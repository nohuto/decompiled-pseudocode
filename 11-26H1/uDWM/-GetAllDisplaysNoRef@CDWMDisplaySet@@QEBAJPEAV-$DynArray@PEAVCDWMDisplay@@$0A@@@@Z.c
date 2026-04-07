/*
 * XREFs of ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x1800645B8
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007EE08 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x180084AC4 (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3EA8 (-_AddProjectionBorderForAllDisplays@CCaptureManager@@AEAAJPEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z.c)
 *     ?GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z @ 0x1800AB854 (-GetDisplaySDRWhiteLevel@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEAM@Z.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800AC730 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x1800ACF6C (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCDWMDisplay@@$0A@@@QEAAJPEFBQEAVCDWMDisplay@@I@Z @ 0x180064640 (-AddMultipleAndSet@-$DynArray@PEAVCDWMDisplay@@$0A@@@QEAAJPEFBQEAVCDWMDisplay@@I@Z.c)
 */

__int64 __fastcall CDWMDisplaySet::GetAllDisplaysNoRef(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 i; // rbx
  int v6; // eax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 64); i = (unsigned int)(i + 1) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * i);
    v6 = DynArray<CDWMDisplay *,0>::AddMultipleAndSet(a2, &v8);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x143u, 0LL);
      return v2;
    }
  }
  return v2;
}
