/*
 * XREFs of sub_140029648 @ 0x140029648
 * Callers:
 *     sub_1400425B8 @ 0x1400425B8 (sub_1400425B8.c)
 * Callees:
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 *     sub_1400296E0 @ 0x1400296E0 (sub_1400296E0.c)
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 */

__int64 __fastcall sub_140029648(__int64 a1)
{
  KIRQL v2; // bl
  int v3; // eax
  __int64 v4; // rdx
  int v5; // esi

  if ( (*(_BYTE *)(a1 + 104) & 1) == 0 )
    return 0LL;
  v2 = sub_14001E1F0(a1);
  v3 = sub_1400296E0(a1 + 376, 1LL);
  LOBYTE(v4) = v2;
  v5 = v3;
  sub_140029830(a1, v4);
  if ( sub_140020090(a1 + 376, 3) )
    sub_1400296E0(a1 + 376, 3LL);
  if ( v5 >= 0 )
    *(_BYTE *)(a1 + 104) &= ~1u;
  return (unsigned int)v5;
}
