/*
 * XREFs of EtwpGetSidExtendedHeaderItem @ 0x140A36CC0
 * Callers:
 *     EtwpEventWriteFull @ 0x14021336C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B7D098 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // edx
  __int64 v15; // rcx
  int v16; // esi
  struct _KTHREAD *v17; // rax
  unsigned __int8 *v18; // rdx
  unsigned int v19; // ebp
  __int64 v20; // rdx
  __int64 v21; // r8
  _KPROCESS *v22; // rcx
  signed __int64 ActiveProcessors; // rax
  signed __int64 v24; // rtt
  _OWORD Src[4]; // [rsp+30h] [rbp-88h] BYREF
  int v27; // [rsp+70h] [rbp-48h]

  CurrentThread = KeGetCurrentThread();
  v27 = 0;
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
  KeLeaveCriticalRegionThread((__int64)v8, v12, v13);
  if ( !v11 )
  {
LABEL_12:
    v14 = 1953654867;
    v15 = (__int64)Process;
LABEL_13:
    v11 = PsReferencePrimaryTokenWithTag(v15, v14, a3, a4);
    v16 = 1;
    goto LABEL_14;
  }
  v16 = 2;
  if ( v6 < 2 )
  {
    ObfDereferenceObjectWithTag((PVOID)v11, 0x746C6644u);
    v15 = (__int64)CurrentThread->Process;
    v14 = 1953261124;
    goto LABEL_13;
  }
LABEL_14:
  v17 = KeGetCurrentThread();
  --v17->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 48), 1u);
  v18 = **(unsigned __int8 ***)(v11 + 152);
  v19 = 4 * v18[1] + 8;
  if ( v19 <= 0x44 )
    memmove(Src, v18, v19);
  ExReleaseResourceLite(*(PERESOURCE *)(v11 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v20, v21);
  if ( v16 == 1 )
  {
    v22 = CurrentThread->Process;
    _m_prefetchw(&v22[1].ActiveProcessors);
    ActiveProcessors = (signed __int64)v22[1].ActiveProcessors;
    while ( (v11 ^ ActiveProcessors) < 0xF )
    {
      v24 = ActiveProcessors;
      ActiveProcessors = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)&v22[1].ActiveProcessors,
                           ActiveProcessors + 1,
                           ActiveProcessors);
      if ( v24 == ActiveProcessors )
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
  *(_WORD *)(a1 + 6) = v19;
  *(_WORD *)a1 = (v19 + 15) & 0xFFF8;
  memmove((void *)(a1 + 8), Src, v19);
  return memset_0((void *)(a1 + v19 + 8), 0, ((v19 + 15) & 0xFFFFFFF8) - (v19 + 8));
}
