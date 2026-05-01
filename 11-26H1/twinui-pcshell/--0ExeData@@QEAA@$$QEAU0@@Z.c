/*
 * XREFs of ??0ExeData@@QEAA@$$QEAU0@@Z @ 0x180574688
 * Callers:
 *     ?FindExeDataForPid@Win32AppInfo@@QEAA?AV?$optional@UExeData@@@std@@I@Z @ 0x180574CA8 (-FindExeDataForPid@Win32AppInfo@@QEAA-AV-$optional@UExeData@@@std@@I@Z.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575C9C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall ExeData::ExeData(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // r9

  *a1 = *a2;
  std::wstring::wstring((__int64)(a1 + 2), (__int64)(a2 + 2));
  std::wstring::wstring(v3 + 40, v2 + 40);
  return v4;
}
