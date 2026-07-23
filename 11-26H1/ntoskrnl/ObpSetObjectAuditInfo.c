/*
 * XREFs of ObpSetObjectAuditInfo @ 0x140901D14
 * Callers:
 *     ObpCreateHandle @ 0x140908590 (ObpCreateHandle.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlLengthSecurityDescriptor @ 0x1408FE3E0 (RtlLengthSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1409029C0 (RtlValidSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpSetObjectAuditInfo(__int64 a1, PSECURITY_DESCRIPTOR *a2, char a3)
{
  struct _KLOCK_ENTRIES *v6; // r9
  __int64 v8; // rax
  _QWORD *v9; // rdi
  PSECURITY_DESCRIPTOR v10; // rsi
  ULONG v11; // ebp
  void *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // rbx
  signed __int64 *v17; // rbx
  signed __int64 v18; // rax
  signed __int64 v19; // rdx
  signed __int64 v20; // rtt
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  signed __int64 v23; // rtt

  if ( !RtlValidSecurityDescriptor(*a2) )
    return 3221225593LL;
  if ( (*(_BYTE *)(a1 + 26) & 0x20) == 0 )
    return 0LL;
  v8 = ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x3F];
  v9 = (_QWORD *)(a1 - v8);
  if ( a1 == v8 || *v9 )
    return 0LL;
  v10 = *a2;
  if ( a3 )
  {
    *a2 = 0LL;
    goto LABEL_9;
  }
  v11 = RtlLengthSecurityDescriptor(*a2);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, *a2, v11);
LABEL_9:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v14 = (AutoBoost *)KeAbPreAcquire(a1 + 16, 0LL, 0LL, v6);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 16), v14, a1 + 16);
    if ( v16 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v16, v15);
      else
        *((_BYTE *)v16 + 10) = 1;
    }
    v17 = (signed __int64 *)(a1 + 16);
    if ( *v9 )
    {
      _m_prefetchw(v17);
      v21 = *v17;
      v22 = *v17 - 16;
      if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v22 = 0LL;
      if ( (v21 & 2) != 0 || (v23 = *v17, v23 != _InterlockedCompareExchange64(v17, v22, v21)) )
        ExfReleasePushLock((_QWORD *)(a1 + 16));
      KeAbPostRelease(a1 + 16);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      *v9 = v10;
      _m_prefetchw(v17);
      v18 = *v17;
      v19 = *v17 - 16;
      if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v19 = 0LL;
      if ( (v18 & 2) != 0 || (v20 = *v17, v20 != _InterlockedCompareExchange64(v17, v19, v18)) )
        ExfReleasePushLock((_QWORD *)(a1 + 16));
      KeAbPostRelease(a1 + 16);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    return 0LL;
  }
  return 3221225626LL;
}
