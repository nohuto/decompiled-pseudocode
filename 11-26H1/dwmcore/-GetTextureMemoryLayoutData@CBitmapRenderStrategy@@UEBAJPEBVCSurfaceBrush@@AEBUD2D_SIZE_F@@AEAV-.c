/*
 * XREFs of ?GetTextureMemoryLayoutData@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180283AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180038E20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z @ 0x18020305C (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@PEAULayoutData@CContent@@@Z.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x18027D7D0 (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapRenderStrategy::GetTextureMemoryLayoutData(
        __int64 a1,
        CSurfaceBrush *a2,
        const struct D2D_SIZE_F *a3,
        __int64 a4)
{
  unsigned int v4; // edi
  int v8; // eax
  __int128 v9; // xmm1
  __int64 v10; // rdx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v14; // [rsp+30h] [rbp-39h] BYREF
  __int128 v15; // [rsp+40h] [rbp-29h]
  __int128 v16; // [rsp+50h] [rbp-19h]
  __int64 v17; // [rsp+60h] [rbp-9h]
  __m128i si128; // [rsp+68h] [rbp-1h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int128 v20; // [rsp+80h] [rbp+17h] BYREF
  __int64 v21; // [rsp+90h] [rbp+27h]

  v4 = 0;
  if ( *(_QWORD *)a4 != *(_QWORD *)(a4 + 8) )
    *(_QWORD *)(a4 + 8) = *(_QWORD *)a4;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(**((_QWORD **)a2 + 23) + 64LL))(
         *((_QWORD **)a2 + 23),
         31LL) )
  {
    v17 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v8 = CSurfaceBrush::ComputeLayout(a2, a3, (struct CContent::LayoutData *)&v14);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x3D7u, 0LL);
    }
    else
    {
      if ( *((float *)&v15 + 2) > 0.0 || *((float *)&v15 + 3) > 0.0 )
      {
        v19 = *((_QWORD *)&v15 + 1);
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        D2D1::Matrix3x2F::SetProduct(
          (D2D1::Matrix3x2F *)&v20,
          (const struct D2D1::Matrix3x2F *)&si128,
          (const struct D2D1::Matrix3x2F *)&v14);
        v9 = v20;
        v14 = v20;
        *(_QWORD *)&v15 = v21;
      }
      else
      {
        v9 = v14;
      }
      v10 = *(_QWORD *)(a4 + 8);
      if ( v10 == *(_QWORD *)(a4 + 16) )
      {
        std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>((void **)a4, v10, &v14);
      }
      else
      {
        v11 = v15;
        *(_OWORD *)v10 = v9;
        v12 = v16;
        *(_OWORD *)(v10 + 16) = v11;
        *(_QWORD *)&v11 = v17;
        *(_OWORD *)(v10 + 32) = v12;
        *(_QWORD *)(v10 + 48) = v11;
        *(_QWORD *)(a4 + 8) += 56LL;
      }
    }
  }
  return v4;
}
