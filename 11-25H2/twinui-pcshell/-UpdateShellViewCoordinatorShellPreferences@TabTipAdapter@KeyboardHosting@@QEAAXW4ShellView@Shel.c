/*
 * XREFs of ?UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUhstring@7@1@Z @ 0x180471AAC
 * Callers:
 *     ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x1800971F4 (-SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@.c)
 *     ?OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUShowShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x18046E8A4 (-OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180029C50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x18002A5E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18002AC78 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18010C19C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z @ 0x18019022C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x1801BF430 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1801BF430.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x180297380 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall KeyboardHosting::TabTipAdapter::UpdateShellViewCoordinatorShellPreferences(
        KeyboardHosting::TabTipAdapter *a1,
        int a2,
        winrt::hstring *a3,
        winrt::hstring *a4)
{
  wchar_t *v7; // rdx
  unsigned int v8; // r8d
  HSTRING Reserved1; // rbx
  unsigned int v10; // r8d
  int *v11; // rax
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  unsigned int v14; // r8d
  HSTRING v15; // rbx
  unsigned int v16; // r8d
  int *v17; // rax
  HSTRING_HEADER *v18; // rax
  int v19; // eax
  int v20[2]; // [rsp+20h] [rbp-99h] BYREF
  _OWORD v21[2]; // [rsp+28h] [rbp-91h] BYREF
  int v22[2]; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-59h]
  int v24[2]; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int64 v25; // [rsp+80h] [rbp-39h]
  void *Src[4]; // [rsp+88h] [rbp-31h] BYREF
  HSTRING_HEADER v27; // [rsp+A8h] [rbp-11h] BYREF
  HSTRING_HEADER v28; // [rsp+C8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v21[0] = 0LL;
  v21[1] = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v21[0]) = 0;
  switch ( a2 )
  {
    case 12:
      v7 = L"PrimaryOnScreenInput";
      break;
    case 13:
      v7 = L"VoiceTyping";
      break;
    case 14:
      v7 = L"EmojiAndMore";
      break;
    case 19:
      v7 = L"SmartActions";
      break;
    case 28:
      v7 = L"PrimaryOnScreenInputForSecureDesktop";
      break;
    default:
      wil::details::in1diag3::FailFast_UnexpectedMsg(
        retaddr,
        (void *)0x980,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        "Unsupported ShellView",
        *(const char **)v20);
  }
  std::wstring::operator=((void **)v21, v7);
  std::wstring::wstring((char **)Src, L"ShellViewShowRequest_");
  std::wstring::append(Src, v21);
  std::operator+<unsigned short>(v24, (__int64)Src, L"_TelemetryId");
  std::operator+<unsigned short>(v22, (__int64)Src, L"_Context");
  *(_QWORD *)v20 = winrt::hstring::c_str(a3);
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, (const WCHAR **)v20, v8)[1].Reserved.Reserved1;
  v11 = v24;
  if ( v25 > 7 )
    v11 = *(int **)v24;
  *(_QWORD *)v20 = v11;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, (const WCHAR **)v20, v10);
  v13 = KeyboardHosting::TabTipAdapter::SetShellPreference(a1, (HSTRING)v12[1].Reserved.Reserved1, Reserved1);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x989,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v13);
  *(_QWORD *)v20 = winrt::hstring::c_str(a4);
  v15 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v28, (const WCHAR **)v20, v14)[1].Reserved.Reserved1;
  v17 = v22;
  if ( v23 > 7 )
    v17 = *(int **)v22;
  *(_QWORD *)v20 = v17;
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, (const WCHAR **)v20, v16);
  v19 = KeyboardHosting::TabTipAdapter::SetShellPreference(a1, (HSTRING)v18[1].Reserved.Reserved1, v15);
  if ( v19 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x98A,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v19);
  std::wstring::_Tidy_deallocate((void **)v22);
  std::wstring::_Tidy_deallocate((void **)v24);
  std::wstring::_Tidy_deallocate(Src);
  std::wstring::_Tidy_deallocate((void **)v21);
}
