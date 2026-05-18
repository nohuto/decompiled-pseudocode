/*
 * XREFs of sub_18005BE04 @ 0x18005BE04
 * Callers:
 *     sub_18005D23C @ 0x18005D23C (sub_18005D23C.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800119A4 @ 0x1800119A4 (sub_1800119A4.c)
 *     sub_1800119CC @ 0x1800119CC (sub_1800119CC.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180032FE0 @ 0x180032FE0 (sub_180032FE0.c)
 *     sub_18005C7A8 @ 0x18005C7A8 (sub_18005C7A8.c)
 */

__int64 *__fastcall sub_18005BE04(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  sub_18005C7A8(a2);
  sub_180029C50(a1 + 808, (__int64)v9);
  v4 = (_QWORD *)(a1 + 864);
  v8 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    *(_QWORD *)&v8 = *a2;
    *((_QWORD *)&v8 + 1) = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
  }
  v6 = *(_QWORD *)(a1 + 872);
  if ( v6 == *(_QWORD *)(a1 + 880) )
    sub_1800119CC(v4, v6, &v8);
  else
    sub_1800119A4((__int64)v4, &v8);
  if ( *((_QWORD *)&v8 + 1) )
    sub_180010F00(*((volatile signed __int32 **)&v8 + 1));
  sub_180011E54((__int64)v9);
  sub_180032FE0(a1, *a2, 1);
  return a2;
}
