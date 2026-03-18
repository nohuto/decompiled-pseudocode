/*
 * XREFs of FsRtlLookupPerStreamContextInternal @ 0x1402C1230
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14027A640 (ExReleaseAutoExpandPushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     FsRtlAcquireAutoExpandPushLockShared @ 0x1402C1350 (FsRtlAcquireAutoExpandPushLockShared.c)
 *     FsRtlReleasePushLock @ 0x1402C23EC (FsRtlReleasePushLock.c)
 *     PfLockSharedAcquire @ 0x1404B2990 (PfLockSharedAcquire.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlLookupPerStreamContextInternal(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _FSRTL_PER_STREAM_CONTEXT *v3; // rbp
  unsigned __int8 v4; // al
  ULONG_PTR v8; // r8
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *p_FilterContexts; // rcx
  unsigned __int8 v11; // cl
  __int64 v12; // rdx
  __int64 v13; // r8

  v3 = 0LL;
  v4 = *((_BYTE *)StreamContext + 7) >> 4;
  if ( v4 < 3u )
  {
    if ( !v4 )
    {
      ExAcquireFastMutex(StreamContext->FastMutex);
      goto LABEL_22;
    }
  }
  else if ( StreamContext->AePushLock )
  {
    v8 = FsRtlAcquireAutoExpandPushLockShared();
    goto LABEL_4;
  }
  PfLockSharedAcquire(&StreamContext->PushLock);
LABEL_22:
  v8 = 0LL;
LABEL_4:
  Flink = StreamContext->FilterContexts.Flink;
  p_FilterContexts = &StreamContext->FilterContexts;
  if ( InstanceId )
  {
    while ( Flink != p_FilterContexts )
    {
      if ( Flink[1].Flink == OwnerId && Flink[1].Blink == InstanceId )
        goto LABEL_12;
      Flink = Flink->Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != p_FilterContexts )
    {
      if ( Flink[1].Flink == OwnerId )
      {
LABEL_12:
        v3 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
        break;
      }
      Flink = Flink->Flink;
    }
  }
  else if ( Flink != p_FilterContexts )
  {
    v3 = (struct _FSRTL_PER_STREAM_CONTEXT *)StreamContext->FilterContexts.Flink;
  }
  v11 = *((_BYTE *)StreamContext + 7) >> 4;
  if ( v11 < 3u )
  {
    if ( !v11 )
    {
      KeReleaseGuardedMutex(StreamContext->FastMutex);
      return v3;
    }
    goto LABEL_19;
  }
  if ( !StreamContext->AePushLock )
  {
LABEL_19:
    FsRtlReleasePushLock((struct _KTHREAD *)&StreamContext->PushLock);
    return v3;
  }
  ExReleaseAutoExpandPushLockShared(v8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13);
  return v3;
}
