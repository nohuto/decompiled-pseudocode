/*
 * XREFs of sub_18007AEA8 @ 0x18007AEA8
 * Callers:
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 * Callees:
 *     sub_180011790 @ 0x180011790 (sub_180011790.c)
 *     sub_180012A30 @ 0x180012A30 (sub_180012A30.c)
 *     sub_180028BA0 @ 0x180028BA0 (sub_180028BA0.c)
 *     sub_18007B220 @ 0x18007B220 (sub_18007B220.c)
 *     sub_18007B61C @ 0x18007B61C (sub_18007B61C.c)
 *     sub_18007B864 @ 0x18007B864 (sub_18007B864.c)
 *     sub_18007D10C @ 0x18007D10C (sub_18007D10C.c)
 *     sub_18007D1E0 @ 0x18007D1E0 (sub_18007D1E0.c)
 */

__int64 __fastcall sub_18007AEA8(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  _QWORD v18[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-38h]

  v3 = *a1;
  v7 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( v7 == 0x666666666666666LL )
    sub_180012A30();
  v8 = v7 + 1;
  v9 = sub_18007D10C(a1, v7 + 1);
  v10 = sub_180028BA0(v9);
  v11 = sub_180011790(v10);
  v18[0] = a1;
  v18[2] = v9;
  v12 = (__int64)((unsigned __int128)((a2 - v3) * (__int128)0x6666666666666667LL) >> 64) >> 4;
  v13 = v11 + 40 * ((a2 - v3) / 40);
  v20 = v13 + 40;
  sub_18007B61C(v11 + 40 * ((v12 >> 63) + v12), a3);
  v14 = a1[1];
  v15 = v11;
  v16 = *a1;
  v19 = v13;
  if ( a2 != v14 )
  {
    sub_18007B220(v16, a2, v11);
    v14 = a1[1];
    v15 = v13 + 40;
    v16 = a2;
    v19 = v11;
  }
  sub_18007B220(v16, v14, v15);
  v18[1] = 0LL;
  sub_18007D1E0(a1, v11, v8, v9);
  sub_18007B864(v18);
  return v13;
}
