/*
 * XREFs of ?GetPixelColor@CSystemMemoryBitmap@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x1801AD740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CSystemMemoryBitmap::GetPixelColor(
        CSystemMemoryBitmap *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct D2D_POINT_2U *a3)
{
  __int64 v3; // r11
  UINT32 y; // eax
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  float v10; // xmm0_4
  __int64 v11; // rax

  v3 = *((_QWORD *)this + 1);
  *(_OWORD *)&retstr->r = 0LL;
  if ( v3 && (*((_DWORD *)this - 6) == 87 || *((_DWORD *)this - 6) == 88) && a3->x < *((_DWORD *)this - 10) )
  {
    y = a3->y;
    if ( y < *((_DWORD *)this - 9) )
    {
      v6 = *((_DWORD *)this - 6) == 87;
      v7 = *((_DWORD *)this + 4) * y;
      v8 = 4 * a3->x;
      v9 = *(unsigned __int8 *)(v8 + v3 + v7 + 1);
      retstr->b = GammaLUT_sRGB_to_scRGB[*(unsigned __int8 *)(v8 + v3 + v7)] / 255.0;
      v10 = GammaLUT_sRGB_to_scRGB[v9];
      v11 = *(unsigned __int8 *)(v8 + v3 + v7 + 2);
      retstr->g = v10 / 255.0;
      retstr->r = GammaLUT_sRGB_to_scRGB[v11] / 255.0;
      if ( !v6 || *((_DWORD *)this - 5) == 3 )
        retstr->a = 1.0;
      else
        retstr->a = (float)*(unsigned __int8 *)(v8 + v3 + v7 + 3) / 255.0;
    }
  }
  return retstr;
}
