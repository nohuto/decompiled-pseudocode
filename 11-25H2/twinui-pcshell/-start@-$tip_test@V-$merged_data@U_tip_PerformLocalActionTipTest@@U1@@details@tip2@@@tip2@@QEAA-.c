/*
 * XREFs of ?start@?$tip_test@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18062F38C
 * Callers:
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x180629388 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 * Callees:
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028CC38 (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CEA04 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??0?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180622F40 (--0-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623D34 (--1-$com_ptr_t@V-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?Release@?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18062A4A0 (-Release@-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18062EF38 (-reset@-$com_ptr_t@V-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_return.c)
 */

_OWORD *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>>::start(
        volatile signed __int32 **a1,
        _OWORD *a2)
{
  volatile signed __int32 *v4; // rcx
  LPVOID v5; // rax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = *a1;
  if ( v4 && tip2::details::shared_data<1,0,0>::has_ever_started((__int64)(v4 + 2)) )
    wil::com_ptr_t<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>,wil::err_returncode_policy>::reset(a1);
  if ( !*a1 )
  {
    v5 = CoTaskMemAlloc(0x118uLL);
    if ( !v5 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v6);
    v7 = tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>((__int64)v5);
    v8 = *a1;
    v10 = 0LL;
    *a1 = (volatile signed __int32 *)v7;
    if ( v8 )
      tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>::Release(v8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>,wil::err_returncode_policy>(&v10);
  }
  tip2::details::shared_data<1,0,0>::start((__int64)(*a1 + 2), a2);
  return a2;
}
