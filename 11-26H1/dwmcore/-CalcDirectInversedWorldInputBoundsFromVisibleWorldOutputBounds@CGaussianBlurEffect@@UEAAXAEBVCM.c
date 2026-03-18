/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CGaussianBlurEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180287BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

_OWORD *__fastcall CGaussianBlurEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        struct D2D_RECT_F *a3,
        __int64 a4,
        struct D2D_RECT_F *a5,
        _OWORD *a6)
{
  float v6; // xmm2_4
  struct D2D_RECT_F *v7; // r9
  float left; // xmm0_4
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _OWORD *v11; // r8
  _OWORD *result; // rax
  struct D2D_RECT_F v13; // [rsp+20h] [rbp-18h] BYREF

  v6 = *(float *)(a1 + 352) * 3.0;
  v13 = *a3;
  if ( !IsEmpty(&v13) )
    TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v13.left, v6, v6);
  left = v13.left;
  *a5 = *v7;
  if ( left > a5->left )
    a5->left = left;
  if ( v13.top > a5->top )
    a5->top = v13.top;
  if ( a5->right > v13.right )
    a5->right = v13.right;
  if ( a5->bottom > v13.bottom )
    a5->bottom = v13.bottom;
  if ( IsEmpty(a5) )
  {
    v10[1] = v9;
    *v10 = v9;
  }
  result = a6;
  *a6 = *v11;
  return result;
}
