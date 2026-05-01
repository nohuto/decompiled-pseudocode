/*
 * XREFs of ?reset@?$com_ptr_t@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805B8E74
 * Callers:
 *     ?close@?$test_data_control@V?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1805B76C8 (-close@-$test_data_control@V-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@@tip2.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805B1B38 (-Release@-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 *__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>,wil::err_returncode_policy>::reset(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (volatile signed __int32 *)tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>::Release(result);
  return result;
}
