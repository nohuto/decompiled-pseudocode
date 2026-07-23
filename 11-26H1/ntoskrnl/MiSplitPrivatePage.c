/*
 * XREFs of MiSplitPrivatePage @ 0x14031942C
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140999540 (MiCopyToCfgBitMap.c)
 * Callees:
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteVadLookup @ 0x1402B1B50 (MiMakePrototypePteVadLookup.c)
 *     MiGetPrototypePteDirect @ 0x1402B2B80 (MiGetPrototypePteDirect.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiIsPrototypePteVadLookup @ 0x14031E380 (MiIsPrototypePteVadLookup.c)
 *     MiIncreaseUsedPtes @ 0x140367CC0 (MiIncreaseUsedPtes.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiMakeProtoLeafValid @ 0x1404B9358 (MiMakeProtoLeafValid.c)
 *     MiCommitPageTablesForVad @ 0x140996FF8 (MiCommitPageTablesForVad.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitPrivatePage(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 Process; // r13
  __int64 v5; // rbp
  ULONG_PTR v6; // r14
  unsigned __int64 v7; // rsi
  int v8; // r15d
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r8d
  KIRQL v13; // r12
  unsigned __int64 NextPageTable; // rax
  __int64 v15; // rdx
  __int64 ProtoPteAddress; // rax
  __int64 v17; // rdx
  unsigned __int64 PrototypePteVadLookup; // rbx
  unsigned __int64 v19; // r13
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v24; // rbx
  __int64 v25; // rdx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // r8
  struct _KLOCK_ENTRIES *v31; // r9
  struct _KTHREAD *v32; // rsi
  __int64 v33; // rdx
  int v34; // ebx
  __int64 v35; // r8
  BOOL v36; // [rsp+30h] [rbp-78h]
  int v37; // [rsp+34h] [rbp-74h]
  unsigned int *v38; // [rsp+38h] [rbp-70h] BYREF
  __int64 v39; // [rsp+40h] [rbp-68h]
  __int64 v40; // [rsp+48h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-58h]
  int v44; // [rsp+C0h] [rbp+18h]
  int v45; // [rsp+C8h] [rbp+20h]

  v40 = 0LL;
  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v39 = Process;
  v5 = Process + 1024;
  v36 = MiVadPureReserve(a2);
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = 0LL;
  v45 = 0;
  v44 = 0;
  v37 = 0;
  v8 = MiChargeFullProcessCommitment(Process, 1LL);
  v9 = (*(_DWORD *)(v3 + 48) >> 10) & 0x7F;
  v13 = MiLockWorkingSetShared(Process + 1024, v10, v11);
  while ( 1 )
  {
    while ( 1 )
    {
      LOBYTE(v12) = v13;
      if ( v36 )
      {
        NextPageTable = MiGetNextPageTable(v6, v6, v12, 0, (__int64)&v38);
        if ( NextPageTable )
          v7 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v6 != NextPageTable )
        {
          if ( v7 )
            MiUnlockPageTableInternal(v5, v7);
          LOBYTE(v15) = v13;
          MiUnlockWorkingSetShared(v5, v15);
          if ( v8 < 0 )
            return (unsigned int)v8;
          v32 = CurrentThread;
          v37 = 1;
          LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process, v30, v31);
          v34 = MiCommitPageTablesForVad(v3, a1, a1, 1LL);
          if ( v34 < 0 )
          {
            UNLOCK_PAGE_TABLE_COMMITMENT((__int64)v32, Process);
            MiReturnFullProcessCommitment(Process, 1LL);
            return (unsigned int)v34;
          }
          v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v13 = MiLockWorkingSetShared(v5, v33, v35);
          MiMakeSystemAddressValid(v6, v9, v13, 0);
          v3 = a2;
        }
      }
      else
      {
        MiMakeSystemAddressValid(v6, v9, v13, 0);
      }
      ProtoPteAddress = MiGetProtoPteAddress(v3, a1 >> 12, 8u, &v38);
      PrototypePteVadLookup = *(_QWORD *)v6;
      v19 = ProtoPteAddress;
      if ( !*(_QWORD *)v6 )
      {
        if ( v8 < 0 )
          goto LABEL_35;
        MiIncreaseUsedPtes(0xFFFFF68000000000uLL, ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1LL, 0LL);
        if ( v36 )
        {
          if ( !v19 )
            goto LABEL_10;
          v29 = *(_QWORD *)(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (v29 & 1) == 0 && (v29 & 0x3E0) == 0 )
            goto LABEL_10;
        }
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(1);
        *(_QWORD *)v6 = PrototypePteVadLookup;
      }
      if ( (PrototypePteVadLookup & 1) == 0 )
        break;
      v24 = (PrototypePteVadLookup >> 12) & 0xFFFFFFFFFFLL;
      v17 = 0xFFFFDE0000000000uLL;
      if ( *(__int64 *)(48 * v24 - 0x220000000000LL + 40) >= 0
        || (*(_QWORD *)(48 * v24 - 0x220000000000LL + 8) | 0x8000000000000000uLL) != v19 )
      {
        goto LABEL_13;
      }
      if ( v8 < 0 )
        goto LABEL_35;
      v26 = MiCopyOnWrite(a1, v6, -1, 0, (__int64)&v40);
      if ( v26 >= 0 )
        goto LABEL_11;
      if ( v7 )
      {
        MiUnlockPageTableInternal(v5, v7);
        v7 = 0LL;
      }
      LOBYTE(v25) = v13;
      MiUnlockWorkingSetShared(v5, v25);
      MiCopyOnWriteCheckConditions(v5, (unsigned int)v26, v40);
      MiLockWorkingSetShared(v5, v27, v28);
      Process = v39;
LABEL_49:
      v3 = a2;
    }
    if ( (PrototypePteVadLookup & 0x400) == 0
      || !(unsigned int)MiIsPrototypePteVadLookup(PrototypePteVadLookup)
      && MiGetPrototypePteDirect(PrototypePteVadLookup) != v19 )
    {
      goto LABEL_13;
    }
    if ( (int)MiMakeProtoLeafValid(v6) < 0 && PrototypePteVadLookup == *(_QWORD *)v6 )
      break;
    Process = v39;
    v3 = a2;
    if ( v7 )
    {
      MiUnlockPageTableInternal(v5, v7);
      v7 = 0LL;
      goto LABEL_49;
    }
  }
  if ( v8 < 0 )
  {
LABEL_35:
    if ( v7 )
      MiUnlockPageTableInternal(v5, v7);
    LOBYTE(v17) = v13;
    MiUnlockWorkingSetShared(v5, v17);
    return (unsigned int)v8;
  }
LABEL_10:
  v45 = 1;
LABEL_11:
  v44 = 1;
  v20 = *(unsigned int *)(a2 + 52);
  v21 = (v20 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 32)) + 1;
  *(_DWORD *)(a2 + 52) = v20 + 1;
  v17 = HIDWORD(v21);
  *(_BYTE *)(a2 + 34) = v17;
  if ( v45 )
    *(_QWORD *)v6 = MiMakeDemandZeroPte(1);
LABEL_13:
  if ( v7 )
    MiUnlockPageTableInternal(v5, v7);
  LOBYTE(v17) = v13;
  MiUnlockWorkingSetShared(v5, v17);
  v22 = v39;
  if ( v37 )
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v39);
  if ( !v44 && v8 >= 0 )
    MiReturnFullProcessCommitment(v22, 1LL);
  return 0LL;
}
