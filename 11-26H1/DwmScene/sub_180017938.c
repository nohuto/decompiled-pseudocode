/*
 * XREFs of sub_180017938 @ 0x180017938
 * Callers:
 *     sub_180017EE0 @ 0x180017EE0 (sub_180017EE0.c)
 * Callees:
 *     sub_180011D1C @ 0x180011D1C (sub_180011D1C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 */

__int64 __fastcall sub_180017938(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int128 v11; // xmm1
  int v12; // r10d
  int v13; // r11d
  _QWORD v15[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+50h] [rbp-38h] BYREF
  _OWORD v17[2]; // [rsp+60h] [rbp-28h] BYREF

  v9 = *a7;
  v15[0] = *a4;
  v15[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v10 = sub_180012C40(&v16, a3);
  v11 = a2[1];
  v17[0] = *a2;
  v17[1] = v11;
  return sub_180011D1C(a1, v17, v10, v15, v12, v13, v9);
}
