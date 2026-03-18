/*
 * XREFs of ??$?0V?$span_iterator@PEAVCLight@@@details@gsl@@$0A@@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@QEAA@V?$span_iterator@PEAVCLight@@@details@gsl@@0AEBV?$allocator@PEAVCLight@@@1@@Z @ 0x18025A460
 * Callers:
 *     ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCLight@@$0?0@gsl@@@Z @ 0x18025A5D0 (--0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MM.c)
 * Callees:
 *     ??$_Construct_n@PEAPEAVCLight@@PEAPEAV1@@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@AEAAX_K$$QEAPEAPEAVCLight@@1@Z @ 0x18025A510 (--$_Construct_n@PEAPEAVCLight@@PEAPEAV1@@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@st.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *std::vector<CLight *>::vector<CLight *>(_QWORD *a1, __m128i *a2, __m128i *a3, ...)
{
  unsigned __int64 v3; // xmm0_8
  __m128i v4; // xmm1
  __m128i v6; // xmm2
  __int64 v7; // rax
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v3 = a3[1].m128i_u64[0];
  v4 = *a3;
  *a1 = 0LL;
  v6 = *a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v6.m128i_i64[0] != v4.m128i_i64[0]
    || _mm_srli_si128(v6, 8).m128i_u64[0] != _mm_srli_si128(v4, 8).m128i_u64[0]
    || a2[1].m128i_i64[0] > v3 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  }
  v7 = a2[1].m128i_i64[0];
  v10 = a3[1].m128i_i64[0];
  v9 = v7;
  std::vector<CLight *>::_Construct_n<CLight * *,CLight * *>(a1, (v10 - v7) >> 3, &v9, (__int64 *)va);
  return a1;
}
