/*
 * XREFs of CmpArmLazyWriter @ 0x14046ECD0
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14046EB90 (CmpRecheckHiveVolumePolicy.c)
 *     CmpEnableLazyFlush @ 0x14046EC80 (CmpEnableLazyFlush.c)
 *     CmpFlushHive @ 0x1408B321C (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x1408DAF50 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x140AE37FC (HvMarkBaseBlockDirty.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x140219B40 (KeSetCoalescableTimer.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 */

void __fastcall CmpArmLazyWriter(int a1, unsigned __int64 *a2, char a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  volatile signed __int64 *v8; // rbp
  unsigned __int64 v9; // r14
  char *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG v14; // r9d
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( !BYTE1(WheapPfaLock.TrapFrame) || CmpHoldLazyFlush )
    return;
  v4 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v5 = 192LL * a1;
  if ( a2 )
  {
    v6 = v4 + 10000000LL * *(unsigned int *)((char *)&CmpLazyWriterData + v5 + 180);
    v7 = *a2;
    if ( *a2 >= v6 )
      v7 = v6;
  }
  else if ( a3 )
  {
    v7 = v4 + 20000000;
  }
  else
  {
    v7 = 10000000LL * *(unsigned int *)((char *)&CmpLazyWriterData + v5 + 180) + v4;
  }
  v8 = (volatile signed __int64 *)((char *)&CmpLazyWriterData.Header.Lock + v5);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v5 + 152));
  v10 = (char *)&CmpLazyWriterData + v5;
  v11 = *(_QWORD *)((char *)&CmpLazyWriterData + v5 + 168) & 7LL;
  if ( v11 == 1 )
  {
    if ( !a3 || !KeCancelTimer((struct _KTIMER *)((char *)&CmpLazyWriterData + v5)) )
      goto LABEL_8;
    *((_QWORD *)v10 + 21) = 1LL;
  }
  else
  {
    if ( v11 )
    {
      v12 = v11 - 2;
      if ( !v12 || v12 == 1 && v7 < (*(_QWORD *)((char *)&CmpLazyWriterData + v5 + 168) & 0xFFFFFFFFFFFFFFF8uLL) )
        *((_QWORD *)v10 + 21) = v7 & 0xFFFFFFFFFFFFFFF8uLL | 3;
      goto LABEL_8;
    }
    *((_QWORD *)v10 + 21) = 1LL;
    if ( !a3 )
    {
      v14 = *(_DWORD *)((char *)&CmpLazyWriterData + v5 + 184);
      v13 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v5 + 180);
      goto LABEL_29;
    }
  }
  v13 = -20000000LL;
  v14 = 1000;
LABEL_29:
  KeSetCoalescableTimer(
    (struct _KTIMER *)((char *)&CmpLazyWriterData + v5),
    (LARGE_INTEGER)v13,
    0,
    v14,
    (PKDPC)((char *)&CmpLazyWriterData + v5 + 64));
LABEL_8:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    _InterlockedAnd64(v8 + 19, 0LL);
  else
    KiReleaseSpinLockInstrumented(v8 + 19, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  __writecr8(v9);
}
