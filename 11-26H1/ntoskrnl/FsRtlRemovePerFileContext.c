/*
 * XREFs of FsRtlRemovePerFileContext @ 0x1405B58B0
 * Callers:
 *     FsRtlRemovePerFileContextWithReserve @ 0x1405B5980 (FsRtlRemovePerFileContextWithReserve.c)
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x140449634 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x1404497DC (FsRtlReleaseAutoExpandPushLockExclusive.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlRemovePerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KLOCK_ENTRIES *v3; // r9
  struct _KTHREAD *v4; // rbp
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _FSRTL_PER_FILE_CONTEXT *Flink; // rax
  struct _FSRTL_PER_FILE_CONTEXT *v9; // rbx
  struct _FSRTL_PER_FILE_CONTEXT *v10; // rcx
  struct _FSRTL_PER_FILE_CONTEXT **Blink; // rax

  v4 = (struct _KTHREAD *)*PerFileContextPointer;
  if ( !*PerFileContextPointer )
    return 0LL;
  p_Blink = &v4->Header.WaitListHead.Blink;
  if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink )
    return 0LL;
  FsRtlAcquireAutoExpandPushLockExclusive((__int64)*PerFileContextPointer, (__int64)OwnerId, (__int64)InstanceId, v3);
  Flink = (struct _FSRTL_PER_FILE_CONTEXT *)*p_Blink;
  v9 = 0LL;
  if ( InstanceId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)p_Blink )
    {
      if ( Flink->OwnerId == OwnerId && Flink->InstanceId == InstanceId )
        goto LABEL_13;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)p_Blink )
    {
      if ( Flink->OwnerId == OwnerId )
        goto LABEL_13;
      Flink = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
    }
  }
  else if ( Flink != (struct _FSRTL_PER_FILE_CONTEXT *)p_Blink )
  {
LABEL_13:
    v9 = Flink;
    if ( Flink )
    {
      v10 = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink->Blink != Flink
        || (Blink = (struct _FSRTL_PER_FILE_CONTEXT **)Flink->Links.Blink, *Blink != v9) )
      {
        __fastfail(3u);
      }
      *Blink = v10;
      v10->Links.Blink = (struct _LIST_ENTRY *)Blink;
    }
  }
  FsRtlReleaseAutoExpandPushLockExclusive(v4);
  return v9;
}
