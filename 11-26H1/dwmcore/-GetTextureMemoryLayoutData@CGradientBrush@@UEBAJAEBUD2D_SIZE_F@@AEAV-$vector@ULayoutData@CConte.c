/*
 * XREFs of ?GetTextureMemoryLayoutData@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18027E980
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x18027D7D0 (--$_Emplace_reallocate@AEBULayoutData@CContent@@@-$vector@ULayoutData@CContent@@V-$allocator@ULa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGradientBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __m128i si128; // xmm1
  __int64 v6; // rdx
  __m128i v8; // [rsp+20h] [rbp-40h] BYREF
  __m256i v9; // [rsp+30h] [rbp-30h]
  __int64 v10; // [rsp+50h] [rbp-10h]

  if ( *(_QWORD *)a3 != *(_QWORD *)(a3 + 8) )
    *(_QWORD *)(a3 + 8) = *(_QWORD *)a3;
  if ( *(_BYTE *)(a1 + 240) )
  {
    v4 = *(_QWORD *)(a1 + 120);
    v9.m256i_i64[0] = 0LL;
    v10 = 0LL;
    v9.m256i_i64[3] = 0LL;
    v8 = 0LL;
    *(__m128i *)&v9.m256i_u64[1] = _mm_load_si128((const __m128i *)&_xmm);
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64, __int64, __m128i *))(*(_QWORD *)v4 + 216LL))(v4, a2, &v8);
      si128 = v8;
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v8 = si128;
      v9.m256i_i64[0] = 0LL;
    }
    v6 = *(_QWORD *)(a3 + 8);
    if ( v6 == *(_QWORD *)(a3 + 16) )
    {
      std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
        (void **)a3,
        v6,
        (__int128 *)v8.m128i_i8);
    }
    else
    {
      *(__m128i *)v6 = si128;
      *(__m256i *)(v6 + 16) = v9;
      *(_QWORD *)(v6 + 48) = v10;
      *(_QWORD *)(a3 + 8) += 56LL;
    }
  }
  return 0LL;
}
