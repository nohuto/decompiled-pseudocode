/*
 * XREFs of ?Update@CGlassColorizationResources@@QEAAJPEBVCGlassColorizationParameters@@@Z @ 0x1800200D0
 * Callers:
 *     ?SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@M@Z @ 0x18001F7F0 (-SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U-$TMI.c)
 * Callees:
 *     ?GetColor_sRGB@CGlassColorizationParameters@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180020118 (-GetColor_sRGB@CGlassColorizationParameters@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 */

__int64 __fastcall CGlassColorizationResources::Update(
        CGlassColorizationResources *this,
        const struct CGlassColorizationParameters *a2)
{
  struct _D3DCOLORVALUE *Color_sRGB; // rax
  struct _D3DCOLORVALUE *v3; // r10
  __int64 v4; // r9
  __int64 result; // rax
  _D3DCOLORVALUE v6; // [rsp+20h] [rbp-18h] BYREF

  Color_sRGB = CGlassColorizationParameters::GetColor_sRGB(a2, &v6);
  *(struct _D3DCOLORVALUE *)&v3[1].r = *(struct _D3DCOLORVALUE *)&Color_sRGB->r;
  result = 0LL;
  v3[2].r = (float)*(int *)(v4 + 8) / 100.0;
  return result;
}
