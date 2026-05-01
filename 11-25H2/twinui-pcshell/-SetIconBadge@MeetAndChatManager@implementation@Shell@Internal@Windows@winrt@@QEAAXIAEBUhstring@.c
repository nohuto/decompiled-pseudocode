/*
 * XREFs of ?SetIconBadge@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x1805D2264
 * Callers:
 *     ?SetIconBadge@?$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetAndChatManager@3456@@impl@winrt@@UEAAHIPEAX@Z @ 0x1805D2230 (-SetIconBadge@-$produce@UMeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UIMeetA.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800AEFE8 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x180190394 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802398F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MNIB@@@details@wil@@QEAAX_NW4ReportingKin.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??$IconBadgeChanged@AEBIPEBG@MeetAndChatTelemetry@@SAXAEBI$$QEAPEBG@Z @ 0x1805CD808 (--$IconBadgeChanged@AEBIPEBG@MeetAndChatTelemetry@@SAXAEBI$$QEAPEBG@Z.c)
 *     ?EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$shared_ptr@VFlyoutView@@@std@@XZ @ 0x1805D0108 (-EnsureFlyoutView@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$share.c)
 *     ?wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z @ 0x1805D3EB0 (-wnf_query_nothrow@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAX_KPEA_KPEAUWNF_CHANGE_STAMP_STRUCT@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::SetIconBadge(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this,
        unsigned int a2,
        const struct winrt::hstring *a3,
        __int64 a4)
{
  wil *v7; // rcx
  void *v8; // r9
  int v9; // eax
  const WCHAR *v10; // rax
  bool v11; // bl
  const unsigned __int16 *v12; // rax
  int v13; // r9d
  int v14; // eax
  const WCHAR *v15; // r8
  LPCWCH *v16; // r8
  int v17; // eax
  int bIgnoreCase; // [rsp+20h] [rbp-E0h]
  int bIgnoreCasea; // [rsp+20h] [rbp-E0h]
  int bIgnoreCaseb; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *v21; // [rsp+28h] [rbp-D8h]
  struct _WNF_STATE_NAME v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  RTL_SRWLOCK v25; // [rsp+48h] [rbp-B8h] BYREF
  std::_Ref_count_base *v26; // [rsp+50h] [rbp-B0h]
  LPCWCH lpString2[3]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-90h]
  WCHAR String1[128]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v23 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MNIB>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MNIB>::GetImpl'::`2'::impl,
    1u,
    (__int64)a3,
    a4);
  winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::EnsureFlyoutView((__int64)this, &v25);
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)v25.Ptr + 48LL))(v25.Ptr);
  memset_0(String1, 0, sizeof(String1));
  v9 = wil::wnf_query_nothrow(
         v7,
         &v22,
         (bool *)String1,
         v8,
         (unsigned __int64)&v24,
         v21,
         *(struct wil::WNF_CHANGE_STAMP_STRUCT **)&v22);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5F,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v9,
      bIgnoreCase);
  if ( *(_QWORD *)a3 )
  {
    v10 = winrt::hstring::c_str(a3);
    v11 = CompareStringOrdinal(String1, -1, v10, -1, 1) != 2;
    v12 = winrt::hstring::c_str(a3);
    v14 = RtlPublishWnfStateData(WNF_SHEL_CHAT_ICON_BADGE, 0LL, v12, (unsigned int)(2 * v13 + 2), 0LL) | 0x10000000;
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6D,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v14,
        bIgnoreCasea);
  }
  else
  {
    std::to_wstring(lpString2, a2);
    v15 = (const WCHAR *)lpString2;
    if ( v28 > 7 )
      v15 = lpString2[0];
    v11 = CompareStringOrdinal(String1, -1, v15, -1, 1) != 2;
    v16 = lpString2;
    if ( v28 > 7 )
      v16 = (LPCWCH *)lpString2[0];
    v17 = RtlPublishWnfStateData(WNF_SHEL_CHAT_ICON_BADGE, 0LL, v16, 2 * (__int64)lpString2[2] + 2, 0LL) | 0x10000000;
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x76,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
        (const char *)(unsigned int)v17,
        bIgnoreCaseb);
    std::wstring::_Tidy_deallocate((void **)lpString2);
  }
  if ( v11 )
  {
    v24 = (unsigned __int64)winrt::hstring::c_str(a3);
    MeetAndChatTelemetry::IconBadgeChanged<unsigned int const &,unsigned short const *>((int *)&v23, (__int64 *)&v24);
  }
  if ( v26 )
    std::_Ref_count_base::_Decref(v26);
}
