/*
 * XREFs of ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x18046D120
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJI_N0@Z @ 0x180098E6C (-NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJI_N0@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x18046894C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18046E760 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardView_ea_18046E760.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputPaneTryShowRequested(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v7; // r14d
  unsigned int v8; // ecx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(_QWORD, HSTRING, HSTRING); // rdi
  HSTRING v11; // rbx
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(_QWORD, HSTRING, HSTRING); // rdi
  HSTRING v14; // rbx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  int v20; // ecx
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(_QWORD, _QWORD, _BYTE *, _BYTE *, int *, __int64 *); // rbx
  int v23; // eax
  __int64 v24; // rdx
  HSTRING v25; // rbx
  int v26; // eax
  char v27; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v28[3]; // [rsp+41h] [rbp-28h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-25h] BYREF
  int v30; // [rsp+48h] [rbp-21h] BYREF
  int v31; // [rsp+4Ch] [rbp-1Dh] BYREF
  __int64 v32; // [rsp+50h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-11h] BYREF
  HSTRING v34; // [rsp+70h] [rbp+7h]
  HSTRING_HEADER v35; // [rsp+78h] [rbp+Fh] BYREF
  HSTRING v36; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v30 = 0;
  v29 = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v29);
  if ( v4 < 0 )
  {
    v5 = 1153LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 15) + 104LL))(
         *((_QWORD *)this + 15),
         v29,
         &v30);
  if ( v4 < 0 )
  {
    v5 = 1155LL;
    goto LABEL_3;
  }
  v7 = 7;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) )
  {
    if ( v30 == 1 || (v8 = v29, v29 - 1 <= 1) || v29 == 7 )
    {
      v9 = *((_QWORD *)this + 16);
      v10 = *(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING))(*(_QWORD *)v9 + 328LL);
      v34 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &LocaleName, 1u, 0);
      v11 = v34;
      v36 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v35, L"TRYSHOW2", 9u, 8u);
      v4 = v10(v9, v36, v11);
      if ( v4 < 0 )
      {
        v5 = 1162LL;
        goto LABEL_3;
      }
      goto LABEL_17;
    }
  }
  else if ( v30 == 1 || (v8 = v29, v29 - 1 <= 1) )
  {
    v12 = *((_QWORD *)this + 16);
    v13 = *(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING))(*(_QWORD *)v12 + 328LL);
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v35, &LocaleName, 1u, 0);
    v14 = v36;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TRYSHOW2", 9u, 8u);
    v4 = v13(v12, v34, v14);
    if ( v4 < 0 )
    {
      v5 = 1172LL;
      goto LABEL_3;
    }
LABEL_17:
    v8 = v29;
  }
  if ( v30 != 1 )
    return 0LL;
  if ( !v8 )
    goto LABEL_33;
  v15 = v8 - 1;
  if ( !v15 )
  {
    v7 = 8;
    goto LABEL_34;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( !v17 )
    {
      v7 = 2;
      goto LABEL_34;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v7 = 10;
      goto LABEL_34;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v7 = 3;
      goto LABEL_34;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v7 = 4;
      goto LABEL_34;
    }
    if ( v20 == 1 )
    {
      v7 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) != 0
         ? 0xE
         : 0;
      goto LABEL_34;
    }
LABEL_33:
    v7 = 0;
  }
LABEL_34:
  v28[0] = 0;
  v27 = 0;
  v31 = 0;
  v32 = 0LL;
  v21 = *((_QWORD *)this + 15);
  v22 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _BYTE *, int *, __int64 *))(*(_QWORD *)v21 + 304LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  v23 = v22(v21, v7, v28, &v27, &v31, &v32);
  v4 = v23;
  if ( v23 < 0 )
  {
    v24 = 1217LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v23);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    return (unsigned int)v4;
  }
  if ( ((v7 - 2) & 0xFFFFFFF7) != 0 )
  {
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 24LL))(
      (char *)this + 8,
      (unsigned int)v31,
      v7);
  }
  else
  {
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v35, L"1", 2u, 1u);
    v25 = v36;
    v34 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ShowEmojiPanelTips", 0x13u, 0x12u);
    v26 = KeyboardHosting::TabTipAdapter::SetShellPreference(this, v34, v25);
    if ( v26 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4C5,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v26);
    v23 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(this, v7, (unsigned int)v31, 5LL);
    v4 = v23;
    if ( v23 < 0 )
    {
      v24 = 1223LL;
      goto LABEL_40;
    }
  }
  v23 = KeyboardHosting::TabTipAdapter::NotifyCurrentVisibilityState(this, *((_DWORD *)this + 124), 1, 0);
  v4 = v23;
  if ( v23 < 0 )
  {
    v24 = 1235LL;
    goto LABEL_40;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  return 0LL;
}
