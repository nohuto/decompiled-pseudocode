/*
 * XREFs of sub_180045FCC @ 0x180045FCC
 * Callers:
 *     sub_180045FA8 @ 0x180045FA8 (sub_180045FA8.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_1800119CC @ 0x1800119CC (sub_1800119CC.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180032FE0 @ 0x180032FE0 (sub_180032FE0.c)
 *     sub_180046624 @ 0x180046624 (sub_180046624.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180045FCC(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_180046624(a2, a4);
  sub_180029C50(a1 + 808, (__int64)v11);
  v6 = (_QWORD *)(a1 + 864);
  v10 = 0LL;
  v7 = a2[1];
  if ( v7 )
  {
    *(_QWORD *)&v10 = *a2;
    *((_QWORD *)&v10 + 1) = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 12));
  }
  v8 = *(_QWORD *)(a1 + 872);
  if ( v8 == *(_QWORD *)(a1 + 880) )
    sub_1800119CC(v6, v8, &v10);
  else
    sub_1800119A4((__int64)v6, &v10);
  if ( *((_QWORD *)&v10 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v10 + 1));
  sub_180011E54((__int64)v11);
  sub_180032FE0(a1, *a2, 1);
  return a2;
}
