/*
 * XREFs of ?UpdateSize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@@Z @ 0x1802041E8
 * Callers:
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MMW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180204064 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1802594EC (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 *     ?CalcSwapChainBufferSize@CMonitorTransform@@QEAA?AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlayCaps@@@Z @ 0x18028D8BC (-CalcSwapChainBufferSize@CMonitorTransform@@QEAA-AUD2D_SIZE_U@@AEBU2@PEBVCD3DDevice@@AEBVOverlay.c)
 * Callees:
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180016450 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005C4A4 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18005FB24 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005FB60 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18006010C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180061980 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180063B78 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x180075440 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800AF6A4 (-IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4048 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18021C66C (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMonitorTransform::UpdateSize(CMonitorTransform *this, const struct D2D_SIZE_U *a2)
{
  __int64 v4; // rax
  _DWORD *v5; // rdx
  int v6; // ecx
  int *v7; // r13
  int v8; // r8d
  int v9; // r9d
  int *v10; // r14
  int *v11; // r15
  int *v12; // r12
  char *v13; // rdi
  float v14; // xmm6_4
  float v15; // xmm7_4
  int v16; // ecx
  int v17; // eax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // ecx
  int v22; // ecx
  CMILMatrix *v23; // rcx
  float v24; // xmm1_4
  float v25; // xmm2_4
  CMILMatrix *v26; // rcx
  int v27; // eax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  float v31; // xmm1_4
  int v32; // eax
  float v33; // xmm0_4
  int v34; // eax
  __int64 v35; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v36; // r8
  const struct D2D_RECT_F *v37; // r9
  char v38; // al
  bool v39; // zf
  __int32 v40; // xmm1_4
  __int64 v41; // [rsp+28h] [rbp-69h] BYREF
  float v42; // [rsp+30h] [rbp-61h]
  float v43; // [rsp+34h] [rbp-5Dh]
  struct D2D_RECT_F v44; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v45[64]; // [rsp+48h] [rbp-49h] BYREF
  int v46; // [rsp+88h] [rbp-9h]
  __int64 v47; // [rsp+F8h] [rbp+67h] BYREF
  float v48; // [rsp+100h] [rbp+6Fh] BYREF

  v4 = (__int64)*a2;
  v5 = (_DWORD *)((char *)this + 52);
  *((_QWORD *)this + 6) = v4;
  if ( ((*((_DWORD *)this + 16) - 2) & 0xFFFFFFFD) == 0 )
  {
    v6 = *((_DWORD *)this + 12);
    *((_DWORD *)this + 12) = *v5;
    *v5 = v6;
  }
  v47 = *((_QWORD *)this + 5);
  v7 = (int *)((char *)this + 24);
  v10 = (int *)((char *)this + 28);
  v11 = (int *)((char *)this + 32);
  v12 = (int *)((char *)this + 36);
  if ( TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)this + 6) )
  {
    *v7 = 0;
    *v10 = 0;
    *v11 = a2->width;
    *v12 = a2->height;
  }
  v13 = (char *)this + 68;
  v41 = 0LL;
  v14 = (float)v8;
  v15 = (float)v9;
  v42 = (float)v8;
  v43 = (float)v9;
  CMILMatrix::InferAffineMatrix((__int64)this + 68, (float *)this + 2, (float *)&v41);
  v16 = *((_DWORD *)this + 16);
  v17 = *((_DWORD *)this + 33);
  v18 = *(_OWORD *)((char *)this + 84);
  *(_OWORD *)((char *)this + 204) = *(_OWORD *)((char *)this + 68);
  v19 = *(_OWORD *)((char *)this + 100);
  *(_OWORD *)((char *)this + 220) = v18;
  v20 = *(_OWORD *)((char *)this + 116);
  *(_OWORD *)((char *)this + 236) = v19;
  *(_OWORD *)((char *)this + 252) = v20;
  *((_DWORD *)this + 67) = v17;
  v21 = v16 - 2;
  if ( !v21 )
  {
    CMILMatrix::Rotate270((CMonitorTransform *)((char *)this + 68));
    v25 = v14;
    v24 = 0.0;
    goto LABEL_11;
  }
  v22 = v21 - 1;
  if ( v22 )
  {
    if ( v22 == 1 )
    {
      CMILMatrix::Rotate90((CMonitorTransform *)((char *)this + 68));
      v24 = v15;
      v25 = 0.0;
LABEL_11:
      CMILMatrix::Translate(v23, v24, v25);
    }
  }
  else
  {
    CMILMatrix::Scale((CMonitorTransform *)((char *)this + 68), -1.0, -1.0, 1.0);
    CMILMatrix::Translate(v26, v14, v15);
    v27 = *((_DWORD *)this + 33);
    v28 = *(_OWORD *)((char *)this + 84);
    *(_OWORD *)((char *)this + 204) = *(_OWORD *)v13;
    v29 = *(_OWORD *)((char *)this + 100);
    *(_OWORD *)((char *)this + 220) = v28;
    v30 = *(_OWORD *)((char *)this + 116);
    *(_OWORD *)((char *)this + 236) = v29;
    *(_OWORD *)((char *)this + 252) = v30;
    *((_DWORD *)this + 67) = v27;
  }
  v31 = (float)*v10;
  v32 = *v11;
  *(float *)&v41 = (float)*v7;
  v33 = (float)v32;
  v34 = *v12;
  *((float *)&v41 + 1) = v31;
  v42 = v33;
  v44 = 0LL;
  v43 = (float)v34;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)this + 68, (const struct D2D_RECT_F *)((char *)this + 8), &v44.left);
  v46 = 0;
  CMILMatrix::InferAffineMatrix((__int64)v45, &v44.left, (float *)&v41);
  CMILMatrix::Multiply((CMonitorTransform *)((char *)this + 68), (const struct CMILMatrix *)v45);
  if ( *v7 || *v10 || *v11 != a2->width || *v12 != a2->height )
  {
    *((_WORD *)this + 140) = 257;
    v13 = (char *)this + 68;
  }
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)v13;
  *(_OWORD *)((char *)this + 152) = *((_OWORD *)v13 + 1);
  *(_OWORD *)((char *)this + 168) = *((_OWORD *)v13 + 2);
  *(_OWORD *)((char *)this + 184) = *((_OWORD *)v13 + 3);
  *((_DWORD *)this + 50) = *((_DWORD *)v13 + 16);
  CMILMatrix::Invert((CMonitorTransform *)((char *)this + 136), v35, v36);
  v44 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>((__int64)v13, v37, &v44.left);
  v38 = IsPixelAligned(&v44);
  v39 = *((_DWORD *)this + 68) == -1;
  *((_BYTE *)this + 283) = v38;
  if ( v39 )
  {
    LODWORD(v47) = 0;
    v48 = 0.0;
    CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v13, (float *)&v47, &v48);
    COERCE_FLOAT(v40 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
    *((_DWORD *)this + 68) = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v47 - *(float *)this) & v40) > 0.0000011920929
                          || COERCE_FLOAT(COERCE_UNSIGNED_INT(v48 - *(float *)this) & v40) > 0.0000011920929;
  }
}
