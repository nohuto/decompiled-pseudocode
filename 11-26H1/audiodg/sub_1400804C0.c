/*
 * XREFs of sub_1400804C0 @ 0x1400804C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400807B0 @ 0x1400807B0 (sub_1400807B0.c)
 */

__int64 __fastcall sub_1400804C0(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  _OWORD *v5; // rax
  _OWORD *v6; // r8
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  _BYTE v20[312]; // [rsp+20h] [rbp-138h] BYREF
  _UNKNOWN *retaddr; // [rsp+158h] [rbp+0h]

  memset(v20, 0, 0x128uLL);
  v4 = 2LL;
  v5 = v20;
  v6 = a2;
  do
  {
    v7 = v5[1];
    *v6 = *v5;
    v8 = v5[2];
    v6[1] = v7;
    v9 = v5[3];
    v6[2] = v8;
    v10 = v5[4];
    v6[3] = v9;
    v11 = v5[5];
    v6[4] = v10;
    v12 = v5[6];
    v6[5] = v11;
    v13 = v5[7];
    v5 += 8;
    v6[6] = v12;
    v6 += 8;
    *(v6 - 1) = v13;
    --v4;
  }
  while ( v4 );
  v14 = *v5;
  v15 = v5[1];
  v16 = *((_QWORD *)v5 + 4);
  *v6 = v14;
  v6[1] = v15;
  *((_QWORD *)v6 + 4) = v16;
  v17 = sub_1400807B0(a1, a2 + 2);
  v18 = v17;
  if ( v17 >= 0 )
  {
    *a2 = 1;
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      75,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
      v17);
    return v18;
  }
}
