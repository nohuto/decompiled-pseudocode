/*
 * XREFs of MiEmptyWorkingSetConverge @ 0x1403C4BA8
 * Callers:
 *     MiTrimWorkingSet @ 0x1403C437C (MiTrimWorkingSet.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiEmptyWorkingSetBuckets @ 0x1403C4D5C (MiEmptyWorkingSetBuckets.c)
 *     MiEmptyWorkingSetInitiate @ 0x1403C5E90 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSetConverge(__int64 a1, __int16 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rbx
  int v4; // r14d
  KIRQL v5; // si
  int v6; // r13d
  BOOL v8; // r15d
  int v9; // r12d
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+28h] [rbp-50h]
  unsigned int v21; // [rsp+80h] [rbp+8h]
  int v23; // [rsp+90h] [rbp+18h]
  __int64 v24; // [rsp+98h] [rbp+20h]

  v2 = *(_QWORD **)(a1 + 184);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = 0;
  v5 = *(_BYTE *)(a1 + 9);
  v6 = 0;
  v21 = 0;
  v23 = 0;
  v8 = 1;
  v9 = a2 & 0x20;
  if ( (a2 & 0x20) != 0 )
  {
    v2[1] = -1LL;
    v2[6] = -1LL;
    v8 = (*(_DWORD *)(v3 + 184) & 0xF) != 0;
  }
  v24 = *(_QWORD *)(v3 + 16);
  v19 = *(_QWORD *)(v24 + 64);
  while ( 1 )
  {
    v10 = v2[2];
    *(_DWORD *)(a1 + 4) &= ~0x10000u;
    v20 = v10;
    v11 = MiEmptyWorkingSetBuckets(a1, v8);
    v12 = v21;
    v13 = v23;
    if ( v11 )
      v12 = 1LL;
    v21 = v12;
    if ( v19 != *(_QWORD *)(v24 + 64) )
      v13 = 1;
    v23 = v13;
    if ( (_DWORD)v12 || !v9 )
      break;
    if ( (unsigned int)++v6 < 2 )
      goto LABEL_14;
    if ( (a2 & 0x100) != 0 )
      break;
    if ( v13 )
      goto LABEL_25;
    v8 = 1;
    if ( v20 == v2[2] )
    {
      if ( (*(_DWORD *)a1 & 4) == 0 )
      {
        if ( (*(_DWORD *)(a1 + 4) & 0x10000) == 0 )
          break;
LABEL_25:
        v4 = 1;
        break;
      }
      if ( (*(_DWORD *)(v3 + 184) & 0xF) != 0 )
        break;
      LOBYTE(v12) = v5;
      MiUnlockWorkingSetShared(v3, v12);
      *(_DWORD *)a1 &= ~4u;
      MiLockWorkingSetExclusive(v3, v15, v16);
LABEL_14:
      v2[1] = -1LL;
      v2[6] = -1LL;
    }
  }
  result = *(_DWORD *)a1 & 4;
  if ( v4 )
  {
    *(_DWORD *)a1 = result;
    LOBYTE(v12) = v5;
    if ( (_DWORD)result )
      MiUnlockWorkingSetShared(v3, v12);
    else
      MiUnlockWorkingSetExclusive(v3, v5);
    MiEmptyWorkingSetInitiate(v3, 1LL, 0LL);
    return MiLockWorkingSetShared(v3, v17, v18);
  }
  if ( !(_DWORD)result )
  {
    MiUnlockWorkingSetExclusive(v3, v5);
    return MiLockWorkingSetShared(v3, v17, v18);
  }
  return result;
}
