/*
 * XREFs of sub_14013A658 @ 0x14013A658
 * Callers:
 *     sub_140138A04 @ 0x140138A04 (sub_140138A04.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137D80 @ 0x140137D80 (sub_140137D80.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 *     sub_14013839C @ 0x14013839C (sub_14013839C.c)
 */

__int64 __fastcall sub_14013A658(int **a1, __int64 a2, __int64 a3)
{
  __int16 v6; // r8
  __int64 *v7; // r14
  __int64 *v8; // r15
  int v9; // ebp

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(_DWORD *)(a3 + 40) = 0;
  v6 = *(_WORD *)(a2 + 24);
  if ( !v6 )
  {
    v6 = *((_WORD *)a1 + 14);
    *(_WORD *)(a2 + 24) = v6;
  }
  v7 = (__int64 *)(a2 + 48);
  v8 = (__int64 *)(a2 + 40);
  v9 = sub_140137D80(*a1, 1, v6, 2048, (__int64 *)(a2 + 40), (__int64 *)(a2 + 48));
  if ( v9 >= 0 )
  {
    sub_1400859FC(*a1, "GetTPerProperties", 255, 1, 0LL, 0LL);
    v9 = sub_140137E38(
           (__int64)a1,
           a2,
           255LL,
           65281LL,
           0LL,
           0LL,
           255LL,
           65281LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_140139E20,
           a3);
  }
  sub_14013839C(*a1, v8, v7);
  return (unsigned int)v9;
}
