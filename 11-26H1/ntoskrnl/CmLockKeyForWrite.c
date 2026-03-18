/*
 * XREFs of CmLockKeyForWrite @ 0x140A30B0C
 * Callers:
 *     NtLockRegistryKey @ 0x14084F100 (NtLockRegistryKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsGetCurrentSilo @ 0x14041BBC0 (PsGetCurrentSilo.c)
 *     CmpFreeSiloKeyLockEntry @ 0x14085B9B8 (CmpFreeSiloKeyLockEntry.c)
 *     CmpLockKcbExclusive @ 0x1408CEB50 (CmpLockKcbExclusive.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x1409A604C (CmpUnlockSiloKeyLockTracker.c)
 *     KsepCacheLock @ 0x1409A73D0 (KsepCacheLock.c)
 *     CmpCreateSiloKeyLockEntry @ 0x140A2F80C (CmpCreateSiloKeyLockEntry.c)
 *     CmpGetContextForSiloNoRef @ 0x140A30C60 (CmpGetContextForSiloNoRef.c)
 *     CmpPerformSiloKeyLockTrackerEnabledCheck @ 0x140A30C90 (CmpPerformSiloKeyLockTrackerEnabledCheck.c)
 *     CmpGlobalLockKeyForWrite @ 0x140B1034C (CmpGlobalLockKeyForWrite.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmLockKeyForWrite(__int64 a1)
{
  ULONG_PTR *SiloKeyLockEntry; // rsi
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v4; // rcx
  struct _KTHREAD *ContextForSiloNoRef; // rdi
  ULONG_PTR v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_ENTRIES *v9; // r9
  int v10; // ebx
  struct _KLOCK_ENTRIES *v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  void *v13; // rdx
  LegacyAutoBoost *v14; // rbx
  struct _KTHREAD *v15; // rcx
  struct _LIST_ENTRY **p_Blink; // r14
  struct _LIST_ENTRY *i; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  struct _KTHREAD *v22; // rcx
  struct _LIST_ENTRY ***SListFaultAddress; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  ULONG_PTR j; // rbx
  ULONG_PTR v29; // [rsp+48h] [rbp+10h] BYREF

  SiloKeyLockEntry = 0LL;
  v29 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  ContextForSiloNoRef = (struct _KTHREAD *)CmpGetContextForSiloNoRef(CurrentSilo);
  if ( ContextForSiloNoRef )
  {
    CmpLockRegistry(v4);
    v6 = *(_QWORD *)(a1 + 8);
    CmpLockKcbExclusive(v6, v7, v8, v9);
    v10 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( v10 < 0 )
      goto LABEL_19;
    if ( *(_QWORD *)(v6 + 32) == CmpMasterHive )
    {
      v10 = -1073741811;
      goto LABEL_19;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)ContextForSiloNoRef, 0LL, 0LL, v11);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ContextForSiloNoRef->Header.Lock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&ContextForSiloNoRef->Header.Lock, 0, v14, ContextForSiloNoRef);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v10 = CmpPerformSiloKeyLockTrackerEnabledCheck(ContextForSiloNoRef);
    if ( v10 >= 0 )
    {
      p_Blink = &ContextForSiloNoRef->Header.WaitListHead.Blink;
      for ( i = ContextForSiloNoRef->Header.WaitListHead.Blink; i != (struct _LIST_ENTRY *)p_Blink; i = i->Flink )
      {
        if ( i[1].Flink == (struct _LIST_ENTRY *)v6 )
        {
          v10 = 0;
          goto LABEL_18;
        }
      }
      CmpUnlockSiloKeyLockTracker(v15);
      SiloKeyLockEntry = (ULONG_PTR *)CmpCreateSiloKeyLockEntry((volatile signed __int64 *)v6);
      if ( !SiloKeyLockEntry )
      {
        v10 = -1073741670;
        goto LABEL_19;
      }
      v10 = CmpGlobalLockKeyForWrite(v6, &v29);
      if ( v10 < 0 )
      {
LABEL_19:
        CmpUnlockKcb(v6);
        if ( SiloKeyLockEntry )
          CmpFreeSiloKeyLockEntry(SiloKeyLockEntry);
LABEL_31:
        CmpUnlockRegistry(v18);
        return (unsigned int)v10;
      }
      SiloKeyLockEntry[3] = v29;
      KsepCacheLock((unsigned __int64 *)ContextForSiloNoRef, v19, v20, v21);
      v10 = CmpPerformSiloKeyLockTrackerEnabledCheck(ContextForSiloNoRef);
      if ( v10 >= 0 )
      {
        SListFaultAddress = (struct _LIST_ENTRY ***)ContextForSiloNoRef->SListFaultAddress;
        if ( *SListFaultAddress != p_Blink )
          __fastfail(3u);
        *SiloKeyLockEntry = (ULONG_PTR)p_Blink;
        SiloKeyLockEntry[1] = (ULONG_PTR)SListFaultAddress;
        *SListFaultAddress = (struct _LIST_ENTRY **)SiloKeyLockEntry;
        ContextForSiloNoRef->SListFaultAddress = SiloKeyLockEntry;
        CmpUnlockSiloKeyLockTracker(v22);
        CmpUnlockKcb(v6);
        for ( j = *(_QWORD *)(v6 + 72); *(_QWORD *)(j + 32) != CmpMasterHive; j = *(_QWORD *)(j + 72) )
        {
          CmpLockKcbExclusive(j, v24, v25, v26);
          *(_WORD *)(j + 8) |= 0x100u;
          CmpUnlockKcb(j);
        }
        v10 = 0;
        goto LABEL_31;
      }
    }
LABEL_18:
    CmpUnlockSiloKeyLockTracker(ContextForSiloNoRef);
    goto LABEL_19;
  }
  return (unsigned int)-1073741637;
}
