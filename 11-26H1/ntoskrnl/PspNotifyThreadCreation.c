/*
 * XREFs of PspNotifyThreadCreation @ 0x1409E7408
 * Callers:
 *     PspSecureThreadStartup @ 0x140949BA0 (PspSecureThreadStartup.c)
 *     PspUserThreadStartup @ 0x1409E79E0 (PspUserThreadStartup.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     KeQuerySystemTimePrecise @ 0x14021CA00 (KeQuerySystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PfProcessCreateNotification @ 0x1409D1270 (PfProcessCreateNotification.c)
 *     DbgkCreateThread @ 0x1409E74F4 (DbgkCreateThread.c)
 */

__int64 __fastcall PspNotifyThreadCreation(__int64 a1)
{
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  ULONG LowPart; // ebx
  unsigned __int64 v5; // rdi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 544);
  v6 = 0LL;
  DbgkCreateThread();
  if ( (*(_DWORD *)(v1 + 500) & 0x80000) == 0
    && !_interlockedbittestandset((volatile signed __int32 *)(v1 + 500), 0x13u) )
  {
    PfProcessCreateNotification(v1, *(_QWORD *)(v1 + 680));
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(&v6);
    CurrentPrcb = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v5 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)(MmWriteableSharedUserData + 816),
      v6 ^ HIDWORD(v6) ^ LowPart ^ v5 ^ ExGenRandom(1, (unsigned __int64)HIDWORD(v5) << 32) ^ CurrentPrcb->MmPageFaultCount ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime,
      0);
  }
  return 0LL;
}
