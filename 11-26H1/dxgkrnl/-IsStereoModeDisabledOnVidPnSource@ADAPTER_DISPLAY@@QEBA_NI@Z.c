/*
 * XREFs of ?IsStereoModeDisabledOnVidPnSource@ADAPTER_DISPLAY@@QEBA_NI@Z @ 0x140400F9C
 * Callers:
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1401CE964 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x14003D024 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 */

bool __fastcall ADAPTER_DISPLAY::IsStereoModeDisabledOnVidPnSource(ADAPTER_DISPLAY *this, unsigned int a2)
{
  return *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(this, a2) + 19) != 0;
}
