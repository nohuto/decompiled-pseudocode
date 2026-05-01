/*
 * XREFs of ?Release@?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@AEAAKXZ @ 0x1803AE718
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1803A4DF8 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1803B2F98 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@AEBA.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1803B42F0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@Uerr_returncode_.c)
 * Callees:
 *     ??1?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@QEAA@XZ @ 0x1803A4ED0 (--1-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 68);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>::~merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
