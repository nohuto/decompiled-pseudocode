/*
 * XREFs of GreAcquireFastMutex @ 0x1401A0140
 * Callers:
 *     EngAcquireFastMutex @ 0x1400FF020 (EngAcquireFastMutex.c)
 * Callees:
 *     <none>
 */

void __fastcall GreAcquireFastMutex(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 56) == CurrentThread )
  {
    ++*(_DWORD *)(a1 + 64);
  }
  else
  {
    KeAcquireGuardedMutex((PKGUARDED_MUTEX)a1);
    *(_QWORD *)(a1 + 56) = CurrentThread;
    *(_DWORD *)(a1 + 64) = 1;
  }
}
