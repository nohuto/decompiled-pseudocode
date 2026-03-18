/*
 * XREFs of ?SetMetadataOverrideForFlavor@MonitorColorState@DxgMonitor@@AEAAXW4_DISPLAYCONFIG_HDR_FLAVOR@@@Z @ 0x14027D684
 * Callers:
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgMonitor::MonitorColorState::SetMetadataOverrideForFlavor(__int64 a1, int a2)
{
  if ( a2 == 2 )
  {
    *(_BYTE *)(a1 + 516) = 1;
    *(_DWORD *)(a1 + 488) = 964069926;
    *(_DWORD *)(a1 + 492) = -1686232824;
    *(_DWORD *)(a1 + 496) = 138811898;
    *(_DWORD *)(a1 + 500) = 1076903406;
    *(_QWORD *)(a1 + 504) = 1000LL;
    *(_DWORD *)(a1 + 512) = 61473790;
  }
  else
  {
    *(_BYTE *)(a1 + 516) = 0;
  }
}
