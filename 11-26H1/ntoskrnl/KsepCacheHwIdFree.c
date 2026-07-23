/*
 * XREFs of KsepCacheHwIdFree @ 0x140600D10
 * Callers:
 *     <none>
 * Callees:
 *     KsepPoolFreePaged @ 0x1404DC150 (KsepPoolFreePaged.c)
 *     KsepStringFree @ 0x1409D7848 (KsepStringFree.c)
 */

void __fastcall KsepCacheHwIdFree(char *a1)
{
  if ( a1 )
  {
    KsepStringFree(a1 + 40);
    KsepPoolFreePaged(a1);
  }
}
