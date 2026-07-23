/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x1405BBAD0
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x1407E6DA0 (PpmIdleUpdateHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x1405BCA4C (HvlpGetLpcbByApicId.c)
 */

__int64 HvlGetLpIndexFromApicId()
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId()) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
