/*
 * XREFs of ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEA_N@Z @ 0x18046EC30
 * Callers:
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x18046E4F4 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x18002A71C (-UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180038838 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x1800A7148 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?LogForegroundAppInfo@TabTipAdapter@KeyboardHosting@@AEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1801FAF88 (-LogForegroundAppInfo@TabTipAdapter@KeyboardHosting@@AEAAXW4CoreKeyboardViewType@Core@Text@Inter.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_IITestT@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A73F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_IITestT@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?GetApplicationViewIdIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAI@Z @ 0x18046BD8C (-GetApplicationViewIdIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NW4CoreKeyboardViewType@Core@T.c)
 *     ?InvokeIsViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z @ 0x18046C730 (-InvokeIsViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::ProcessShowRequest(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, char *, __int64 *, unsigned int *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int8 v16; // al
  int v18; // [rsp+20h] [rbp-30h]
  unsigned int v19; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v23; // [rsp+80h] [rbp+30h] BYREF
  char v24; // [rsp+88h] [rbp+38h] BYREF

  v23 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IITestT>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_IITestT>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  KeyboardHosting::TabTipAdapter::LogForegroundAppInfo(a1, a2);
  if ( !a2 )
  {
    v8 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP((KeyboardHosting::TabTipAdapter *)a1);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA15,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v8);
  }
  LOBYTE(v6) = 1;
  v9 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition((KeyboardHosting::TabTipAdapter *)a1, v6, v7);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v24 = 0;
    LOBYTE(v23) = 0;
    v20 = 0;
    v21 = 0LL;
    v11 = *(_QWORD *)(a1 + 120);
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64 *, unsigned int *, __int64 *))(*(_QWORD *)v11
                                                                                                  + 304LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    v13 = v12(v11, a2, &v24, &v23, &v20, &v21);
    v10 = v13;
    if ( v13 >= 0 )
    {
      v19 = 0;
      if ( KeyboardHosting::TabTipAdapter::GetApplicationViewIdIfExists(a1, a2, (__int64)&v19) )
      {
        v16 = KeyboardHosting::TabTipAdapter::InvokeIsViewShown((KeyboardHosting::TabTipAdapter *)a1, v19);
        KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(
          (KeyboardHosting::TabTipAdapter *)a1,
          v19,
          v16);
      }
      LOBYTE(v18) = v23;
      LOBYTE(v15) = v24;
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int, unsigned int))(**(_QWORD **)(a1 + 32)
                                                                                                + 576LL))(
              *(_QWORD *)(a1 + 32),
              v21,
              v20,
              v15,
              v18,
              1,
              a2);
      v10 = v13;
      if ( v13 >= 0 )
      {
        v10 = 0;
        goto LABEL_14;
      }
      v14 = 2610LL;
    }
    else
    {
      v14 = 2592LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v13);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    return v10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA19,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
