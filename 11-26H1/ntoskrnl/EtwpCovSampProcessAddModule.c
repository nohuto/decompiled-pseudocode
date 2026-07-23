/*
 * XREFs of EtwpCovSampProcessAddModule @ 0x140A351C4
 * Callers:
 *     EtwpCovSampImageNotify @ 0x140A33F80 (EtwpCovSampImageNotify.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     EtwpCovSampProcessRemoveModule @ 0x140A33DDC (EtwpCovSampProcessRemoveModule.c)
 *     EtwpCovSampModuleReference @ 0x140A35614 (EtwpCovSampModuleReference.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCovSampProcessAddModule(__int64 a1, void **a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  void *Pool2; // r15
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbp
  unsigned int i; // r12d
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // ecx
  _QWORD *v18; // r14
  unsigned int v19; // ebp
  unsigned int v21; // r14d
  struct _KLOCK_ENTRIES *v22; // r9
  struct _KTHREAD *v23; // rax
  AutoBoost *v24; // rax
  void *v25; // rdx
  AutoBoost *v26; // rbp
  const void *v27; // rdx
  void *v28; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 8);
  --CurrentThread->KernelApcDisable;
  Pool2 = 0LL;
  v11 = (AutoBoost *)KeAbPreAcquire(a1 + 8, 0LL, 0LL, a4);
  v13 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v11, (__int64)v5);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  if ( !*(_QWORD *)a1 )
  {
    PsReferenceSiloContext(*a2);
    *(_QWORD *)a1 = a2;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x110000) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= 0x14 )
      {
        v19 = -1073741823;
        goto LABEL_16;
      }
      v15 = EtwpCovSampProcessRemoveModule(a1, (__int64)a4, *(_QWORD *)(a3 + 40));
      v16 = *(_DWORD *)(a1 + 36);
      v17 = *(_DWORD *)(a1 + 32);
      if ( v17 < v16 )
        break;
      v21 = 2 * v16;
      if ( !v16 )
        v21 = 16;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((unsigned __int64)v5);
      KeLeaveCriticalRegion();
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x56777445u);
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      if ( !Pool2 )
      {
        v19 = -1073741670;
        goto LABEL_16;
      }
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      v24 = (AutoBoost *)KeAbPreAcquire((__int64)v5, 0LL, 0LL, v22);
      v26 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v24, (__int64)v5);
      if ( v26 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v26, v25);
        else
          *((_BYTE *)v26 + 10) = 1;
      }
      *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
      if ( v21 > *(_DWORD *)(a1 + 36) )
      {
        v27 = *(const void **)(a1 + 24);
        if ( v27 )
          memmove(Pool2, v27, 16LL * *(unsigned int *)(a1 + 32));
        v28 = *(void **)(a1 + 24);
        *(_QWORD *)(a1 + 24) = Pool2;
        Pool2 = v28;
        *(_DWORD *)(a1 + 36) = v21;
      }
    }
    v18 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v15);
    if ( v17 > v15 )
      memmove(v18 + 2, (const void *)(*(_QWORD *)(a1 + 24) + 16LL * v15), 16LL * (v17 - v15));
    ++*(_DWORD *)(a1 + 32);
    *v18 = (char *)a4 + *(_QWORD *)(a3 + 40);
    EtwpCovSampModuleReference(*(_QWORD *)a1, a3);
    v18[1] = a3;
  }
  else
  {
    EtwpCovSampProcessRemoveModule(a1, (__int64)a4, *(_QWORD *)(a3 + 40));
  }
  v19 = 0;
LABEL_16:
  if ( *(struct _KTHREAD **)(a1 + 16) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease((unsigned __int64)v5);
    KeLeaveCriticalRegion();
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x56777445u);
  return v19;
}
