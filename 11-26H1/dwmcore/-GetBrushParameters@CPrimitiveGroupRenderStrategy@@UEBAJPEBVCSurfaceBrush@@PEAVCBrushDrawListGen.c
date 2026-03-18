/*
 * XREFs of ?GetBrushParameters@CPrimitiveGroupRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x18009CDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z @ 0x180009D20 (-reset@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std@@@std@@QEAAXPEAVCShape@@@Z.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x18003A430 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FromD2D1InterpolationMode@InterpolationMode@@YA?AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x18009CFD0 (-FromD2D1InterpolationMode@InterpolationMode@@YA-AW4Enum@1@W4D2D1_INTERPOLATION_MODE@@@Z.c)
 *     ?GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18009CFF0 (-GetDrawListGeneratorNoRef@CPrimitiveGroup@@QEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x18009E2F0 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEAPEAV1@@Z @ 0x18009E4F0 (-Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEA.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z.c)
 */

__int64 __fastcall CPrimitiveGroupRenderStrategy::GetBrushParameters(
        CPrimitiveGroupRenderStrategy *this,
        const struct CSurfaceBrush *a2,
        struct CBrushDrawListGenerator *a3)
{
  CPrimitiveGroup *v5; // r14
  int DrawListGeneratorNoRef; // eax
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // xmm1_8
  __m128 v10; // xmm0
  CPrimitiveGroupDrawListBrush *v11; // rdx
  int v12; // eax
  unsigned int v14; // [rsp+20h] [rbp-60h]
  CPrimitiveGroupDrawListBrush *v15; // [rsp+38h] [rbp-48h] BYREF
  char v16; // [rsp+40h] [rbp-40h]
  _OWORD v17[3]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v18; // [rsp+78h] [rbp-8h]
  CPrimitiveGroupDrawListBrush *v19; // [rsp+B8h] [rbp+38h]
  char v20; // [rsp+C0h] [rbp+40h] BYREF
  __int16 v21; // [rsp+C1h] [rbp+41h]
  struct CPrimitiveGroupDrawListGenerator *v22; // [rsp+C8h] [rbp+48h] BYREF

  CBrushDrawListGenerator::Reset(a3);
  v5 = (CPrimitiveGroup *)*((_QWORD *)a2 + 23);
  v22 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  DrawListGeneratorNoRef = CSurfaceBrush::ComputeLayout(
                             a2,
                             (const struct D2D_SIZE_F *)((char *)a3 + 44),
                             (struct CContent::LayoutData *)v17);
  v7 = DrawListGeneratorNoRef;
  if ( DrawListGeneratorNoRef < 0 )
  {
    v14 = 1724;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawListGeneratorNoRef, v14, 0LL);
    goto LABEL_11;
  }
  DrawListGeneratorNoRef = CPrimitiveGroup::GetDrawListGeneratorNoRef(v5, &v22);
  v7 = DrawListGeneratorNoRef;
  if ( DrawListGeneratorNoRef < 0 )
  {
    v14 = 1726;
    goto LABEL_15;
  }
  v8 = *((unsigned int *)a2 + 45);
  v15 = 0LL;
  v16 = 1;
  v20 = InterpolationMode::FromD2D1InterpolationMode(v8);
  v21 = 257;
  v7 = CPrimitiveGroupDrawListBrush::Create(v22, &v20, &v15);
  if ( v16 )
    v19 = v15;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x6C1u, 0LL);
  }
  else
  {
    v9 = *(_QWORD *)&v17[1];
    *(_OWORD *)((char *)v19 + 8) = v17[0];
    v10 = *(__m128 *)((char *)&v17[1] + 8);
    *((_QWORD *)v19 + 3) = v9;
    *((_BYTE *)v19 + 52) = 1;
    *((__m128 *)v19 + 2) = v10;
    *((_DWORD *)v19 + 12) = 50529027;
    if ( *((_BYTE *)a2 + 140) )
    {
      *((_DWORD *)v19 + 14) = v10.m128_i32[0];
      *((_DWORD *)v19 + 15) = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
      *((_BYTE *)v19 + 64) = 1;
    }
    v11 = v19;
    v19 = 0LL;
    std::unique_ptr<CShape>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))a3 + 1,
      (__int64 (__fastcall ***)(_QWORD, __int64))v11);
    v12 = 1;
    if ( *((_DWORD *)a3 + 10) > 1u )
      v12 = *((_DWORD *)a3 + 10);
    *((_DWORD *)a3 + 10) = v12;
  }
LABEL_11:
  if ( v19 )
    CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v19, 1u);
  return (unsigned int)v7;
}
