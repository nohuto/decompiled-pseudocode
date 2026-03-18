/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x1404492B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlReleasePushLock @ 0x1402C23EC (FsRtlReleasePushLock.c)
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x140449634 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1404497DC (FsRtlReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlAcquirePushLockExclusive @ 0x1404499E8 (FsRtlAcquirePushLockExclusive.c)
 */

NTSTATUS __stdcall FsRtlInsertPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
        PFSRTL_PER_STREAM_CONTEXT Ptr)
{
  struct _KTHREAD **p_AePushLock; // rdi
  unsigned __int8 v5; // al
  struct _LIST_ENTRY *p_FilterContexts; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int8 v9; // al

  if ( !PerStreamContext || (PerStreamContext->Flags2 & 2) == 0 )
    return -1073741808;
  p_AePushLock = (struct _KTHREAD **)&PerStreamContext->AePushLock;
  v5 = *((_BYTE *)PerStreamContext + 7) >> 4;
  if ( v5 >= 3u && *p_AePushLock )
  {
    FsRtlAcquireAutoExpandPushLockExclusive();
  }
  else if ( v5 )
  {
    FsRtlAcquirePushLockExclusive(&PerStreamContext->PushLock);
  }
  else
  {
    ExAcquireFastMutex(PerStreamContext->FastMutex);
  }
  p_FilterContexts = &PerStreamContext->FilterContexts;
  Flink = PerStreamContext->FilterContexts.Flink;
  if ( Flink->Blink != &PerStreamContext->FilterContexts )
    __fastfail(3u);
  Ptr->Links.Blink = p_FilterContexts;
  Ptr->Links.Flink = Flink;
  Flink->Blink = &Ptr->Links;
  p_FilterContexts->Flink = &Ptr->Links;
  v9 = *((_BYTE *)PerStreamContext + 7) >> 4;
  if ( v9 < 3u )
  {
    if ( !v9 )
    {
      KeReleaseGuardedMutex(PerStreamContext->FastMutex);
      return 0;
    }
    goto LABEL_14;
  }
  if ( !*p_AePushLock )
  {
LABEL_14:
    FsRtlReleasePushLock((struct _KTHREAD *)&PerStreamContext->PushLock);
    return 0;
  }
  FsRtlReleaseAutoExpandPushLockExclusive(*p_AePushLock);
  return 0;
}
