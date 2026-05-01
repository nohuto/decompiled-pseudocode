/*
 * XREFs of ??4?$com_ptr_t@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180619184
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180616ED8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18061CC80 (-ensure_data@-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@AEBAAEA.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@AEAAKXZ @ 0x18061C2BC (-Release@-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

void **__fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>,wil::err_returncode_policy>::operator=(
        void **a1,
        void **a2)
{
  void *v2; // rax
  void *v4; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>::Release(v4);
  return a1;
}
