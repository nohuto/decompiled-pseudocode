/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180649A10
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649F60 (--1-$test_data_control@V-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18064A07C (--1-$test_watcher@V-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x18064EE38 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180654F54 (-start@-$tip_test@V-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@@tip2@@QEAA-.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18064FF40 (-Release@-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>::Release(v1);
  return result;
}
