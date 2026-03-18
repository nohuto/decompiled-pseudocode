/*
 * XREFs of ObpUnlockObjectType @ 0x140A5AAA0
 * Callers:
 *     ObUnRegisterCallbacks @ 0x1407C4040 (ObUnRegisterCallbacks.c)
 *     ObpCallPreOperationCallbacks @ 0x1408EF644 (ObpCallPreOperationCallbacks.c)
 *     ObpIncrementHandleCountEx @ 0x14092E8D0 (ObpIncrementHandleCountEx.c)
 *     ObCreateObjectTypeEx @ 0x140A5A0C0 (ObCreateObjectTypeEx.c)
 *     ObRegisterCallbacks @ 0x140A5A730 (ObRegisterCallbacks.c)
 *     ObpInsertCallbackByAltitude @ 0x140A5A934 (ObpInsertCallbackByAltitude.c)
 *     ObpCreateTypeArray @ 0x140A5A9E4 (ObpCreateTypeArray.c)
 *     ExpWorkerInitialization @ 0x140CE6768 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

struct _KTHREAD *__fastcall ObpUnlockObjectType(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 v2; // rax
  signed __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD *result; // rax

  v1 = (volatile signed __int64 *)(a1 + 184);
  _m_prefetchw((const void *)(a1 + 184));
  v2 = *(_QWORD *)(a1 + 184);
  v3 = v2 - 16;
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v3 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(v1, v3, v2) )
    ExfReleasePushLock(v1);
  KeAbPostRelease((unsigned __int64)v1);
  result = KeGetCurrentThread();
  if ( result->SpecialApcDisable++ == -1 )
  {
    result = (struct _KTHREAD *)((char *)result + 152);
    if ( *(struct _KTHREAD **)&result->Header.Lock != result )
      return (struct _KTHREAD *)KiCheckForKernelApcDelivery(v5, v4);
  }
  return result;
}
