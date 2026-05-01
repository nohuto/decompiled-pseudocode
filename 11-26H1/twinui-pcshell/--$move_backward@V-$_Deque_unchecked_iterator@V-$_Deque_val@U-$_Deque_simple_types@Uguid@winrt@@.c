/*
 * XREFs of ??$move_backward@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@Uguid@winrt@@@std@@@std@@@0@V10@00@Z @ 0x180580660
 * Callers:
 *     ?erase@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@0@Z @ 0x1800CBC08 (-erase@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_v.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall std::move_backward<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<winrt::guid>>>>(
        __m128i *a1,
        __int128 *a2,
        __int64 *a3,
        __m128i *a4)
{
  __m128i v4; // xmm2
  __int64 v5; // r11
  __int128 v6; // xmm1
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  __m128i v11; // [rsp+10h] [rbp-28h]

  v4 = *a4;
  v5 = a4->m128i_i64[0];
  v6 = *a2;
  v7 = a3[1];
  v8 = *a3;
  v9 = _mm_srli_si128(v4, 8).m128i_u64[0];
  v11.m128i_i64[0] = v4.m128i_i64[0];
  while ( *((_QWORD *)&v6 + 1) != v7 )
  {
    --v7;
    v11.m128i_i64[1] = --v9;
    v4 = v11;
    *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * (v9 & (*(_QWORD *)(v5 + 16) - 1LL))) = *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * (v7 & (*(_QWORD *)(v8 + 16) - 1LL)));
  }
  *a1 = v4;
  return a1;
}
