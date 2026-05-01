/*
 * XREFs of ??0ExeData@@QEAA@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x18057470C
 * Callers:
 *     ??$?0V?$tuple@AEBQEAUHWND__@@@std@@V?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@$0A@$$Z$0A@$00$01@?$pair@QEAUHWND__@@UExeData@@@std@@AEAA@AEAV?$tuple@AEBQEAUHWND__@@@1@AEAV?$tuple@AEAIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV12@@1@U?$integer_sequence@_K$0A@@1@U?$integer_sequence@_K$0A@$00$01@1@@Z @ 0x180573788 (--$-0V-$tuple@AEBQEAUHWND__@@@std@@V-$tuple@AEAIAEBV-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ?FindExeDataForPid@Win32AppInfo@@QEAA?AV?$optional@UExeData@@@std@@I@Z @ 0x180574CA8 (-FindExeDataForPid@Win32AppInfo@@QEAA-AV-$optional@UExeData@@@std@@I@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall ExeData::ExeData(_DWORD *a1, int a2, _QWORD *a3, _QWORD *a4)
{
  *a1 = a2;
  std::wstring::wstring((__int64)(a1 + 2), a3);
  std::wstring::wstring((__int64)(a1 + 10), a4);
  return a1;
}
