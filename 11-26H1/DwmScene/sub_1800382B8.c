/*
 * XREFs of sub_1800382B8 @ 0x1800382B8
 * Callers:
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 *     sub_180055064 @ 0x180055064 (sub_180055064.c)
 *     sub_1800553F4 @ 0x1800553F4 (sub_1800553F4.c)
 *     sub_180083A90 @ 0x180083A90 (sub_180083A90.c)
 *     sub_180084A60 @ 0x180084A60 (sub_180084A60.c)
 *     sub_180099888 @ 0x180099888 (sub_180099888.c)
 *     sub_18009993C @ 0x18009993C (sub_18009993C.c)
 * Callees:
 *     sub_1800128EC @ 0x1800128EC (sub_1800128EC.c)
 */

_QWORD *__fastcall sub_1800382B8(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rcx
  _QWORD *v4; // r9

  *a2 = 0LL;
  a2[1] = 0LL;
  v2 = a2;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 && sub_1800128EC(v3) )
  {
    *v2 = *v4;
    v2[1] = v4[1];
  }
  return v2;
}
