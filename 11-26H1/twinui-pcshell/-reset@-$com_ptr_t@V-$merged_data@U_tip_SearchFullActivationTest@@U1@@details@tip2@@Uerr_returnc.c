/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180281B2C
 * Callers:
 *     ?CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180227810 (-CompleteFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z @ 0x18023CDB0 (-OnMessageHandler@UndockedSearchAppExperienceManager@@AEAAJI_K_J@Z.c)
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@_N@Z @ 0x18023F5D8 (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18027FF38 (-start@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA-A.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180281580 (--1-$test_data_control@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@@tip2@@Q.c)
 *     ?OnFullActivationTestTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1803B6800 (-OnFullActivationTestTimeoutTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ @ 0x180281B54 (-Release@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

void *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>,wil::err_returncode_policy>::reset(
        void **a1)
{
  void *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (void *)tip2::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release(result);
  return result;
}
