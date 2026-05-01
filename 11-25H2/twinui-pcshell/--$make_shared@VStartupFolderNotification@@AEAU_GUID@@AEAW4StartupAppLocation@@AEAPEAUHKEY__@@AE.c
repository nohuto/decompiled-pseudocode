/*
 * XREFs of ??$make_shared@VStartupFolderNotification@@AEAU_GUID@@AEAW4StartupAppLocation@@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VStartupFolderNotification@@@0@AEAU_GUID@@AEAW4StartupAppLocation@@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x18055FC10
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1800C2600 (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ??0StartupFolderNotification@@QEAA@U_GUID@@W4StartupAppLocation@@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180561E44 (--0StartupFolderNotification@@QEAA@U_GUID@@W4StartupAppLocation@@PEAUHKEY__@@V-$basic_string@GU-.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<StartupFolderNotification,_GUID &,enum StartupAppLocation &,HKEY__ * &,std::wstring &>(
        _QWORD *a1,
        __int128 *a2,
        unsigned int *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 v9; // rax
  __int128 v11; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v12[32]; // [rsp+50h] [rbp-38h] BYREF
  _DWORD *v13; // [rsp+90h] [rbp+8h]

  v13 = operator new(0x78uLL);
  *(_OWORD *)v13 = 0LL;
  v13[2] = 1;
  v13[3] = 1;
  *(_QWORD *)v13 = &std::_Ref_count_obj2<StartupFolderNotification>::`vftable';
  v9 = std::wstring::wstring((__int64)v12, a5);
  v11 = *a2;
  StartupFolderNotification::StartupFolderNotification(v13 + 4, &v11, *a3, *a4, v9);
  *a1 = v13 + 4;
  a1[1] = v13;
  return a1;
}
