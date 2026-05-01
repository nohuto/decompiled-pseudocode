/*
 * XREFs of ?open_helper@?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x180288880
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180288834 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@det.c)
 * Callees:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x180280F34 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x180281DD4 (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802889A4 (--1-$com_ptr_t@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_return.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802BFC14 (--4-$com_ptr_t@V-$merged_data@U_tip_DiscoverabilityManagerTipTest@@U1@@details@tip2@@Uerr_return.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802C604C (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 */

__int64 __fastcall tip2::tip_test<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>>::open_helper(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v2 = *a1;
  v8[0] = 0LL;
  if ( !v2 || (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(v2 + 8) )
  {
    v6 = tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,_GUID * &>(
           &v9,
           v8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>::operator=(
      a1,
      v6);
    wil::com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_DiscoverabilityManagerTipTest,_tip_DiscoverabilityManagerTipTest>,wil::err_returncode_policy>(&v9);
  }
  else
  {
    tip2::details::shared_data<1,0,0>::open_without_lock(v4, 0LL, v5);
  }
  return tip2::details::shared_data<1,0,0>::has_ever_started(*a1 + 8);
}
