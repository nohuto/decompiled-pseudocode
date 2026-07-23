/*
 * XREFs of sub_1409EC45C @ 0x1409EC45C
 * Callers:
 *     sub_140B3B01C @ 0x140B3B01C (sub_140B3B01C.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     sub_1409EBDC0 @ 0x1409EBDC0 (sub_1409EBDC0.c)
 *     sub_1409EC140 @ 0x1409EC140 (sub_1409EC140.c)
 *     sub_1409ED050 @ 0x1409ED050 (sub_1409ED050.c)
 */

__int64 __fastcall sub_1409EC45C(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  int v4; // eax
  struct _KLOCK_ENTRIES *v5; // r9
  unsigned int v6; // ebp
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 *v9; // rdi
  __int64 v10; // rcx
  AutoBoost *v11; // rax
  void *v12; // rdx
  AutoBoost *v13; // rbp
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  v14 = 0LL;
  if ( a3 < 0x10 )
  {
    v6 = -1073741811;
  }
  else
  {
    v4 = sub_1409EBDC0(a1, a2, a3, &v14);
    v3 = v14;
    v6 = v4;
    if ( v4 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v9 = (volatile signed __int32 *)(v14 + 8);
      v10 = v14 + 8;
      --CurrentThread->SpecialApcDisable;
      v11 = (AutoBoost *)KeAbPreAcquire(v10, 0LL, 0LL, v5);
      v13 = v11;
      if ( _interlockedbittestandset64(v9, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v3 + 8), v11, v3 + 8);
      if ( v13 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v13, v12);
        else
          *((_BYTE *)v13 + 10) = 1;
      }
      v6 = sub_1409ED050(v3);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v3 + 8));
      KeAbPostRelease(v3 + 8);
      KeLeaveGuardedRegion();
    }
  }
  sub_1409EC140((volatile signed __int64 *)v3);
  return v6;
}
