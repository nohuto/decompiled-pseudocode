/*
 * XREFs of sub_18006F270 @ 0x18006F270
 * Callers:
 *     <none>
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_18003F830 @ 0x18003F830 (sub_18003F830.c)
 */

_QWORD *__fastcall sub_18006F270(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL);
  v5 = sub_180013440(v10, (__int64)&unk_1801C9098);
  sub_18003F830(v4, (__int64)v9, -1LL, (__int64)v5);
  sub_180012C40(v10, (_QWORD *)(*(_QWORD *)(a1 + 8) + 320LL));
  v6 = v9[0];
  a2[1] = v9[1];
  v7 = v10[0];
  *a2 = v6;
  a2[2] = v7;
  a2[3] = v10[1];
  return a2;
}
