/*
 * XREFs of SmKmVirtualLockCtxMemoryUnlocked @ 0x140643428
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
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

void __fastcall SmKmVirtualLockCtxMemoryUnlocked(
        struct _KTHREAD *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rsi
  struct _LIST_ENTRY *v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+38h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+28h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp+30h] BYREF
  __int64 v19; // [rsp+80h] [rbp+38h] BYREF
  __int64 v20; // [rsp+88h] [rbp+40h] BYREF

  v18 = 0LL;
  v19 = 0LL;
  _InterlockedAdd64((volatile signed __int64 *)&a1->Header.WaitListHead, -a2);
  Flink = a1->Header.WaitListHead.Flink;
  Blink = a1->Header.WaitListHead.Blink;
  if ( Flink < Blink && (!Flink || (unsigned __int64)((char *)Blink - (char *)Flink) >= 0x800000) )
  {
    CurrentThread = KeGetCurrentThread();
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
    v11 = a1->Header.WaitListHead.Flink;
    v12 = (char *)a1->Header.WaitListHead.Blink - (char *)v11;
    if ( v12 >= 0x800000 || !v11 && a1->Header.WaitListHead.Blink )
    {
      v17 = 0;
      if ( (int)MmQueryWorkingSetInformation(&v16, &v15, &v20, &v18, &v19, &v17) >= 0 )
      {
        v13 = v18;
        v14 = v12 & 0xFFFFFFFFFFC00000uLL;
        a1->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)a1->Header.WaitListHead.Blink - v14);
        if ( v13 >= v14 )
        {
          LOBYTE(v17) = 0;
          MmAdjustWorkingSetSizeEx(v13 - v14, v19, 0LL, 0, 0, &v17);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&a1->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    KeLeaveCriticalRegion();
  }
}
