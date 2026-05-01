/*
 * XREFs of ?Release@?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@AEAAKXZ @ 0x1805D5980
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CBDCC (--1-$com_ptr_t@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@Uerr_returncod.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805DC8C8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@Uerr_retur.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1805DCFDC (-start@-$tip_test@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA.c)
 * Callees:
 *     ??1?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@QEAA@XZ @ 0x1805CBFDC (--1-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 78);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>::~merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
