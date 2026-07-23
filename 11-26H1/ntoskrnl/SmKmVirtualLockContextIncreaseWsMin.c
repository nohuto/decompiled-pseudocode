/*
 * XREFs of SmKmVirtualLockContextIncreaseWsMin @ 0x140643124
 * Callers:
 *     SmKmVirtualLockCtxLockMemory @ 0x1406432BC (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403C6258 (MmAdjustWorkingSetSizeEx.c)
 *     MmQueryWorkingSetInformation @ 0x1404706D0 (MmQueryWorkingSetInformation.c)
 */

__int64 __fastcall SmKmVirtualLockContextIncreaseWsMin(
        struct _KTHREAD *a1,
        __int64 a2,
        struct _LIST_ENTRY *a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rsi
  int v11; // esi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h] BYREF
  int v22; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v23 = 0LL;
  v18 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64(&a1->Header.Lock, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)a1, v8, (__int64)a1);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( a3 >= a1->Header.WaitListHead.Blink )
  {
    do
    {
      v22 = 0;
      v11 = MmQueryWorkingSetInformation(&v21, &v20, &v19, &v23, &v18, &v22);
      if ( v11 < 0 )
        break;
      v12 = (a2 + 0x3FFFFF) & 0xFFFFFFFFFFC00000uLL;
      v13 = v12 + v23;
      if ( v12 + v23 <= v23 )
      {
        v11 = -1073741675;
        break;
      }
      v14 = v18;
      v23 += v12;
      if ( v13 > v18 )
        v14 = v13;
      LOBYTE(v22) = 0;
      v18 = v14;
      v15 = MmAdjustWorkingSetSizeEx(v13, v14, 0LL, 1, 0, &v22);
      v11 = v15;
      if ( v15 >= 0 )
      {
        Blink = a1->Header.WaitListHead.Blink;
        if ( (struct _LIST_ENTRY *)((char *)Blink + v12) > Blink )
          a1->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)Blink + v12);
        v11 = 0;
        break;
      }
    }
    while ( v15 == -1073741748 );
  }
  else
  {
    v11 = 1075380276;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
  return (unsigned int)v11;
}
