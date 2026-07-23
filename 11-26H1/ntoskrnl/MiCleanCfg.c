/*
 * XREFs of MiCleanCfg @ 0x1404BD924
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x140A00B64 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14027CFA0 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x14027DE40 (MiLockVadShared.c)
 */

void __fastcall MiCleanCfg(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rbx
  __int64 v6; // rsi
  volatile _KAFFINITY_EX *ActiveProcessors; // rdi
  ULONG_PTR v8; // rbp

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  v6 = 2LL;
  ActiveProcessors = CurrentThread->ApcState.Process[2].ActiveProcessors;
  do
  {
    v8 = ActiveProcessors[5].StaticBitmap[v5 + 9];
    if ( v8 )
    {
      MiLockVadShared((__int64)CurrentThread, ActiveProcessors[5].StaticBitmap[v5 + 9], a3, a4);
      MiUnlockAndDereferenceVadShared(v8);
      ActiveProcessors[5].StaticBitmap[v5 + 9] = 0LL;
    }
    v5 += 4LL;
    --v6;
  }
  while ( v6 );
}
