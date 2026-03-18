/*
 * XREFs of ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800AF8B0
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800AE51C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x1800AF944 (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180105210 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUD2D_RECT_F@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x18028C5CC (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUD2D_RECT_F@@PEBVCMILMatrix@@PEAUID2D1GeometrySin.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRegionShape::GetD2DGeometry(int **this, const struct CMILMatrix *a2, struct ID2D1Geometry **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  struct ID2D1Geometry *v8; // rdi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v14; // rcx
  int v15; // eax
  struct ID2D1GeometrySink *v16; // [rsp+30h] [rbp-29h] BYREF
  struct ID2D1Geometry *v17; // [rsp+38h] [rbp-21h] BYREF
  _DWORD v18[4]; // [rsp+40h] [rbp-19h]
  struct D2D_RECT_F v19; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v20[8]; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp+Fh]
  _DWORD *v22; // [rsp+70h] [rbp+17h]
  __int64 v23; // [rsp+78h] [rbp+1Fh]
  int v24; // [rsp+80h] [rbp+27h]

  v6 = CRegionShape::EnsureD2DGeometry((CRegionShape *)this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xAAu, 0LL);
    return v7;
  }
  if ( !a2 )
  {
    v8 = (struct ID2D1Geometry *)this[11];
    if ( v8 )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v8 + 8LL))(v8);
    goto LABEL_5;
  }
  v16 = 0LL;
  v17 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
          g_DeviceManager,
          &v17);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xBAu, 0LL);
    goto LABEL_19;
  }
  v11 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, struct ID2D1GeometrySink **))(*(_QWORD *)v17 + 136LL))(
          v17,
          &v16);
  v7 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xBCu, 0LL);
    goto LABEL_19;
  }
  FastRegion::CRegion::BeginIterator(this + 2, (__int64)v20);
  while ( (unsigned __int64)v22 < v21 )
  {
    v18[1] = *v22;
    v18[3] = v22[2];
    v12 = 2 * v24;
    v18[0] = *(_DWORD *)(v23 + 4 * v12);
    v18[2] = *(_DWORD *)(v23 + 4 * v12 + 4);
    for ( i = 0LL; i < 4; ++i )
      *(float *)((char *)&v19.left + i * 4) = (float)(int)v18[i];
    AddTransformedRectToD2DRgnGeometrySink(&v19, a2, v16);
    FastRegion::Internal::CRgnData::StepIterator(v14, (struct FastRegion::CRegion::Iterator *)v20);
  }
  v15 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v16 + 72LL))(v16);
  v7 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0xCBu, 0LL);
LABEL_19:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
    return v7;
  }
  v8 = v17;
  v17 = 0LL;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
LABEL_5:
  *a3 = v8;
  return v7;
}
