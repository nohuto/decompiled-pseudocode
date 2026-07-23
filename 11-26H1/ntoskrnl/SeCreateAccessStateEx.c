/*
 * XREFs of SeCreateAccessStateEx @ 0x1409463F0
 * Callers:
 *     CmpDoAccessCheckOnKCB @ 0x14085FB38 (CmpDoAccessCheckOnKCB.c)
 *     PspInsertProcess @ 0x140945AAC (PspInsertProcess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140946274 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
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

__int64 __fastcall SeCreateAccessStateEx(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        struct _KLOCK_ENTRIES *a4,
        int a5,
        _DWORD *a6)
{
  __int64 v6; // rax
  struct _LIST_ENTRY *v7; // rdi
  signed __int64 *v12; // r12
  struct _KTHREAD *CurrentThread; // r13
  void *v14; // rdx
  LegacyAutoBoost *v15; // r15
  struct _LIST_ENTRY *v16; // r15
  struct _LIST_ENTRY *v17; // rax
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  struct _LIST_ENTRY *v20; // [rsp+40h] [rbp-38h]
  __int64 v21; // [rsp+48h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 464);
  v7 = 0LL;
  *((_QWORD *)&v19 + 1) = 0LL;
  v21 = v6;
  if ( a1 && (*(_DWORD *)(a1 + 1440) & 8) != 0 )
  {
    v12 = (signed __int64 *)(a1 + 1424);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 1424, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v12, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v12, 0, v15, (struct _KTHREAD *)v12);
    if ( v15 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v15, v14);
      else
        *((_BYTE *)v15 + 10) = 1;
    }
    if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
    {
      v16 = (struct _LIST_ENTRY *)(*(_QWORD *)(a1 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v16, 0x75536553u);
      DWORD2(v19) = *(_DWORD *)(a1 + 1336) & 3;
    }
    else
    {
      v16 = 0LL;
    }
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((unsigned __int64)v12);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v7 = v16;
  }
  *(_QWORD *)&v19 = v7;
  v17 = (struct _LIST_ENTRY *)PsReferencePrimaryTokenWithTag(a2, 0x75536553u, (__int64)a3, a4);
  v20 = v17;
  if ( SeTokenLeakTracking )
  {
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v17[71].Blink[17].Blink + 1);
      if ( v17 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)&v7[71].Blink[17].Blink + 1);
      if ( v7 == RtlpBootStatHandleLock.ApcState.ApcListHead[1].Flink )
        __debugbreak();
    }
  }
  return SepCreateAccessStateFromSubjectContext(&v19, a3, a4, a5, a6);
}
