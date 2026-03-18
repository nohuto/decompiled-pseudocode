/*
 * XREFs of HvlpGetLpcbByApicId @ 0x1405BA1DC
 * Callers:
 *     HvlGetLpIndexFromApicId @ 0x1405B9260 (HvlGetLpIndexFromApicId.c)
 *     HvlStartBootLogicalProcessors @ 0x1405B9968 (HvlStartBootLogicalProcessors.c)
 *     KiQueryProcessorNode @ 0x1405EFC3C (KiQueryProcessorNode.c)
 *     HvlpEnableRootVirtualProcessor @ 0x140791C18 (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall HvlpGetLpcbByApicId(int a1)
{
  _DWORD *result; // rax
  unsigned int i; // edx

  result = HvlpLogicalProcessorRegions;
  for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; ++i )
  {
    if ( result[2] == a1 )
      return result;
    result += 26;
  }
  return 0LL;
}
