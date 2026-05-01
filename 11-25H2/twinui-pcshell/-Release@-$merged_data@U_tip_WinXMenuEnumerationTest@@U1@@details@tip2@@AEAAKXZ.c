/*
 * XREFs of ?Release@?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805DE4A8
 * Callers:
 *     ?_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ @ 0x18009D874 (-_EnumerateAndBuildMenu@CLauncherTipContextMenu@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180289228 (--1-$com_ptr_t@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_p.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802896DC (-ensure_data@-$tip_test@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@@tip2@@A.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805DFD84 (-reset@-$com_ptr_t@V-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@Uerr_returnco.c)
 * Callees:
 *     ??1?$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805DBC40 (--1-$merged_data@U_tip_WinXMenuEnumerationTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 76);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>::~merged_data<_tip_WinXMenuEnumerationTest,_tip_WinXMenuEnumerationTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
