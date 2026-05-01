/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1803B42F0
 * Callers:
 *     ?Hide@UndockedSearchAppExperienceManager@@UEAAJXZ @ 0x1802493D0 (-Hide@UndockedSearchAppExperienceManager@@UEAAJXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1803A4FD0 (--1-$test_data_control@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ?StartSearchHomeRenderTest@UndockedSearchAppExperienceManager@@AEAAXW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1803B0C20 (-StartSearchHomeRenderTest@UndockedSearchAppExperienceManager@@AEAAXW4CortanaAppTransitionType@E.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@AEAAKXZ @ 0x1803AE718 (-Release@-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>::Release(result);
  return result;
}
