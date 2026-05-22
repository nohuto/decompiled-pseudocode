/*
 * XREFs of ??$move_backward@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x18015C480
 * Callers:
 *     ?erase@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@0@Z @ 0x180096F18 (-erase@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@@@s.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall std::move_backward<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>(
        __m128i *a1,
        __int128 *a2,
        __int64 *a3,
        __m128i *a4)
{
  __m128i v4; // xmm2
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __m128i *result; // rax
  __m128i v10; // [rsp+10h] [rbp-28h]
  __int128 v11; // [rsp+20h] [rbp-18h]

  v4 = *a4;
  v5 = a4->m128i_i64[0];
  v6 = a3[1];
  v7 = *a3;
  v8 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v10 = *a4;
  v11 = *a2;
  while ( *((_QWORD *)&v11 + 1) != v6 )
  {
    v10.m128i_i64[1] = --v8;
    v4 = v10;
    --v6;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * ((*(_QWORD *)(v5 + 16) - 1LL) & (v8 >> 1))) + 8 * (v8 & 1)) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * ((*(_QWORD *)(v7 + 16) - 1LL) & (v6 >> 1))) + 8 * (v6 & 1));
  }
  result = a1;
  *a1 = v4;
  return result;
}
