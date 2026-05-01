/*
 * XREFs of ??$?0AEAUREGKEYINFO@@@?$_Ref_count_obj2@UREGKEYINFO@@@std@@QEAA@AEAUREGKEYINFO@@@Z @ 0x1802B4030
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1800C2600 (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800AEF48 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj2<REGKEYINFO>::_Ref_count_obj2<REGKEYINFO>(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<REGKEYINFO>::`vftable';
  v4 = a1 + 64;
  v5 = a1 + 24;
  *(_OWORD *)v5 = 0LL;
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 7LL;
  *(_WORD *)v5 = 0;
  *(_OWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 7LL;
  *(_WORD *)v4 = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  std::wstring::operator=(v5, a2 + 8);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 40);
  std::wstring::operator=(v4, a2 + 48);
  return a1;
}
