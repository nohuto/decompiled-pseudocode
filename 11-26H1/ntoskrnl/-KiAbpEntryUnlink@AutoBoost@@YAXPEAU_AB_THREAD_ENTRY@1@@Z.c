/*
 * XREFs of ?KiAbpEntryUnlink@AutoBoost@@YAXPEAU_AB_THREAD_ENTRY@1@@Z @ 0x14027A060
 * Callers:
 *     ?KiAbpPreCleanupThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x1402039C4 (-KiAbpPreCleanupThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     ?KiAbpPostWaitUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x140224810 (-KiAbpPostWaitUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     KiAbProcessPostContextSwitch @ 0x14023D3E0 (KiAbProcessPostContextSwitch.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     ?KiAbpPostReleaseUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z @ 0x14026F9E8 (-KiAbpPostReleaseUserMode@AutoBoost@@YAXPEAU_KTHREAD@@PEAX@Z.c)
 *     ExpReleaseFastResourceExclusive @ 0x14026FD50 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     PspUnlockProcessThreadListShared @ 0x140271060 (PspUnlockProcessThreadListShared.c)
 *     PspUnlockThreadSecurityShared @ 0x140271330 (PspUnlockThreadSecurityShared.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     ExpReleaseFastResourceShared @ 0x140271F10 (ExpReleaseFastResourceShared.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140278890 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x140278C30 (ExReleasePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ExReleasePushLockSharedEx @ 0x140279820 (ExReleasePushLockSharedEx.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x140279BB0 (ExReleaseAutoExpandPushLockShared.c)
 *     ExReleasePushLockEx @ 0x14027A4C0 (ExReleasePushLockEx.c)
 *     ExReleaseFastResource @ 0x14027A880 (ExReleaseFastResource.c)
 *     ObpReleaseLookupContext @ 0x14027B380 (ObpReleaseLookupContext.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027B770 (FsRtlReleaseHeaderMutex.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14027C120 (ExReleaseAutoExpandPushLockExclusive.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x14027C8A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     PspUnlockProcessListShared @ 0x14027CC00 (PspUnlockProcessListShared.c)
 *     ?KiAbpPreWait@AutoBoost@@YAXPEAX@Z @ 0x1404674E0 (-KiAbpPreWait@AutoBoost@@YAXPEAX@Z.c)
 *     ?KiAbpCrossThreadRelease@AutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z @ 0x1404F0FBC (-KiAbpCrossThreadRelease@AutoBoost@@YAXPEAX0PEAU_KTHREAD@@@Z.c)
 *     ?KiAbpPostReleaseEntry@AutoBoost@@YA?AT_AB_BOOST_BITMAP@1@PEAU_AB_THREAD_ENTRY@1@@Z @ 0x140526684 (-KiAbpPostReleaseEntry@AutoBoost@@YA-AT_AB_BOOST_BITMAP@1@PEAU_AB_THREAD_ENTRY@1@@Z.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     RtlRbRemoveNode @ 0x140379A10 (RtlRbRemoveNode.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall AutoBoost::KiAbpEntryUnlink(AutoBoost *this, struct AutoBoost::_AB_THREAD_ENTRY *a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  _RTL_RB_TREE *v5; // rcx
  volatile signed __int8 *v6; // rdi
  _QWORD *v7; // r15
  _QWORD *v8; // rbp
  unsigned __int64 v9; // rdi
  char v10; // bp
  unsigned int *v11; // rsi
  __int64 v12; // r14
  volatile signed __int64 *v13; // rcx
  unsigned int *v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // r8
  char v21; // al
  _BYTE *v22; // rdx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)this;
  v4 = *((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 32), 0LL) )
      KxWaitForSpinLockAndAcquire(v2 + 32);
  }
  else
  {
    KiAcquireSpinLockInstrumented(v2 + 32);
  }
  if ( (*((_BYTE *)this + 33) & 4) != 0 )
  {
    v21 = *((_BYTE *)this + 32);
    v22 = (_BYTE *)(v2 + 76);
    if ( (v21 & 8) != 0 )
    {
      --*v22;
      *((_BYTE *)this + 32) &= ~8u;
      v21 = *((_BYTE *)this + 32);
    }
    if ( (v21 & 0x10) != 0 )
    {
      *(_DWORD *)v22 ^= ((unsigned __int16)*(_DWORD *)v22 ^ (unsigned __int16)(((unsigned __int16)(*(_DWORD *)v22 >> 8)
                                                                              - 1) << 8)) & 0x7F00;
      *((_BYTE *)this + 32) &= ~0x10u;
    }
    v5 = (_RTL_RB_TREE *)(v2 + 56);
    v6 = (volatile signed __int8 *)(v4 + 792);
    v8 = (_QWORD *)(v2 + 56);
    v7 = (_QWORD *)(v2 + 40);
  }
  else
  {
    v5 = (_RTL_RB_TREE *)(v2 + 40);
    v6 = (volatile signed __int8 *)(v4 + 793);
    v7 = (_QWORD *)(v2 + 40);
    v8 = (_QWORD *)(v2 + 56);
  }
  RtlRbRemoveNode(v5, (PRTL_BALANCED_NODE)((char *)this + 8));
  _InterlockedDecrement8(v6);
  v9 = *(_QWORD *)(v2 + 24);
  *((_BYTE *)this + 32) &= ~2u;
  *(_QWORD *)this = v9;
  _InterlockedAnd8((volatile signed __int8 *)this + 34, 0xFDu);
  if ( *v7 || *v8 )
  {
    v10 = 0;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 32), 0LL);
    else
      KiReleaseSpinLockInstrumented(v2 + 32, retaddr);
    v11 = 0LL;
    v12 = 0LL;
    goto LABEL_11;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)(v2 + 32), 0LL);
  else
    KiReleaseSpinLockInstrumented(v2 + 32, retaddr);
  v12 = 0LL;
  if ( *((char *)this + 36) >= 0 )
  {
    v11 = (unsigned int *)((char *)&unk_140E16400 + 64 * ((v9 >> 4) & 0x3FF));
  }
  else
  {
    v14 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)this - 6 * (*((_BYTE *)this + 36) & 0x7F) - 2) + 544LL) + 88LL);
    v15 = (v9 >> 4) % *v14;
    v11 = &v14[4 * v15 + 2 + 2 * v15];
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      KxWaitForSpinLockAndAcquire(v11);
  }
  else
  {
    KiAcquireSpinLockInstrumented(v11);
  }
  v16 = *((_QWORD *)v11 + 2);
  v17 = *((_QWORD *)v11 + 1);
  v10 = 1;
  if ( (v16 & 1) != 0 )
  {
    if ( !v17 )
      goto LABEL_11;
    v17 ^= (unsigned __int64)(v11 + 2);
  }
  v18 = v16 & 1;
  if ( !v17 )
    goto LABEL_11;
  do
  {
    if ( v9 > *(_QWORD *)(v17 + 24) )
    {
      v19 = *(_QWORD *)(v17 + 8);
      if ( v18 && v19 )
        goto LABEL_33;
    }
    else
    {
      if ( v9 >= *(_QWORD *)(v17 + 24) )
        break;
      v19 = *(_QWORD *)v17;
      if ( v18 && v19 )
      {
LABEL_33:
        v17 ^= v19;
        continue;
      }
    }
    v17 = v19;
  }
  while ( v17 );
  if ( v17 )
  {
    v12 = v17;
    v10 = 3;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 32), 0LL) )
        KxWaitForSpinLockAndAcquire(v17 + 32);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v17 + 32);
    }
    if ( !*(_QWORD *)(v17 + 40) && !*(_QWORD *)(v17 + 56) )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(v11 + 2), (PRTL_BALANCED_NODE)v17);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 32), 0LL);
      else
        KiReleaseSpinLockInstrumented(v17 + 32, retaddr);
      v12 = 0LL;
      v10 = 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
      else
        KiReleaseSpinLockInstrumented(v11, retaddr);
      ++dword_140E2641C;
      if ( LOWORD(SListHead.Alignment) >= (unsigned __int16)word_140E26410 )
      {
        ++dword_140E26420;
        guard_dispatch_icall_no_overrides(v17, &SListHead, v20);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&SListHead, (PSLIST_ENTRY)v17);
      }
    }
  }
LABEL_11:
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    v13 = (volatile signed __int64 *)(v12 + 32);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64(v13, 0LL);
    else
      KiReleaseSpinLockInstrumented(v13, retaddr);
  }
  if ( (v10 & 1) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)v11, 0LL);
    else
      KiReleaseSpinLockInstrumented(v11, retaddr);
  }
}
