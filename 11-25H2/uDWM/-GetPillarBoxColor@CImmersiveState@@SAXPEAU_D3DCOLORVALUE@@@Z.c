/*
 * XREFs of ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800B89BC
 * Callers:
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B735C (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x18000F520 (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     GetStaticImmersiveColorPrivForHighContrastState @ 0x1800641C4 (GetStaticImmersiveColorPrivForHighContrastState.c)
 */

void __fastcall CImmersiveState::GetPillarBoxColor(struct _D3DCOLORVALUE *a1)
{
  char IsHighContrastMode; // al
  int StaticImmersiveColorPrivForHighContrastState; // eax
  D3DVALUE v4; // xmm0_4

  IsHighContrastMode = CDesktopManager::IsHighContrastMode();
  StaticImmersiveColorPrivForHighContrastState = GetStaticImmersiveColorPrivForHighContrastState(
                                                   570,
                                                   IsHighContrastMode);
  v4 = flt_1800F9280[(unsigned __int8)StaticImmersiveColorPrivForHighContrastState] / 255.0;
  a1->a = 1.0;
  a1->r = v4;
  a1->g = flt_1800F9280[(unsigned __int64)(unsigned __int16)StaticImmersiveColorPrivForHighContrastState >> 8] / 255.0;
  a1->b = flt_1800F9280[BYTE2(StaticImmersiveColorPrivForHighContrastState)] / 255.0;
}
