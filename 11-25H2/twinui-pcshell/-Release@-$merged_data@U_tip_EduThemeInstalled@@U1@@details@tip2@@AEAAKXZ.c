/*
 * XREFs of ?Release@?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@AEAAKXZ @ 0x1805E2548
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805E0EF4 (--1-$com_ptr_t@V-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805E31CC (-reset@-$com_ptr_t@V-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@Uerr_returncode_pol.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1805E346C (-start@-$tip_test@V-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@.c)
 * Callees:
 *     ??1?$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@QEAA@XZ @ 0x1805E0FB0 (--1-$merged_data@U_tip_EduThemeInstalled@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 68);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>::~merged_data<_tip_EduThemeInstalled,_tip_EduThemeInstalled>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
