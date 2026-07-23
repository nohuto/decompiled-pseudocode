/*
 * XREFs of sub_1409ECABC @ 0x1409ECABC
 * Callers:
 *     sub_1409ECA18 @ 0x1409ECA18 (sub_1409ECA18.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     sub_1409ECCCC @ 0x1409ECCCC (sub_1409ECCCC.c)
 */

__int64 __fastcall sub_1409ECABC(__int64 a1, unsigned int a2, int a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v5; // rdi
  unsigned int v9; // r15d
  __int64 v10; // r12
  void *v11; // rdx
  LegacyAutoBoost *v12; // rbp
  signed __int64 v13; // r10
  signed __int64 v14; // r9
  struct _KLOCK_ENTRIES *v15; // r9
  struct _KTHREAD *v16; // rax
  AutoBoost *v17; // rax
  void *v18; // rdx
  AutoBoost *v19; // rbp
  __int64 i; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = (signed __int64 *)(a1 + 1072);
  --CurrentThread->SpecialApcDisable;
  v9 = (unsigned int)a4;
  v10 = 0LL;
  v12 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 1072, 0LL, 0LL, a4);
  v13 = 17LL;
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx(v5, 0, v12, (struct _KTHREAD *)v5);
    v13 = 17LL;
  }
  v14 = 0LL;
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v12, v11);
    else
      *((_BYTE *)v12 + 10) = 1;
  }
  while ( 1 )
  {
LABEL_6:
    if ( a2 >= a3 + 1 )
    {
      a2 = -1;
      goto LABEL_10;
    }
    if ( *(_BYTE *)(a2 + a1 + 44) == (_BYTE)v14 )
      break;
    ++a2;
  }
  if ( a2 != -1 )
  {
    for ( i = a2 + 1; (unsigned int)i < a2 + v9; i = (unsigned int)(i + 1) )
    {
      if ( *(_BYTE *)(i + a1 + 44) != (_BYTE)v14 )
      {
        if ( (_DWORD)i == -1 )
          break;
        a2 = i + 1;
        goto LABEL_6;
      }
    }
  }
LABEL_10:
  if ( v13 != _InterlockedCompareExchange64(v5, v14, v13) )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveGuardedRegion();
  if ( a2 != -1 )
  {
    v16 = KeGetCurrentThread();
    --v16->SpecialApcDisable;
    v17 = (AutoBoost *)KeAbPreAcquire((__int64)v5, 0LL, 0LL, v15);
    v19 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v17, (__int64)v5);
    if ( v19 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v19, v18);
      else
        *((_BYTE *)v19 + 10) = 1;
    }
    if ( (unsigned int)sub_1409ECCCC(a1, a2, v9) == -1 )
    {
      v10 = *(_QWORD *)(a1 + 32) + (a2 << 6);
      if ( v9 )
        memset_0((void *)(a1 + a2 + 44LL), 2, v9 - 1);
      *(_BYTE *)(a2 + v9 - 1 + a1 + 44) = 1;
    }
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((unsigned __int64)v5);
    KeLeaveGuardedRegion();
  }
  return v10;
}
