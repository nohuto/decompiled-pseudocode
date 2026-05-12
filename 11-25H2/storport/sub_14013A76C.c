/*
 * XREFs of sub_14013A76C @ 0x14013A76C
 * Callers:
 *     sub_14013A898 @ 0x14013A898 (sub_14013A898.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137D80 @ 0x140137D80 (sub_140137D80.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 *     sub_140138324 @ 0x140138324 (sub_140138324.c)
 *     sub_14013839C @ 0x14013839C (sub_14013839C.c)
 *     sub_14013A99C @ 0x14013A99C (sub_14013A99C.c)
 */

__int64 __fastcall sub_14013A76C(int **a1, __int64 a2)
{
  int v4; // esi
  __int16 v5; // r8
  int *v6; // rcx
  __int64 *v7; // r8
  __int64 *v8; // rdx

  v4 = sub_14013A99C(a1, a2, *((unsigned int *)a1 + 11));
  if ( v4 >= 0 )
  {
    v5 = *(_WORD *)(a2 + 24);
    if ( !v5 )
    {
      v5 = *((_WORD *)a1 + 14);
      *(_WORD *)(a2 + 24) = v5;
    }
    v4 = sub_140137D80(*a1, 1, v5, 2048, (__int64 *)(a2 + 40), (__int64 *)(a2 + 48));
    if ( v4 >= 0 )
    {
      sub_1400859FC(*a1, "OpenSession", 255, 2, *(_QWORD *)(a2 + 16), 0LL);
      v4 = sub_140137E38(
             (__int64)a1,
             a2,
             255LL,
             65282LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_140139B00,
             0LL,
             255LL,
             65283LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_140139CC0,
             0LL);
    }
  }
  v6 = *a1;
  v7 = (__int64 *)(a2 + 48);
  v8 = (__int64 *)(a2 + 40);
  if ( v4 < 0 )
  {
    sub_14013839C(v6, v8, v7);
    *(_QWORD *)(a2 + 4) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_WORD *)(a2 + 24) = 0;
  }
  else
  {
    sub_140138324(v6, *v8, *v7);
  }
  return (unsigned int)v4;
}
