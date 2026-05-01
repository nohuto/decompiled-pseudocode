/*
 * XREFs of ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180576934
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x180575C9C (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180571CD0 (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 *     ??1AppInventoryData@@QEAA@XZ @ 0x1805767C4 (--1AppInventoryData@@QEAA@XZ.c)
 *     ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x1805767F4 (-ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@.c)
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x180576ACC (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ComputeAppIdFromExePath(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD v6[4]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v7[32]; // [rsp+50h] [rbp-78h] BYREF

  GetCertSignerHashFromExe((__int64)v6, a2, a3);
  GetAppInventoryData(v7, a2);
  Windows::Internal::FamilySafety::AppLimits::ComposeWin32AppId(a1, a2, v6);
  AppInventoryData::~AppInventoryData((AppInventoryData *)v7);
  std::wstring::_Tidy_deallocate(v6);
  return a1;
}
