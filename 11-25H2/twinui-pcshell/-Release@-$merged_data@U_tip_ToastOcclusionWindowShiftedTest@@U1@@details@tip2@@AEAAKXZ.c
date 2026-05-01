/*
 * XREFs of ?Release@?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@AEAAKXZ @ 0x180375B30
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180373C60 (--1-$com_ptr_t@V-$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@Uerr_retu.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180377948 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180377AF0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@Uerr_.c)
 * Callees:
 *     ??1?$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@QEAA@XZ @ 0x180373C80 (--1-$merged_data@U_tip_ToastOcclusionWindowShiftedTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 68);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>::~merged_data<_tip_ToastOcclusionWindowShiftedTest,_tip_ToastOcclusionWindowShiftedTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
