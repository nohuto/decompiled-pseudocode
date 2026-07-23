/*
 * XREFs of KiShouldLogUserModeReturnMismatch @ 0x140AC4E58
 * Callers:
 *     KiLogControlProtectionUserModeReturnMismatch @ 0x1404B71D4 (KiLogControlProtectionUserModeReturnMismatch.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

char __fastcall KiShouldLogUserModeReturnMismatch(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  char v5; // bp
  int v7; // edx
  int v8; // edx
  __int64 v9; // rsi
  unsigned int v10; // r8d
  int v11; // r12d
  unsigned int i; // edx
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v15; // rax
  void *v16; // rdx
  AutoBoost *v17; // r14
  __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned int j; // ecx

  v4 = *(unsigned __int64 **)(a1 + 424);
  v5 = 0;
  v7 = a2 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return 0;
      v9 = 7LL;
    }
    else
    {
      v9 = 4LL;
    }
  }
  else
  {
    v9 = 1LL;
  }
  _InterlockedIncrement((volatile signed __int32 *)&v4[v9 + 2]);
  v10 = v4[v9 + 1];
  v11 = HIDWORD(v4[v9 + 1]);
  if ( v10 != v11 )
  {
    for ( i = 0; i < v10; ++i )
    {
      if ( *(_QWORD *)(v4[v9] + 8LL * i) == a3 )
        return v5;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = (AutoBoost *)KeAbPreAcquire((__int64)v4, 0LL, 0LL, a4);
    v17 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v4, v15, (__int64)v4);
    if ( v17 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v17, v16);
      else
        *((_BYTE *)v17 + 10) = 1;
    }
    v18 = LODWORD(v4[v9 + 1]);
    if ( (_DWORD)v18 != v11 )
    {
      v19 = v4[v9];
      for ( j = 0; j < (unsigned int)v18; ++j )
      {
        if ( *(_QWORD *)(v19 + 8LL * j) == a3 )
          goto LABEL_26;
      }
      *(_QWORD *)(v19 + 8 * v18) = a3;
      v5 = 1;
      ++LODWORD(v4[v9 + 1]);
    }
LABEL_26:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((unsigned __int64)v4);
    KeLeaveCriticalRegion();
  }
  return v5;
}
