/*
 * XREFs of ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18027CB10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x18000A670 (--1-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18001B6D4 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18001B6F4 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18009E5C8 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??1?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18009E84C (--1-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrush@@@std@@@std@@.c)
 *     ?CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1800D96C0 (-CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDra.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800D9794 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801B7070 (--1-$out_param_t@V-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrus.c)
 */

__int64 __fastcall CNineGridBrush::CreateLayoutGeometryDrawListBrush(
        CNineGridBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListBrush **a4)
{
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  int v9; // ebx
  FLOAT width; // xmm1_4
  _BYTE *v11; // rax
  FLOAT height; // xmm0_4
  char v13; // r9
  int LayoutGeometryDrawListBrush; // eax
  CNineGridDrawListBrush *v16; // [rsp+30h] [rbp-50h] BYREF
  struct CGeometryOnlyDrawListBrush *v17[2]; // [rsp+38h] [rbp-48h] BYREF
  char v18; // [rsp+48h] [rbp-38h]
  __m128 v19; // [rsp+50h] [rbp-30h] BYREF
  CNineGridDrawListBrush **v20; // [rsp+60h] [rbp-20h] BYREF
  CNineGridDrawListBrush *v21; // [rsp+68h] [rbp-18h] BYREF
  char v22; // [rsp+70h] [rbp-10h]
  _BYTE *v23; // [rsp+A0h] [rbp+20h] BYREF

  if ( *((_BYTE *)this + 96) && *((_BYTE *)this + 136) )
  {
    v7 = *(__m128 *)((char *)this + 120);
    v23 = 0LL;
    v8 = *(__m128 *)((char *)this + 104);
    v17[0] = (struct CGeometryOnlyDrawListBrush *)&v23;
    v17[1] = 0LL;
    v18 = 1;
    v19 = _mm_mul_ps(v7, v8);
    v9 = CGeometryOnlyDrawListBrush::Create(&v17[1], (__int64)a2);
    wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>((__int64)v17);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x138u, 0LL);
    }
    else
    {
      width = a3->width;
      v11 = v23;
      height = a3->height;
      v17[0] = 0LL;
      *(FLOAT *)&v17[1] = width;
      v23[52] = 1;
      *((_DWORD *)v11 + 12) = 50529027;
      *((FLOAT *)&v17[1] + 1) = height;
      v21 = 0LL;
      v22 = 1;
      *((_OWORD *)v11 + 2) = *(_OWORD *)v17;
      v13 = *((_BYTE *)this + 136);
      v20 = &v16;
      v17[0] = (struct CGeometryOnlyDrawListBrush *)v23;
      v16 = 0LL;
      v23 = 0LL;
      v9 = CNineGridDrawListBrush::Create((struct CNineGridDrawListBrush *)v17, (int)&v19, (int)&v19, v13, &v21);
      std::unique_ptr<CShape>::~unique_ptr<CShape>((__int64 (__fastcall ****)(_QWORD, __int64))v17);
      wil::details::out_param_t<std::unique_ptr<CNineGridDrawListBrush>>::~out_param_t<std::unique_ptr<CNineGridDrawListBrush>>((__int64)&v20);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x141u, 0LL);
      }
      else
      {
        *a4 = v16;
        v16 = 0LL;
      }
      std::unique_ptr<CNineGridDrawListBrush>::~unique_ptr<CNineGridDrawListBrush>(&v16);
    }
    std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v23);
  }
  else
  {
    LayoutGeometryDrawListBrush = CBrush::CreateLayoutGeometryDrawListBrush(this, a2, a3, a4);
    v9 = LayoutGeometryDrawListBrush;
    if ( LayoutGeometryDrawListBrush < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, LayoutGeometryDrawListBrush, 0x147u, 0LL);
  }
  return (unsigned int)v9;
}
