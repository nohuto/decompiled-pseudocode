/*
 * XREFs of ??$move@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@0@V10@00@Z @ 0x1805805C8
 * Callers:
 *     ?erase@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagRECT@@@std@@@std@@@2@0@Z @ 0x1800CBC08 (-erase@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-AV-$_Deque_iterator@V-$_Deque_v.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall std::move<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<tagRECT>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<tagRECT>>>>(
        __m128i *a1,
        __int128 *a2,
        __int128 *a3,
        __m128i *a4)
{
  __m128i v4; // xmm2
  __int64 v6; // r11
  __int128 v7; // xmm1
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int128 v10; // xmm0
  __int64 v11; // rcx
  __m128i v13; // [rsp+10h] [rbp-28h]
  __int128 v14; // [rsp+20h] [rbp-18h]

  v4 = *a4;
  v6 = a4->m128i_i64[0];
  v7 = *a2;
  v14 = *a3;
  v8 = *((_QWORD *)a2 + 1);
  v9 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v13.m128i_i64[0] = a4->m128i_i64[0];
  while ( v8 != *((_QWORD *)&v14 + 1) )
  {
    v10 = *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * (v8 & (*(_QWORD *)(v7 + 16) - 1LL)));
    v11 = v9++ & (*(_QWORD *)(v6 + 16) - 1LL);
    v13.m128i_i64[1] = v9;
    ++v8;
    v4 = v13;
    *(_OWORD *)*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * v11) = v10;
  }
  *a1 = v4;
  return a1;
}
