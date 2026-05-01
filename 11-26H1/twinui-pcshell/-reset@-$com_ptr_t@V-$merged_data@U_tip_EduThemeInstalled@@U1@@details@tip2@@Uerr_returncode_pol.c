/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180607DC0
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180605C34 (--1-$test_data_control@V-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180608074 (-start@-$tip_test@V-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@AEAAKXZ @ 0x180607118 (-Release@-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>::Release(result);
  return result;
}
