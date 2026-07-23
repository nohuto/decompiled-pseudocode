/*
 * XREFs of KiScanInterruptObjectList @ 0x14072E930
 * Callers:
 *     KiChainedDispatch @ 0x14072E540 (KiChainedDispatch.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x140229AE0 (KiStartInterruptCycleAccumulation.c)
 *     PerfInfoLogInterrupt @ 0x14030E640 (PerfInfoLogInterrupt.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     KiCallInterruptServiceRoutine @ 0x14032F7F0 (KiCallInterruptServiceRoutine.c)
 *     KiDispatchPassiveInterrupts @ 0x140516710 (KiDispatchPassiveInterrupts.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 */

void __fastcall KiScanInterruptObjectList()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // al
  __int64 v4; // r8
  __int64 v5; // r12
  bool v6; // zf
  int v7; // edi
  __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  int v11; // edx
  __int64 v12; // r8
  unsigned __int8 v13; // [rsp+20h] [rbp-48h]
  _BYTE v14[64]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(unsigned __int8 *)(v1 + 92);
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
  v5 = v1 + 8;
  v6 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v6 )
    EtwGetKernelTraceTimestamp((unsigned __int64)v14, 0x20004000uLL, v4);
  while ( 2 )
  {
    v7 = 0;
    do
    {
      v8 = v5 - 8;
      if ( (*(_DWORD *)(v8 + 104) & 1) != 0 )
      {
        v13 = 0;
      }
      else
      {
        v9 = *(unsigned __int8 *)(v8 + 93);
        if ( !(_BYTE)v9 )
        {
          KiDispatchPassiveInterrupts(v8);
          *(_BYTE *)(v0 + 243) = 0;
          goto LABEL_20;
        }
        if ( (_BYTE)v9 != *(_BYTE *)(v1 + 92) )
          __writecr8(v9);
        v13 = KiCallInterruptServiceRoutine(v8, 1, v4);
        v10 = *(unsigned __int8 *)(v1 + 92);
        if ( (_BYTE)v10 != *(_BYTE *)(v8 + 93) )
          __writecr8(v10);
      }
      if ( *(_BYTE *)(v0 + 243) )
      {
        *(_BYTE *)(v0 + 243) = 0;
        v11 = v13;
        BYTE1(v11) = *(_BYTE *)(v8 + 88);
        PerfInfoLogInterrupt(v8, v11, (__int64)v14);
        EtwGetKernelTraceTimestamp((unsigned __int64)v14, 0x20004000uLL, v12);
      }
      if ( v13 )
      {
        if ( *(_WORD *)(v8 + 108) != 1 )
          goto LABEL_20;
        ++v7;
      }
      v5 = *(_QWORD *)(v8 + 8);
    }
    while ( v5 != v1 + 8 );
    if ( v7 )
      continue;
    break;
  }
LABEL_20:
  _disable();
}
