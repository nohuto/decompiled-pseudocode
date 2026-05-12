/*
 * XREFs of sub_1400F7344 @ 0x1400F7344
 * Callers:
 *     sub_1400E00D0 @ 0x1400E00D0 (sub_1400E00D0.c)
 *     sub_1400F7E54 @ 0x1400F7E54 (sub_1400F7E54.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1400F7344(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( !*(_QWORD *)a1 || !*(_BYTE *)(a1 + 4LL * (*(_BYTE *)(a1 + 26) & 0xF) + 130) )
    return 1;
  return v1;
}
