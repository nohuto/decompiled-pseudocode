/*
 * XREFs of ?GetColor_scRGB@CGlassColorizationParameters@@QEBAXPEAU_D3DCOLORVALUE@@@Z @ 0x18000EA30
 * Callers:
 *     ?Update@CGlassColorizationResources@@QEAAJPEBVCGlassColorizationParameters@@@Z @ 0x18000E9E0 (-Update@CGlassColorizationResources@@QEAAJPEBVCGlassColorizationParameters@@@Z.c)
 * Callees:
 *     NormalizesRGBColor @ 0x18000F1C0 (NormalizesRGBColor.c)
 *     sRGBColorToscRGBColor @ 0x18000F260 (sRGBColorToscRGBColor.c)
 */

void __fastcall CGlassColorizationParameters::GetColor_scRGB(
        CGlassColorizationParameters *this,
        struct _D3DCOLORVALUE *a2)
{
  __int64 v2; // r8
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  NormalizesRGBColor(this, &v3, a2);
  sRGBColorToscRGBColor(&v3, v2);
}
