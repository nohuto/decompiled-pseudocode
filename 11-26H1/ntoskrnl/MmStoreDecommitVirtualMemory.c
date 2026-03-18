/*
 * XREFs of MmStoreDecommitVirtualMemory @ 0x140394C5C
 * Callers:
 *     ?SmStReleaseVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z @ 0x140394D30 (-SmStReleaseVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@KK@Z.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140501F24 (SmKmStoreHelperCommandCleanup.c)
 *     ?StCompactionPerformEmergency@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14063D5EC (-StCompactionPerformEmergency@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     MiDecommitPages @ 0x140360150 (MiDecommitPages.c)
 *     MiStoreGetVadForAddress @ 0x140394C1C (MiStoreGetVadForAddress.c)
 */

__int64 __fastcall MmStoreDecommitVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _KPROCESS *Process; // rsi
  struct _LIST_ENTRY *VadForAddress; // rax
  _OWORD v8[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v9; // [rsp+70h] [rbp-18h]

  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  VadForAddress = MiStoreGetVadForAddress(a1, a2, a3);
  return MiDecommitPages(
           (unsigned int)(a1 >> 9) & 0xFFFFFFF8,
           (unsigned int)((__int64)((((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - ((a1 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1,
           0,
           (__int64)Process,
           (__int64)VadForAddress,
           0,
           0LL,
           (__int64)v8);
}
