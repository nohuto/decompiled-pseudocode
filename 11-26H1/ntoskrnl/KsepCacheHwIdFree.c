/*
 * XREFs of KsepCacheHwIdFree @ 0x1405FE2C0
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolFreePaged @ 0x1404E2A70 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x1409E5588 (KsepStringFree.c)
 */

void __fastcall KsepCacheHwIdFree(char *a1)
{
  if ( a1 )
  {
    KsepStringFree(a1 + 40);
    KsepPoolFreePaged(a1);
  }
}
