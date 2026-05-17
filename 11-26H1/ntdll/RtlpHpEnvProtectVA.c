/*
 * XREFs of RtlpHpEnvProtectVA @ 0x180102378
 * Callers:
 *     RtlpHpPgCleanupAllocationForCompaction @ 0x180101CBC (RtlpHpPgCleanupAllocationForCompaction.c)
 *     RtlpHpPgContextFree @ 0x180101E64 (RtlpHpPgContextFree.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x18015F940 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpHpEnvProtectVA(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+5Ch] [rbp+14h]

  v7 = HIDWORD(a2);
  v5 = a1;
  v4[0] = 4096LL;
  v6 = 0;
  return ZwProtectVirtualMemory(-1LL, &v5, v4, a3, &v6);
}
