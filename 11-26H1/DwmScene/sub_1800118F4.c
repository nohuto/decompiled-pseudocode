/*
 * XREFs of sub_1800118F4 @ 0x1800118F4
 * Callers:
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 * Callees:
 *     sub_1800128EC @ 0x1800128EC (sub_1800128EC.c)
 */

char __fastcall sub_1800118F4(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  _QWORD *v5; // r9

  v3 = *(_QWORD *)(a2 + 8);
  if ( !v3 || !(unsigned __int8)sub_1800128EC(v3, a2, a2, a1) )
    return 0;
  *v5 = *v4;
  v5[1] = v4[1];
  return 1;
}
