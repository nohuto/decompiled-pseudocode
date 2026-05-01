/*
 * XREFs of ?LoadWinUIFrameworkPackage@XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801B588C
 * Callers:
 *     ??0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1801B500C (--0XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802891A8 (--1-$com_ptr_t@V-$merged_data@U_tip_CreateXamlApplicationTest_WASDK@XamlExplorerHostTipTests@@U1.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1802894C8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@U12@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289678 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CreateXamlApplicationTest@XamlExplorerHostTipTests@.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028A668 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028ADE8 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ @ 0x1802BD7C0 (-IsAuditMode@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@YA_NXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::LoadWinUIFrameworkPackage(
        winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication *this)
{
  bool IsAuditMode; // si
  __int64 v3; // rdi
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  IsAuditMode = winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::IsAuditMode(this);
  v3 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::ensure_data((char *)this + 72);
  v7 = v3;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 272));
  tip2::details::shared_data<0,0,1>::begin_update(v3 + 8);
  *(_BYTE *)(v3 + 264) = IsAuditMode;
  tip2::details::shared_data<0,0,0>::end_update(v3 + 8);
  wil::com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>,wil::err_returncode_policy>::reset(&v7);
  wil::com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest_WASDK>,wil::err_returncode_policy>(&v7);
  v4 = AddDependencyToProcessPackageGraph(L"Microsoft.UI.Xaml.CBS_8wekyb3d8bbwe", 0LL, 0LL, 0LL);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA8,
      (int)"pcshell\\twinui\\XamlExplorerHost\\lib\\XamlApplication.cpp",
      (const char *)(unsigned int)v4,
      v5);
}
