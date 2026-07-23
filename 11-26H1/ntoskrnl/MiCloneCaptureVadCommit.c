/*
 * XREFs of MiCloneCaptureVadCommit @ 0x1404D2E78
 * Callers:
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiCloneDiscardVadCommit @ 0x140A07D54 (MiCloneDiscardVadCommit.c)
 */

__int64 __fastcall MiCloneCaptureVadCommit(__int64 a1)
{
  _QWORD *PoolMm; // rax
  _QWORD *v3; // rbx
  int v4; // edi
  struct _LIST_ENTRY **p_Blink; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r13
  char v9; // r12
  __int64 NextPageTable; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // [rsp+68h] [rbp+10h] BYREF

  PoolMm = (_QWORD *)ExAllocatePoolMm(
                       64LL,
                       0x90uLL,
                       1666607437,
                       KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v3 = PoolMm;
  if ( !PoolMm )
    return 3221225626LL;
  PoolMm[1] = 0LL;
  *PoolMm = 0LL;
  v4 = 0;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v6 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v7 = (*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL;
  v8 = 8 * v7 - 0x98000000000LL;
  v9 = MiLockWorkingSetExclusive((__int64)p_Blink, v7, 0xFFFFFFFFFLL);
  while ( 1 )
  {
    if ( v6 > v8 || (NextPageTable = MiGetNextPageTable(v6, v8, v9, 4, &v20)) == 0 )
    {
      MiUnlockWorkingSetExclusive((__int64)p_Blink, v9);
      goto LABEL_11;
    }
    v11 = NextPageTable & 0xFFFFFFFFFFFFF000uLL;
    v12 = v3[1];
    v13 = (__int64)((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16;
    if ( v12 )
    {
      v14 = v3[v12 + 1];
      v15 = v14 & 0x1FFFFF;
      if ( v15 + 1 >= v15 && v15 != 0x1FFFFF && (v14 & 0xFFFFFFFFFFE00000uLL) + ((v15 + 1) << 21) == v13 )
      {
        v3[v12 + 1] = (v14 + 1) ^ (v14 ^ (v14 + 1)) & 0xFFFFFFFFFFE00000uLL;
        goto LABEL_16;
      }
      if ( v12 == 16 )
        break;
    }
LABEL_15:
    v3[v3[1]++ + 2] = v13;
LABEL_16:
    v6 = v11 + 4096;
  }
  MiUnlockWorkingSetExclusive((__int64)p_Blink, v9);
  v17 = (_QWORD *)ExAllocatePoolMm(
                    64LL,
                    0x90uLL,
                    1666607437,
                    KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( v17 )
  {
    *v17 = v3;
    v3 = v17;
    v17[1] = 0LL;
    MiLockWorkingSetExclusive((__int64)p_Blink, v18, v19);
    goto LABEL_15;
  }
  v4 = -1073741670;
LABEL_11:
  *(_QWORD *)(a1 + 8) = v3;
  if ( v4 < 0 )
    MiCloneDiscardVadCommit(a1);
  return (unsigned int)v4;
}
