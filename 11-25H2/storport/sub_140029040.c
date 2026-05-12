/*
 * XREFs of sub_140029040 @ 0x140029040
 * Callers:
 *     sub_1400068E0 @ 0x1400068E0 (sub_1400068E0.c)
 *     sub_1400281F4 @ 0x1400281F4 (sub_1400281F4.c)
 *     sub_140028FC0 @ 0x140028FC0 (sub_140028FC0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140029040(__int64 a1)
{
  if ( a1 && *(_DWORD *)a1 == 1094997074 )
    return *(_BYTE *)(a1 + 604) & 0x10;
  else
    return 0;
}
