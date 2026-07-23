/*
 * XREFs of RtlpHpEnvProtectVA @ 0x180101AC8
 * Callers:
 *     RtlpHpPgCleanupAllocationForCompaction @ 0x18010140C (RtlpHpPgCleanupAllocationForCompaction.c)
 *     RtlpHpPgContextFree @ 0x1801015B4 (RtlpHpPgContextFree.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x18015F840 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpHpEnvProtectVA(void *a1, __int64 a2, ULONG a3)
{
  ULONG_PTR v4[3]; // [rsp+30h] [rbp-18h] BYREF
  PVOID v5; // [rsp+50h] [rbp+8h] BYREF
  ULONG v6; // [rsp+58h] [rbp+10h] BYREF
  int v7; // [rsp+5Ch] [rbp+14h]

  v7 = HIDWORD(a2);
  v5 = a1;
  v4[0] = 4096LL;
  v6 = 0;
  return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v5, v4, a3, &v6);
}
