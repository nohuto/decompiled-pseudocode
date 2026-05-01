/*
 * XREFs of ?Release@?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@AEAAKXZ @ 0x18049CDD8
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180499BE8 (--1-$com_ptr_t@V-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18049A01C (--4-$com_ptr_t@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18049DFDC (-start@-$tip_test@V-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_DisableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180643538 (-start@-$tip_test@V-$merged_data@U_tip_DisableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_G.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1806435E0 (-start@-$tip_test@V-$merged_data@U_tip_EnableCloudPCTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GU.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_IsSupportedTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180643688 (-start@-$tip_test@V-$merged_data@U_tip_IsSupportedTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID.c)
 * Callees:
 *     ??1?$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@QEAA@XZ @ 0x180499C50 (--1-$merged_data@U_tip_AppThumbnailTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 68);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>::~merged_data<_tip_AppThumbnailTest,_tip_AppThumbnailTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
