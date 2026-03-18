/*
 * XREFs of Feature_MSRC99365_58294879__private_IsEnabledNoReportingNoInline @ 0x14004F21C
 * Callers:
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x140129CD8 (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 * Callees:
 *     Feature_MSRC99365_58294879__private_IsEnabledFallback @ 0x14004F200 (Feature_MSRC99365_58294879__private_IsEnabledFallback.c)
 */

__int64 Feature_MSRC99365_58294879__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_MSRC99365_58294879__private_featureState & 2) != 0 )
    return Feature_MSRC99365_58294879__private_featureState & 1;
  else
    return Feature_MSRC99365_58294879__private_IsEnabledFallback(
             (unsigned int)Feature_MSRC99365_58294879__private_featureState,
             0);
}
