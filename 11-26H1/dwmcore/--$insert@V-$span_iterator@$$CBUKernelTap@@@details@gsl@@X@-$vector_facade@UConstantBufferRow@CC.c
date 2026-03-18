/*
 * XREFs of ??$insert@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@X@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@1@V?$basic_iterator@$$CBUConstantBufferRow@CCustomKernelEffect@@@1@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@1@Z @ 0x18015CAB8
 * Callers:
 *     ??0CCustomKernelEffect@@AEAA@W4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV?$span@$$CBUKernelTap@@$0?0@gsl@@@Z @ 0x18015C8A8 (--0CCustomKernelEffect@@AEAA@W4D3DShaderProfileVersion@@W4Enum@ExtendMode@@AEBV-$span@$$CBUKerne.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUConstantBufferRow@CCustomKernelEffect@@_K0@Z @ 0x18015CC10 (-reserve_region@-$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V-$buffer_impl@UConstant.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::insert<gsl::details::span_iterator<KernelTap const>,void>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __m128i *a4,
        __m128i *a5)
{
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  unsigned __int64 i; // rcx
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  _QWORD *result; // rax
  __m128i v14; // [rsp+40h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp-10h]

  v7 = *a3 - *a1;
  v8 = a2;
  i = a5->m128i_i64[0];
  v10 = v7 >> 4;
  if ( a5->m128i_i64[0] != a4->m128i_i64[0]
    || (i = _mm_srli_si128(*a5, 8).m128i_u64[0], i != _mm_srli_si128(*a4, 8).m128i_u64[0]) )
  {
LABEL_5:
    ((void (__fastcall *)(unsigned __int64, _QWORD *))`gsl::details::get_terminate_handler'::`2'::handler)(i, a2);
    __debugbreak();
  }
  a2 = (_QWORD *)detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::reserve_region(
                   a1,
                   v10,
                   0xAAAAAAAAAAAAAAABuLL * ((a5[1].m128i_i64[0] - a4[1].m128i_i64[0]) >> 2));
  v14 = *a5;
  v11 = a4->m128i_u64[1];
  v12 = a4->m128i_i64[0];
  v15 = a5[1].m128i_i64[0];
  for ( i = a4[1].m128i_u64[0]; ; i += 12LL )
  {
    if ( __PAIR128__(v11, v12) != *(_OWORD *)&v14 )
      goto LABEL_5;
    if ( i == v15 )
      break;
    if ( !v12 )
      goto LABEL_5;
    if ( !v11 )
      goto LABEL_5;
    if ( v12 > i )
      goto LABEL_5;
    if ( i >= v11 )
      goto LABEL_5;
    *a2 = *(_QWORD *)i;
    a2[1] = *(unsigned int *)(i + 8);
    if ( !i )
      goto LABEL_5;
    a2 += 2;
  }
  result = v8;
  *v8 = *a1 + 16 * v10;
  return result;
}
