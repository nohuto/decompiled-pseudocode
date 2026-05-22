/*
 * XREFs of ??$move@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@0@V10@00@Z @ 0x1800F4AB4
 * Callers:
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800683E8 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 * Callees:
 *     ??4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z @ 0x180062910 (--4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

__m128i *__fastcall std::move<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>>(
        __m128i *a1,
        __int128 *a2,
        __int128 *a3,
        __m128i *a4)
{
  __m128i v4; // xmm2
  __int64 v6; // r14
  __int128 v7; // xmm1
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __m128i *result; // rax
  __m128i v11; // [rsp+30h] [rbp-28h]
  __int128 v12; // [rsp+40h] [rbp-18h]

  v4 = *a4;
  v6 = a4->m128i_i64[0];
  v7 = *a2;
  v12 = *a3;
  v8 = *((_QWORD *)a2 + 1);
  v9 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v11 = *a4;
  while ( v8 != *((_QWORD *)&v12 + 1) )
  {
    PointerInputMediator::PointerFrame::operator=(
      *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * (v9++ & (*(_QWORD *)(v6 + 16) - 1LL))),
      *(_QWORD *)(*(_QWORD *)(v7 + 8) + 8 * (v8 & (*(_QWORD *)(v7 + 16) - 1LL))));
    v11.m128i_i64[1] = v9;
    ++v8;
    v4 = v11;
  }
  result = a1;
  *a1 = v4;
  return result;
}
