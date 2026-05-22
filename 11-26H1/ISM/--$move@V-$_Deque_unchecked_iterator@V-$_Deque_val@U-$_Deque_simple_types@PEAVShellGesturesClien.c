/*
 * XREFs of ??$move@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x18015C3B0
 * Callers:
 *     ?erase@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@0@Z @ 0x180096F18 (-erase@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@@@s.c)
 * Callees:
 *     <none>
 */

__m128i *__fastcall std::move<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>(
        __m128i *a1,
        __int128 *a2,
        __int128 *a3,
        __m128i *a4)
{
  __m128i v4; // xmm2
  __int64 v5; // rbp
  __int128 v6; // xmm1
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __m128i *result; // rax
  __m128i v14; // [rsp+10h] [rbp-28h]
  __int128 v15; // [rsp+20h] [rbp-18h]

  v4 = *a4;
  v5 = a4->m128i_i64[0];
  v6 = *a2;
  v15 = *a3;
  v7 = *((_QWORD *)a2 + 1);
  v8 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v14 = *a4;
  while ( v7 != *((_QWORD *)&v15 + 1) )
  {
    v9 = v8 & 1;
    v10 = v8++;
    v11 = (v10 >> 1) & (*(_QWORD *)(v5 + 16) - 1LL);
    v14.m128i_i64[1] = v8;
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * ((v7 >> 1) & (*(_QWORD *)(v6 + 16) - 1LL))) + 8 * (v7 & 1));
    ++v7;
    v4 = v14;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 8 * v11) + 8 * v9) = v12;
  }
  result = a1;
  *a1 = v4;
  return result;
}
