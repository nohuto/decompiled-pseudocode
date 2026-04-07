/*
 * XREFs of ?GetColor_sRGB@CGlassColorizationParameters@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180020118
 * Callers:
 *     ?Update@CGlassColorizationResources@@QEAAJPEBVCGlassColorizationParameters@@@Z @ 0x1800200D0 (-Update@CGlassColorizationResources@@QEAAJPEBVCGlassColorizationParameters@@@Z.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CGlassColorizationParameters::GetColor_sRGB(
        CGlassColorizationParameters *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  unsigned int v2; // r8d
  int v3; // eax
  struct _D3DCOLORVALUE *result; // rax

  v2 = *(_DWORD *)this;
  v3 = (unsigned __int8)BYTE1(*(_DWORD *)this);
  retstr->r = (float)(unsigned __int8)*(_DWORD *)this / 255.0;
  retstr->g = (float)v3 / 255.0;
  retstr->b = (float)BYTE2(v2) / 255.0;
  result = retstr;
  retstr->a = (float)HIBYTE(v2) / 255.0;
  return result;
}
