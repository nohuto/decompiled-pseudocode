/*
 * XREFs of SeCreateAccessState @ 0x140A10980
 * Callers:
 *     SepCreateTokenEx @ 0x14025F384 (SepCreateTokenEx.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x1407F2950 (PspCheckCpuPartitionCreateAccess.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1407F2CB4 (PspReferenceCpuPartitionByHandle.c)
 *     CMFCheckAccess @ 0x140842C28 (CMFCheckAccess.c)
 *     ObReferenceObjectByNameEx @ 0x1408EBDCC (ObReferenceObjectByNameEx.c)
 *     ObDuplicateObject @ 0x1408F0680 (ObDuplicateObject.c)
 *     NtGetNextThread @ 0x140956360 (NtGetNextThread.c)
 *     WmipCreateGuidObject @ 0x140A10030 (WmipCreateGuidObject.c)
 *     PsOpenThread @ 0x140A10530 (PsOpenThread.c)
 *     SeSubProcessToken @ 0x140A2B26C (SeSubProcessToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140AB2F6C (SepCopyAnonymousTokenAndSetSilo.c)
 *     NtGetNextProcess @ 0x140AEF810 (NtGetNextProcess.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1404425E0 (SepCreateAccessStateFromSubjectContext.c)
 */

__int64 __fastcall SeCreateAccessState(_QWORD *a1, _QWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _KTRAP_FRAME *v4; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  int v7; // r14d
  __int64 Process; // rsi
  LegacyAutoBoost *v11; // r13
  __int64 v12; // rdx
  _KTRAP_FRAME *v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r8
  _KTRAP_FRAME *v16; // rax
  signed __int64 *p_WaitBlockList; // [rsp+30h] [rbp-68h]
  struct _KTHREAD *v19; // [rsp+38h] [rbp-60h]
  __int128 v20; // [rsp+48h] [rbp-50h] BYREF
  _KTRAP_FRAME *v21; // [rsp+58h] [rbp-40h]
  __int64 v22; // [rsp+60h] [rbp-38h]

  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = a3;
  *((_QWORD *)&v20 + 1) = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v22 = *(_QWORD *)(Process + 464);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
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
      v13 = (_KTRAP_FRAME *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v13, 0x75536553u);
      DWORD2(v20) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
    }
    else
    {
      v13 = 0LL;
    }
    if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_WaitBlockList);
    KeAbPostRelease((unsigned __int64)p_WaitBlockList);
    KeLeaveCriticalRegionThread((__int64)v19, v14, v15);
    v4 = v13;
  }
  *(_QWORD *)&v20 = v4;
  v16 = (_KTRAP_FRAME *)PsReferencePrimaryTokenWithTag(Process, 0x75536553u, a3, a4);
  v21 = v16;
  if ( SeTokenLeakTracking )
  {
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16[2].Rbp + 284));
      if ( v16 == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4[2].Rbp + 284));
      if ( v4 == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
  }
  return SepCreateAccessStateFromSubjectContext(&v20, a1, a2, v7, a4);
}
