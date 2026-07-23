/*
 * XREFs of KiVmbusInterruptSubDispatch @ 0x140733310
 * Callers:
 *     KiVmbusInterruptDispatch @ 0x140732E70 (KiVmbusInterruptDispatch.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x140229AE0 (KiStartInterruptCycleAccumulation.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterruptHv @ 0x140476E50 (PerfInfoLogInterruptHv.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiVmbusInterruptSubDispatch()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  __int64 v2; // rdx
  __int64 v3; // r8
  bool v4; // zf
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(); // rsi
  __int64 result; // rax
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(3u);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(3uLL);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  KiStartInterruptCycleAccumulation((__int64)KeGetCurrentPrcb(), 1LL);
  _enable();
  v4 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v4 )
    EtwGetKernelTraceTimestamp((unsigned __int64)v8, 0x20004000uLL, v3);
  v5 = *(unsigned int *)(v0 + 224);
  v6 = HvlpInterruptCallback[v5];
  result = guard_dispatch_icall_no_overrides(v5, v2);
  if ( *(_BYTE *)(v0 + 243) )
    result = PerfInfoLogInterruptHv((__int64)v6, ((*(_DWORD *)(v0 + 224) + 48) << 8) + 1, (__int64)v8);
  _disable();
  return result;
}
