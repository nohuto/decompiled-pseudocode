/*
 * XREFs of PfSnInitializePrefetcher @ 0x140CCE1F8
 * Callers:
 *     PfInitializeSuperfetch @ 0x140CCE038 (PfInitializeSuperfetch.c)
 * Callees:
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PfSnPrefetchCacheCtxInitialize @ 0x1407C7408 (PfSnPrefetchCacheCtxInitialize.c)
 *     PfpCreateEvent @ 0x1407C800C (PfpCreateEvent.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 PfSnInitializePrefetcher()
{
  ULONG_PTR Pool2; // rax
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *((_DWORD *)&stru_140E66FF0.0 + 1) = 1;
  stru_140E66FF0.StateSaveArea = 0LL;
  stru_140E66FF0.KernelStack = &stru_140E66FF0.CurrentRunTime;
  *(_QWORD *)&stru_140E66FF0.CurrentRunTime = &stru_140E66FF0.CurrentRunTime;
  *(_QWORD *)&stru_140E66FF0.SystemCallNumber = 0LL;
  *(_QWORD *)&stru_140E66FF0.WaitRegister.Flags = &stru_140E66FF0.SchedulingGroup;
  stru_140E66FF0.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)&stru_140E66FF0.SchedulingGroup;
  stru_140E66FF0.ApcState.ApcListHead[0].Blink = stru_140E66FF0.ApcState.ApcListHead;
  stru_140E66FF0.ApcState.ApcListHead[0].Flink = stru_140E66FF0.ApcState.ApcListHead;
  DestinationString = 0LL;
  LODWORD(stru_140E66FF0.FirstArgument) = 0;
  LOWORD(stru_140E66FF0.TrapFrame) = 1;
  BYTE2(stru_140E66FF0.TrapFrame) = 6;
  HIDWORD(stru_140E66FF0.TrapFrame) = 0;
  *(_DWORD *)&stru_140E66FF0.ApcStateFill[28] = 0;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\PrefetchTracesReady");
  PfpCreateEvent((__int64)&DestinationString, 1LL, (__int64)&stru_140E66FF0.ApcState.Process);
  PfSnPrefetchCacheCtxInitialize((__int64)&stru_140E66FF0.WaitStatus);
  stru_140E66FF0.WaitBlock[0].Thread = 0LL;
  Pool2 = ExAllocatePool2(64LL, 0xA0uLL, 0x66506343u);
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    *(_BYTE *)Pool2 = 8;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
    *(_QWORD *)(Pool2 + 8) = Pool2 + 8;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 60) = 0;
    *(_WORD *)(Pool2 + 56) = 0;
    *(_BYTE *)(Pool2 + 59) = 0;
    *(_QWORD *)(Pool2 + 88) = PfSnTracingStateDpcRoutine;
    *(_DWORD *)(Pool2 + 64) = 275;
    *(_QWORD *)(Pool2 + 96) = Pool2;
    *(_QWORD *)(Pool2 + 120) = 0LL;
    *(_QWORD *)(Pool2 + 80) = 0LL;
    *(_QWORD *)(Pool2 + 144) = PfSnTracingStateExWorkerRoutine;
    *(_QWORD *)(Pool2 + 152) = Pool2;
    *(_QWORD *)(Pool2 + 128) = 0LL;
    KiSetTimerEx(Pool2, -6000000000LL, 0, 0, Pool2 + 64);
  }
  stru_140E66FF0.WaitBlock[0].SparePtr = 0LL;
  *(_OWORD *)&stru_140E66FF0.WaitBlockFill11[48] = 0LL;
  result = 0LL;
  *(_OWORD *)&stru_140E66FF0.WaitBlockFill11[64] = 0uLL;
  return result;
}
