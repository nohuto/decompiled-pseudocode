/*
 * XREFs of ?OnEditControlEmbeddedHandwritingViewVisibleSettingChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs@45678@@Z @ 0x1801D4010
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x180098EC4 (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnEditControlEmbeddedHandwritingViewVisibleSettingChanged(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v11; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a3;
  v11 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerEditControlEmbeddedHandwritingViewVisibleSettingChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v11);
  if ( v6 < 0 )
  {
    v9 = 964LL;
  }
  else
  {
    v7 = *((_QWORD *)this + 15);
    v12 = 0;
    LOBYTE(v5) = v11;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v7 + 224LL))(v7, v5, &v12);
    if ( v6 < 0 )
    {
      v9 = 967LL;
    }
    else
    {
      if ( v12 != 2 )
        return 0LL;
      IhmNotification::SendKeyboardSetVisible(0LL, 0);
      v6 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8);
      if ( v6 >= 0 )
        return 0LL;
      v9 = 973LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
