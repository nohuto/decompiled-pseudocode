/*
 * XREFs of ?AddDirtyRects@?$CTargetDirtyBase@$07@@QEAAXAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1800557B0
 * Callers:
 *     ?AddDirtyRegion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x18005571C (-AddDirtyRegion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180057560 (-AddDirtyRegionAndCalcOcclusion@-$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z.c)
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1801FD0C0 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 * Callees:
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057AB0 (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__m128i *__fastcall CTargetDirtyBase<8>::AddDirtyRects(__int64 a1, _QWORD *a2)
{
  __m128i *result; // rax
  const __m128i *v5; // rdi
  const __m128i *v6; // rsi
  float v7; // xmm8_4
  float v8; // xmm7_4
  float v9; // xmm6_4
  float v10; // xmm9_4
  __m128i v11; // xmm0
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm2_4
  __m128i v15; // [rsp+20h] [rbp-68h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = (__m128i *)&retaddr;
  if ( !*(_BYTE *)(a1 + 1872) )
  {
    result = (__m128i *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8));
    v5 = (const __m128i *)a2[1];
    v6 = &v5[*a2];
    v15 = *result;
    if ( v5 != v6 )
    {
      v7 = *(float *)&v15.m128i_i32[3];
      v8 = *(float *)&v15.m128i_i32[2];
      v9 = *(float *)&v15.m128i_i32[1];
      v10 = *(float *)v15.m128i_i32;
      do
      {
        v11 = _mm_loadu_si128(v5);
        v15 = v11;
        if ( v10 > *(float *)v11.m128i_i32 )
        {
          *(float *)v11.m128i_i32 = v10;
          *(float *)v15.m128i_i32 = v10;
        }
        v12 = *(float *)&v15.m128i_i32[1];
        if ( v9 > *(float *)&v15.m128i_i32[1] )
        {
          *(float *)&v15.m128i_i32[1] = v9;
          v12 = v9;
        }
        v13 = *(float *)&v15.m128i_i32[2];
        if ( *(float *)&v15.m128i_i32[2] > v8 )
        {
          *(float *)&v15.m128i_i32[2] = v8;
          v13 = v8;
        }
        v14 = *(float *)&v15.m128i_i32[3];
        if ( *(float *)&v15.m128i_i32[3] > v7 )
        {
          *(float *)&v15.m128i_i32[3] = v7;
          v14 = v7;
        }
        if ( v13 > *(float *)v11.m128i_i32 && v14 > v12 )
        {
          result = (__m128i *)CMergedRectBase<8>::Add(a1 + 16, &v15);
          if ( *(_QWORD *)(a1 + 464) )
            result = (__m128i *)(*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a1 + 8LL))(a1, &v15);
          *(_BYTE *)(a1 + 1873) = 1;
        }
        ++v5;
      }
      while ( v5 != v6 );
    }
  }
  return result;
}
