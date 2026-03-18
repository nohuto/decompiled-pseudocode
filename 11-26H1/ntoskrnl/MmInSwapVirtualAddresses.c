/*
 * XREFs of MmInSwapVirtualAddresses @ 0x140AF3C64
 * Callers:
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403F47E8 (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14044C0C0 (MiGetProcessPartition.c)
 *     MiProcessWsInSwapSupport @ 0x1404AC94C (MiProcessWsInSwapSupport.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     EtwTraceWorkingSetSwap @ 0x140AF3D1C (EtwTraceWorkingSetSwap.c)
 *     MiContractWsSwapPageFile @ 0x140AF3E5C (MiContractWsSwapPageFile.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInSwapVirtualAddresses(PEPROCESS Process, PVOID P)
{
  __int64 ProcessPartition; // rbx

  EtwTraceWorkingSetSwap(Process);
  ProcessPartition = MiGetProcessPartition((__int64)Process);
  MiProcessWsInSwapSupport((__int64)P, 2u);
  ExFreePoolWithTag(P, 0);
  MiContractWsSwapPageFile(ProcessPartition);
  EtwTraceWorkingSetSwap(Process);
  return 0LL;
}
