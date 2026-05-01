/*
 * XREFs of ??$_Assign_range@V?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@V12@@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXV?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@1@V21@@Z @ 0x1805584EC
 * Callers:
 *     ??4?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1802CA5B0 (--4-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1801A8C50 (--$_Emplace_back_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 */

_UNKNOWN **__fastcall std::deque<unsigned __int64>::_Assign_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>,std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // r11
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned __int64 i; // r11
  __int64 v14; // rbp
  unsigned __int64 v15; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a1[3];
  v7 = v4 + a1[4];
  while ( 1 )
  {
    if ( v4 == v7 )
    {
      v14 = *(_QWORD *)(a3 + 8);
      while ( 1 )
      {
        v15 = a2[1];
        if ( v15 == v14 )
          break;
        std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>(
          (__int64)a1,
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(*a2 + 8LL) + 8 * ((v15 >> 1) & (*(_QWORD *)(*a2 + 16LL) - 1LL)))
                    + 8 * (a2[1] & 1LL)));
        result = (_UNKNOWN **)(v15 + 1);
        a2[1] = v15 + 1;
      }
      return result;
    }
    v9 = a2[1];
    if ( v9 == *(_QWORD *)(a3 + 8) )
      break;
    v10 = v4 & 1;
    v11 = (a1[2] - 1LL) & (v4++ >> 1);
    *(_QWORD *)(*(_QWORD *)(a1[1] + 8 * v11) + 8 * v10) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a2 + 8LL)
                                                                                + 8
                                                                                * ((v9 >> 1) & (*(_QWORD *)(*a2 + 16LL)
                                                                                              - 1LL)))
                                                                    + 8 * (a2[1] & 1LL));
    result = (_UNKNOWN **)(v9 + 1);
    a2[1] = v9 + 1;
  }
  for ( i = v7 - v4; i; --i )
  {
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  return result;
}
