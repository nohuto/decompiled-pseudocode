/*
 * XREFs of MiLockUnlockVmCleanup @ 0x140A063BC
 * Callers:
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 *     NtUnlockVirtualMemory @ 0x140A06230 (NtUnlockVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiLocateAddress @ 0x140328760 (MiLocateAddress.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiLockUnlockVmCleanup(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r12
  struct _KTHREAD *CurrentThread; // r14
  struct _LIST_ENTRY *Address; // r8
  __int64 v6; // r8
  unsigned __int64 NextVad; // r15
  void *v8; // rcx
  unsigned __int64 v9; // rbp

  if ( (*(_DWORD *)(a1 + 4) & 8) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 96);
    v3 = *(_QWORD *)(a1 + 8);
    CurrentThread = KeGetCurrentThread();
    Address = MiLocateAddress(*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFF000uLL);
    while ( v2 )
    {
      NextVad = MiGetNextVad((unsigned __int64)Address);
      if ( v2 == 1 )
      {
        MiUnlockVad((__int64)CurrentThread, v6);
        break;
      }
      v9 = v6 + 40;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 40));
      KeAbPostRelease(v9);
      Address = (struct _LIST_ENTRY *)NextVad;
      --v2;
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v3);
  }
  if ( (*(_DWORD *)(a1 + 4) & 2) != 0 )
    KiUnstackDetachProcess(a1 + 16, 0);
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x6D566D4Du);
  v8 = *(void **)(a1 + 136);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
}
