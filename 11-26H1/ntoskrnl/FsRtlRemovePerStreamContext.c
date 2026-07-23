/*
 * XREFs of FsRtlRemovePerStreamContext @ 0x14021B5C0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x14021AF74 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x14021B11C (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     FsRtlReleasePushLock @ 0x14030D0AC (FsRtlReleasePushLock.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1404C0ECC (FsRtlAcquirePushLockExclusive.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlRemovePerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  unsigned __int8 v6; // al
  void *v7; // rcx
  struct _FSRTL_PER_STREAM_CONTEXT *v8; // rdi
  _LIST_ENTRY *p_FilterContexts; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v13; // al
  struct _KTHREAD *AePushLock; // rcx

  if ( StreamContext && (StreamContext->Flags2 & 2) != 0 )
  {
    v6 = *((_BYTE *)StreamContext + 7) >> 4;
    if ( v6 < 3u )
    {
      if ( !v6 )
      {
        ExAcquireFastMutex(StreamContext->FastMutex);
LABEL_6:
        v8 = 0LL;
        p_FilterContexts = &StreamContext->FilterContexts;
        Flink = StreamContext->FilterContexts.Flink;
        if ( InstanceId )
        {
          while ( Flink != p_FilterContexts )
          {
            if ( Flink[1].Flink == OwnerId && Flink[1].Blink == InstanceId )
              goto LABEL_10;
            Flink = Flink->Flink;
          }
        }
        else if ( OwnerId )
        {
          while ( Flink != p_FilterContexts )
          {
            if ( Flink[1].Flink == OwnerId )
              goto LABEL_10;
            Flink = Flink->Flink;
          }
        }
        else if ( Flink != p_FilterContexts )
        {
LABEL_10:
          v8 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
          if ( Flink )
          {
            v11 = Flink->Flink;
            if ( Flink->Flink->Blink != Flink
              || (Blink = Flink->Blink, (struct _FSRTL_PER_STREAM_CONTEXT *)Blink->Flink != v8) )
            {
              __fastfail(3u);
            }
            Blink->Flink = v11;
            v11->Blink = Blink;
          }
        }
        v13 = *((_BYTE *)StreamContext + 7) >> 4;
        if ( v13 < 3u )
        {
          if ( !v13 )
          {
            KeReleaseGuardedMutex(StreamContext->FastMutex);
            return v8;
          }
        }
        else
        {
          AePushLock = (struct _KTHREAD *)StreamContext->AePushLock;
          if ( AePushLock )
          {
            FsRtlReleaseAutoExpandPushLockExclusive(AePushLock);
            return v8;
          }
        }
        FsRtlReleasePushLock((struct _KTHREAD *)&StreamContext->PushLock);
        return v8;
      }
    }
    else
    {
      v7 = StreamContext->AePushLock;
      if ( v7 )
      {
        FsRtlAcquireAutoExpandPushLockExclusive((__int64)v7);
        goto LABEL_6;
      }
    }
    FsRtlAcquirePushLockExclusive(&StreamContext->PushLock);
    goto LABEL_6;
  }
  return 0LL;
}
