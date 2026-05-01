/*
 * XREFs of ?OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs@45678@@Z @ 0x18047A9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180026B48 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs *a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // zf
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v14; // [rsp+40h] [rbp+18h] BYREF
  int v15; // [rsp+48h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a3;
  v14 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs *, char *))(v3 + 48))(
         a3,
         &v14);
  if ( v6 < 0 )
  {
    v7 = 1170LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *((_QWORD *)this + 16);
  LOBYTE(v5) = v14;
  v15 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v9 + 144LL))(v9, v5, &v15);
  if ( v6 < 0 )
  {
    v7 = 1172LL;
    goto LABEL_3;
  }
  v12 = v14 == 0;
  *((_BYTE *)this + 450) = v14 != 0;
  LOBYTE(v10) = !v12;
  v6 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, v10, v11);
  if ( v6 < 0 )
  {
    v7 = 1178LL;
    goto LABEL_3;
  }
  return 0LL;
}
