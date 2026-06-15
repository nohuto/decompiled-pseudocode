/*
 * XREFs of sub_1400A9838 @ 0x1400A9838
 * Callers:
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AA844 @ 0x1400AA844 (sub_1400AA844.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400A99B4 @ 0x1400A99B4 (sub_1400A99B4.c)
 *     sub_1400A9FAC @ 0x1400A9FAC (sub_1400A9FAC.c)
 *     sub_1400AB298 @ 0x1400AB298 (sub_1400AB298.c)
 */

__int64 __fastcall sub_1400A9838(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5, int a6, int a7)
{
  int v7; // r15d
  int v9; // r12d
  int v11; // r13d
  int v14; // ebx
  int v15; // edx
  __int64 v17; // rdx
  _DWORD v18[4]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v20 = a4;
  v7 = a7;
  v9 = a6;
  v11 = a5;
  v18[0] = 0;
  v14 = sub_1400A9FAC(a4, a5, a6, a7, (__int64)v18);
  if ( v14 < 0 )
  {
    v15 = 54;
LABEL_3:
    sub_14000C2A8(
      (int)retaddr,
      v15,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\SpatialBlock.h",
      v14);
    return (unsigned int)v14;
  }
  if ( a3 != v18[0] )
  {
    v14 = -2147418113;
    v15 = 55;
    goto LABEL_3;
  }
  if ( !a2 )
  {
    v14 = -2147024882;
    v15 = 57;
    goto LABEL_3;
  }
  if ( (a2 & 0x1F) != 0 )
  {
    v14 = -2005139372;
    v15 = 59;
    goto LABEL_3;
  }
  *(_QWORD *)(a1 + 32) = a2;
  v14 = sub_1400A99B4(a4, &v20);
  if ( v14 < 0 )
  {
    v15 = 68;
    goto LABEL_3;
  }
  **(_DWORD **)(a1 + 32) = 28;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) = a3;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) = v7;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 12LL) = v11;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 16LL) = v9;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 20LL) = v20;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) = 1396785732;
  v17 = *(_QWORD *)(a1 + 32);
  *(_OWORD *)a1 = *(_OWORD *)v17;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(v17 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(v17 + 24);
  v14 = sub_1400AB298(a1);
  if ( v14 < 0 )
  {
    v15 = 81;
    goto LABEL_3;
  }
  return 0LL;
}
