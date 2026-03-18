/*
 * XREFs of PpmPerfSetAllDomainsToUpdate @ 0x140258A18
 * Callers:
 *     PpmCheckStart @ 0x14025699C (PpmCheckStart.c)
 *     PpmPerfReApplyStates @ 0x1407CE2FC (PpmPerfReApplyStates.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A9D254 (PpmPerfUpdateDomainPolicy.c)
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
