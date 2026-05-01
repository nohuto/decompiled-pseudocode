/*
 * XREFs of ??$make_shared@VStartupRegKeyNotification@@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAW4StartupAppLocation@@AEAV34@@std@@YA?AV?$shared_ptr@VStartupRegKeyNotification@@@0@AEAPEAUHKEY__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEAW4StartupAppLocation@@1@Z @ 0x18013D444
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1800F91FC (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4StartupAppLocation@@1@Z @ 0x18013D094 (--0StartupRegKeyNotification@@QEAA@PEAUHKEY__@@V-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<StartupRegKeyNotification,HKEY__ * &,std::wstring &,enum StartupAppLocation &,std::wstring &>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  _BYTE v12[32]; // [rsp+48h] [rbp-70h] BYREF
  _BYTE v13[40]; // [rsp+68h] [rbp-50h] BYREF
  _DWORD *v14; // [rsp+C0h] [rbp+8h]

  v14 = operator new(0x80uLL);
  *(_OWORD *)v14 = 0LL;
  v14[2] = 1;
  v14[3] = 1;
  *(_QWORD *)v14 = &std::_Ref_count_obj2<StartupRegKeyNotification>::`vftable';
  v9 = (_QWORD *)std::wstring::wstring((__int64)v12, a5);
  LODWORD(a4) = *a4;
  v10 = (_QWORD *)std::wstring::wstring((__int64)v13, a3);
  StartupRegKeyNotification::StartupRegKeyNotification((__int64)(v14 + 4), *a2, v10, (int)a4, v9);
  *a1 = v14 + 4;
  a1[1] = v14;
  return a1;
}
