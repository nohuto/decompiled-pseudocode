/*
 * XREFs of ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180265FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180186600 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     ?GetSizePreference@CCompositionSurfaceBitmap@@QEBA?AW4SizePreference@@XZ @ 0x180189610 (-GetSizePreference@CCompositionSurfaceBitmap@@QEBA-AW4SizePreference@@XZ.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180189638 (-GetBorderColor@CCompositionSurfaceBitmap@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     ?UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z @ 0x1801896D0 (-UseLayoutSizeForBounds@CCompositionSurfaceBitmap@@AEBA_NAEBUD2D_SIZE_F@@@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180202920 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBounds(
        CCompositionSurfaceBitmap *this,
        struct D2D_SIZE_F *a2,
        struct D2D_RECT_F *a3)
{
  float width; // xmm6_4
  float height; // xmm7_4
  _BYTE v9[64]; // [rsp+30h] [rbp-C8h] BYREF
  int v10; // [rsp+70h] [rbp-88h]
  struct D2D_RECT_F v11; // [rsp+80h] [rbp-78h] BYREF
  struct _D3DCOLORVALUE v12; // [rsp+90h] [rbp-68h] BYREF

  if ( !CCompositionSurfaceBitmap::GetRenderingRealization(this) )
    goto LABEL_19;
  width = a2->width;
  height = a2->height;
  v11.right = a2->width;
  v11.bottom = height;
  *(_QWORD *)&v11.left = 0LL;
  if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a2)
    && (unsigned int)CCompositionSurfaceBitmap::GetSizePreference((__int64)this)
    && COERCE_FLOAT(LODWORD(CCompositionSurfaceBitmap::GetBorderColor(this, &v12)->a) & _xmm) >= 0.0000011920929 )
  {
    *a3 = v11;
    return 0LL;
  }
  v10 = 0;
  v11 = 0LL;
  *(struct _D3DCOLORVALUE *)&v12.r = 0LL;
  if ( CCompositionSurfaceBitmap::CalcImageTransform(this, a2, (CMILMatrix *)v9, &v11, &v12) )
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v9, &v11, &a3->left);
  else
    *a3 = v11;
  if ( CCompositionSurfaceBitmap::UseLayoutSizeForBounds(this, a2) )
  {
    if ( a3->left < 0.0 )
      a3->left = 0.0;
    if ( a3->top < 0.0 )
      a3->top = 0.0;
    if ( a3->right > width )
      a3->right = width;
    if ( a3->bottom > height )
      a3->bottom = height;
    if ( IsEmpty(a3) )
    {
LABEL_19:
      *(_QWORD *)&a3->left = 0LL;
      *(_QWORD *)&a3->right = 0LL;
    }
  }
  return 0LL;
}
