/*
 * XREFs of ?UpdateAltTabFilterSetting@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18022923C
 * Callers:
 *     ?OnSettingChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJW4SETTING_IDENTIFIER@@@Z @ 0x18055A4E0 (-OnSettingChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJW4SETTING_IDEN.c)
 *     ?perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x18055BCC0 (-perform_delayed_initialization@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAX.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18005FC84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WTMPublic@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ @ 0x180061EFC (-SyncAllAppWindows@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAA_KXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::UpdateAltTabFilterSetting(
        RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  char v3; // r8
  __int64 v4; // r9
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF
  RTL_SRWLOCK *v10; // [rsp+40h] [rbp+18h]

  v2 = this + 77;
  AcquireSRWLockExclusive(this + 77);
  v10 = v2;
  v8 = 0;
  v9 = 4;
  if ( (int)SHWindowsPolicyGetValue(&POLID_MultiTaskingAltTabFilter, &v8, &v9) >= 0 && v8 )
  {
    v5 = --v8;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(PVOID, __int64, int *))(*(_QWORD *)this[20].Ptr + 40LL))(this[20].Ptr, 19LL, &v8);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x26B,
        (int)"pcshell\\twinui\\windowtabhost\\lib\\windowtabhost.cpp",
        (const char *)(unsigned int)v6);
    v5 = v8;
  }
  if ( LODWORD(this[99].Ptr) != v5 )
  {
    LODWORD(this[99].Ptr) = v5;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WTMPublic>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WTMPublic>::GetImpl'::`2'::impl,
      1u,
      v3,
      v4);
    winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncAllAppWindows((winrt::Windows::Internal::Shell::implementation::WindowTabHost *)this);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
