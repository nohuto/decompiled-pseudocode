/*
 * XREFs of MiZeroPageCalibrateDpc @ 0x140711360
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x1402D49D0 (KeShouldYieldProcessor.c)
 *     MiPerformTimedMemoryZeroing @ 0x14051ED50 (MiPerformTimedMemoryZeroing.c)
 *     MiInitializeZeroEngineCurrentPassDpcAffinity @ 0x1407107F4 (MiInitializeZeroEngineCurrentPassDpcAffinity.c)
 *     MiWakeAllZeroCalibrationProcessors @ 0x140710BE8 (MiWakeAllZeroCalibrationProcessors.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x140710C20 (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x140711588 (MiZeroPageCalibrateLastDpcProcessorDone.c)
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall MiZeroPageCalibrateDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  int v6; // r14d
  int v8; // r13d
  __int64 result; // rax
  unsigned int v10; // ebx
  BOOL v11; // eax
  BOOL v12; // ebp
  LARGE_INTEGER v13; // rax
  __int64 v14; // rdx
  signed __int32 v15[8]; // [rsp+0h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF

  _R12D = 0;
  v6 = 0;
  _RSI = (unsigned int *)((char *)KeGetCurrentPrcb()->MmInternal + 192);
  *((_QWORD *)_RSI + 1) = KeFeatureBits2 & 0x800000;
  *_RSI = 0;
  v8 = KeNumberProcessors_0;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a2 + 264)) == v8 )
    _InterlockedAdd((volatile signed __int32 *)(a2 + 128), v8 + 1);
  while ( 1 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 128), 0xFFFFFFFF) != 1 )
    {
      PerformanceFrequency.LowPart = 0;
      while ( 1 )
      {
        if ( *((_QWORD *)_RSI + 1) )
          __asm { umonitor rsi }
        result = *_RSI;
        if ( (_DWORD)result )
          break;
        if ( *((_QWORD *)_RSI + 1) )
          __asm { umwait  r12d }
        else
          KeYieldProcessorEx(&PerformanceFrequency);
      }
      if ( (_DWORD)result == 2 )
        goto LABEL_16;
      goto LABEL_28;
    }
    if ( *(_DWORD *)(a2 + 256) )
    {
      if ( *(_DWORD *)(a2 + 260) )
        break;
      goto LABEL_20;
    }
    if ( *(_BYTE *)(a2 + 24) )
      v6 = 1;
    if ( (unsigned int)MiZeroPageCalibrateLastDpcProcessorDone(a2) == 2 )
      break;
LABEL_20:
    if ( v6 && !*(_DWORD *)(a2 + 256) )
    {
      *(_DWORD *)(a2 + 256) = 1;
      *(_DWORD *)(a2 + 128) = v8;
      MiWakeAllZeroCalibrationProcessors(1);
      goto LABEL_28;
    }
    *(_DWORD *)(a2 + 256) = 0;
    v10 = *(_DWORD *)(a2 + 192) + 1;
    v11 = MiInitializeZeroEngineCurrentPassDpcAffinity(a2, v10);
    *(_DWORD *)(a2 + 128) = v10;
    v12 = v11;
    PerformanceFrequency.QuadPart = 0LL;
    v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( PerformanceFrequency.QuadPart != 10000000 )
      v13.QuadPart = 10000000 * v13.QuadPart / PerformanceFrequency.QuadPart;
    *(LARGE_INTEGER *)(a2 + 16) = v13;
    _InterlockedOr(v15, 0);
    if ( !v12 )
      _InterlockedAdd((volatile signed __int32 *)(a2 + 128), 1u);
    MiWakeOnlyParticipatingProcessorsFromAssignedNode(a2);
    if ( v12 )
    {
LABEL_28:
      *_RSI = 0;
      if ( *(_DWORD *)(a2 + 256) )
      {
        if ( KeShouldYieldProcessor() )
          *(_DWORD *)(a2 + 260) = 1;
      }
      else
      {
        MiPerformTimedMemoryZeroing(
          0LL,
          (volatile signed __int64 *)(a2 + 304),
          *((_QWORD *)_RSI + 11),
          *((char **)_RSI + 9),
          *((_QWORD *)_RSI + 10),
          _RSI[16]);
        v14 = *((_QWORD *)_RSI + 11);
        if ( v14 )
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a2 + 320), (PSLIST_ENTRY)(v14 - 32));
      }
    }
  }
  result = MiWakeAllZeroCalibrationProcessors(2);
LABEL_16:
  _InterlockedDecrement(a3);
  return result;
}
