/*
 * XREFs of HvlConfigureIdleStates @ 0x1405C1774
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x1407E6DA0 (PpmIdleUpdateHvStates.c)
 * Callees:
 *     HvlpSetPowerProperty @ 0x1402F360C (HvlpSetPowerProperty.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HvlConfigureIdleStates(int a1, _OWORD *a2)
{
  __int64 v4; // rax
  char *v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v14; // [rsp+20h] [rbp-228h] BYREF
  char v15; // [rsp+30h] [rbp-218h] BYREF

  DWORD1(v14) = 0;
  memset_0(&v14, 0, 0x214uLL);
  v4 = 4LL;
  LODWORD(v14) = 7;
  DWORD2(v14) = a1;
  v5 = &v15;
  do
  {
    v6 = a2[1];
    *(_OWORD *)v5 = *a2;
    v7 = a2[2];
    *((_OWORD *)v5 + 1) = v6;
    v8 = a2[3];
    *((_OWORD *)v5 + 2) = v7;
    v9 = a2[4];
    *((_OWORD *)v5 + 3) = v8;
    v10 = a2[5];
    *((_OWORD *)v5 + 4) = v9;
    v11 = a2[6];
    *((_OWORD *)v5 + 5) = v10;
    v12 = a2[7];
    a2 += 8;
    *((_OWORD *)v5 + 6) = v11;
    v5 += 128;
    *((_OWORD *)v5 - 1) = v12;
    --v4;
  }
  while ( v4 );
  *(_QWORD *)v5 = *(_QWORD *)a2;
  return HvlpSetPowerProperty(&v14);
}
