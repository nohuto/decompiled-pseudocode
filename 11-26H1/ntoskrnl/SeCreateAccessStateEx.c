/*
 * XREFs of SeCreateAccessStateEx @ 0x1409843E0
 * Callers:
 *     CmpDoAccessCheckOnKCB @ 0x1408597A8 (CmpDoAccessCheckOnKCB.c)
 *     PspInsertProcess @ 0x140983A9C (PspInsertProcess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140984264 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspInsertThread @ 0x140A026D0 (PspInsertThread.c)
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

__int64 __fastcall SeCreateAccessStateEx(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        struct _KLOCK_ENTRIES *a4,
        int a5,
        _DWORD *a6)
{
  __int64 v6; // rax
  _KTRAP_FRAME *v7; // rdi
  signed __int64 *v12; // r12
  struct _KTHREAD *CurrentThread; // r13
  void *v14; // rdx
  LegacyAutoBoost *v15; // r15
  _KTRAP_FRAME *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  _KTRAP_FRAME *v19; // rax
  __int128 v21; // [rsp+30h] [rbp-48h] BYREF
  _KTRAP_FRAME *v22; // [rsp+40h] [rbp-38h]
  __int64 v23; // [rsp+48h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 464);
  v7 = 0LL;
  *((_QWORD *)&v21 + 1) = 0LL;
  v23 = v6;
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
      v16 = (_KTRAP_FRAME *)(*(_QWORD *)(a1 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObjectWithTag(v16, 0x75536553u);
      DWORD2(v21) = *(_DWORD *)(a1 + 1336) & 3;
    }
    else
    {
      v16 = 0LL;
    }
    if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v12);
    KeAbPostRelease((unsigned __int64)v12);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v17, v18);
    v7 = v16;
  }
  *(_QWORD *)&v21 = v7;
  v19 = (_KTRAP_FRAME *)PsReferencePrimaryTokenWithTag(a2, 0x75536553u, (__int64)a3, a4);
  v22 = v19;
  if ( SeTokenLeakTracking )
  {
    if ( v19 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v19[2].Rbp + 284));
      if ( v19 == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7[2].Rbp + 284));
      if ( v7 == RtlpBootStatHandleLock.TrapFrame )
        __debugbreak();
    }
  }
  return SepCreateAccessStateFromSubjectContext(&v21, a3, a4, a5, a6);
}
