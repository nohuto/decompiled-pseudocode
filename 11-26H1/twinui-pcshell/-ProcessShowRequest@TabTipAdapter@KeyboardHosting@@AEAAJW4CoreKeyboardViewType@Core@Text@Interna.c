/*
 * XREFs of ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEA_N@Z @ 0x18047CE24
 * Callers:
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x18047C6CC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180026B48 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x180031EF0 (-UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18016E310 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?LogForegroundAppInfo@TabTipAdapter@KeyboardHosting@@AEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18024E1B0 (-LogForegroundAppInfo@TabTipAdapter@KeyboardHosting@@AEAAXW4CoreKeyboardViewType@Core@Text@Inter.c)
 *     ?GetApplicationViewIdIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAI@Z @ 0x180479490 (-GetApplicationViewIdIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NW4CoreKeyboardViewType@Core@T.c)
 *     ?InvokeIsViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z @ 0x18047A4BC (-InvokeIsViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::ProcessShowRequest(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, char *, __int64 *, unsigned int *, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned __int8 v15; // al
  int v17; // [rsp+20h] [rbp-30h]
  unsigned int v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF
  char v23; // [rsp+88h] [rbp+38h] BYREF

  v22 = a3;
  KeyboardHosting::TabTipAdapter::LogForegroundAppInfo(a1, a2);
  if ( !a2 )
  {
    v7 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP((KeyboardHosting::TabTipAdapter *)a1);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA4A,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v7);
  }
  LOBYTE(v5) = 1;
  v8 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition((KeyboardHosting::TabTipAdapter *)a1, v5, v6);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v23 = 0;
    LOBYTE(v22) = 0;
    v19 = 0;
    v20 = 0LL;
    v10 = *(_QWORD *)(a1 + 120);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, char *, __int64 *, unsigned int *, __int64 *))(*(_QWORD *)v10
                                                                                                  + 304LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    v12 = v11(v10, a2, &v23, &v22, &v19, &v20);
    v9 = v12;
    if ( v12 >= 0 )
    {
      v18 = 0;
      if ( KeyboardHosting::TabTipAdapter::GetApplicationViewIdIfExists(a1, a2, (__int64)&v18) )
      {
        v15 = KeyboardHosting::TabTipAdapter::InvokeIsViewShown((KeyboardHosting::TabTipAdapter *)a1, v18);
        KeyboardHosting::TabTipAdapter::UpdateViewVisibilityInShellPreference(
          (KeyboardHosting::TabTipAdapter *)a1,
          v18,
          v15);
      }
      LOBYTE(v17) = v22;
      LOBYTE(v14) = v23;
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int, unsigned int))(**(_QWORD **)(a1 + 32)
                                                                                                + 576LL))(
              *(_QWORD *)(a1 + 32),
              v20,
              v19,
              v14,
              v17,
              1,
              a2);
      v9 = v12;
      if ( v12 >= 0 )
      {
        v9 = 0;
        goto LABEL_14;
      }
      v13 = 2663LL;
    }
    else
    {
      v13 = 2645LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v12);
LABEL_14:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    return v9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA4E,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
