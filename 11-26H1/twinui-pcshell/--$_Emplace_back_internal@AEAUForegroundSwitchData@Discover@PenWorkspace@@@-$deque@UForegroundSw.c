/*
 * XREFs of ??$_Emplace_back_internal@AEAUForegroundSwitchData@Discover@PenWorkspace@@@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@AEAAXAEAUForegroundSwitchData@Discover@PenWorkspace@@@Z @ 0x1803EA994
 * Callers:
 *     ??$emplace_back@AEAUForegroundSwitchData@Discover@PenWorkspace@@@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAAAEAUForegroundSwitchData@Discover@PenWorkspace@@AEAU234@@Z @ 0x1803EB34C (--$emplace_back@AEAUForegroundSwitchData@Discover@PenWorkspace@@@-$deque@UForegroundSwitchData@D.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Address_subscript@?$_Deque_val@U?$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUtagPRESENTFRAME@@_K@Z @ 0x180357948 (-_Address_subscript@-$_Deque_val@U-$_Deque_simple_types@UtagPRESENTFRAME@@@std@@@std@@QEAAPEAUta.c)
 *     ?_Getblock@?$deque@UtagPRESENTFRAME@@V?$allocator@UtagPRESENTFRAME@@@std@@@std@@AEBA_J_K@Z @ 0x18035838C (-_Getblock@-$deque@UtagPRESENTFRAME@@V-$allocator@UtagPRESENTFRAME@@@std@@@std@@AEBA_J_K@Z.c)
 *     ?_Growmap@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@AEAAX_K@Z @ 0x1803ED910 (-_Growmap@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchDat.c)
 */

__int64 __fastcall std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Emplace_back_internal<PenWorkspace::Discover::ForegroundSwitchData &>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Growmap();
  a1[3] &= a1[2] - 1LL;
  v4 = a1[3] + a1[4];
  v5 = std::deque<tagPRESENTFRAME>::_Getblock((__int64)a1, v4);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits>(0xCuLL);
  result = std::_Deque_val<std::_Deque_simple_types<tagPRESENTFRAME>>::_Address_subscript((__int64)a1, v4);
  *(_QWORD *)result = *(_QWORD *)a2;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  ++a1[4];
  return result;
}
