/*
 * XREFs of EtwpGetSidExtendedHeaderItem @ 0x140A4FC60
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *__fastcall EtwpGetSidExtendedHeaderItem(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v6; // ebp
  _KPROCESS *Process; // r15
  struct _KTHREAD *v8; // r12
  void *v9; // rdx
  LegacyAutoBoost *v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned int v12; // edx
  __int64 v13; // rcx
  int v14; // esi
  struct _KTHREAD *v15; // rax
  unsigned __int8 *v16; // rdx
  unsigned int v17; // ebp
  _KPROCESS *v18; // rcx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v20; // rtt
  _OWORD Src[4]; // [rsp+30h] [rbp-88h] BYREF
  int v23; // [rsp+70h] [rbp-48h]

  CurrentThread = KeGetCurrentThread();
  v23 = 0;
  v6 = 0;
  memset(Src, 0, sizeof(Src));
  Process = CurrentThread->ApcState.Process;
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 )
    goto LABEL_12;
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  v10 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CurrentThread[1].WaitBlockList, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&CurrentThread[1].WaitBlockList,
      0,
      v10,
      (struct _KTHREAD *)((char *)CurrentThread + 1424));
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
  {
    v11 = *(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL;
    ObfReferenceObjectWithTag((PVOID)v11, 0x74726853u);
    v6 = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
  }
  else
  {
    v11 = 0LL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
  KeAbPostRelease((unsigned __int64)&CurrentThread[1].WaitBlockList);
  KeLeaveCriticalRegionThread((__int64)v8);
  if ( !v11 )
  {
LABEL_12:
    v12 = 1953654867;
    v13 = (__int64)Process;
LABEL_13:
    v11 = PsReferencePrimaryTokenWithTag(v13, v12, a3, a4);
    v14 = 1;
    goto LABEL_14;
  }
  v14 = 2;
  if ( v6 < 2 )
  {
    ObfDereferenceObjectWithTag((PVOID)v11, 0x746C6644u);
    v13 = (__int64)CurrentThread->Process;
    v12 = 1953261124;
    goto LABEL_13;
  }
LABEL_14:
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 48), 1u);
  v16 = **(unsigned __int8 ***)(v11 + 152);
  v17 = 4 * v16[1] + 8;
  if ( v17 <= 0x44 )
    memmove(Src, v16, v17);
  ExReleaseResourceLite(*(PERESOURCE *)(v11 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v14 == 1 )
  {
    v18 = CurrentThread->Process;
    _m_prefetchw(&v18[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v18[1].ActiveProcessors;
    while ( (v11 ^ ActiveProcessors) < 0xF )
    {
      v20 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v18[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
      if ( v20 == ActiveProcessors )
      {
        if ( ObpTraceFlags )
          ObpPushStackInfo(v11 - 48, -1, 0x74726853u);
        goto LABEL_22;
      }
    }
  }
  ObfDereferenceObjectWithTag((PVOID)v11, 0x74726853u);
LABEL_22:
  *(_DWORD *)(a1 + 2) = 2;
  *(_WORD *)(a1 + 6) = v17;
  *(_WORD *)a1 = (v17 + 15) & 0xFFF8;
  memmove((void *)(a1 + 8), Src, v17);
  return memset_0((void *)(a1 + v17 + 8), 0, ((v17 + 15) & 0xFFFFFFF8) - (v17 + 8));
}
