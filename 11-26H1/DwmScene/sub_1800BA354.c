/*
 * XREFs of sub_1800BA354 @ 0x1800BA354
 * Callers:
 *     sub_1800BA904 @ 0x1800BA904 (sub_1800BA904.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800CDCB4 @ 0x1800CDCB4 (sub_1800CDCB4.c)
 */

__int64 __fastcall sub_1800BA354(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v5; // rax
  __int64 *v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  _QWORD *v9; // r10
  __int128 *v10; // r11
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _QWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-28h] BYREF

  v5 = sub_180012C40(&v15, a4);
  v7 = *v6;
  v8 = v6[1];
  v9[1] = 0LL;
  *v9 = 0LL;
  v11 = *v10;
  v14[0] = v7;
  v12 = v10[1];
  v14[1] = v8;
  v16[0] = v11;
  v16[1] = v12;
  return ((__int64 (__fastcall *)(__int64, _OWORD *, _QWORD *, _QWORD *))sub_1800CDCB4)(a1, v16, v14, v5);
}
