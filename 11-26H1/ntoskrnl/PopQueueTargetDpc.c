/*
 * XREFs of PopQueueTargetDpc @ 0x14042883C
 * Callers:
 *     PopExecuteProcessorCallback @ 0x140428090 (PopExecuteProcessorCallback.c)
 *     PoGetIdleTimes @ 0x1404280E0 (PoGetIdleTimes.c)
 *     PopExecuteOnTargetProcessors @ 0x140428780 (PopExecuteOnTargetProcessors.c)
 *     PpmCapturePerformanceDistribution @ 0x140428B10 (PpmCapturePerformanceDistribution.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

LONG __fastcall PopQueueTargetDpc(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int16 **v2; // r9
  unsigned __int16 *v5; // r8
  unsigned int v6; // r11d
  unsigned __int64 v7; // rdi
  int v8; // ecx
  unsigned __int64 v9; // rdx
  int v10; // edx
  __int64 v11; // rax
  unsigned __int16 v13; // cx

  v2 = *(unsigned __int16 ***)(a2 + 32);
  v5 = (unsigned __int16 *)(v2 + 2);
  if ( *v2 )
    v6 = **v2;
  else
    v6 = *v5 + 1;
  while ( 1 )
  {
    v7 = (unsigned __int64)v2[1];
    v8 = *v5;
    if ( v7 )
      break;
    v13 = v8 + 1;
    *v5 = v13;
    if ( v13 >= v6 )
      return KeSetEvent(*(PRKEVENT *)(a2 + 24), 0, 0);
    v2[1] = *(unsigned __int16 **)&(*v2)[4 * v13 + 4];
  }
  _BitScanForward64(&v9, v7);
  v2[1] = (unsigned __int16 *)(v7 & ~(1LL << v9));
  v10 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
        + 64 * v8
        + (unsigned int)(unsigned __int8)v9);
  *(_QWORD *)(BugCheckParameter2 + 24) = PopExecuteProcessorCallback;
  *(_QWORD *)(BugCheckParameter2 + 56) = 0LL;
  v11 = *(_QWORD *)(BugCheckParameter2 + 56);
  *(_DWORD *)BugCheckParameter2 = 787;
  *(_QWORD *)(BugCheckParameter2 + 32) = a2;
  *(_QWORD *)(BugCheckParameter2 + 16) = 0LL;
  if ( !v11 )
    *(_WORD *)(BugCheckParameter2 + 2) = v10 + 2048;
  return KiInsertQueueDpc(BugCheckParameter2, 0LL, 0LL, 0LL, 0);
}
