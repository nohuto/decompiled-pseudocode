/*
 * XREFs of PfpReadSupportInitialize @ 0x1404DC7A0
 * Callers:
 *     PfpPrefetchFiles @ 0x140A4EEAC (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x140A507FC (PfpPrefetchFilesTrickle.c)
 * Callees:
 *     PfpOpenHandleInitialize @ 0x140AAE5F8 (PfpOpenHandleInitialize.c)
 */

__int64 __fastcall PfpReadSupportInitialize(__int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return PfpOpenHandleInitialize(a1 + 8);
}
