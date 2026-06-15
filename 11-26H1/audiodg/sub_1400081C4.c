/*
 * XREFs of sub_1400081C4 @ 0x1400081C4
 * Callers:
 *     sub_140064B44 @ 0x140064B44 (sub_140064B44.c)
 * Callees:
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_1400083DC @ 0x1400083DC (sub_1400083DC.c)
 *     sub_1400084B4 @ 0x1400084B4 (sub_1400084B4.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=19
_QWORD *__fastcall sub_1400081C4(_QWORD *a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 *v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = a4;
  if ( a4 )
    sub_1400B6010(a4);
  a1[1] = a5;
  if ( a5 )
    sub_1400B6010(a5);
  a1[2] = a6;
  if ( a6 )
    sub_1400B6010(a6);
  a1[3] = 0LL;
  v10 = a1 + 4;
  a1[4] = 0LL;
  a1[5] = a7;
  if ( a7 )
    sub_1400B6010(a7);
  *((_BYTE *)a1 + 48) = 0;
  a1[7] = 0LL;
  a1[8] = 0LL;
  a1[9] = 0LL;
  *((_DWORD *)a1 + 20) = 0;
  a1[11] = 0LL;
  a1[12] = 0LL;
  a1[13] = 0LL;
  *((_DWORD *)a1 + 28) = 0;
  a1[15] = 0LL;
  a1[16] = 0LL;
  a1[17] = 0LL;
  *((_DWORD *)a1 + 36) = 0;
  a1[19] = 0LL;
  a1[20] = 0LL;
  a1[21] = 0LL;
  *((_DWORD *)a1 + 44) = 0;
  a1[23] = 0LL;
  a1[24] = 0LL;
  a1[25] = 0LL;
  *((_DWORD *)a1 + 52) = 0;
  a1[27] = 0LL;
  a1[28] = 0LL;
  a1[29] = 0LL;
  *((_DWORD *)a1 + 60) = 0;
  a1[31] = 0LL;
  a1[32] = 0LL;
  a1[33] = 0LL;
  *((_DWORD *)a1 + 68) = 0;
  a1[35] = 0LL;
  a1[36] = 0LL;
  a1[37] = 0LL;
  *((_DWORD *)a1 + 76) = 0;
  *(_OWORD *)(a1 + 39) = *a2;
  memset(a1 + 41, 0, 0x70uLL);
  *((_DWORD *)a1 + 110) = 1;
  v11 = *v10;
  *v10 = 0LL;
  if ( v11 )
    sub_1400B6010(v11);
  sub_1400B6010(*a1);
  *((_DWORD *)a1 + 110) = sub_1400083DC(*a1);
  v12 = sub_1400084B4(a1 + 41, 56LL, a3);
  if ( v12 < 0 )
    sub_140007934((int)retaddr, 375, (int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h", v12);
  return a1;
}
