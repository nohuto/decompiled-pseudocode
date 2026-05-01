/*
 * XREFs of ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1802B91CC
 * Callers:
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x1800B8BF8 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ?OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlFocusChangedEventArgs@45678@@Z @ 0x18024E4F0 (-OnEditControlFocusChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x180026C6C (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18002CB60 (-GetCurrentInputAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InvokeActivateInputApp@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18018C444 (-InvokeActivateInputApp@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x180289FE8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::ActivateInputAppOnFirstFocus(KeyboardHosting::TabTipAdapter *this)
{
  bool v2; // di
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD v6[4]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = !*(_QWORD *)(KeyboardHosting::TabTipAdapter::GetCurrentInputAppId((__int64)this, (__int64)v6) + 16)
    && IsActiveSessionCountLimited()
    && std::_Atomic_storage<bool,1>::load((__int64)this + 501)
    && std::_Atomic_storage<bool,1>::load((__int64)this + 500);
  std::wstring::_Tidy_deallocate(v6);
  if ( !v2 )
    return 0LL;
  v3 = KeyboardHosting::TabTipAdapter::InvokeActivateInputApp(this);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCBB,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
