/*
 * XREFs of ?LoadWinUIFrameworkPackage@XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18028104C
 * Callers:
 *     ??0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x180280140 (--0XamlApplication_WASDK@implementation@WASDK@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     RegExists @ 0x1801F96BC (RegExists.c)
 *     ?WinAppSDKCohabitation_EnsureWASDKFrameworkPackageRegisteredWrapper@WinUICohabitationFunctions@@QEBAXXZ @ 0x180280FE8 (-WinAppSDKCohabitation_EnsureWASDKFrameworkPackageRegisteredWrapper@WinUICohabitationFunctions@@.c)
 *     ?Instance@WinUICohabitationFunctions@@SAPEAV1@XZ @ 0x180281120 (-Instance@WinUICohabitationFunctions@@SAPEAV1@XZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802811D8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@U12@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180281200 (--1-$com_ptr_t@V-$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U1.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180281268 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTip.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028262C (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180283040 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     RegGetDword @ 0x1806792E0 (RegGetDword.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK::LoadWinUIFrameworkPackage(
        winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::XamlApplication_WASDK *this)
{
  HMODULE *v2; // rax
  bool v3; // si
  __int64 v4; // rdi
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = (HMODULE *)WinUICohabitationFunctions::Instance();
  WinUICohabitationFunctions::WinAppSDKCohabitation_EnsureWASDKFrameworkPackageRegisteredWrapper(v2);
  v3 = (unsigned int)RegExists(HKEY_LOCAL_MACHINE, L"System\\Setup\\Status", L"AuditBoot")
    && (unsigned int)RegGetDword(-2147483646LL, L"System\\Setup\\Status")
    || (unsigned int)RegExists(HKEY_LOCAL_MACHINE, L"System\\Setup\\Status\\AuditBootVolatile", 0LL);
  v4 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK>>::ensure_data((char *)this + 64);
  v5 = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 280));
  tip2::details::shared_data<0,0,1>::begin_update(v4 + 8);
  *(_BYTE *)(v4 + 272) = v3;
  tip2::details::shared_data<0,0,0>::end_update(v4 + 8);
  wil::com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>,wil::err_returncode_policy>::reset(&v5);
  wil::com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK>,wil::err_returncode_policy>(&v5);
}
