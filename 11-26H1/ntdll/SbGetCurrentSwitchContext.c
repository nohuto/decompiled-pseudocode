/*
 * XREFs of SbGetCurrentSwitchContext @ 0x1800848B0
 * Callers:
 *     SbpUpdateCache @ 0x180084310 (SbpUpdateCache.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800845B0 (SbUpdateSwitchContextBasedOnDll.c)
 *     SbCleanupTrace @ 0x180102180 (SbCleanupTrace.c)
 * Callees:
 *     <none>
 */

char *SbGetCurrentSwitchContext()
{
  char *pShimData; // rax
  char *result; // rax

  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( !pShimData )
    return 0LL;
  result = pShimData + 2016;
  if ( !result || !*((_DWORD *)result + 12) )
    return 0LL;
  return result;
}
