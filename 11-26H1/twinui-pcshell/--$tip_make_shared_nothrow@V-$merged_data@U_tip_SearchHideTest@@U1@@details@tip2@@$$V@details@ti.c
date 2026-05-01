/*
 * XREFs of ??$tip_make_shared_nothrow@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@$$V@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028BC30
 * Callers:
 *     ?RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801D0474 (-RequestSearchAppToHideInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180282A48 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV-$.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z @ 0x18028BBEC (--0-$test_watcher@V-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@@tip2@@QEAA@$$T@Z.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18027FD64 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@QEAA@XZ @ 0x18028BC70 (--0-$merged_data@U_tip_SearchHideTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

_QWORD *__fastcall tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>,>(
        _QWORD *a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx

  v2 = CoTaskMemAlloc(0x158uLL);
  if ( !v2 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
  *a1 = tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>(v2);
  return a1;
}
