/*
 * XREFs of ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x18015DC80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180054758 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     ?Outline@ID2D1Geometry@@QEBAJPEBUD2D_MATRIX_3X2_F@@PEAUID2D1SimplifiedGeometrySink@@@Z @ 0x1801ABEAC (-Outline@ID2D1Geometry@@QEBAJPEBUD2D_MATRIX_3X2_F@@PEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18020AA8C (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::GetSimplifiedPathDataInternal(CShape *this, struct CPathData **a2)
{
  __int64 v2; // rax
  CPathData *v4; // rbx
  struct ID2D1SimplifiedGeometrySink *v5; // rdi
  __int64 (__fastcall *v6)(CShape *, _QWORD, ID2D1Geometry **); // rsi
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  ID2D1Geometry *v11; // rcx
  ID2D1Geometry *v13; // rbx
  void (__fastcall *v14)(ID2D1Geometry *, __int64 *); // rsi
  __int64 v15; // rax
  int v16; // eax
  const struct D2D_MATRIX_3X2_F *v17; // rdx
  struct CPathData *v18; // rax
  unsigned int v19; // [rsp+20h] [rbp-30h]
  CPathData *v20; // [rsp+30h] [rbp-20h] BYREF
  size_t v21[2]; // [rsp+40h] [rbp-10h] BYREF
  ID2D1Geometry *v22; // [rsp+80h] [rbp+30h] BYREF
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF
  struct ID2D1SimplifiedGeometrySink *v24; // [rsp+98h] [rbp+48h] BYREF

  v2 = *(_QWORD *)this;
  v4 = 0LL;
  v22 = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v6 = *(__int64 (__fastcall **)(CShape *, _QWORD, ID2D1Geometry **))(v2 + 24);
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  v8 = v6(this, 0LL, &v22);
  v9 = v8;
  if ( v8 < 0 )
  {
    v19 = 1145;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v19, 0LL);
    goto LABEL_4;
  }
  v13 = v22;
  v14 = *(void (__fastcall **)(ID2D1Geometry *, __int64 *))(*(_QWORD *)v22 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  v14(v13, &v23);
  v15 = (__int64)MIDL_user_allocate(0x48uLL);
  if ( v15 )
  {
    v21[0] = 0LL;
    v21[1] = 0LL;
    v15 = CPathData::CPathData(v15, v23, v21);
  }
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)&v20, v15);
  v4 = v20;
  if ( v20 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    v16 = CPathData::Open(v4, &v24);
    v9 = v16;
    if ( v16 >= 0 )
    {
      v5 = v24;
      v8 = ID2D1Geometry::Outline(v22, v17, v24);
      v9 = v8;
      if ( v8 < 0 )
      {
        v19 = 1154;
        goto LABEL_3;
      }
      v8 = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v5 + 72LL))(v5);
      v9 = v8;
      if ( v8 < 0 )
      {
        v19 = 1155;
        goto LABEL_3;
      }
      v18 = v4;
      v4 = 0LL;
      *a2 = v18;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x47Fu, 0LL);
      v5 = v24;
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x47Du, 0LL);
  }
LABEL_4:
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(CPathData *))(*(_QWORD *)v4 + 16LL))(v4);
  v10 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(ID2D1Geometry *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v9;
}
