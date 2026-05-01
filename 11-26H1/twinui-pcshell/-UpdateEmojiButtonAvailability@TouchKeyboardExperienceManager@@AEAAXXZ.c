/*
 * XREFs of ?UpdateEmojiButtonAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18024D768
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     wistd::__function::__func__lambda_39e4fc6123a48d8558dd82b5da7fc671__void___cdecl(void)_::operator() @ 0x18046B600 (wistd--__function--__func__lambda_39e4fc6123a48d8558dd82b5da7fc671__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180032DDC (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800573EC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA?AW4MdmAvailabilityPolicy@2@PEBGW432@@Z @ 0x1800F53C4 (-GetMdmPolicyValue@TextInputMdmPolicyHelper@KeyboardHosting@@SA-AW4MdmAvailabilityPolicy@2@PEBGW.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180114CC8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::UpdateEmojiButtonAvailability(TouchKeyboardExperienceManager *this)
{
  int MdmPolicyValue; // r14d
  KeyboardHosting::TabTipAdapter *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  KeyboardHosting::TabTipAdapter *v6; // rdi
  HSTRING v7; // rbx
  unsigned int v8; // r8d
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  HSTRING v11; // rbx
  unsigned int v12; // r8d
  HSTRING_HEADER *v13; // rax
  int v14; // eax
  const WCHAR *v15; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER v16; // [rsp+28h] [rbp-48h] BYREF
  HSTRING v17; // [rsp+40h] [rbp-30h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v19; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  MdmPolicyValue = KeyboardHosting::TextInputMdmPolicyHelper::GetMdmPolicyValue((__int64)L"TouchKeyboardEmojiButtonAvailability");
  v15 = L"TouchKeyboardEmojiEnabled";
  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v19 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"0", 2u, 1u);
  v4 = v19;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v16, L"EmojiKeyEnabled", 0x10u, 0xFu);
  v5 = KeyboardHosting::TabTipAdapter::SetShellPreference(v3, v17, v4);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8E8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v6 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  v17 = 0LL;
  if ( MdmPolicyValue == 2 )
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v16, L"0", 2u, 1u);
    v7 = v17;
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v15, v8);
    v10 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, (HSTRING)v9[1].Reserved.Reserved1, v7);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8EC,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
  }
  else
  {
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v16, L"1", 2u, 1u);
    v11 = v17;
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v15, v12);
    v14 = KeyboardHosting::TabTipAdapter::SetShellPreference(v6, (HSTRING)v13[1].Reserved.Reserved1, v11);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x8F0,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
  }
}
