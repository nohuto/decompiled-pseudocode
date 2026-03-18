/*
 * XREFs of PspUnlockSyscallProviderExclusive @ 0x1406147FC
 * Callers:
 *     PspAttachProcessToSyscallProvider @ 0x1407ED5EC (PspAttachProcessToSyscallProvider.c)
 *     PspProcessDelete @ 0x1407FB2E0 (PspProcessDelete.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall PspUnlockSyscallProviderExclusive(__int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1 + 64;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 64));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
