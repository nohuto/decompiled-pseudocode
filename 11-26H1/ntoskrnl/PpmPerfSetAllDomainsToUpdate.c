/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x14025A1F8
 * Callers:
 *     PpmCheckStart @ 0x14025832C (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x1407D139C (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     <none>
 */

PBOOLEAN PpmPerfSetAllDomainsToUpdate()
{
  PBOOLEAN result; // rax

  for ( result = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2);
        result != (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2);
        result = *(PBOOLEAN *)result )
  {
    result[1445] = 1;
  }
  return result;
}
