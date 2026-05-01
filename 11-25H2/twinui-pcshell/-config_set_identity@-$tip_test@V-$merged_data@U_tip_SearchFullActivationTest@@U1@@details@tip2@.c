/*
 * XREFs of ?config_set_identity@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAAXIPEBD@Z @ 0x18028D60C
 * Callers:
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@_N@Z @ 0x1800AD318 (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028CECC (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CEA04 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 */

volatile signed __int32 **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::config_set_identity(
        wil::details::in1diag3 *a1,
        int a2,
        __int64 a3)
{
  volatile signed __int32 **v5; // r9
  __int64 v6; // rcx
  volatile signed __int32 **result; // rax
  volatile signed __int32 *v8; // rcx

  v5 = (volatile signed __int32 **)a1;
  if ( !a3 || (v6 = *(_QWORD *)a1) != 0 && (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(v6 + 8) )
    wil::details::in1diag3::FailFastImmediate_Unexpected(a1);
  result = tip2::tip_test<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>>::ensure_data(v5);
  v8 = *result;
  *((_QWORD *)v8 + 4) = a3;
  *((_DWORD *)v8 + 6) = a2;
  return result;
}
