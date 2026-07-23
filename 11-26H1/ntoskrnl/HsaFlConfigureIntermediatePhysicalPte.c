/*
 * XREFs of HsaFlConfigureIntermediatePhysicalPte @ 0x1405ADA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HsaFlConfigureIntermediatePhysicalPte(unsigned __int64 *a1, int a2, __int64 a3)
{
  if ( *a1 || !a2 )
    return 0;
  *a1 = a3 ^ a3 & 0xFFF0000000000FFFuLL | 0x8000000000000007uLL;
  return 1;
}
