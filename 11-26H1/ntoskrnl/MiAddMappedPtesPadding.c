/*
 * XREFs of MiAddMappedPtesPadding @ 0x1406FA494
 * Callers:
 *     MiAddMappedPtes @ 0x140341E90 (MiAddMappedPtes.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 */

void __fastcall MiAddMappedPtesPadding(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v12; // rbp
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx

  v7 = a4;
  v10 = ((a4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = *(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 44);
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 136LL);
  v14 = v13 + 8 * a6;
  while ( v12 < v14 )
  {
    *(_QWORD *)v7 = MiMakePrototypePteDirect(v12);
    ++a7;
    v7 += 8LL;
    if ( v7 >= a5 )
      break;
    if ( (v7 & 0xFFF) == 0 )
    {
      if ( a7 )
      {
        MiIncreaseUsedPtes(v13, v10, a7, 2);
        a7 = 0;
      }
      MiUnlockPageTableInternal(a2, v10);
      LOBYTE(v15) = a3;
      MiUnlockWorkingSetShared(a2, v15);
      v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      a3 = MiLockWorkingSetShared(a2, v16, v17);
      MiLockPageTableInternal(a2, v10, 0);
    }
    v12 += 8LL;
  }
  if ( a7 )
    MiIncreaseUsedPtes(v13, v10, a7, 2);
  MiUnlockPageTableInternal(a2, v10);
  LOBYTE(v18) = a3;
  MiUnlockWorkingSetShared(a2, v18);
}
