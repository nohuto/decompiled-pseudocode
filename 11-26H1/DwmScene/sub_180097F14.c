/*
 * XREFs of sub_180097F14 @ 0x180097F14
 * Callers:
 *     sub_180098148 @ 0x180098148 (sub_180098148.c)
 * Callees:
 *     sub_180011AF4 @ 0x180011AF4 (sub_180011AF4.c)
 *     sub_18001DD70 @ 0x18001DD70 (sub_18001DD70.c)
 *     sub_180028E60 @ 0x180028E60 (sub_180028E60.c)
 *     sub_18009817C @ 0x18009817C (sub_18009817C.c)
 *     sub_180098E2C @ 0x180098E2C (sub_180098E2C.c)
 */

__int64 __fastcall sub_180097F14(__int64 *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  __int128 v8; // xmm6
  __int64 v9; // rbx
  __int64 v10; // rbx
  _BYTE v12[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+28h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h]

  v6 = sub_180011AF4(a1, &v14, a3);
  v8 = *(_OWORD *)v6;
  v15 = v6[2];
  if ( *(_BYTE *)(v15 + 25) || *v7 < *(_QWORD *)(v15 + 32) )
  {
    sub_180098E2C(a1);
    v9 = *a1;
    sub_18009817C(v12, a1);
    *(_QWORD *)(v13 + 32) = *a3;
    *(_QWORD *)v13 = v9;
    *(_QWORD *)(v13 + 8) = v9;
    *(_QWORD *)(v13 + 16) = v9;
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v13 + 25) = 0;
    v10 = v13;
    v13 = 0LL;
    sub_180028E60((__int64)v12);
    v14 = v8;
    *(_QWORD *)a2 = sub_18001DD70((__int64)a1, (__int64)&v14, v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v15;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
