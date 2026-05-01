/*
 * XREFs of ?Release@?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18062A458
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623D14 (--1-$com_ptr_t@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@Uerr_returncode_policy.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18062EF14 (-reset@-$com_ptr_t@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@Uerr_returncode_po.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18062F2F0 (-start@-$tip_test@V-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID.c)
 * Callees:
 *     ??1?$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x18062409C (--1-$merged_data@U_tip_FileMappingTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 74);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>::~merged_data<_tip_FileMappingTipTest,_tip_FileMappingTipTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
