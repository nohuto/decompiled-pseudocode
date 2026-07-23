/*
 * XREFs of MiAddMappedPtes @ 0x140341E90
 * Callers:
 *     MiInsertInSystemSpace @ 0x1404E7024 (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x140B22C34 (MiMapSystemImage.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiGetSharedProtos @ 0x140374988 (MiGetSharedProtos.c)
 *     MiAddMappedPtesPadding @ 0x1406FA494 (MiAddMappedPtesPadding.c)
 */

__int64 __fastcall MiAddMappedPtes(__int64 a1, __int64 *a2, __int64 a3, _DWORD *a4, _QWORD *a5, int a6)
{
  int v6; // r15d
  __int64 *v7; // rsi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // rcx
  _DWORD *v14; // r10
  unsigned int v15; // ebp
  unsigned __int64 v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // r12
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rax
  int v27; // r8d
  __int64 SharedProtos; // rax
  int v29; // eax
  int v30; // r8d
  unsigned __int64 DemandZeroPte; // rax
  __int64 v32; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-60h]
  __int64 v34; // [rsp+50h] [rbp-58h]
  BOOL v36; // [rsp+B8h] [rbp+10h]
  __int64 v37; // [rsp+C0h] [rbp+18h]
  unsigned __int8 v39; // [rsp+D0h] [rbp+28h]

  v6 = 0;
  v7 = a2;
  v32 = 0LL;
  v36 = 0;
  if ( a6 && (MiFlags & 0x20000) != 0 )
    v36 = (MiFlags & 0x10000) != 0;
  v8 = (unsigned __int64)&a2[a3];
  v9 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  v33 = 0LL;
  v10 = MiOffsetToProtos(a4, *a5, &v32);
  v37 = v10;
  v12 = v10;
  if ( !v10 )
    return 3221225503LL;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = a4;
  v15 = 0;
  v16 = 0LL;
  v39 = 17;
  v17 = *(unsigned int *)(*(_QWORD *)a4 + 8LL) | ((unsigned __int64)(*(_WORD *)(*(_QWORD *)a4 + 12LL) & 0x3FF) << 32);
  v34 = v17;
  v18 = v13 + 8 * v32;
  v19 = v13 + 8LL * *(unsigned int *)(v10 + 44);
  if ( (*(_DWORD *)(v10 + 32) & 0x20000) != 0 && (a4[14] & 8) != 0 && (a4[14] & 0x20) != 0 )
    v18 = 0LL;
  v20 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
  while ( (unsigned __int64)v7 < v8 )
  {
    if ( v16 )
    {
      if ( ((unsigned __int16)v7 & 0xFFF) != 0 )
        goto LABEL_8;
      if ( v15 )
      {
        MiIncreaseUsedPtes(v13, v16, v15, 2LL);
        v15 = 0;
      }
      MiUnlockPageTableInternal(a1, v16);
      MiUnlockWorkingSetShared(a1, v39);
    }
    v16 = (((unsigned __int64)v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v39 = MiLockWorkingSetShared(a1, v17, v11);
    MiLockPageTableInternal(a1, v16, 0);
    v20 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v14 = a4;
    v12 = v37;
LABEL_8:
    if ( v18 >= v19 )
    {
      v25 = *(_QWORD *)(v12 + 16);
      if ( !v25 )
      {
        MiAddMappedPtesPadding(v12, a1, v39, (_DWORD)v7, v8, v34, v15);
        return 0LL;
      }
      v12 = *(_QWORD *)(v12 + 16);
      v37 = v25;
    }
    else if ( v18 )
    {
      goto LABEL_10;
    }
    if ( (*(_DWORD *)(v12 + 32) & 0x20000) == 0
      || (v14[14] & 8) == 0
      || (v14[14] & 0x20) == 0
      || (SharedProtos = MiGetSharedProtos(v14, 0xFFFFFFFFLL, v12),
          v12 = v37,
          (v18 = *(_QWORD *)(SharedProtos + 72)) == 0) )
    {
      v18 = *(_QWORD *)(v12 + 8);
    }
    v6 = 0;
    v19 = v18 + 8LL * *(unsigned int *)(v12 + 44);
    if ( !v36 || (v27 = *(_DWORD *)(v12 + 32) >> 1, (v27 & 2) == 0) )
    {
      v20 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      goto LABEL_11;
    }
    v29 = *(_DWORD *)(v12 + 52);
    v33 = v18
        + 8LL
        * (((((*(_DWORD *)(v12 + 32) >> 20) + (*(_DWORD *)(v12 + 40) << 9)) & 0xFFF) != 0)
         + ((unsigned int)((*(_DWORD *)(v12 + 32) >> 20) + (*(_DWORD *)(v12 + 40) << 9)) >> 12));
    v6 = ((__int64)(v19 - v33) >> 3) - v29;
    v30 = v27 & 0x1D;
    if ( !v30 )
      LOBYTE(v30) = 1;
    DemandZeroPte = MiMakeDemandZeroPte(v30);
    v20 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    v9 = DemandZeroPte;
LABEL_10:
    if ( v6 && v18 >= v33 )
    {
      v24 = v9;
      --v6;
      goto LABEL_21;
    }
LABEL_11:
    v11 = qword_140E37D20;
    v21 = v20;
    if ( v18 < qword_140E37D20 || v18 >= qword_140E37D20 + qword_140E37D28 )
    {
      v11 = qword_140E37D10;
      v21 = v20 | 0x800000000000000LL;
    }
    v17 = (v18 - v11) << 9;
    v22 = (v21 ^ v17) & 0xFFC0000000000FFFuLL;
    v13 = qword_140E2D8C0;
    v23 = v17 ^ v22;
    v24 = v17 ^ v22 | 0x400;
    if ( qword_140E2D8C0 )
    {
      v11 = v23 | 0x410;
      v17 = v23 | qword_140E2D8C0 | 0x400;
      if ( (qword_140E2D8C0 & v24) != 0 )
        v17 = v23 | 0x410;
      v24 = v17;
    }
    if ( !a6 )
    {
      v13 = (unsigned int)a4[14];
      if ( (v13 & 0x20) != 0 )
        v24 |= 8uLL;
    }
LABEL_21:
    v14 = a4;
    ++v15;
    *v7++ = v24;
    v18 += 8LL;
  }
  if ( v15 )
    MiIncreaseUsedPtes(v13, v16, v15, 2LL);
  MiUnlockPageTableInternal(a1, v16);
  MiUnlockWorkingSetShared(a1, v39);
  return 0LL;
}
