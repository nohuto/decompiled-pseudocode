/*
 * XREFs of ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1805F6C84
 * Callers:
 *     ?SetIconBadge@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x1805F6C50 (-SetIconBadge@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetA.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F6270 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18022B784 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$_Integral_to_string@GI@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@I@Z @ 0x180465CB8 (--$_Integral_to_string@GI@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@I@.c)
 *     ??$IconBadgeChanged@AEBIPEBG@MeetAndChatTelemetry@@SAXAEBI$$QEAPEBG@Z @ 0x1805F1AC0 (--$IconBadgeChanged@AEBIPEBG@MeetAndChatTelemetry@@SAXAEBI$$QEAPEBG@Z.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805F4838 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1805F8918 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::SetIconBadge(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        unsigned int a2,
        const struct winrt::hstring *a3)
{
  wil *v6; // rcx
  void *v7; // r9
  int v8; // eax
  const WCHAR *v9; // rax
  bool v10; // bl
  const unsigned __int16 *v11; // rax
  int v12; // r9d
  int v13; // eax
  const WCHAR *v14; // r8
  LPCWCH *v15; // r8
  int v16; // eax
  int bIgnoreCase; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v18; // [rsp+28h] [rbp-D8h]
  struct _WNF_STATE_NAME v19; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall **v22)(_QWORD, __int64); // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v23; // [rsp+50h] [rbp-B0h]
  LPCWCH lpString2[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v25; // [rsp+68h] [rbp-98h]
  unsigned __int64 v26; // [rsp+70h] [rbp-90h]
  WCHAR String1[128]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v20 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MNIB>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MNIB>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3);
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView((__int64)this, &v22);
  (*((void (__fastcall **)(__int64 (__fastcall **)(_QWORD, __int64)))*v22 + 7))(v22);
  memset_0(String1, 0, sizeof(String1));
  v8 = wil::wnf_query_nothrow(
         v6,
         &v19,
         (bool *)String1,
         v7,
         (unsigned __int64)&v21,
         v18,
         *(struct wil::WNF_CHANGE_STAMP_STRUCT **)&v19);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5F,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v8,
      bIgnoreCase);
  if ( *(_QWORD *)a3 )
  {
    v9 = winrt::hstring::c_str(a3);
    v10 = CompareStringOrdinal(String1, -1, v9, -1, 1) != 2;
    v11 = winrt::hstring::c_str(a3);
    v13 = RtlPublishWnfStateData(WNF_SHEL_CHAT_ICON_BADGE, 0LL, v11, (unsigned int)(2 * v12 + 2)) | 0x10000000;
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6D,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v13,
        0);
  }
  else
  {
    std::_Integral_to_string<unsigned short,unsigned int>((__int64)lpString2, a2);
    v14 = (const WCHAR *)lpString2;
    if ( v26 > 7 )
      v14 = lpString2[0];
    v10 = CompareStringOrdinal(String1, -1, v14, -1, 1) != 2;
    v15 = lpString2;
    if ( v26 > 7 )
      v15 = (LPCWCH *)lpString2[0];
    v16 = RtlPublishWnfStateData(WNF_SHEL_CHAT_ICON_BADGE, 0LL, v15, (unsigned int)(2 * v25 + 2)) | 0x10000000;
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x76,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v16,
        0);
    std::wstring::_Tidy_deallocate(lpString2);
  }
  if ( v10 )
  {
    v21 = (unsigned __int64)winrt::hstring::c_str(a3);
    MeetAndChatTelemetry::IconBadgeChanged<unsigned int const &,unsigned short const *>((int *)&v20, (__int64 *)&v21);
  }
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
}
