/*
 * XREFs of ?LogForegroundAppInfo@TabTipAdapter@KeyboardHosting@@AEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x1801FAF88
 * Callers:
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEA_N@Z @ 0x18046EC30 (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x18046EDC8 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800AC1A4 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??$ShowRequestProcessed@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAIPEBG@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAI$$QEAPEBG@Z @ 0x1801FB074 (--$ShowRequestProcessed@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAIPEBG@TouchK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_IITestT@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802A73F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_IITestT@@@details@wil@@QEAAX_NW4Reporting.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::LogForegroundAppInfo(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, volatile signed __int32 **); // rbx
  int v6; // eax
  const WCHAR *v7; // rcx
  const WCHAR *v8; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v10; // [rsp+58h] [rbp+28h] BYREF
  int v11; // [rsp+60h] [rbp+30h] BYREF
  volatile signed __int32 *v12; // [rsp+68h] [rbp+38h] BYREF

  v10 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_IITestT>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_IITestT>::GetImpl'::`2'::impl,
    a2);
  v11 = 20480;
  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 32) + 720LL))(*(_QWORD *)(a1 + 32), &v11);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9FB,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v3);
  v12 = 0LL;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v4 + 712LL);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
  v6 = v5(v4, &v12);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x9FD,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
  if ( v12 )
    v7 = (const WCHAR *)*((_QWORD *)v12 + 2);
  else
    v7 = &LocaleName;
  v8 = v7;
  TouchKeyboardExperienceTelemetryLogger::ShowRequestProcessed<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,unsigned int &,unsigned short const *>(
    &v10,
    &v11,
    &v8);
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v12);
}
