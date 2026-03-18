/*
 * XREFs of ExpTryAcquireFannedOutPushLockShared @ 0x1404AB474
 * Callers:
 *     ExTryAcquireAutoExpandPushLockShared @ 0x1404AB350 (ExTryAcquireAutoExpandPushLockShared.c)
 * Callees:
 *     ExSaDecodeHandle @ 0x1402C15D0 (ExSaDecodeHandle.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x1404AB574 (ExfTryAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

volatile signed __int64 *__fastcall ExpTryAcquireFannedOutPushLockShared(unsigned int a1)
{
  volatile signed __int64 *v1; // rax
  int v2; // r11d
  unsigned int v3; // r11d
  volatile signed __int64 *v4; // rbx

  v1 = (volatile signed __int64 *)ExSaDecodeHandle(a1);
  v3 = v2 | 2;
  v4 = v1;
  if ( (v3 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, v3, (ULONG_PTR)v1, 0LL, 0LL);
  if ( !_InterlockedCompareExchange64(v1, 17LL, 0LL) || (unsigned __int8)ExfTryAcquirePushLockSharedEx(v1, v3) )
    return v4;
  else
    return 0LL;
}
