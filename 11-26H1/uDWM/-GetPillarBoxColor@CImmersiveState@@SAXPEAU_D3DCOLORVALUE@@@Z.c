/*
 * XREFs of ?GetPillarBoxColor@CImmersiveState@@SAXPEAU_D3DCOLORVALUE@@@Z @ 0x1800B7998
 * Callers:
 *     ?SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B6308 (-SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?IsHighContrastMode@CDesktopManager@@SA_NXZ @ 0x1800204DC (-IsHighContrastMode@CDesktopManager@@SA_NXZ.c)
 *     GetStaticImmersiveColorPrivForHighContrastState @ 0x18004EE68 (GetStaticImmersiveColorPrivForHighContrastState.c)
 */

void __fastcall CImmersiveState::GetPillarBoxColor(struct _D3DCOLORVALUE *a1)
{
  char IsHighContrastMode; // al
  int StaticImmersiveColorPrivForHighContrastState; // eax

  IsHighContrastMode = CDesktopManager::IsHighContrastMode();
  StaticImmersiveColorPrivForHighContrastState = GetStaticImmersiveColorPrivForHighContrastState(
                                                   570,
                                                   IsHighContrastMode);
  a1->a = 1.0;
  a1->r = (float)(unsigned __int8)StaticImmersiveColorPrivForHighContrastState / 255.0;
  a1->g = (float)BYTE1(StaticImmersiveColorPrivForHighContrastState) / 255.0;
  a1->b = (float)BYTE2(StaticImmersiveColorPrivForHighContrastState) / 255.0;
}
