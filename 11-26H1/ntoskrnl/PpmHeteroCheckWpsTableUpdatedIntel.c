/*
 * XREFs of PpmHeteroCheckWpsTableUpdatedIntel @ 0x1404EFE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool PpmHeteroCheckWpsTableUpdatedIntel()
{
  bool result; // al
  unsigned __int64 v1; // rax

  result = 0;
  if ( PpmHeteroHgsEnabled )
  {
    if ( PpmHeteroHgsVendor == 2 )
    {
      v1 = __readmsr(0x1B1u);
      return (v1 & 0x4000000) != 0;
    }
  }
  return result;
}
