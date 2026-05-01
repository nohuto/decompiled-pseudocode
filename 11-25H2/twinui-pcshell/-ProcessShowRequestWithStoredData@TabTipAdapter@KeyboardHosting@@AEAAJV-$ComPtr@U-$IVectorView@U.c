/*
 * XREFs of ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x18046EDC8
 * Callers:
 *     ?ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason@2@@Z @ 0x1800D3E80 (-ExecuteDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4DeferredShowRequestExecutionReason.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x18046E230 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
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

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::ProcessShowRequestWithStoredData(
        KeyboardHosting::TabTipAdapter *this,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r12d
  unsigned int v5; // r14d
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, _BYTE *, char *, int *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned __int8 v18; // al
  int v20; // [rsp+20h] [rbp-40h]
  char v21; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v22[3]; // [rsp+41h] [rbp-1Fh] BYREF
  unsigned int v23; // [rsp+44h] [rbp-1Ch] BYREF
  int v24; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v4 = a4;
  v5 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IITestT>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_IITestT>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  KeyboardHosting::TabTipAdapter::LogForegroundAppInfo((__int64)this, v5);
  if ( !v5 )
  {
    v10 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP(this);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA58,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v10);
  }
  LOBYTE(v8) = 1;
  v11 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, v8, v9);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v22[0] = 0;
    v21 = 0;
    v24 = 0;
    v25[0] = 0LL;
    v13 = *((_QWORD *)this + 15);
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, char *, int *, __int64 *))(*(_QWORD *)v13 + 304LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v25);
    v15 = v14(v13, v5, v22, &v21, &v24, v25);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v23 = 0;
      if ( KeyboardHosting::TabTipAdapter::GetApplicationViewIdIfExists((__int64)this, v5, (__int64)&v23) )
      {
        v18 = KeyboardHosting::TabTipAdapter::InvokeIsViewShown(this, v23);
        KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(this, v23, v18);
      }
      LOBYTE(v20) = v21;
      LOBYTE(v17) = v22[0];
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int, unsigned int))(**((_QWORD **)this + 4)
                                                                                                + 576LL))(
              *((_QWORD *)this + 4),
              *a2,
              v4,
              v17,
              v20,
              1,
              v5);
      v12 = v15;
      if ( v15 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v25);
        v12 = 0;
        goto LABEL_14;
      }
      v16 = 2689LL;
    }
    else
    {
      v16 = 2658LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v25);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v11);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2);
  return v12;
}
