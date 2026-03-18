/*
 * XREFs of RtlpHpEnvProtectVA @ 0x14063905C
 * Callers:
 *     RtlpHpPgCleanupAllocationForCompaction @ 0x140639E58 (RtlpHpPgCleanupAllocationForCompaction.c)
 *     RtlpHpPgContextFree @ 0x14063A300 (RtlpHpPgContextFree.c)
 * Callees:
 *     MmProtectPool @ 0x14024E084 (MmProtectPool.c)
 */

__int64 __fastcall RtlpHpEnvProtectVA(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  return (unsigned int)MmProtectPool(a1, 4096LL, a3) == 0 ? 0xC0000001 : 0;
}
