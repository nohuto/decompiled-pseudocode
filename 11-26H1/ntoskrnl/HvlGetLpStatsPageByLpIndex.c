/*
 * XREFs of HvlGetLpStatsPageByLpIndex @ 0x1405BBB00
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x1402F3138 (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall HvlGetLpStatsPageByLpIndex(unsigned int a1)
{
  _LIST_ENTRY *LpcbByLpIndex; // rax
  struct _LIST_ENTRY **v2; // r10

  if ( (HvlpFlags & 2) != 0 && a1 < 0x800 )
  {
    LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1);
    if ( LpcbByLpIndex )
      *v2 = LpcbByLpIndex[1].Blink;
  }
  return 0LL;
}
