/*
 * XREFs of SeCreateAccessState @ 0x140A0FB70
 * Callers:
 *     SepCreateTokenEx @ 0x140405564 (SepCreateTokenEx.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x1407F84B0 (PspCheckCpuPartitionCreateAccess.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1407F8814 (PspReferenceCpuPartitionByHandle.c)
 *     CMFCheckAccess @ 0x1408480B8 (CMFCheckAccess.c)
 *     ObReferenceObjectByNameEx @ 0x1408F238C (ObReferenceObjectByNameEx.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     NtGetNextThread @ 0x140949FE0 (NtGetNextThread.c)
 *     NtGetNextProcess @ 0x1409BA3B0 (NtGetNextProcess.c)
 *     WmipCreateGuidObject @ 0x140A0F220 (WmipCreateGuidObject.c)
 *     PsOpenThread @ 0x140A0F720 (PsOpenThread.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB430C (SepCopyAnonymousTokenAndSetSilo.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x14043B0F0 (SepCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall SeCreateAccessState(_QWORD *a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _LIST_ENTRY *v4; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  int v7; // r14d
  __int64 Process; // rsi
  LegacyAutoBoost *v11; // r13
  __int64 v12; // rdx
  struct _LIST_ENTRY *v13; // r13
  struct _LIST_ENTRY *v14; // rax
  signed __int64 *p_WaitBlockList; // [rsp+30h] [rbp-68h]
  struct _KTHREAD *v17; // [rsp+38h] [rbp-60h]
  __int128 v18; // [rsp+48h] [rbp-50h] BYREF
  struct _LIST_ENTRY *v19; // [rsp+58h] [rbp-40h]
  __int64 v20; // [rsp+60h] [rbp-38h]

  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = a3;
  *((_QWORD *)&v18 + 1) = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v20 = *(_QWORD *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    p_WaitBlockList = (signed __int64 *)&CurrentThread[1].WaitBlockList;
    v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, a4);
    v12 = 17LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&CurrentThread[1].WaitBlockList,
        0,
        v11,
        (struct _KTHREAD *)((char *)CurrentThread + 1424));
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, (void *)v12);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v13 = (struct _LIST_ENTRY *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v13, 0x75536553u);
      DWORD2(v18) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v13 = 0LL;
    }
    if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_WaitBlockList);
    KeAbPostRelease((unsigned __int64)p_WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v17);
    v4 = v13;
  }
  *(_QWORD *)&v18 = v4;
  v14 = (struct _LIST_ENTRY *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, a3, a4);
  v19 = v14;
  if ( SeTokenLeakTracking )
  {
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v14[71].Blink[17].Blink + 1);
      if ( v14 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v4[71].Blink[17].Blink + 1);
      if ( v4 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
  }
  return SepCreateAccessStateFromSubjectContext(&v18, a1, a2, v7, a4);
}
