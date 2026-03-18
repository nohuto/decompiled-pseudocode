/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x1404CD760
 * Callers:
 *     FsRtlAllocatePoolWithQuota @ 0x1405B5E00 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1405B5E30 (FsRtlAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140C2FAF0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x140C39630 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExpPoolTypeToPoolFlags @ 0x140C10EA0 (ExpPoolTypeToPoolFlags.c)
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
