/*
 * XREFs of HvlpGetLpcbByApicId @ 0x1405BCA4C
 * Callers:
 *     HvlGetLpIndexFromApicId @ 0x1405BBAD0 (HvlGetLpIndexFromApicId.c)
 *     HvlStartBootLogicalProcessors @ 0x1405BC1D8 (HvlStartBootLogicalProcessors.c)
 *     KiQueryProcessorNode @ 0x1405F25AC (KiQueryProcessorNode.c)
 *     HvlpEnableRootVirtualProcessor @ 0x140794748 (HvlpEnableRootVirtualProcessor.c)
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
