/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x1404C7190
 * Callers:
 *     FsRtlAllocatePoolWithQuota @ 0x1405B8610 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1405B8640 (FsRtlAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140C35B00 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140C3F640 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExpPoolTypeToPoolFlags @ 0x140C16EA0 (ExpPoolTypeToPoolFlags.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  char v4; // bl
  ULONG_PTR v5; // rax
  PVOID result; // rax

  v4 = PoolType;
  v5 = ExpPoolTypeToPoolFlags(PoolType, 1LL);
  result = (PVOID)ExAllocatePool2(v5);
  if ( !result && (v4 & 2) != 0 )
    KeBugCheckEx(0x41u, NumberOfBytes, 0LL, 0LL, 0LL);
  return result;
}
