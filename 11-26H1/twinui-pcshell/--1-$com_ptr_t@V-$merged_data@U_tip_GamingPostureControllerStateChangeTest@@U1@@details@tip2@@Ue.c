/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180328E2C
 * Callers:
 *     ??1?$test_data_control@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180328FDC (--1-$test_data_control@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180329014 (--1-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@ti.c)
 *     winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureController::SetGamingPostureStateAsync$_ResumeCoro$1 @ 0x18032DD20 (winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostureController--S.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180330F40 (-ensure_data@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@AEAAKXZ @ 0x18032D718 (-Release@-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>::Release(v1);
  return result;
}
