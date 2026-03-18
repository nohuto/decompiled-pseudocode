/*
 * XREFs of _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1403F2268
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403F1C50 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 */

void __fastcall VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK(__int64 a1)
{
  __int64 v1; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( !*(_DWORD *)a1 )
    {
      v1 = *(_QWORD *)(a1 + 8);
      if ( (v1 == 1 || v1 == 3) && *(_DWORD *)(a1 + 16) == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 4) != 0 )
        McTemplateK0q_EtwWriteTransfer(a1, (__int64)&Dxgk_PerfTrack_DMM_Hotplug_Monitor_Set_VideoMode_Cancel);
    }
  }
}
