/*
 * XREFs of VrpLockJobContextShared @ 0x140949488
 * Callers:
 *     VrpPostEnumerateKey @ 0x140948938 (VrpPostEnumerateKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall VrpLockJobContextShared(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // rdi
  __int64 *v3; // rbx
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire(a1 + 16, 0LL);
  result = _InterlockedCompareExchange64(v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v3, (unsigned __int64)v2);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  return result;
}
