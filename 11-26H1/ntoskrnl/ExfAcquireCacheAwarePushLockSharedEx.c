/*
 * XREFs of ExfAcquireCacheAwarePushLockSharedEx @ 0x1402777C0
 * Callers:
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 */

volatile signed __int64 *__fastcall ExfAcquireCacheAwarePushLockSharedEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int64 *v4; // rbx

  v4 = *(volatile signed __int64 **)(a1 + 8LL * (KeGetPcr()->Prcb.Number & 0x1F));
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, a2, a3, a4);
  return v4;
}
