/*
 * XREFs of ??$_Emplace_back_internal@AEAUCRect@Geometry@@@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXAEAUCRect@Geometry@@@Z @ 0x1805A5BF8
 * Callers:
 *     ??$SetGuidedSnapAssistRegions@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCRect@Geometry@@@std@@@std@@@std@@0@Z @ 0x18029410C (--$SetGuidedSnapAssistRegions@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UCRect@Geometr.c)
 * Callees:
 *     ?_Growmap@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1801F33E4 (-_Growmap@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Address_subscript@?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUtagPRESENTFRAME@@_K@Z @ 0x180357948 (-_Address_subscript@-$_Deque_val@U-$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUta.c)
 *     ?_Getblock@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEBA_J_K@Z @ 0x18035838C (-_Getblock@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEBA_J_K@Z.c)
 */

_OWORD *__fastcall std::deque<tagRECT>::_Emplace_back_internal<Geometry::CRect &>(_QWORD *a1, _OWORD *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  _OWORD *result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<winrt::guid>::_Growmap(a1);
  a1[3] &= a1[2] - 1LL;
  v4 = a1[3] + a1[4];
  v5 = std::deque<tagPRESENTFRAME>::_Getblock((__int64)a1, v4);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits>(0x10uLL);
  result = (_OWORD *)std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>::_Address_subscript((__int64)a1, v4);
  *result = *a2;
  ++a1[4];
  return result;
}
