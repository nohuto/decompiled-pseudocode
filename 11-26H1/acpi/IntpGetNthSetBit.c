/*
 * XREFs of IntpGetNthSetBit @ 0x14004A508
 * Callers:
 *     IntpArbGetNextAffinity @ 0x1400D0AE4 (IntpArbGetNextAffinity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntpGetNthSetBit(unsigned __int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned int i; // r9d

  LOBYTE(v2) = 0;
  for ( i = 0; i < a2 + 1; ++i )
  {
    if ( !_BitScanForward64((unsigned __int64 *)&v2, a1) )
      return 0LL;
    a1 &= ~(1LL << v2);
  }
  return 1LL << v2;
}
