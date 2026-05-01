/*
 * XREFs of ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800945E4
 * Callers:
 *     ?OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardUIEnabledChangedEventArgs@45678@@Z @ 0x180094530 (-OnCoreKeyboardHardwareKeyboardUIEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardMa.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1800667F4 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180066CDC (-InvokeEnsureInputAppIsActivated@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18009496C (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x1800A7148 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::RefreshHardwareKeyboardUIState(KeyboardHosting::TabTipAdapter *this)
{
  int IsReady; // edi
  __int64 v3; // rdx
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 451) )
  {
    IsReady = KeyboardHosting::TabTipAdapter::EnsureInputAppIsReady(this);
    if ( IsReady < 0 )
    {
      v3 = 1110LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)IsReady);
      return (unsigned int)IsReady;
    }
    IsReady = KeyboardHosting::TabTipAdapter::InvokeEnsureInputAppIsActivated(this);
    if ( IsReady < 0 )
    {
      v3 = 1111LL;
      goto LABEL_4;
    }
    IsReady = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 1);
    if ( IsReady < 0 )
    {
      v3 = 1113LL;
      goto LABEL_4;
    }
    v5 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(this);
    if ( v5 < 0 )
    {
      v6 = 1120LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  else
  {
    v5 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 0);
    if ( v5 < 0 )
    {
      v6 = 1125LL;
      goto LABEL_11;
    }
  }
  return 0LL;
}
