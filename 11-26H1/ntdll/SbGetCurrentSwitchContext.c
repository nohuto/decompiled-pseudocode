/*
 * XREFs of SbGetCurrentSwitchContext @ 0x180064460
 * Callers:
 *     SbpUpdateCache @ 0x180063EC0 (SbpUpdateCache.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x180064160 (SbUpdateSwitchContextBasedOnDll.c)
 *     SbCleanupTrace @ 0x180102E00 (SbCleanupTrace.c)
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
