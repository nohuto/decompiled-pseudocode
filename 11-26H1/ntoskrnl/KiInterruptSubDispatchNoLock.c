/*
 * XREFs of KiInterruptSubDispatchNoLock @ 0x140729F50
 * Callers:
 *     KiInterruptDispatchNoLock @ 0x14072A440 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x14072AC20 (KiInterruptDispatchNoEOI.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x140228150 (KiStartInterruptCycleAccumulation.c)
 *     PerfInfoLogInterrupt @ 0x1402C3980 (PerfInfoLogInterrupt.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     KiCallInterruptServiceRoutine @ 0x14032D7C0 (KiCallInterruptServiceRoutine.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 */

unsigned __int8 __fastcall KiInterruptSubDispatchNoLock()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // al
  __int64 v4; // r8
  bool v5; // zf
  unsigned __int8 result; // al
  int v7; // edx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(unsigned __int8 *)(v1 + 93);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(v2);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v2);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  KiStartInterruptCycleAccumulation((__int64)KeGetCurrentPrcb(), 1LL);
  _enable();
  *(_QWORD *)(v1 + 136) = v0 - 128;
  v5 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v5 )
    EtwGetKernelTraceTimestamp((unsigned __int64)v8, 0x20004000uLL, v4);
  result = KiCallInterruptServiceRoutine(v1, 0, v4);
  if ( *(_BYTE *)(v0 + 243) )
  {
    *(_BYTE *)(v0 + 243) = 0;
    v7 = result;
    BYTE1(v7) = *(_BYTE *)(v1 + 88);
    result = (unsigned __int8)PerfInfoLogInterrupt(v1, v7, (__int64)v8);
  }
  _disable();
  return result;
}
