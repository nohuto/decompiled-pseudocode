/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@0@V10@00@Z @ 0x18034008C
 * Callers:
 *     ?erase@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@@2@0@Z @ 0x180353130 (-erase@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@QEAA-AV-$_Deque_iter.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>>>(
        __int64 **a1,
        __int64 a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 *v5; // rsi
  __int64 *v6; // rdi
  __int64 v7; // r8
  __int64 *v8; // rdx
  __int64 v9; // r11
  __int128 *v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _OWORD *v13; // rcx
  __int64 **result; // rax

  v5 = *(__int64 **)(a2 + 16);
  v6 = a3[2];
  if ( *a3 )
    v7 = **a3;
  else
    v7 = 0LL;
  v8 = a4[2];
  if ( *a4 )
    v9 = **a4;
  else
    v9 = 0LL;
  while ( v5 != v6 )
  {
    v6 = (__int64 *)((char *)v6 - 1);
    v8 = (__int64 *)((char *)v8 - 1);
    v10 = *(__int128 **)(*(_QWORD *)(v7 + 8) + 8 * ((unsigned __int64)v6 & (*(_QWORD *)(v7 + 16) - 1LL)));
    v11 = *v10;
    v12 = v10[1];
    v13 = *(_OWORD **)(*(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)v8 & (*(_QWORD *)(v9 + 16) - 1LL)));
    *v13 = v11;
    v13[1] = v12;
  }
  result = a1;
  a4[2] = v8;
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a4;
  a1[2] = a4[2];
  return result;
}
