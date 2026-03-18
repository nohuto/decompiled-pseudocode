/*
 * XREFs of PspUnlockJobMemoryLimitsExclusive @ 0x1409615A0
 * Callers:
 *     NtSetInformationJobObject @ 0x1407F4C70 (NtSetInformationJobObject.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140960360 (PspChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 */

void __fastcall PspUnlockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi

  if ( a1 != a2 )
  {
    v4 = a1 + 1264;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1264));
    KeAbPostRelease(v4);
  }
  if ( a3 )
  {
    if ( (*(_WORD *)(a3 + 486))++ == 0xFFFF && *(_QWORD *)(a3 + 152) != a3 + 152 )
      KiCheckForKernelApcDelivery(a1, a2);
  }
}
