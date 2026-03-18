/*
 * XREFs of ?GetDxgiGammaRamp@DXGMONITOR@@UEBAJPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1403D0C50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1403D0C7C (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

int __fastcall DXGMONITOR::GetDxgiGammaRamp(DXGMONITOR *this, const struct DXGK_GAMMA_RAMP **a2)
{
  return ADAPTER_DISPLAY::GetDxgiGammaRamp(
           *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 17) + 24LL),
           *((_DWORD *)this + 37),
           a2);
}
