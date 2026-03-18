/*
 * XREFs of ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180186130
 * Callers:
 *     <none>
 * Callees:
 *     ?Inflate@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x180017A10 (-Inflate@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800BACD0 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x18018658C (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ @ 0x180186600 (-GetRenderingRealization@CCompositionSurfaceBitmap@@AEBAPEAVIBitmapRealization@@XZ.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180202920 (-CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CCompositionSurfaceBitmap::GetDirtyRegion(
        CCompositionSurfaceBitmap *this,
        struct D2D_SIZE_F *a2,
        struct CRectanglesShape *a3)
{
  char v3; // bl
  struct IBitmapRealization *RenderingRealization; // rax
  struct IBitmapRealization *v8; // rcx
  int (__fastcall **v9)(struct IBitmapRealization *, GUID *, __int64 *); // rax
  char v10; // al
  CRegion *v11; // rcx
  char v12; // bl
  float left; // xmm4_4
  float top; // xmm1_4
  float right; // xmm2_4
  float bottom; // xmm0_4
  struct D2D_RECT_F v18; // [rsp+30h] [rbp-79h] BYREF
  struct D2D_RECT_F v19; // [rsp+40h] [rbp-69h] BYREF
  __int64 v20; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v21[64]; // [rsp+60h] [rbp-49h] BYREF
  int v22; // [rsp+A0h] [rbp-9h]
  __int64 v23[2]; // [rsp+B0h] [rbp+7h] BYREF
  struct D2D_RECT_F v24; // [rsp+C0h] [rbp+17h] BYREF

  v3 = 0;
  if ( *((_QWORD *)this + 2) )
  {
    RenderingRealization = CCompositionSurfaceBitmap::GetRenderingRealization((CCompositionSurfaceBitmap *)((char *)this - 88));
    v8 = RenderingRealization;
    if ( RenderingRealization )
    {
      v9 = *(int (__fastcall ***)(struct IBitmapRealization *, GUID *, __int64 *))RenderingRealization;
      v20 = 0LL;
      if ( (*v9)(v8, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v20) < 0
        || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 264LL))(v20) )
      {
        v22 = 0;
        v24 = 0LL;
        *(_OWORD *)v23 = 0LL;
        v10 = CCompositionSurfaceBitmap::CalcImageTransform(
                (CCompositionSurfaceBitmap *)((char *)this - 88),
                a2,
                (CMILMatrix *)v21,
                &v24,
                (__int64)v23);
        v11 = (CRegion *)*((_QWORD *)this + 2);
        v12 = v10;
        v19 = (struct D2D_RECT_F)0LL;
        CRegion::GetBoundingRect(v11, (struct MilRectU *)&v19);
        v18.left = (float)SLODWORD(v19.left);
        v18.top = (float)SLODWORD(v19.top);
        v18.right = (float)SLODWORD(v19.right);
        v18.bottom = (float)SLODWORD(v19.bottom);
        TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::Inflate(&v18.left, 0.5, 0.5);
        left = v18.left;
        if ( *(float *)v23 > v18.left )
        {
          v18.left = *(FLOAT *)v23;
          left = *(float *)v23;
        }
        top = v18.top;
        if ( *((float *)v23 + 1) > v18.top )
        {
          v18.top = *((FLOAT *)v23 + 1);
          top = *((float *)v23 + 1);
        }
        right = v18.right;
        if ( v18.right > *(float *)&v23[1] )
        {
          v18.right = *(FLOAT *)&v23[1];
          right = *(float *)&v23[1];
        }
        bottom = v18.bottom;
        if ( v18.bottom > *((float *)&v23[1] + 1) )
        {
          v18.bottom = *((FLOAT *)&v23[1] + 1);
          bottom = *((float *)&v23[1] + 1);
        }
        if ( right <= left || bottom <= top )
        {
          *(_QWORD *)&v18.right = 0LL;
          *(_QWORD *)&v18.left = 0LL;
        }
        if ( v12 )
        {
          v19 = 0LL;
          CMILMatrix::Transform2DBoundsHelper<0>((__int64)v21, &v18, &v19.left);
          v18 = v19;
        }
        CRectanglesShape::SetSingleRect(a3, &v18);
        v3 = 1;
      }
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  return v3;
}
