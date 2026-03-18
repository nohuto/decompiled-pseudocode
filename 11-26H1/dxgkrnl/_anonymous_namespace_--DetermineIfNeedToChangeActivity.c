/*
 * XREFs of _anonymous_namespace_::DetermineIfNeedToChangeActivity @ 0x14042C784
 * Callers:
 *     ?MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DD30 (-MonitorCreatePhysicalMonitor@@YAJPEAXIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEA.c)
 *     ?MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042C640 (-MonitorRemovePhysicalMonitor@@YAJPEAXIEPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402AC92C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403409F4 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14037AA90 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall anonymous_namespace_::DetermineIfNeedToChangeActivity(DXGADAPTER *a1, unsigned int a2, bool *a3)
{
  bool v3; // bl
  struct _LUID *v7; // rdx
  __int64 v8; // rcx
  int v9; // r9d
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = 0;
    LOBYTE(v10) = 0;
    if ( DXGADAPTER::UsingSetTimingsFromVidPn(a1)
      && !*((_BYTE *)a1 + 3057)
      && !DXGADAPTER::IsAdapterSessionized(a1, v7, 0LL, 0LL)
      && (int)DmmIsTargetForceable(v8, a2, (unsigned __int8 *)&v10, v9) >= 0
      && !(_BYTE)v10 )
    {
      v3 = (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, &v10) >= 0;
    }
    *a3 = v3;
  }
}
