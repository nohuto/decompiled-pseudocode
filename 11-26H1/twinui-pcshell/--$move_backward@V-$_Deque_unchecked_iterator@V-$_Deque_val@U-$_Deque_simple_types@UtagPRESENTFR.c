/*
 * XREFs of ??$move_backward@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@0@V10@00@Z @ 0x1803401F4
 * Callers:
 *     ?erase@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@0@Z @ 0x180359278 (-erase@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA-AV-$_Deque_iter.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall std::move_backward<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>>(
        __m128i *a1,
        __int128 *a2,
        __int64 *a3,
        __m128i *a4)
{
  __m128i v4; // xmm2
  __int64 v6; // r11
  __int128 v7; // xmm1
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  __int128 *v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _OWORD *v14; // rcx
  __m128i v16; // [rsp+10h] [rbp-28h]
  __int64 v17; // [rsp+28h] [rbp-10h]

  v4 = *a4;
  v6 = a4->m128i_i64[0];
  v7 = *a2;
  v8 = a3[1];
  v9 = *a3;
  v10 = _mm_srli_si128(v4, 8).m128i_u64[0];
  v16.m128i_i64[0] = v4.m128i_i64[0];
  v17 = *((_QWORD *)&v7 + 1);
  while ( v17 != v8 )
  {
    --v8;
    v16.m128i_i64[1] = --v10;
    v4 = v16;
    v11 = *(__int128 **)(*(_QWORD *)(v9 + 8) + 8 * (v8 & (*(_QWORD *)(v9 + 16) - 1LL)));
    v12 = *v11;
    v13 = v11[1];
    v14 = *(_OWORD **)(*(_QWORD *)(v6 + 8) + 8 * (v10 & (*(_QWORD *)(v6 + 16) - 1LL)));
    *v14 = v12;
    v14[1] = v13;
  }
  *a1 = v4;
  return a1;
}
