/*
 * XREFs of sub_1400B1402 @ 0x1400B1402
 * Callers:
 *     <none>
 * Callees:
 *     sub_14004E480 @ 0x14004E480 (sub_14004E480.c)
 */

__int64 __fastcall sub_1400B1402(__int64 a1, __int64 a2)
{
  int v3; // eax

  sub_14004E480(*(_QWORD *)(a2 + 32), *(_WORD **)(a2 + 64), *(_QWORD *)(a2 + 72));
  v3 = *(_DWORD *)(a2 + 80);
  if ( v3 >= 0 )
    v3 = -2147024322;
  *(_DWORD *)(a2 + 80) = v3;
  return 0LL;
}
