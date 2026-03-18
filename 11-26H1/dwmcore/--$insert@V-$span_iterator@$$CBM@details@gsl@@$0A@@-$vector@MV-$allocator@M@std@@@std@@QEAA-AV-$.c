/*
 * XREFs of ??$insert@V?$span_iterator@$$CBM@details@gsl@@$0A@@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@$$CBM@details@gsl@@1@Z @ 0x18028283C
 * Callers:
 *     ?ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHARRAY@@PEBXI@Z @ 0x180282B08 (-ProcessSetStrokeDashArray@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECT.c)
 * Callees:
 *     ??$_Insert_counted_range@PEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@I@std@@@std@@@1@PEBI_K@Z @ 0x1801E7B2C (--$_Insert_counted_range@PEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAXV-$_Vector_const_iterator.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::vector<float>::insert<gsl::details::span_iterator<float const>,0>(
        char **a1,
        _QWORD *a2,
        char *a3,
        __int64 a4,
        __m128i *a5)
{
  char *v5; // rbp

  v5 = *a1;
  if ( *(_QWORD *)a4 != a5->m128i_i64[0]
    || _mm_srli_si128(*(__m128i *)a4, 8).m128i_u64[0] != _mm_srli_si128(*a5, 8).m128i_u64[0]
    || *(_QWORD *)(a4 + 16) > a5[1].m128i_i64[0] )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  }
  std::vector<unsigned int>::_Insert_counted_range<unsigned int const *>(
    a1,
    a3,
    *(const void **)(a4 + 16),
    (a5[1].m128i_i64[0] - *(_QWORD *)(a4 + 16)) >> 2);
  *a2 = &(*a1)[4 * ((a3 - v5) >> 2)];
  return a2;
}
