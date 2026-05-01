/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180363DBC
 * Callers:
 *     ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1802C7FAC (-ShowExperience@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180363E0C (--1-$test_data_control@V-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@@.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180363E44 (--1-$tip_test@V-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180367D70 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@AEAAKXZ @ 0x180366E70 (-Release@-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>::Release(v1);
  return result;
}
