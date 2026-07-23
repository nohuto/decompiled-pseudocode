/*
 * XREFs of CmLockKeyForWrite @ 0x140A4BA6C
 * Callers:
 *     NtLockRegistryKey @ 0x140855410 (NtLockRegistryKey.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     CmpFreeSiloKeyLockEntry @ 0x140861CAC (CmpFreeSiloKeyLockEntry.c)
 *     CmpLockKcbExclusive @ 0x1408D5100 (CmpLockKcbExclusive.c)
 *     CmpUnlockSiloKeyLockTracker @ 0x140966AAC (CmpUnlockSiloKeyLockTracker.c)
 *     KsepCacheLock @ 0x140967E30 (KsepCacheLock.c)
 *     CmpCreateSiloKeyLockEntry @ 0x140A41684 (CmpCreateSiloKeyLockEntry.c)
 *     CmpGetContextForSiloNoRef @ 0x140A4BBC0 (CmpGetContextForSiloNoRef.c)
 *     CmpPerformSiloKeyLockTrackerEnabledCheck @ 0x140A4BBF0 (CmpPerformSiloKeyLockTrackerEnabledCheck.c)
 *     CmpGlobalLockKeyForWrite @ 0x140B11D8C (CmpGlobalLockKeyForWrite.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmLockKeyForWrite(__int64 a1)
{
  ULONG_PTR *SiloKeyLockEntry; // rsi
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD *ContextForSiloNoRef; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  int v13; // ebx
  struct _KLOCK_ENTRIES *v14; // r9
  struct _KTHREAD *CurrentThread; // rax
  void *v16; // rdx
  LegacyAutoBoost *v17; // rbx
  struct _KTHREAD *v18; // rcx
  struct _LIST_ENTRY **p_Blink; // r14
  struct _LIST_ENTRY *i; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _KLOCK_ENTRIES *v24; // r9
  struct _KTHREAD *v25; // rcx
  struct _LIST_ENTRY ***SListFaultAddress; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  struct _KLOCK_ENTRIES *v29; // r9
  ULONG_PTR j; // rbx
  ULONG_PTR v32; // [rsp+48h] [rbp+10h] BYREF

  SiloKeyLockEntry = 0LL;
  v32 = 0LL;
  CurrentSilo = PsGetCurrentSilo();
  ContextForSiloNoRef = (struct _KTHREAD *)CmpGetContextForSiloNoRef(CurrentSilo);
  if ( ContextForSiloNoRef )
  {
    CmpLockRegistry(v5, v4, v7, v8);
    v9 = *(_QWORD *)(a1 + 8);
    CmpLockKcbExclusive(v9, v10, v11, v12);
    v13 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( v13 < 0 )
      goto LABEL_19;
    if ( *(_QWORD *)(v9 + 32) == CmpMasterHive )
    {
      v13 = -1073741811;
      goto LABEL_19;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v17 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)ContextForSiloNoRef, 0LL, 0LL, v14);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ContextForSiloNoRef->Header.Lock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&ContextForSiloNoRef->Header.Lock, 0, v17, ContextForSiloNoRef);
    if ( v17 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v17, v16);
      else
        *((_BYTE *)v17 + 10) = 1;
    }
    v13 = CmpPerformSiloKeyLockTrackerEnabledCheck(ContextForSiloNoRef);
    if ( v13 >= 0 )
    {
      p_Blink = &ContextForSiloNoRef->Header.WaitListHead.Blink;
      for ( i = ContextForSiloNoRef->Header.WaitListHead.Blink; i != (struct _LIST_ENTRY *)p_Blink; i = i->Flink )
      {
        if ( i[1].Flink == (struct _LIST_ENTRY *)v9 )
        {
          v13 = 0;
          goto LABEL_18;
        }
      }
      CmpUnlockSiloKeyLockTracker(v18);
      SiloKeyLockEntry = (ULONG_PTR *)CmpCreateSiloKeyLockEntry((volatile signed __int64 *)v9);
      if ( !SiloKeyLockEntry )
      {
        v13 = -1073741670;
        goto LABEL_19;
      }
      v13 = CmpGlobalLockKeyForWrite(v9, &v32);
      if ( v13 < 0 )
      {
LABEL_19:
        CmpUnlockKcb(v9);
        if ( SiloKeyLockEntry )
          CmpFreeSiloKeyLockEntry(SiloKeyLockEntry);
LABEL_31:
        CmpUnlockRegistry(v21);
        return (unsigned int)v13;
      }
      SiloKeyLockEntry[3] = v32;
      KsepCacheLock((unsigned __int64 *)ContextForSiloNoRef, v22, v23, v24);
      v13 = CmpPerformSiloKeyLockTrackerEnabledCheck(ContextForSiloNoRef);
      if ( v13 >= 0 )
      {
        SListFaultAddress = (struct _LIST_ENTRY ***)ContextForSiloNoRef->SListFaultAddress;
        if ( *SListFaultAddress != p_Blink )
          __fastfail(3u);
        *SiloKeyLockEntry = (ULONG_PTR)p_Blink;
        SiloKeyLockEntry[1] = (ULONG_PTR)SListFaultAddress;
        *SListFaultAddress = (struct _LIST_ENTRY **)SiloKeyLockEntry;
        ContextForSiloNoRef->SListFaultAddress = SiloKeyLockEntry;
        CmpUnlockSiloKeyLockTracker(v25);
        CmpUnlockKcb(v9);
        for ( j = *(_QWORD *)(v9 + 72); *(_QWORD *)(j + 32) != CmpMasterHive; j = *(_QWORD *)(j + 72) )
        {
          CmpLockKcbExclusive(j, v27, v28, v29);
          *(_WORD *)(j + 8) |= 0x100u;
          CmpUnlockKcb(j);
        }
        v13 = 0;
        goto LABEL_31;
      }
    }
LABEL_18:
    CmpUnlockSiloKeyLockTracker(ContextForSiloNoRef);
    goto LABEL_19;
  }
  return (unsigned int)-1073741637;
}
