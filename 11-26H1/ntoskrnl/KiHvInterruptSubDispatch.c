/*
 * XREFs of KiHvInterruptSubDispatch @ 0x14072E690
 * Callers:
 *     KiHvInterruptDispatch @ 0x14072DEA0 (KiHvInterruptDispatch.c)
 * Callees:
 *     KiStartInterruptCycleAccumulation @ 0x140228150 (KiStartInterruptCycleAccumulation.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     HvlSharedIsr @ 0x1403E61A0 (HvlSharedIsr.c)
 *     PerfInfoLogInterruptHv @ 0x14047D4E0 (PerfInfoLogInterruptHv.c)
 *     KzSetIrqlUnsafe @ 0x1405EBBF0 (KzSetIrqlUnsafe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiHvInterruptSubDispatch()
{
  __int64 v0; // rbp
  unsigned __int8 CurrentIrql; // al
  __int64 v2; // rcx
  __int64 v3; // r8
  bool v4; // zf
  __int64 v5; // rdx
  __int64 result; // rax
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

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
    EtwGetKernelTraceTimestamp((unsigned __int64)v7, 0x20004000uLL, v3);
  HvlSharedIsr(v2);
  result = guard_dispatch_icall_no_overrides(*(unsigned int *)(v0 + 224), v5);
  if ( *(_BYTE *)(v0 + 243) )
    result = PerfInfoLogInterruptHv((__int64)KiHvInterrupt, ((*(_DWORD *)(v0 + 224) + 48) << 8) + 1, (__int64)v7);
  _disable();
  return result;
}
