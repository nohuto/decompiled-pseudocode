/*
 * XREFs of ??$append@Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x18029941C
 * Callers:
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x1802991BC (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 *     ?OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUShowShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x18046E8A4 (-OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800287E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180198578 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

_QWORD *__fastcall std::wstring::append<winrt::hstring,0>(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // r9
  void *v4[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_OWORD *)v4 = 0LL;
  winrt::hstring::operator std::basic_string_view<unsigned short>(a2, v4);
  return std::wstring::append(v2, v4[0], (unsigned __int64)v4[1]);
}
