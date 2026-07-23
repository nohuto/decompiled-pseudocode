/*
 * XREFs of HvlpAllowFastFlushList @ 0x1402F4834
 * Callers:
 *     HvlpFlushRangeListTbEx @ 0x1402F443C (HvlpFlushRangeListTbEx.c)
 * Callees:
 *     <none>
 */

char __fastcall HvlpAllowFastFlushList(int a1, int a2)
{
  char v2; // r8

  v2 = 0;
  if ( (HvlEnlightenments & 0x80u) != 0 && (!a1 || (unsigned int)(a2 + 1) <= 0xC) )
    return 1;
  return v2;
}
