/*
 * XREFs of ExAllocatePoolWithQuota @ 0x1406CFA10
 * Callers:
 *     VerifierExAllocatePoolWithQuota @ 0x140C35A60 (VerifierExAllocatePoolWithQuota.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExpPoolTypeToPoolFlags @ 0x140C16EA0 (ExpPoolTypeToPoolFlags.c)
 */

PVOID __stdcall ExAllocatePoolWithQuota(POOL_TYPE PoolType, SIZE_T NumberOfBytes)
{
  char v3; // bl
  ULONG_PTR v4; // rax
  PVOID result; // rax

  v3 = PoolType;
  v4 = ExpPoolTypeToPoolFlags(PoolType, 1LL);
  result = (PVOID)ExAllocatePool2(v4);
  if ( !result && (v3 & 2) != 0 )
    KeBugCheckEx(0x41u, NumberOfBytes, 0LL, 0LL, 0LL);
  return result;
}
