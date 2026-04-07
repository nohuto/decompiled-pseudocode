/*
 * XREFs of ?WUColorFromD2DColor@@YA?AUColor@UI@Windows@@AEBU_D3DCOLORVALUE@@@Z @ 0x18004D000
 * Callers:
 *     ?_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineGridVisual@@@Z @ 0x18004BEFC (-_CreateOrUpdateBrush@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@IAEBU_D3DCOLORVALUE@@PEAVCNineG.c)
 *     ?Show@CIconicSprite@@QEAAJ_N@Z @ 0x18004C224 (-Show@CIconicSprite@@QEAAJ_N@Z.c)
 *     ?UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18004CCFC (-UpdateColor@CSolidRectangleVisual@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ @ 0x180081CD0 (-EnsureBorderSprite@CLegacyNonClientBackground@@AEAAJXZ.c)
 *     ?SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B6308 (-SetupVisuals@CIconicAnimatedVisual@@AEAAJXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800CD870 (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WUColorFromD2DColor(float *a1)
{
  float v1; // xmm0_4
  float v2; // xmm0_4
  float v3; // xmm0_4
  float v5; // [rsp+8h] [rbp+8h]
  float v6; // [rsp+18h] [rbp+18h]
  float v7; // [rsp+20h] [rbp+20h]

  v1 = (float)(a1[3] * 255.0) + 6291456.25;
  v7 = v1;
  v2 = (float)(*a1 * 255.0) + 6291456.25;
  v6 = v2;
  v3 = (float)(a1[1] * 255.0) + 6291456.25;
  v5 = (float)(a1[2] * 255.0) + 6291456.25;
  return ((int)(LODWORD(v7) << 10) >> 11) | ((int)(LODWORD(v6) << 10) >> 3) & 0xFFFFFF00 | (LODWORD(v3) << 15) & 0xFFFF0000 | (LODWORD(v5) << 23) & 0xFF000000;
}
