/*
 * XREFs of EtwpFreeGuidEntry @ 0x14091281C
 * Callers:
 *     EtwpAddGuidEntry @ 0x1408FC380 (EtwpAddGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ObDereferenceSecurityDescriptor @ 0x14090D9C0 (ObDereferenceSecurityDescriptor.c)
 *     EtwpUnreferenceGuidEntry @ 0x1409126C0 (EtwpUnreferenceGuidEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeGuidEntry(char *P, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  void *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  char **v11; // rdx
  PVOID *v12; // rcx
  __int64 *v13; // rdi
  signed __int64 v14; // rax
  signed __int64 v15; // rdx
  __int64 v16; // rtt
  __int64 v17; // rdx
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9

  if ( *((_QWORD *)P + 82) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (unsigned __int64 *)(*((_QWORD *)P + 82) + 664LL);
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)v7, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    *(_QWORD *)(*((_QWORD *)P + 82) + 672LL) = KeGetCurrentThread();
    v11 = (char **)*((_QWORD *)P + 2);
    if ( v11[1] != P + 16 || (v12 = (PVOID *)*((_QWORD *)P + 3), *v12 != P + 16) )
      __fastfail(3u);
    *v12 = v11;
    v11[1] = (char *)v12;
    *(_QWORD *)(*((_QWORD *)P + 82) + 672LL) = 0LL;
    v13 = (__int64 *)(*((_QWORD *)P + 82) + 664LL);
    _m_prefetchw(v13);
    v14 = *v13;
    v15 = *v13 - 16;
    if ( (*v13 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v15 = 0LL;
    if ( (v14 & 2) != 0 || (v16 = *v13, v16 != _InterlockedCompareExchange64(v13, v15, v14)) )
      ExfReleasePushLock(v13);
    KeAbPostRelease((unsigned __int64)v13);
    KeLeaveCriticalRegion();
    EtwpUnreferenceGuidEntry(*((__int64 **)P + 82), v17, v18, v19);
  }
  ObDereferenceSecurityDescriptor(*((_QWORD *)P + 9), 1u, a3, a4);
  v5 = (void *)*((_QWORD *)P + 80);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)P + 81) + 4392LL), 0xFFFFFFFF);
  ExFreePoolWithTag(P, 0);
}
