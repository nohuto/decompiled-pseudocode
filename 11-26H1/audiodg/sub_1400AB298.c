/*
 * XREFs of sub_1400AB298 @ 0x1400AB298
 * Callers:
 *     sub_1400A9838 @ 0x1400A9838 (sub_1400A9838.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400A99B4 @ 0x1400A99B4 (sub_1400A99B4.c)
 */

__int64 __fastcall sub_1400AB298(_QWORD *a1, _DWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // esi
  char *v10; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF

  a1[5] = a2 + 7;
  v4 = (__int64)a2 + (unsigned int)(a2[2] * a2[3]) + 28;
  a1[8] = v4;
  v5 = v4 + (unsigned int)(a2[2] * a2[3]);
  a1[6] = v5;
  v6 = v5 + (unsigned int)(a2[2] * a2[4]);
  a1[9] = v6;
  v12 = v6 + a2[2] * a2[4] - (_DWORD)a2;
  v7 = sub_1400A99B4(v12, &v12);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = (char *)a2 + v12;
    a1[7] = v10;
    a1[10] = &v10[a2[2] * a2[5]];
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      308,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      v7);
    return v8;
  }
}
