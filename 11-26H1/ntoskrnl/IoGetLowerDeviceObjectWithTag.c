/*
 * XREFs of IoGetLowerDeviceObjectWithTag @ 0x14049675C
 * Callers:
 *     IoGetLowerDeviceObject @ 0x140496740 (IoGetLowerDeviceObject.c)
 *     IopSynchronousCall @ 0x14090E5F0 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x140A8ED78 (PiControlGetDeviceStack.c)
 *     IoBuildPoDeviceNotifyList @ 0x140C04DF0 (IoBuildPoDeviceNotifyList.c)
 *     IopCheckDeviceFlags @ 0x140C05558 (IopCheckDeviceFlags.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 */

void *__fastcall IoGetLowerDeviceObjectWithTag(__int64 a1, ULONG a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // di
  void *v7; // rbx
  int v8; // r8d
  void *v10; // rcx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *(_QWORD *)(a1 + 312);
  v6 = v4;
  v7 = 0LL;
  v8 = *(_DWORD *)(v5 + 32);
  if ( (v8 & 0xF) == 0 || (v8 & 0xE) == 0 && *(_QWORD *)(v5 + 48) )
  {
    v10 = *(void **)(v5 + 48);
    if ( v10 )
    {
      v7 = v10;
      ObfReferenceObjectWithTag(v10, a2);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v6);
  return v7;
}
