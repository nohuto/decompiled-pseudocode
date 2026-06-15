/*
 * XREFs of sub_1400534F0 @ 0x1400534F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

char __fastcall sub_1400534F0(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = dword_1400E7B58;
  dword_1400E7B58 = *(_DWORD *)(a2 + 16);
  if ( v2 != dword_1400E7B58 )
    sub_1400B6010(a1);
  return 1;
}
