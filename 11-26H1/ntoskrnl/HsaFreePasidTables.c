/*
 * XREFs of HsaFreePasidTables @ 0x1405AC050
 * Callers:
 *     HsaAllocatePasidTables @ 0x1405AB238 (HsaAllocatePasidTables.c)
 *     HsaDeleteDevice @ 0x1405ABC90 (HsaDeleteDevice.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExtEnvFreeMemory @ 0x14059A570 (ExtEnvFreeMemory.c)
 */

void __fastcall HsaFreePasidTables(__int64 a1, KSPIN_LOCK *a2)
{
  unsigned __int8 CurrentIrql; // si
  unsigned int v5; // ebx
  KSPIN_LOCK v6; // rcx
  KSPIN_LOCK **v7; // rax
  KIRQL v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  KIRQL v11; // r15
  unsigned __int64 *v12; // rsi
  __int64 v13; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  v5 = 0;
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 152), &LockHandle);
  v6 = *a2;
  if ( *(KSPIN_LOCK **)(*a2 + 8) != a2 || (v7 = (KSPIN_LOCK **)a2[1], *v7 != a2) )
    __fastfail(3u);
  *v7 = (KSPIN_LOCK *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  v8 = KeAcquireSpinLockRaiseToDpc(a2 + 2);
  v10 = a2[6];
  v11 = v8;
  if ( v10 )
  {
    v12 = (unsigned __int64 *)(v10 + 4096);
    do
    {
      if ( (*(_BYTE *)(v12 - 512) & 1) == 0 )
        break;
      ExtEnvFreeMemory(v9, *v12);
      ++v5;
      ++v12;
    }
    while ( v5 < 0x200 );
    ExtEnvFreeMemory(v9, v10);
  }
  KeReleaseSpinLock(a2 + 2, v11);
  ExtEnvFreeMemory(v13, (unsigned __int64)a2);
}
