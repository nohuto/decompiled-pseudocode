/*
 * XREFs of PpmHeteroAcknowledgeWpsUpdateIntel @ 0x1404EFAC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 PpmHeteroAcknowledgeWpsUpdateIntel()
{
  unsigned __int64 result; // rax

  if ( PpmHeteroHgsEnabled )
  {
    if ( PpmHeteroHgsVendor == 2 )
    {
      result = __readmsr(0x1B1u) & 0xFFFFFFFFFBFFFFFFuLL;
      __writemsr(0x1B1u, result);
    }
  }
  return result;
}
