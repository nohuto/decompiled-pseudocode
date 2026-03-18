/*
 * XREFs of MiAllocateInPageSupportBlock @ 0x14039742C
 * Callers:
 *     MiAllocateInPageSupport @ 0x140371500 (MiAllocateInPageSupport.c)
 *     MiInitializePageFaultResources @ 0x1406F76AC (MiInitializePageFaultResources.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 */

__int64 __fastcall MiAllocateInPageSupportBlock(int a1, unsigned int a2)
{
  __int64 v2; // r9

  v2 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  LODWORD(v2) = v2 | 0x80000000;
  return ExAllocatePoolMm(64LL, a2 * ((-(__int64)(a1 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368), 1850305869LL, v2);
}
