/*
 * XREFs of FsRtlRemovePerFileContext @ 0x1405B80C0
 * Callers:
 *     FsRtlRemovePerFileContextWithReserve @ 0x1405B8190 (FsRtlRemovePerFileContextWithReserve.c)
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x14021AF74 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x14021B11C (FsRtlReleaseAutoExpandPushLockExclusive.c)
 */

PFSRTL_PER_FILE_CONTEXT __stdcall FsRtlRemovePerFileContext(
        PVOID *PerFileContextPointer,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KTHREAD *v3; // rbp
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _FSRTL_PER_FILE_CONTEXT *Flink; // rax
  struct _FSRTL_PER_FILE_CONTEXT *v8; // rbx
  struct _FSRTL_PER_FILE_CONTEXT *v9; // rcx
  struct _FSRTL_PER_FILE_CONTEXT **Blink; // rax

  v3 = (struct _KTHREAD *)*PerFileContextPointer;
  if ( !*PerFileContextPointer )
    return 0LL;
  p_Blink = &v3->Header.WaitListHead.Blink;
  if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink )
    return 0LL;
  FsRtlAcquireAutoExpandPushLockExclusive((__int64)*PerFileContextPointer);
  Flink = (struct _FSRTL_PER_FILE_CONTEXT *)*p_Blink;
  v8 = 0LL;
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
    v8 = Flink;
    if ( Flink )
    {
      v9 = (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink;
      if ( (struct _FSRTL_PER_FILE_CONTEXT *)Flink->Links.Flink->Blink != Flink
        || (Blink = (struct _FSRTL_PER_FILE_CONTEXT **)Flink->Links.Blink, *Blink != v8) )
      {
        __fastfail(3u);
      }
      *Blink = v9;
      v9->Links.Blink = (struct _LIST_ENTRY *)Blink;
    }
  }
  FsRtlReleaseAutoExpandPushLockExclusive(v3);
  return v8;
}
