/*
 * XREFs of ??$emplace_back@AEAUForegroundSwitchData@Discover@PenWorkspace@@@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAA?A_TAEAUForegroundSwitchData@Discover@PenWorkspace@@@Z @ 0x1803E1CF4
 * Callers:
 *     ?OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z @ 0x1803E35EC (-OnForegroundProcessChanged@RecentAppsCache@Discover@PenWorkspace@@QEAAJKKIIIII@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@AEAAX_K@Z @ 0x1803E421C (-_Growmap@-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchDat.c)
 */

__int64 __fastcall std::deque<PenWorkspace::Discover::ForegroundSwitchData>::emplace_back<PenWorkspace::Discover::ForegroundSwitchData &>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<PenWorkspace::Discover::ForegroundSwitchData>::_Growmap();
  v4 = a1[2] - 1LL;
  a1[3] &= v4;
  v5 = v4 & (a1[3] + a1[4]);
  if ( !*(_QWORD *)(a1[1] + 8 * v5) )
    *(_QWORD *)(a1[1] + 8 * v5) = std::_Allocate<16,std::_Default_allocate_traits,0>(0xCuLL);
  v6 = *(_QWORD *)(a1[1] + 8 * v5);
  *(_QWORD *)v6 = *(_QWORD *)a2;
  *(_DWORD *)(v6 + 8) = *(_DWORD *)(a2 + 8);
  ++a1[4];
  return *(_QWORD *)(a1[1] + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + a1[4])));
}
