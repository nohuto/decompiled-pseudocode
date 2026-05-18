/*
 * XREFs of sub_1800417BC @ 0x1800417BC
 * Callers:
 *     sub_1800414D4 @ 0x1800414D4 (sub_1800414D4.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180041700 @ 0x180041700 (sub_180041700.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800417BC(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+28h] [rbp-20h]
  char v5; // [rsp+50h] [rbp+8h] BYREF

  sub_180029EF8(a1 + 16, a2);
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)(a2 + 72), 0, 1) == 1 )
  {
    v5 = 0;
    v3 = 0LL;
    v4 = 0uLL;
    *(_OWORD *)(a2 + 48) = 0u;
    *(_QWORD *)(a2 + 64) = *((_QWORD *)&v4 + 1);
    sub_180012C40(&v3, (_QWORD *)(a2 + 32));
    sub_180041700(&v3, a2 + 48, (__int64)&v5);
    if ( (_QWORD)v4 )
      sub_180010EC8(v4);
  }
}
