/*
 * XREFs of ?Release@?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@AEAAKXZ @ 0x18036E060
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18036AFBC (--1-$com_ptr_t@V-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18036EFB0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@@tip2@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18036F3F0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@Uerr_return.c)
 * Callees:
 *     ??1?$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@QEAA@XZ @ 0x18036AFDC (--1-$merged_data@U_tip_ControlCenterDisabledTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>::~merged_data<_tip_ControlCenterDisabledTest,_tip_ControlCenterDisabledTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
