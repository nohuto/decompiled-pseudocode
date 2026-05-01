/*
 * XREFs of ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802C1C50
 * Callers:
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x180034EB8 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x180258980 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1800656A0 (-GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1800A726C (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?InvokeActivateInputApp@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180220AE8 (-InvokeActivateInputApp@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1802C5854 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::ActivateInputAppOnFirstFocus(KeyboardHosting::TabTipAdapter *this)
{
  bool v2; // di
  int v3; // eax
  unsigned int v4; // ebx
  void *v6[4]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = !KeyboardHosting::TabTipAdapter::GetCurrentInputAppId((__int64)this, v6)[2]
    && IsActiveSessionCountLimited()
    && (unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 501)
    && (unsigned __int8)std::_Atomic_storage<bool,1>::load((char *)this + 500);
  std::wstring::_Tidy_deallocate(v6);
  if ( !v2 )
    return 0LL;
  v3 = KeyboardHosting::TabTipAdapter::InvokeActivateInputApp(this);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC53,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
