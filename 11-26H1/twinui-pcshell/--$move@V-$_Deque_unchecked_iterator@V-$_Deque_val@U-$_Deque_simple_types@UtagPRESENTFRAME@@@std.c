/*
 * XREFs of ??$move@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@0@V10@00@Z @ 0x180340154
 * Callers:
 *     ?erase@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@0@Z @ 0x180359278 (-erase@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA-AV-$_Deque_iter.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall std::move<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>>(
        __m128i *a1,
        __int128 *a2,
        __int128 *a3,
        __m128i *a4)
{
  __m128i v4; // xmm2
  __int64 v6; // r11
  __int64 v7; // rdx
  __int128 v8; // kr00_16
  unsigned __int64 v9; // r8
  __int128 *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rcx
  _OWORD *v14; // rcx
  __m128i v16; // [rsp+10h] [rbp-28h]
  __int128 v17; // [rsp+20h] [rbp-18h]

  v4 = *a4;
  v6 = a4->m128i_i64[0];
  v17 = *a3;
  v8 = *a2;
  v7 = *((_QWORD *)a2 + 1);
  v9 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v16.m128i_i64[0] = a4->m128i_i64[0];
  while ( v7 != *((_QWORD *)&v17 + 1) )
  {
    v10 = *(__int128 **)(*(_QWORD *)(v8 + 8) + 8 * (v7 & (*(_QWORD *)(v8 + 16) - 1LL)));
    v11 = *v10;
    v12 = v10[1];
    v13 = v9++ & (*(_QWORD *)(v6 + 16) - 1LL);
    v16.m128i_i64[1] = v9;
    ++v7;
    v4 = v16;
    v14 = *(_OWORD **)(*(_QWORD *)(v6 + 8) + 8 * v13);
    *v14 = v11;
    v14[1] = v12;
  }
  *a1 = v4;
  return a1;
}
