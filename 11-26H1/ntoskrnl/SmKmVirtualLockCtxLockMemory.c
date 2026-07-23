/*
 * XREFs of SmKmVirtualLockCtxLockMemory @ 0x1406432BC
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140384A48 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140643124 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140643428 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ZwLockVirtualMemory @ 0x14072A2A0 (ZwLockVirtualMemory.c)
 */

__int64 __fastcall SmKmVirtualLockCtxLockMemory(struct _KTHREAD *a1, void *a2, ULONG_PTR a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // ebp
  struct _KTHREAD *CurrentThread; // rax
  volatile unsigned __int8 *v7; // rdx
  _BYTE *v8; // rdi
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _LIST_ENTRY *Flink; // rax
  unsigned __int64 i; // rdx
  struct _LIST_ENTRY *v12; // rtt
  NTSTATUS v13; // eax
  int v14; // edi
  struct _LIST_ENTRY *v15; // rdi
  struct _KLOCK_ENTRIES *v16; // r9
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+18h] BYREF

  RegionSize = a3;
  BaseAddress = a2;
  v5 = 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (_BYTE *)KeAbPreAcquire((__int64)a1, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&a1->Header.Lock, 0, (LegacyAutoBoost *)v8, a1);
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v7) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v8 + 33), v7, 1);
      }
      else
      {
        v8[10] = 1;
      }
    }
    p_Blink = &a1->Header.WaitListHead.Blink;
    if ( !v5 )
    {
      Flink = a1->Header.WaitListHead.Flink;
      for ( i = (unsigned __int64)Flink + RegionSize;
            i <= (unsigned __int64)*p_Blink;
            i = (unsigned __int64)Flink + RegionSize )
      {
        v12 = Flink;
        Flink = (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                        (volatile signed __int64 *)&a1->Header.WaitListHead,
                                        i,
                                        (signed __int64)Flink);
        if ( v12 == Flink )
        {
          v5 = 1;
          goto LABEL_14;
        }
      }
      goto LABEL_16;
    }
LABEL_14:
    v13 = ZwLockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
    v14 = v13;
    if ( v13 >= 0 )
      break;
    if ( v13 != -1073741663 )
      goto LABEL_21;
LABEL_16:
    v15 = *p_Blink;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&a1->Header.Lock);
    KeAbPostRelease((unsigned __int64)a1);
    KeLeaveCriticalRegion();
    v14 = SmKmVirtualLockContextIncreaseWsMin(a1, RegionSize, v15, v16);
    if ( v14 < 0 )
      goto LABEL_24;
  }
  v5 = 0;
  v14 = 0;
LABEL_21:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&a1->Header.Lock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&a1->Header.Lock);
  KeAbPostRelease((unsigned __int64)a1);
  KeLeaveCriticalRegion();
LABEL_24:
  if ( v5 )
    SmKmVirtualLockCtxMemoryUnlocked(a1);
  return (unsigned int)v14;
}
