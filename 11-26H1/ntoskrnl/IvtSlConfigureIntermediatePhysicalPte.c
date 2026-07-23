/*
 * XREFs of IvtSlConfigureIntermediatePhysicalPte @ 0x1405ADE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall IvtSlConfigureIntermediatePhysicalPte(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  char result; // al
  __int64 v5; // r9
  __int64 v6; // r10

  v3 = *a1;
  if ( *a1 )
    return 0;
  v5 = 1LL;
  v6 = 2LL;
  do
  {
    v3 |= v5++;
    --v6;
  }
  while ( v6 );
  result = 1;
  *a1 = a3 ^ (a3 ^ v3) & 0xFFF0000000000FFFuLL;
  return result;
}
