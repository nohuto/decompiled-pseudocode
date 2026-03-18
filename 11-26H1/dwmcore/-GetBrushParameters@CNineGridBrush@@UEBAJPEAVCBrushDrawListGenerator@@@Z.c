/*
 * XREFs of ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180198E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18001B6D4 (--1-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x18001B6F4 (--1-$out_param_t@V-$unique_ptr@VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDraw.c)
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180036DA0 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003A430 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18003DAE0 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003EC70 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z @ 0x18009E24C (--R-$default_delete@VCNineGridDrawListBrush@@@std@@QEBAXPEAVCNineGridDrawListBrush@@@Z.c)
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18009E5C8 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 *     ??1?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18009E84C (--1-$unique_ptr@VCNineGridDrawListBrush@@U-$default_delete@VCNineGridDrawListBrush@@@std@@@std@@.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x1800D9794 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1801991E4 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??$?4VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@$0A@@?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VCGeometryOnlyDrawListBrush@@U?$default_delete@VCGeometryOnlyDrawListBrush@@@std@@@1@@Z @ 0x1801DACE0 (--$-4VCGeometryOnlyDrawListBrush@@U-$default_delete@VCGeometryOnlyDrawListBrush@@@std@@$0A@@-$un.c)
 *     ?IsIdentity@CComponentTransform2D@@QEBA_NXZ @ 0x18021E080 (-IsIdentity@CComponentTransform2D@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CNineGridBrush::GetBrushParameters(CNineGridBrush *this, struct CBrushDrawListGenerator *a2)
{
  const struct D2D_SIZE_F *v2; // r12
  struct CDrawingContext *v4; // rdx
  __m128 v6; // xmm6
  _BYTE *v7; // rbx
  char v8; // r15
  CComponentTransform2D *v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // edi
  int v14; // r12d
  char v15; // r9
  __int64 v16; // rcx
  CNineGridDrawListBrush *v17; // rdx
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  __int64 v19; // rcx
  const struct D2D1::Matrix3x2F *v20; // rcx
  FLOAT width; // xmm1_4
  unsigned int v22; // xmm0_4
  __int128 v23; // xmm1
  unsigned __int64 v24; // xmm0_8
  __m128 *v25; // rdx
  int v26; // xmm0_4
  _BYTE *v27; // rax
  __int128 v28; // xmm1
  _BYTE *v29; // [rsp+38h] [rbp-99h] BYREF
  _BYTE *v30; // [rsp+40h] [rbp-91h] BYREF
  __int128 v31; // [rsp+48h] [rbp-89h] BYREF
  char v32; // [rsp+58h] [rbp-79h]
  __m128 v33; // [rsp+60h] [rbp-71h] BYREF
  __m128 v34; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v35; // [rsp+80h] [rbp-51h]
  char v36[8]; // [rsp+88h] [rbp-49h] BYREF
  _BYTE *v37; // [rsp+90h] [rbp-41h]
  int v38; // [rsp+BCh] [rbp-15h]
  __int128 v39; // [rsp+C0h] [rbp-11h]

  v2 = (const struct D2D_SIZE_F *)((char *)a2 + 44);
  v4 = *(struct CDrawingContext **)a2;
  v6 = _mm_mul_ps(*(__m128 *)((char *)this + 120), *(__m128 *)((char *)this + 104));
  v7 = 0LL;
  v8 = 0;
  v34 = v6;
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v36, v4, v2);
  if ( !*((_BYTE *)this + 177) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 18) + 64LL))(
           *((_QWORD *)this + 18),
           142LL) )
    {
      v9 = *(CComponentTransform2D **)(*((_QWORD *)this + 18) + 152LL);
      if ( v9 )
      {
        if ( !CComponentTransform2D::IsIdentity(v9) )
        {
          v12 = -2147022876;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
            McTemplateU0t_EventWriteTransfer(
              &Microsoft_Windows_Dwm_Core_Provider_Context,
              &EVTDESC_NINEGRIDBRUSH_DRAW_ERROR_INVALID_INPUT,
              2147944420LL);
          MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362A10, 2u, -2147022876, 0x1C0u, 0LL);
          goto LABEL_6;
        }
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 18) + 344LL))(*((_QWORD *)this + 18), v36);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362A10, 2u, v10, 0x1C5u, 0LL);
LABEL_6:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_7;
  }
  v7 = v37;
  v37 = 0LL;
  v30 = v7;
  if ( v7 )
  {
    if ( v7[52] )
    {
      v8 = 1;
      v33 = *(__m128 *)((char *)this + 104);
    }
    else if ( *((_BYTE *)this + 136) )
    {
      width = v2->width;
      v8 = 1;
      v22 = *((_DWORD *)a2 + 12);
      v7[52] = 1;
      *((_QWORD *)&v31 + 1) = __PAIR64__(v22, LODWORD(width));
      *(_QWORD *)&v31 = 0LL;
      v23 = v31;
      *((_DWORD *)v7 + 12) = 50529027;
      v33 = v6;
      *((_OWORD *)v7 + 2) = v23;
    }
  }
  else
  {
    *(_OWORD *)((char *)a2 + 56) = v39;
    if ( *((_BYTE *)this + 136) )
    {
      v29 = 0LL;
      v8 = 1;
      *(_QWORD *)&v31 = &v29;
      v32 = 1;
      v33 = v6;
      *((_QWORD *)&v31 + 1) = 0LL;
      v12 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v31 + 1, v11);
      wil::details::out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>::~out_param_t<std::unique_ptr<CGeometryOnlyDrawListBrush>>((__int64)&v31);
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362A10, 2u, v12, 0x1D6u, 0LL);
        std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v29);
        goto LABEL_6;
      }
      v26 = *((_DWORD *)a2 + 12);
      v27 = v29;
      DWORD2(v31) = LODWORD(v2->width);
      HIDWORD(v31) = v26;
      *(_QWORD *)&v31 = 0LL;
      v28 = v31;
      v29[52] = 1;
      *((_DWORD *)v27 + 12) = 50529027;
      *((_OWORD *)v27 + 2) = v28;
      std::unique_ptr<CDrawListBrush>::operator=<CGeometryOnlyDrawListBrush,std::default_delete<CGeometryOnlyDrawListBrush>,0>(
        &v30,
        &v29);
      std::unique_ptr<CGeometryOnlyDrawListBrush>::~unique_ptr<CGeometryOnlyDrawListBrush>((void **)&v29);
      v7 = v30;
    }
  }
  v14 = v38;
  if ( v8 )
  {
    v15 = *((_BYTE *)this + 136);
    *(_QWORD *)&v31 = &v29;
    v29 = 0LL;
    *((_QWORD *)&v31 + 1) = 0LL;
    v32 = 1;
    v12 = CNineGridDrawListBrush::Create(
            (struct CNineGridDrawListBrush *)&v30,
            (int)&v33,
            (int)&v34,
            v15,
            (CNineGridDrawListBrush **)&v31 + 1);
    if ( v32 )
    {
      v16 = v31;
      v17 = *(CNineGridDrawListBrush **)v31;
      *(_QWORD *)v31 = *((_QWORD *)&v31 + 1);
      if ( v17 )
        std::default_delete<CNineGridDrawListBrush>::operator()(v16, v17);
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, &dword_180362A10, 2u, v12, 0x206u, 0LL);
      std::unique_ptr<CNineGridDrawListBrush>::~unique_ptr<CNineGridDrawListBrush>((CNineGridDrawListBrush **)&v29);
      v7 = v30;
      goto LABEL_6;
    }
    v18 = (void (__fastcall ***)(_QWORD, __int64))v30;
    v7 = v29;
    v29 = 0LL;
    v30 = v7;
    if ( v18 )
    {
      (**v18)(v18, 1LL);
      if ( v29 )
        std::default_delete<CNineGridDrawListBrush>::operator()(v19, (CNineGridDrawListBrush *)v29);
    }
  }
  if ( !D2D1::Matrix3x2F::IsIdentity((CNineGridBrush *)((char *)this + 152)) )
  {
    D2D1::Matrix3x2F::SetProduct((D2D1::Matrix3x2F *)&v34, (const struct D2D1::Matrix3x2F *)(v7 + 8), v20);
    v24 = v35;
    *v25 = v34;
    v25[1].m128_u64[0] = v24;
  }
  CBrushDrawListGenerator::AttachInput(a2, 0LL, &v30);
  v7 = v30;
  v12 = 0;
  *((_DWORD *)a2 + 13) = v14;
LABEL_7:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v36);
  if ( v7 )
    (**(void (__fastcall ***)(_BYTE *, __int64))v7)(v7, 1LL);
  return (unsigned int)v12;
}
