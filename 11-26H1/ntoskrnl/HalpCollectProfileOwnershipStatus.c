/*
 * XREFs of HalpCollectProfileOwnershipStatus @ 0x140582368
 * Callers:
 *     HalpQueryProfileInformation @ 0x140B1B8D8 (HalpQueryProfileInformation.c)
 * Callees:
 *     HalpCollectProfileOwnershipStatusInternal @ 0x1405824A8 (HalpCollectProfileOwnershipStatusInternal.c)
 */

__int64 __fastcall HalpCollectProfileOwnershipStatus(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v3; // rdi
  char v4; // bp
  _DWORD *v8; // r9
  int v9; // ecx
  __int64 v10; // r8
  int v11; // edx
  _DWORD *v12; // r9
  int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  char v21; // bl
  __int64 v22; // r8
  __int64 v23; // r8
  __int64 v24; // r8

  v3 = *a1;
  v4 = 0;
  v8 = *(_DWORD **)(KiProcessorBlock[v3] + 88);
  if ( !v8 )
  {
    v9 = 0;
LABEL_3:
    v10 = (unsigned int)v8[7];
    goto LABEL_4;
  }
  v9 = v8[1];
  if ( v8 != (_DWORD *)-24LL )
    goto LABEL_3;
  v10 = 0LL;
LABEL_4:
  if ( v8 == (_DWORD *)-48LL )
    v11 = 0;
  else
    v11 = v8[13];
  v12 = v8 + 18;
  if ( v12 )
    v13 = v12[1];
  else
    v13 = 0;
  v14 = v9 + v10 + v13 + v11;
  v15 = 16 * v14 + 8;
  *a3 = v15;
  if ( a2 >= v15 )
    goto LABEL_21;
  v16 = *(_QWORD *)(KiProcessorBlock[v3] + 88);
  if ( v16 )
  {
    v17 = *(_DWORD *)(v16 + 4);
    v18 = v16 + 24;
    if ( !v18 )
      goto LABEL_16;
  }
  else
  {
    v17 = 0;
    v18 = 24LL;
  }
  LODWORD(v18) = *(_DWORD *)(v18 + 4);
LABEL_16:
  v14 = v18 + v17;
  v19 = 16 * (v18 + v17) + 8;
  if ( a2 < v19 )
    return 3221225476LL;
  *a3 = v19;
  v4 = 1;
LABEL_21:
  a1[1] = v14;
  v21 = KeGetCurrentPrcb()->HalReserved[3] & 1;
  LOBYTE(v10) = v21;
  HalpCollectProfileOwnershipStatusInternal(0LL, a1, v10, (unsigned int)v3);
  LOBYTE(v22) = v21;
  HalpCollectProfileOwnershipStatusInternal(1LL, a1, v22, (unsigned int)v3);
  if ( !v4 )
  {
    LOBYTE(v23) = v21;
    HalpCollectProfileOwnershipStatusInternal(100LL, a1, v23, (unsigned int)v3);
    LOBYTE(v24) = v21;
    HalpCollectProfileOwnershipStatusInternal(101LL, a1, v24, (unsigned int)v3);
  }
  return 0LL;
}
