/*
 * XREFs of MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1402ABBBC
 * Callers:
 *     MiGetSlabRepurposedStandbyListWorker @ 0x1402ABA58 (MiGetSlabRepurposedStandbyListWorker.c)
 * Callees:
 *     MiSetPfnNodeFlinkHigh @ 0x1402AC310 (MiSetPfnNodeFlinkHigh.c)
 */

__int64 __fastcall MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY(__int64 a1, unsigned __int64 a2)
{
  *(_QWORD *)(a1 + 24) = (a2 << 40) ^ (*(_QWORD *)(a1 + 24) ^ (a2 << 40)) & 0xF80000FFFFFFFFFFuLL;
  *(_DWORD *)(a1 + 36) = (a2 >> 19) ^ (*(_DWORD *)(a1 + 36) ^ (a2 >> 19)) & 0xFFE00000;
  *(_QWORD *)a1 ^= (a2 ^ *(_QWORD *)a1) & 0xFFFFFF0000000000uLL;
  *(_DWORD *)(a1 + 36) &= 0x1FFFFFu;
  return MiSetPfnNodeFlinkHigh(a1, 0LL);
}
