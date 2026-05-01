/*
 * XREFs of ??$make_shared@VUwpAppPackageInfo@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@YA?AV?$shared_ptr@VUwpAppPackageInfo@@@0@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@@Z @ 0x18054E520
 * Callers:
 *     ?UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@_N@Z @ 0x18054EE30 (-UpdateAppView@UwpAppStateManager@@UEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18005A55C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<UwpAppPackageInfo,std::wstring const &>(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  void **v6; // [rsp+28h] [rbp-50h]
  _BYTE v7[40]; // [rsp+38h] [rbp-40h] BYREF
  _DWORD *v8; // [rsp+90h] [rbp+18h]

  v8 = operator new(0x40uLL);
  *(_OWORD *)v8 = 0LL;
  v8[2] = 1;
  v8[3] = 1;
  *(_QWORD *)v8 = &std::_Ref_count_obj2<UwpAppPackageInfo>::`vftable';
  v6 = (void **)std::wstring::wstring((__int64)v7, a2);
  std::wstring::wstring((__int64)(v8 + 4), (__int64)v6);
  *((_QWORD *)v8 + 6) = 0LL;
  *((_QWORD *)v8 + 7) = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *((_QWORD *)v8 + 6) = v4;
  std::wstring::_Tidy_deallocate(v6);
  *a1 = v8 + 4;
  a1[1] = v8;
  return a1;
}
