/*
 * XREFs of ??0REGKEYINFO@@QEAA@PEAUHKEY__@@PEBGW4StartupAppLocation@@1@Z @ 0x1801D7024
 * Callers:
 *     ??0StartupAppMonitor@@QEAA@XZ @ 0x1801D6E40 (--0StartupAppMonitor@@QEAA@XZ.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180030514 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall REGKEYINFO::REGKEYINFO(__int64 a1, __int64 a2, __int64 a3, int a4, void *Src)
{
  __int64 v7; // rdx
  void *v8; // r8

  std::wstring::wstring(a1 + 8);
  std::wstring::wstring(a1 + 48);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)a1 = v7;
  std::wstring::operator=((char *)(a1 + 8), v8);
  *(_DWORD *)(a1 + 40) = a4;
  std::wstring::operator=((char *)(a1 + 48), Src);
  return a1;
}
