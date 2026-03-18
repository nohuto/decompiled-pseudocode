/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x140406314
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1409B77C0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140406B20 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD *)(stru_140E2EB88.ThreadLock
                     + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)),
           a1,
           a3,
           a4);
}
