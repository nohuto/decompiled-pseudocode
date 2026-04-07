/*
 * XREFs of ?ColorFFromColorDW@@YA?AU_D3DCOLORVALUE@@K@Z @ 0x18004E190
 * Callers:
 *     ?LoadThemeBorderParameters@CThumbnailVisual@@AEAAJXZ @ 0x1800C9DA4 (-LoadThemeBorderParameters@CThumbnailVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall ColorFFromColorDW(struct _D3DCOLORVALUE *__return_ptr retstr, unsigned int a2)
{
  struct _D3DCOLORVALUE *result; // rax

  retstr->r = (float)(unsigned __int8)a2 / 255.0;
  retstr->g = (float)BYTE1(a2) / 255.0;
  retstr->b = (float)BYTE2(a2) / 255.0;
  result = retstr;
  retstr->a = (float)HIBYTE(a2) / 255.0;
  return result;
}
