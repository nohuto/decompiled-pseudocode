/*
 * XREFs of MiSplitReducedCommitClonePage @ 0x14052EFB8
 * Callers:
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 * Callees:
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14027EC6C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLockLowestValidPageTableEx @ 0x1402E2690 (MiLockLowestValidPageTableEx.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140318F00 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A20A0 (MiUnlockProbePacketWorkingSet.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiProcessCommitIntact @ 0x140445A40 (MiProcessCommitIntact.c)
 *     MiLockProbePacketWorkingSet @ 0x140484AEC (MiLockProbePacketWorkingSet.c)
 *     MiChargeFullProcessCommitment @ 0x140998924 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140A88A04 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiSplitReducedCommitClonePage(__int64 *a1)
{
  unsigned __int64 v2; // rcx
  int v4; // ebp
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  _QWORD *CloneAddress; // rax
  int v17; // eax
  unsigned __int64 *v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v2 = a1[1];
  v18 = 0LL;
  if ( !(unsigned int)MiProcessCommitIntact(v2) )
    return 3221225477LL;
  MiUnlockProbePacketWorkingSet((__int64)a1);
  v4 = 1;
  CurrentThread = KeGetCurrentThread();
  v6 = (((unsigned __int64)a1[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1[11], v7, v8);
  v10 = MiChargeFullProcessCommitment(a1[11], 1LL);
  if ( v10 >= 0 )
  {
    v19 = 0LL;
    v14 = 0LL;
    MiLockProbePacketWorkingSet((__int64)a1, v9, v11);
    a1[5] = MiLockLowestValidPageTableEx(a1[14], v6, (unsigned __int64 *)&v18, 0);
    if ( v18 == (unsigned __int64 *)v6 )
    {
      v15 = *v18;
      if ( (*v18 & 1) != 0
        && *(__int64 *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) < 0
        && (*(__int64 *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8) <= 0
         || (*(_QWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) & 0x10000000000LL) != 0) )
      {
        CloneAddress = MiLocateCloneAddress(
                         a1[11],
                         *(_QWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8) | 0x8000000000000000uLL);
        if ( CloneAddress )
        {
          if ( *(_QWORD *)(*(_QWORD *)(a1[11] + 1040) + 1192LL) > CloneAddress[12] )
          {
            v17 = MiCopyOnWrite(a1[1], v6, -1LL, 0, &v19);
            v14 = v19;
            v10 = v17;
            if ( v17 >= 0 )
              v4 = 0;
          }
        }
      }
    }
    MiUnlockProbePacketWorkingSet((__int64)a1);
    if ( v4 )
      MiReturnFullProcessCommitment(a1[11], 1LL);
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1[11]);
    if ( v10 < 0 )
      MiCopyOnWriteCheckConditions(a1[14], v10, v14);
    v10 = 0;
  }
  else
  {
    UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, a1[11]);
  }
  MiLockProbePacketWorkingSet((__int64)a1, v12, v13);
  return (unsigned int)v10;
}
