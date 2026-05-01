/*
 * XREFs of ??0REGKEYINFO@@QEAA@PEAUHKEY__@@PEBGW4StartupAppLocation@@1@Z @ 0x1801E2CA0
 * Callers:
 *     ??0StartupAppMonitor@@QEAA@XZ @ 0x1801E2A10 (--0StartupAppMonitor@@QEAA@XZ.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x18002A5E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall REGKEYINFO::REGKEYINFO(__int64 a1, __int64 a2, _WORD *a3, int a4, _WORD *Src)
{
  __int64 v7; // rcx

  v7 = a1 + 8;
  *(_OWORD *)v7 = 0LL;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = 7LL;
  *(_WORD *)v7 = 0;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 7LL;
  *(_WORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)a1 = a2;
  std::wstring::operator=((void **)v7, a3);
  *(_DWORD *)(a1 + 40) = a4;
  std::wstring::operator=((void **)(a1 + 48), Src);
  return a1;
}
