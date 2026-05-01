/*
 * XREFs of ?Release@?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@AEAAKXZ @ 0x18032F448
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18032BAF8 (--1-$com_ptr_t@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Ue.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180331EC0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1803337A0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2.c)
 * Callees:
 *     ??1?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@QEAA@XZ @ 0x18032BB74 (--1-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>::~merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
