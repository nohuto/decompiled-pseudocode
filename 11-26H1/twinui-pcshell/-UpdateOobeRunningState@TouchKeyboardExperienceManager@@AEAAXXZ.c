/*
 * XREFs of ?UpdateOobeRunningState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800F57B0
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z @ 0x18046F3F0 (-OobeCompletedCallback@TouchKeyboardExperienceManager@@CAXPEAX@Z.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAnyOOBE@@YA_NXZ @ 0x1800F5AB0 (-IsAnyOOBE@@YA_NXZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateOobeRunningState(TouchKeyboardExperienceManager *this)
{
  int v2; // edx
  unsigned int v3; // r8d
  const WCHAR *v4; // rsi
  const WCHAR *v5; // r14
  KeyboardHosting::TabTipAdapter *v6; // r12
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned int v9; // eax
  UINT32 v10; // edx
  HRESULT v11; // eax
  int v12; // edx
  unsigned int v13; // r8d
  HSTRING v14; // rdi
  HRESULT v15; // eax
  int v16; // edx
  unsigned int v17; // r8d
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  int v20; // edx
  unsigned int v21; // r8d
  KeyboardHosting::TabTipAdapter *v22; // r14
  unsigned __int64 v23; // rdi
  unsigned int v24; // eax
  UINT32 v25; // edx
  HRESULT v26; // eax
  int v27; // edx
  unsigned int v28; // r8d
  HSTRING v29; // rdi
  HRESULT v30; // eax
  int v31; // edx
  unsigned int v32; // r8d
  int v33; // eax
  int v34; // edx
  unsigned int v35; // r8d
  KeyboardHosting::TabTipAdapter *v36; // rdi
  unsigned int v37; // eax
  UINT32 v38; // edx
  HRESULT v39; // eax
  int v40; // edx
  unsigned int v41; // r8d
  HSTRING v42; // rbx
  HRESULT v43; // eax
  int v44; // edx
  unsigned int v45; // r8d
  int v46; // eax
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-50h] BYREF
  HSTRING string; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v49; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v50; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v4 = L"1";
  v5 = L"0";
  if ( !IsAnyOOBE() )
    v5 = L"1";
  v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  string = 0LL;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( v5[v8] );
  if ( v8 <= 0xFFFFFFFF )
  {
    v9 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v8, v2, v3);
    v10 = v9 - 1;
    if ( (unsigned int)v8 < v9 )
      v10 = v8;
    v11 = WindowsCreateStringReference(v5, v10, &hstringHeader, &string);
    if ( v11 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11, v12, v13);
    }
    else
    {
      v14 = string;
      v50 = 0LL;
      v15 = WindowsCreateStringReference(L"IsOobeCompleted", 0xFu, &v49, &v50);
      if ( v15 >= 0 )
      {
        v18 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, v50, v14);
        v19 = retaddr;
        v6 = (KeyboardHosting::TabTipAdapter *)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp";
        if ( v18 >= 0 )
          goto LABEL_11;
        goto LABEL_34;
      }
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15, v16, v17);
LABEL_38:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26, v27, v28);
    goto LABEL_39;
  }
  Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v2, v3);
LABEL_34:
  wil::details::in1diag3::_Log_Hr(v19, (void *)0xA3E, (int)v6, (const char *)(unsigned int)v18);
LABEL_11:
  if ( !IsAnyOOBE() )
    v4 = L"0";
  v22 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v50 = 0LL;
  v23 = -1LL;
  do
    ++v23;
  while ( v4[v23] );
  if ( v23 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v20, v21);
    __debugbreak();
  }
  v24 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v23, v20, v21);
  v25 = v24 - 1;
  if ( (unsigned int)v23 < v24 )
    v25 = v23;
  v26 = WindowsCreateStringReference(v4, v25, &v49, &v50);
  if ( v26 < 0 )
    goto LABEL_38;
  v29 = v50;
  string = 0LL;
  v30 = WindowsCreateStringReference(L"ToolBar\\AlwaysShow", 0x12u, &hstringHeader, &string);
  if ( v30 < 0 )
  {
LABEL_39:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v30, v31, v32);
LABEL_40:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v39, v40, v41);
    goto LABEL_41;
  }
  v33 = KeyboardHosting::TabTipAdapter::SetShellPreference(v22, string, v29);
  if ( v33 < 0 )
    wil::details::in1diag3::_Log_Hr(retaddr, (void *)0xA42, (int)v6, (const char *)(unsigned int)v33);
  v36 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v50 = 0LL;
  do
    ++v7;
  while ( v4[v7] );
  if ( v7 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v34, v35);
    __debugbreak();
  }
  v37 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v7, v34, v35);
  v38 = v37 - 1;
  if ( (unsigned int)v7 < v37 )
    v38 = v7;
  v39 = WindowsCreateStringReference(v4, v38, &v49, &v50);
  if ( v39 < 0 )
    goto LABEL_40;
  v42 = v50;
  string = 0LL;
  v43 = WindowsCreateStringReference(L"ToolBar\\MinifiedMode", 0x14u, &hstringHeader, &string);
  if ( v43 < 0 )
  {
LABEL_41:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v43, v44, v45);
    JUMPOUT(0x1800F5AA9LL);
  }
  v46 = KeyboardHosting::TabTipAdapter::SetShellPreference(v36, string, v42);
  if ( v46 < 0 )
    wil::details::in1diag3::_Log_Hr(retaddr, (void *)0xA43, (int)v6, (const char *)(unsigned int)v46);
}
