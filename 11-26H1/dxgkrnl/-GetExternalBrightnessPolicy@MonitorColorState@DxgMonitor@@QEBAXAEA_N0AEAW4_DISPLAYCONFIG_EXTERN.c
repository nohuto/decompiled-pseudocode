/*
 * XREFs of ?GetExternalBrightnessPolicy@MonitorColorState@DxgMonitor@@QEBAXAEA_N0AEAW4_DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT@@@Z @ 0x14027C1F0
 * Callers:
 *     ?MonitorGetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEA_N1PEAW4_DISPLAYCONFIG_HDR_BRIGHTNESS_MODE@@PEAW4_DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT@@@Z @ 0x14026EF3C (-MonitorGetExternalBrightnessPolicy@@YAJPEAUHDXGMONITOR__@@PEA_N1PEAW4_DISPLAYCONFIG_HDR_BRIGHTN.c)
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276B58 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgMonitor::MonitorColorState::GetExternalBrightnessPolicy(
        DxgMonitor::MonitorColorState *this,
        bool *a2,
        bool *a3,
        enum _DISPLAYCONFIG_EXTERNAL_BRIGHTNESS_OEM_ENABLEMENT *a4)
{
  _BYTE *v4; // r10
  bool v5; // al

  v4 = (char *)this + 518;
  if ( !*((_BYTE *)this + 518) )
  {
    if ( !*((_BYTE *)this + 519) )
    {
      v5 = 0;
      if ( !*((_BYTE *)this + 520) )
        goto LABEL_10;
    }
    goto LABEL_9;
  }
  if ( !*((_BYTE *)this + 517) )
    goto LABEL_6;
  if ( !*((_BYTE *)this + 519) )
  {
    if ( *((_BYTE *)this + 520) )
    {
      v4 = (char *)this + 518;
      goto LABEL_9;
    }
LABEL_6:
    v5 = 0;
    goto LABEL_10;
  }
LABEL_9:
  v5 = 1;
LABEL_10:
  *a2 = v5;
  *a3 = *((_BYTE *)this + 520);
  if ( *v4 )
    *(_DWORD *)a4 = 2 - (*((_BYTE *)this + 517) != 0);
  else
    *(_DWORD *)a4 = 0;
}
