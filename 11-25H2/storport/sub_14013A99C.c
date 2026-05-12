/*
 * XREFs of sub_14013A99C @ 0x14013A99C
 * Callers:
 *     sub_14013A76C @ 0x14013A76C (sub_14013A76C.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_140137D80 @ 0x140137D80 (sub_140137D80.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 *     sub_14013839C @ 0x14013839C (sub_14013839C.c)
 */

__int64 __fastcall sub_14013A99C(int **a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // r8
  __int64 *v6; // rbp
  __int64 *v7; // r14
  int v8; // esi
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF

  v10 = a3;
  v3 = *(_WORD *)(a2 + 24);
  if ( !v3 )
  {
    v3 = *((_WORD *)a1 + 14);
    *(_WORD *)(a2 + 24) = v3;
  }
  v6 = (__int64 *)(a2 + 48);
  v7 = (__int64 *)(a2 + 40);
  v8 = sub_140137D80(*a1, 1, v3, 2048, (__int64 *)(a2 + 40), (__int64 *)(a2 + 48));
  if ( v8 >= 0 )
  {
    sub_1400859FC(*a1, "SetMaxPacketSize", 255, 23, v10, 0LL);
    v8 = sub_140137E38(
           (__int64)a1,
           a2,
           255LL,
           65281LL,
           (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_140139940,
           (__int64)&v10,
           255LL,
           65281LL,
           0LL,
           0LL);
  }
  sub_14013839C(*a1, v7, v6);
  return (unsigned int)v8;
}
