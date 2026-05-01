/*
 * XREFs of ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802542D0
 * Callers:
 *     ?StartToFindInStartAnimationCompleted@XamlLauncherState@@UEAAXXZ @ 0x1804567A0 (-StartToFindInStartAnimationCompleted@XamlLauncherState@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z @ 0x1801BCF54 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1801BCFF0 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18021E934 (-ShowSearch@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@@@Z @ 0x180254C9C (-ShowSearchFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@W4DismissStartShowSearchOptions@.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1804532D0 (--$OnCortanaTransitionRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTeleme.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall XamlLauncherState::OnCortanaTransitionRequested(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::ICortanaExperienceManager *a2,
        struct IInspectable *a3)
{
  _DWORD *v4; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HRESULT v8; // eax
  HRESULT v9; // esi
  int v10; // eax
  HSTRING string[2]; // [rsp+20h] [rbp-50h] BYREF
  _DWORD v13[2]; // [rsp+30h] [rbp-40h] BYREF
  XamlLauncherState *v14; // [rsp+38h] [rbp-38h]
  char v15; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v17; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v4 = (_DWORD *)((char *)this + 64);
  v13[0] = *((_DWORD *)this + 16);
  v13[1] = HIDWORD(string[0]);
  v14 = this;
  v15 = 1;
  switch ( v13[0] )
  {
    case 1:
      *v4 = 18;
      goto LABEL_23;
    case 2:
      *v4 = 19;
      goto LABEL_23;
    case 3:
      *v4 = 20;
      goto LABEL_23;
    case 4:
      *v4 = 21;
      goto LABEL_23;
    case 5:
      v17 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"StartMode=AppTransition",
        0x18u,
        0x17u);
      v5 = XamlLauncherState::ShowSearchFromOpenStart(this, v17, 2LL);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 2834LL;
        goto LABEL_18;
      }
LABEL_23:
      v6 = 0;
      goto LABEL_24;
  }
  if ( v13[0] != 7 )
  {
    if ( v13[0] == 12 )
    {
      v17 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"StartMode=AppTransition",
        0x18u,
        0x17u);
      string[0] = v17;
      v5 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 136, string);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 2850LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)v5);
        goto LABEL_24;
      }
    }
    goto LABEL_23;
  }
  string[0] = 0LL;
  v8 = Microsoft::WRL::Wrappers::HString::Set(string, L"StartMode=AppTransition", 0x17u);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = XamlLauncherState::ShowSearch(this, string[0]);
    v6 = v10;
    if ( v10 >= 0 )
    {
      WindowsDeleteString(string[0]);
      goto LABEL_23;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0C,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB0B,
      (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v8);
    v6 = v9;
  }
  WindowsDeleteString(string[0]);
  string[0] = 0LL;
LABEL_24:
  v15 = 0;
  StartWindowTelemetry::OnCortanaTransitionRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    v13,
    v4);
  return v6;
}
