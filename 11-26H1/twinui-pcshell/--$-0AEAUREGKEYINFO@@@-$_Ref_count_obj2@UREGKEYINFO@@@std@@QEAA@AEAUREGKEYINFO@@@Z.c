/*
 * XREFs of ??$?0AEAUREGKEYINFO@@@?$_Ref_count_obj2@UREGKEYINFO@@@std@@QEAA@AEAUREGKEYINFO@@@Z @ 0x1802B09F8
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1800F91FC (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Ref_count_obj2<REGKEYINFO>::_Ref_count_obj2<REGKEYINFO>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<REGKEYINFO>::`vftable';
  std::wstring::wstring(a1 + 24);
  std::wstring::wstring(a1 + 64);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 16) = *v4;
  std::wstring::operator=((_QWORD *)(a1 + 24), v4 + 1);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 40);
  std::wstring::operator=((_QWORD *)(a1 + 64), (_QWORD *)(a2 + 48));
  return a1;
}
