/*
 * XREFs of RaidCreateDma @ 0x140187BC8
 * Callers:
 *     RaidCreateAdapter @ 0x14006C434 (RaidCreateAdapter.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidCreateDma(_OWORD *a1)
{
  if ( a1 )
  {
    *a1 = 0LL;
    a1[1] = 0LL;
  }
}
