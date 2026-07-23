/*
 * XREFs of sub_1409E9B88 @ 0x1409E9B88
 * Callers:
 *     sub_1409E960C @ 0x1409E960C (sub_1409E960C.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     sub_1409E99A0 @ 0x1409E99A0 (sub_1409E99A0.c)
 *     sub_1409EB278 @ 0x1409EB278 (sub_1409EB278.c)
 */

void __fastcall sub_1409E9B88(unsigned __int64 *a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v6; // eax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  struct _KLOCK_ENTRIES *v10; // r9
  AutoBoost *v11; // rbx
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rbx
  unsigned __int64 *v15; // rcx
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx

  while ( 1 )
  {
    v6 = a2--;
    if ( v6 <= 0 )
      break;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 6), 0LL, 0LL, a4);
    v11 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 12, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 6, v8, (__int64)(a1 + 6));
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v9);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    v12 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 10), 0LL, 0LL, v10);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 20, 0LL) )
      ExfAcquirePushLockExclusiveEx(a1 + 10, v12, (__int64)(a1 + 10));
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    v15 = a1 + 8;
    v16 = (unsigned __int64 *)a1[8];
    if ( v16 == a1 + 8 )
    {
      v18 = 0LL;
    }
    else
    {
      if ( (unsigned __int64 *)v16[1] != v15 || (v17 = *v16, *(unsigned __int64 **)(*v16 + 8) != v16) )
        __fastfail(3u);
      v18 = 0LL;
      *v15 = v17;
      *(_QWORD *)(v17 + 8) = v15;
      if ( v16 )
      {
        *((_DWORD *)v16 + 4) &= ~1u;
        v18 = (__int64)v16;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 10);
    KeAbPostRelease((unsigned __int64)(a1 + 10));
    if ( v18 )
      sub_1409EB278(a1, v18);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)a1 + 6);
    KeAbPostRelease((unsigned __int64)(a1 + 6));
    KeLeaveGuardedRegion();
    if ( !v18 )
      break;
    sub_1409E99A0((__int64)a1, v18);
  }
}
