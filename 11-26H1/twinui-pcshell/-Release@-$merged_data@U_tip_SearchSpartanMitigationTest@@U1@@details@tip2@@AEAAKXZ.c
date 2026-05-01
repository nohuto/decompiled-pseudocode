/*
 * XREFs of ?Release@?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@AEAAKXZ @ 0x1803B71A0
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1803AE0A0 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@Uerr_returnco.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1803BD6E8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@Uerr_retu.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1803BDEC8 (-start@-$tip_test@V-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@@tip2@@QEA.c)
 * Callees:
 *     ??1?$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@QEAA@XZ @ 0x1803AE1A8 (--1-$merged_data@U_tip_SearchSpartanMitigationTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>::~merged_data<_tip_SearchSpartanMitigationTest,_tip_SearchSpartanMitigationTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
