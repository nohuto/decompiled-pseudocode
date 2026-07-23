/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x1403FF408
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1409887A0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1403FFC10 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD *)(stru_140E2ED08.ThreadLock
                     + 8LL * HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink)),
           a1,
           a3,
           a4);
}
