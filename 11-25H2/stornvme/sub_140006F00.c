/*
 * XREFs of sub_140006F00 @ 0x140006F00
 * Callers:
 *     sub_14000FB60 @ 0x14000FB60 (sub_14000FB60.c)
 * Callees:
 *     sub_1400078E0 @ 0x1400078E0 (sub_1400078E0.c)
 *     sub_14000D7A0 @ 0x14000D7A0 (sub_14000D7A0.c)
 */

__int64 __fastcall sub_140006F00(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // esi
  __int64 v5; // rbp

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 20) )
    return 0LL;
  if ( *(_QWORD *)(a1 + 1392) )
    v3 = *(unsigned __int16 *)(a1 + 1552);
  else
    v3 = sub_14000D7A0();
  *(_WORD *)(a1 + 1552) = v3;
  if ( !v3 || !*(_QWORD *)(a1 + 1392) )
    return 0LL;
  v5 = v3;
  do
  {
    sub_1400078E0(a1, v1 + *(_QWORD *)(a1 + 1392));
    v1 += 128LL;
    --v5;
  }
  while ( v5 );
  return v3;
}
