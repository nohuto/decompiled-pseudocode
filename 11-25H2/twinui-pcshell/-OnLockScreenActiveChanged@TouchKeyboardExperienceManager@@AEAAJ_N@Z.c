/*
 * XREFs of ?OnLockScreenActiveChanged@TouchKeyboardExperienceManager@@AEAAJ_N@Z @ 0x1801D1324
 * Callers:
 *     wistd::__function::__func__lambda_fe6fb8b9e581c6c4730aa23c2a2ccbbb__void___cdecl(unsigned_long_const_&)_::operator() @ 0x180228720 (wistd--__function--__func__lambda_fe6fb8b9e581c6c4730aa23c2a2ccbbb__void___cdecl(unsigned_long_c.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18002D858 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$LockScreenStateChanged@AEA_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEA_N@Z @ 0x1801D147C (--$LockScreenStateChanged@AEA_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEA_N@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B86EC (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnLockScreenActiveChanged(
        TouchKeyboardExperienceManager *this,
        char a2,
        unsigned int a3)
{
  KeyboardHosting::TabTipAdapter *v4; // r14
  const WCHAR *v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned int v7; // eax
  UINT32 v8; // edx
  HRESULT v9; // eax
  char v10; // dl
  unsigned int v11; // r8d
  HSTRING v12; // rbx
  HRESULT v13; // eax
  char v14; // dl
  unsigned int v15; // r8d
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  bool v19[8]; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v20[8]; // [rsp+28h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-50h] BYREF
  HSTRING string; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v23; // [rsp+50h] [rbp-30h] BYREF
  HSTRING v24; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v20[0] = a2;
  v4 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( v4 )
  {
    string = 0LL;
    v5 = L"1";
    if ( !a2 )
      v5 = L"0";
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
    if ( v6 <= 0xFFFFFFFF )
    {
      v7 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v6, a2, a3);
      v8 = v7 - 1;
      if ( (unsigned int)v6 < v7 )
        v8 = v6;
      v9 = WindowsCreateStringReference(v5, v8, &hstringHeader, &string);
      if ( v9 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
      }
      else
      {
        v12 = string;
        v24 = 0LL;
        v13 = WindowsCreateStringReference(L"LockScreenState", 0xFu, &v23, &v24);
        if ( v13 >= 0 )
        {
          v16 = KeyboardHosting::TabTipAdapter::SetShellPreference(v4, v24, v12);
          v17 = retaddr;
          if ( v16 >= 0 )
            goto LABEL_12;
LABEL_14:
          wil::details::in1diag3::_Log_Hr(
            v17,
            (void *)0x1417,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v16);
          goto LABEL_12;
        }
      }
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
      JUMPOUT(0x1801D1474LL);
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, a2, a3);
    goto LABEL_14;
  }
LABEL_12:
  v19[0] = *((_QWORD *)this + 73) != 0LL;
  TouchKeyboardExperienceTelemetryLogger::LockScreenStateChanged<bool &,bool>(v20, v19);
  return 0LL;
}
