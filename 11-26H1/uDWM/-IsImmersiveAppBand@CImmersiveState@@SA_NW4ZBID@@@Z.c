/*
 * XREFs of ?IsImmersiveAppBand@CImmersiveState@@SA_NW4ZBID@@@Z @ 0x18008DE10
 * Callers:
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x18007C358 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CImmersiveState::IsImmersiveAppBand(int a1)
{
  return (unsigned int)(a1 - 8) <= 3;
}
