/*
 * XREFs of ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18027AA20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18004FBE4 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ @ 0x180050020 (-InternalRelease@-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180054758 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x18020AA8C (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLineGeometry::GetShapeDataCore(
        CLineGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  __int64 v5; // rax
  CPathData *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  struct ID2D1SimplifiedGeometrySink *v9; // rbx
  CPathSegmentsShape *v10; // rax
  CPathSegmentsShape *v11; // rdi
  unsigned int v13; // [rsp+20h] [rbp-30h]
  struct CPathData *v14[2]; // [rsp+30h] [rbp-20h] BYREF
  size_t v15[2]; // [rsp+40h] [rbp-10h] BYREF
  struct ID2D1SimplifiedGeometrySink *v16; // [rsp+88h] [rbp+38h] BYREF

  v14[0] = 0LL;
  v16 = 0LL;
  v5 = (__int64)MIDL_user_allocate(0x48uLL);
  if ( v5 )
  {
    v15[0] = 0LL;
    v15[1] = 0LL;
    v5 = CPathData::CPathData(v5, g_DeviceManager, v15);
  }
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=((__int64 *)v14, v5);
  v6 = v14[0];
  if ( !v14[0] )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x53u, 0LL);
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  v8 = CPathData::Open(v6, &v16);
  v7 = v8;
  if ( v8 < 0 )
  {
    v13 = 85;
    goto LABEL_13;
  }
  v9 = v16;
  (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, unsigned __int64, __int64))(*(_QWORD *)v16 + 40LL))(
    v16,
    _mm_unpacklo_ps((__m128)*((unsigned int *)this + 34), (__m128)*((unsigned int *)this + 35)).m128_u64[0],
    1LL);
  (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, char *, __int64))(*(_QWORD *)v9 + 48LL))(
    v9,
    (char *)this + 144,
    1LL);
  (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, 0LL);
  v8 = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v9 + 72LL))(v9);
  v7 = v8;
  if ( v8 < 0 )
  {
    v13 = 91;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v13, 0LL);
    goto LABEL_14;
  }
  v10 = (CPathSegmentsShape *)MIDL_user_allocate(0x18uLL);
  if ( v10 && (v11 = CPathSegmentsShape::CPathSegmentsShape(v10, v6)) != 0LL )
  {
    CShapePtr::~CShapePtr(a3);
    *(_QWORD *)a3 = v11;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x5Eu, 0LL);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<CConditionalExpression>::InternalRelease((__int64 *)v14);
  return v7;
}
