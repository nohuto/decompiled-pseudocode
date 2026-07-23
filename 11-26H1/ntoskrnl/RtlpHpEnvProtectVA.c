/*
 * XREFs of RtlpHpEnvProtectVA @ 0x14063C06C
 * Callers:
 *     RtlpHpPgCleanupAllocationForCompaction @ 0x14063CE68 (RtlpHpPgCleanupAllocationForCompaction.c)
 *     RtlpHpPgContextFree @ 0x14063D310 (RtlpHpPgContextFree.c)
 * Callees:
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 */

__int64 __fastcall RtlpHpEnvProtectVA(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return (unsigned int)MmProtectPool(a1, 4096LL, a3) == 0 ? 0xC0000001 : 0;
}
