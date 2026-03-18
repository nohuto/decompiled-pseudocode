/*
 * XREFs of IvtFreeScalableModePasidTables @ 0x1405A65F4
 * Callers:
 *     IvtAllocateScalableModePasidTables @ 0x140509A4C (IvtAllocateScalableModePasidTables.c)
 *     IvtAttachDeviceDomainInternal @ 0x1405A5968 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x1405A5E50 (IvtConfigureAts.c)
 *     IvtSetDevicePasidTable @ 0x1405A77C0 (IvtSetDevicePasidTable.c)
 *     IvtDeleteDevice @ 0x1405AF530 (IvtDeleteDevice.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402B4630 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExtEnvFreeMemory @ 0x140597DF0 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x140597E30 (ExtEnvFreePhysicalMemory.c)
 */

void __fastcall IvtFreeScalableModePasidTables(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  struct _LIST_ENTRY **v10; // rdi
  __int64 v11; // rsi
  struct _LIST_ENTRY *v12; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 208), &LockHandle);
  v5 = *(_QWORD *)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2
    || (v6 = *(_QWORD **)(a2 + 8), *v6 != a2)
    || (*v6 = v5, *(_QWORD *)(v5 + 8) = v6, v7 = *(_QWORD *)(a2 + 16), *(_QWORD *)(v7 + 8) != a2 + 16)
    || (v8 = *(_QWORD **)(a2 + 24), *v8 != a2 + 16) )
  {
    __fastfail(3u);
  }
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( ((*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF) != 0 )
  {
    v10 = (struct _LIST_ENTRY **)(a2 + 64);
    v11 = (*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF;
    do
    {
      if ( *v10 )
        ExtEnvFreePhysicalMemory(v9, *v10, 0x1000u, *(_DWORD *)(a1 + 272));
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  v12 = *(struct _LIST_ENTRY **)(a2 + 56);
  if ( v12 )
    ExtEnvFreePhysicalMemory(
      v9,
      v12,
      (8 * ((*(_DWORD *)(a2 + 36) >> 6) & 0x3FFF) + 4095) & 0xFFFFF000,
      *(_DWORD *)(a1 + 272));
  ExtEnvFreeMemory(v9, a2);
}
