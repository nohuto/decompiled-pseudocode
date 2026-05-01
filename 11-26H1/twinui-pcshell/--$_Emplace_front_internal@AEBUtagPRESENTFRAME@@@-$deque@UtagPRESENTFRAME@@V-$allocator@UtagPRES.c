/*
 * XREFs of ??$_Emplace_front_internal@AEBUtagPRESENTFRAME@@@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAXAEBUtagPRESENTFRAME@@@Z @ 0x18033D3CC
 * Callers:
 *     ?PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180350550 (-PerfDataCollectionThread@GamingOverlayExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Address_subscript@?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUtagPRESENTFRAME@@_K@Z @ 0x180357948 (-_Address_subscript@-$_Deque_val@U-$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUta.c)
 *     ?_Getblock@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEBA_J_K@Z @ 0x18035838C (-_Getblock@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEBA_J_K@Z.c)
 *     ?_Growmap@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAX_K@Z @ 0x1803583A0 (-_Growmap@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEAAX_K@Z.c)
 */

_OWORD *__fastcall std::deque<tagPRESENTFRAME>::_Emplace_front_internal<tagPRESENTFRAME const &>(
        _QWORD *a1,
        _OWORD *a2)
{
  __int64 v4; // rcx
  bool v5; // zf
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rbp
  _OWORD *result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<tagPRESENTFRAME>::_Growmap();
  v4 = a1[2];
  v5 = ((v4 - 1) & a1[3]) == 0;
  a1[3] &= v4 - 1;
  v6 = a1[3];
  if ( v5 )
    v6 = v4;
  v7 = v6 - 1;
  v8 = std::deque<tagPRESENTFRAME>::_Getblock(a1, v7);
  if ( !*(_QWORD *)(a1[1] + 8 * v8) )
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
  result = (_OWORD *)std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>::_Address_subscript(a1, v7);
  *result = *a2;
  result[1] = a2[1];
  a1[3] = v7;
  ++a1[4];
  return result;
}
