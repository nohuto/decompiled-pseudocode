/*
 * XREFs of PspUnlockSyscallProviderExclusive @ 0x14061763C
 * Callers:
 *     PspAttachProcessToSyscallProvider @ 0x1407F314C (PspAttachProcessToSyscallProvider.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
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
