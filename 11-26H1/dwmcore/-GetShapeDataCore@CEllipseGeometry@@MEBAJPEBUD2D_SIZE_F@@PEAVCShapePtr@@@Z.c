/*
 * XREFs of ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800DF1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x1800BE250 (--1CShapePtr@@QEAA@XZ.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z @ 0x1800DDC94 (-Alloc@-$CThreadLocalObjectCache@VCRoundedRectangleShape@@V1@@@SAPEAX_K@Z.c)
 *     ?Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z @ 0x1800DDD80 (-Create@SharedData@CRoundedRectangleShape@@SAPEAV12@AEBUCRoundedRectangleGeometryData@@@Z.c)
 */

__int64 __fastcall CEllipseGeometry::GetShapeDataCore(
        CEllipseGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  float v3; // xmm2_4
  unsigned int v4; // ebp
  float v5; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 result; // rax
  float v12[13]; // [rsp+30h] [rbp-48h] BYREF
  char v13; // [rsp+64h] [rbp-14h]

  v3 = *((float *)this + 36);
  v4 = 0;
  v5 = *((float *)this + 37);
  v7 = *((float *)this + 34) - v3;
  v8 = *((float *)this + 35) - v5;
  v12[4] = v3;
  v12[5] = v5;
  v12[12] = 0.0;
  v13 = 1;
  v12[0] = v7;
  v12[1] = v8;
  v12[2] = v3 + v3;
  v12[3] = v5 + v5;
  v9 = CThreadLocalObjectCache<CRoundedRectangleShape,CRoundedRectangleShape>::Alloc();
  v10 = v9;
  if ( v9 )
  {
    v9[1] = 0LL;
    *v9 = &CRoundedRectangleShape::`vftable';
    v9[2] = CRoundedRectangleShape::SharedData::Create((const struct CRoundedRectangleGeometryData *)v12);
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))v10 + 2);
  }
  else
  {
    v10 = 0LL;
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x62u, 0LL);
  }
  CShapePtr::~CShapePtr(a3);
  *(_QWORD *)a3 = v10;
  result = v4;
  *((_BYTE *)a3 + 8) = 1;
  return result;
}
