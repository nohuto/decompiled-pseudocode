/*
 * XREFs of IoIncrementKeepAliveCount @ 0x140454F50
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x14045506C (IopAdjustFileObjectKeepAliveCount.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140B05900 (PspAdjustKeepAliveCountProcess.c)
 */

__int64 __fastcall IoIncrementKeepAliveCount(__int64 a1, void *a2)
{
  int v4; // edi
  KIRQL v5; // al
  unsigned __int64 v6; // rcx
  KIRQL v7; // bl
  unsigned __int64 v8; // rdx
  unsigned __int64 v10; // r9
  int v11; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  v12 = 0LL;
  v4 = IopAdjustFileObjectKeepAliveCount(a1, (_DWORD)a2, 1, (unsigned int)&v11, (__int64)&v12);
  if ( v4 >= 0 && v11 == 1 )
  {
    if ( KeGetCurrentIrql() == 2 )
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&IopSessionNotificationLock.Padding[4]);
      v6 = v12;
      v7 = v5;
      ++*(_DWORD *)(v12 + 32);
      if ( !*(_BYTE *)(v6 + 16) )
      {
        v8 = IopSessionNotificationLock.Padding[2];
        if ( *(struct _KTHREAD **)(IopSessionNotificationLock.Padding[2] + 8) != (struct _KTHREAD *)&IopSessionNotificationLock.Padding[2] )
          __fastfail(3u);
        *(_QWORD *)v6 = IopSessionNotificationLock.Padding[2];
        *(_QWORD *)(v6 + 8) = &IopSessionNotificationLock.Padding[2];
        *(_QWORD *)(v8 + 8) = v6;
        IopSessionNotificationLock.Padding[2] = v6;
        *(_BYTE *)(v6 + 16) = 1;
        if ( !byte_140F85358 )
        {
          byte_140F85358 = 1;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)&IopSessionNotificationLock.SchedulerAssistYieldCounter, DelayedWorkQueue);
        }
      }
      KeReleaseSpinLock(&IopSessionNotificationLock.Padding[4], v7);
    }
    else
    {
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v10 = v12;
      LOBYTE(v10) = *(_BYTE *)(v12 + 18);
      PspAdjustKeepAliveCountProcess(a2, 1LL, a1, v10);
    }
  }
  return (unsigned int)v4;
}
