/*
 * XREFs of MiPerformVadSplitting @ 0x140317B74
 * Callers:
 *     MiDeletePartialVad @ 0x1403C6AC4 (MiDeletePartialVad.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14027DB10 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027DCC8 (MiUnlockWorkingSetExclusive.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCountSharedPages @ 0x1402B2BD0 (MiCountSharedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiComputePageCommitment @ 0x140313D10 (MiComputePageCommitment.c)
 *     MiAdvanceVadView @ 0x1403178D0 (MiAdvanceVadView.c)
 *     MiInsertVad @ 0x140318030 (MiInsertVad.c)
 *     MiPostInsertVad @ 0x140318774 (MiPostInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x140328600 (MiLockVadTree.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1403C6E00 (PsReturnProcessPagedPoolQuota.c)
 *     MiLockNestedVad @ 0x140A9DE10 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x140A9F940 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiPerformVadSplitting(__int64 a1)
{
  unsigned __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // r13
  int v4; // ebx
  ULONG_PTR v5; // r14
  ULONG_PTR v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 result; // rax
  ULONG_PTR v19; // rax
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // r12
  ULONG_PTR BugCheckParameter1; // [rsp+30h] [rbp-98h]
  ULONG_PTR BugCheckParameter3; // [rsp+38h] [rbp-90h]
  unsigned __int64 v25; // [rsp+48h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-78h]
  unsigned __int64 v27; // [rsp+58h] [rbp-70h]
  unsigned __int64 v28; // [rsp+60h] [rbp-68h]
  unsigned __int64 v29; // [rsp+68h] [rbp-60h]
  int v30; // [rsp+D0h] [rbp+8h]
  KIRQL v31; // [rsp+D0h] [rbp+8h]
  unsigned __int64 v32; // [rsp+E0h] [rbp+18h]
  __int64 v33; // [rsp+E8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v2 = *(unsigned int *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  v32 = 0LL;
  BugCheckParameter3 = 0LL;
  v25 = 0LL;
  BugCheckParameter1 = (ULONG_PTR)CurrentThread->ApcState.Process;
  v28 = *(_QWORD *)(a1 + 24);
  v27 = v1;
  v30 = v2;
  v4 = *(_DWORD *)(v3 + 48);
  v5 = *(_QWORD *)a1;
  v29 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (_DWORD)v2 == 1 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)a1;
    if ( (_DWORD)v2 == 2 )
      v5 = 0LL;
    else
      v5 = *(_QWORD *)v5;
  }
  v7 = 0LL;
  if ( (*(unsigned int *)(v3 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 32)) == 0x7FFFFFFFDLL )
  {
    v8 = 0LL;
    v9 = 0x7FFFFFFFDLL;
  }
  else
  {
    v8 = *(unsigned int *)(v3 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 32);
    v9 = 0LL;
  }
  if ( (_DWORD)v2 == 3 )
  {
    v10 = v6;
    if ( (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32))
       - (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32))
       + 1 > (*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32))
           - (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32))
           + 1 )
      v10 = v5;
    v33 = v10;
    MiLockNestedVad(v10);
    v7 = 0LL;
  }
  else
  {
    v10 = 0LL;
    v33 = 0LL;
  }
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, BugCheckParameter1, v2, (struct _KLOCK_ENTRIES *)v1);
  v12 = v9;
  if ( v8 )
  {
    if ( (v4 & 0x80000) != 0 )
      v7 = MiComputePageCommitment(v28, v27, v3, 0LL, 0LL);
    else
      v7 = ((__int64)(v29 - (((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) >> 3)
         - MiCountSharedPages(v3, ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v29)
         + 1;
    if ( v30 == 1 )
    {
      v12 = v9;
      v9 = v8 - v7;
    }
    else if ( v30 == 2 )
    {
      v12 = v8 - v7;
    }
    else
    {
      v20 = ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) << 12) | 0xFFF;
      v21 = (*(unsigned int *)(v10 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12;
      if ( (v4 & 0x80000) != 0 )
      {
        v9 = MiComputePageCommitment(v21, v20, v10, 0LL, 0LL);
      }
      else
      {
        v10 = v33;
        v9 = ((__int64)(((v20 >> 9) & 0x7FFFFFFFF8LL) - ((v21 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
           - MiCountSharedPages(
               v33,
               ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
               ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
           + 1;
      }
      v22 = v8 - v9 - v7;
      if ( v10 == v6 )
      {
        v12 = v9;
        v9 = v22;
      }
      else
      {
        v12 = v22;
      }
    }
  }
  if ( v6 )
  {
    v11 = *(unsigned int *)(v6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 32);
    if ( v11 == 0x7FFFFFFFDLL )
    {
      *(_DWORD *)(v6 + 52) = -3;
      *(_BYTE *)(v6 + 34) = 7;
    }
    else
    {
      *(_DWORD *)(v6 + 52) = v12;
      *(_BYTE *)(v6 + 34) = BYTE4(v12);
    }
    v12 = *(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32);
    v13 = 8 * ((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) - v12) + 8;
    v32 = v13;
    v25 = *(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32);
  }
  else
  {
    v13 = 0LL;
  }
  if ( v5 )
  {
    v11 = *(unsigned int *)(v5 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 34) << 32);
    if ( v11 == 0x7FFFFFFFDLL )
    {
      *(_DWORD *)(v5 + 52) = -3;
      *(_BYTE *)(v5 + 34) = 7;
    }
    else
    {
      *(_DWORD *)(v5 + 52) = v9;
      *(_BYTE *)(v5 + 34) = BYTE4(v9);
    }
    v12 = *(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32);
    v32 = v13 + 8 * ((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) - v12) + 8;
  }
  v31 = MiLockWorkingSetExclusive(BugCheckParameter1 + 1024, v11, v12);
  MiLockVadTree(3LL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  if ( v6 )
  {
    *(_DWORD *)(v3 + 24) = v25 + 1;
    *(_BYTE *)(v3 + 32) = (v25 + 1) >> 32;
    MiInsertVad(v6);
  }
  if ( v5 )
  {
    v14 = (*(unsigned int *)(v5 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 32) << 32)) - 1;
    *(_DWORD *)(v3 + 28) = *(_DWORD *)(v5 + 24) - 1;
    *(_BYTE *)(v3 + 33) = BYTE4(v14);
    MiInsertVad(v5);
  }
  if ( (*(unsigned int *)(v3 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 32)) == 0x7FFFFFFFDLL )
  {
    *(_DWORD *)(v3 + 52) = -3;
    *(_BYTE *)(v3 + 34) = 7;
  }
  else
  {
    if ( (v4 & 0x80000) == 0
      && (*(unsigned int *)(v3 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 34) << 32)) < 0x7FFFFFFFDLL )
    {
      v19 = 0LL;
      if ( v32 )
        v19 = v32;
      BugCheckParameter3 = v19;
    }
    *(_DWORD *)(v3 + 52) = v7;
    *(_BYTE *)(v3 + 34) = BYTE4(v7);
  }
  MiAdvanceVadView(v3, 0LL, 8);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  LOBYTE(v15) = 17;
  MiUnlockVadTree(3LL, v15);
  MiUnlockWorkingSetExclusive(BugCheckParameter1 + 1024, v31);
  if ( v6 )
    MiPostInsertVad(v6, v16, 0LL);
  if ( v5 )
    MiPostInsertVad(v5, v16, 0LL);
  UNLOCK_PAGE_TABLE_COMMITMENT(CurrentThread, BugCheckParameter1);
  if ( v10 )
    MiUnlockNestedVad(v10, v17);
  result = BugCheckParameter3;
  if ( BugCheckParameter3 )
    return PsReturnProcessPagedPoolQuota(BugCheckParameter1, BugCheckParameter3);
  return result;
}
