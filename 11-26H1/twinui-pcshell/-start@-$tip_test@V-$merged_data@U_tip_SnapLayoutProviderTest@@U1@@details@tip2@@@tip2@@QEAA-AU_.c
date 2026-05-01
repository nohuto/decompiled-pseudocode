/*
 * XREFs of ?start@?$tip_test@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180292A98
 * Callers:
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180292A0C (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@t.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18027FD64 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x180282C10 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180292A78 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_po.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802C604C (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ??0?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805B5988 (--0-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ?Release@?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805B6294 (-Release@-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805B64CC (-reset@-$com_ptr_t@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncod.c)
 */

_OWORD *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::start(
        __int64 *a1,
        _OWORD *a2)
{
  char *v4; // rcx
  LPVOID v5; // rax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (char *)*a1;
  if ( v4 && (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(v4 + 8) )
    wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::reset(a1);
  if ( !*a1 )
  {
    v5 = CoTaskMemAlloc(0x168uLL);
    if ( !v5 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v6);
    v7 = tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>(v5);
    v8 = (void *)*a1;
    v10 = 0LL;
    *a1 = v7;
    if ( v8 )
      tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>::Release(v8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>(&v10);
  }
  tip2::details::shared_data<0,0,0>::start(*a1 + 8, a2);
  return a2;
}
