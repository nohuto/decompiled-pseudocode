/*
 * XREFs of sub_1400B1500 @ 0x1400B1500
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001DFBC @ 0x14001DFBC (sub_14001DFBC.c)
 *     sub_14004E950 @ 0x14004E950 (sub_14004E950.c)
 */

__int64 __fastcall sub_1400B1500(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = sub_14004E950(*(_QWORD *)(a2 + 152));
  if ( v3 >= 0 )
    return 1LL;
  *(_DWORD *)(a2 + 72) = v3;
  *(_DWORD *)(a2 + 76) = sub_14001DFBC(v3);
  *(_DWORD *)(a2 + 80) = 0;
  return 0LL;
}
