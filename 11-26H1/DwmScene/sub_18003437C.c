/*
 * XREFs of sub_18003437C @ 0x18003437C
 * Callers:
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_1800336C8 @ 0x1800336C8 (sub_1800336C8.c)
 * Callees:
 *     sub_1800128EC @ 0x1800128EC (sub_1800128EC.c)
 */

_QWORD *__fastcall sub_18003437C(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r10
  _QWORD *v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r10

  v3 = *(_QWORD *)(a1 + 888);
  *a2 = 0LL;
  v4 = a2;
  a2[1] = 0LL;
  v5 = *(_QWORD *)(v3 + 16 * a3 + 8);
  if ( v5 && sub_1800128EC(v5) )
  {
    *v4 = *(_QWORD *)(v7 + 8 * v6);
    v4[1] = *(_QWORD *)(v7 + 8 * v6 + 8);
  }
  return v4;
}
