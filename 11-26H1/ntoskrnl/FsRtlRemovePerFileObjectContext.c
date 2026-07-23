/*
 * XREFs of FsRtlRemovePerFileObjectContext @ 0x14021ACC0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAcquireAutoExpandPushLockExclusive @ 0x14021AF74 (FsRtlAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlReleaseAutoExpandPushLockExclusive @ 0x14021B11C (FsRtlReleaseAutoExpandPushLockExclusive.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlRemovePerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  PVOID FileObjectExtension; // rdi
  struct _KTHREAD *v6; // rdi
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v7; // rbx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *Blink; // rax
  struct _LIST_ENTRY **p_Blink; // rcx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *Flink; // rcx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT **v11; // rax

  if ( !FileObject )
    return 0LL;
  if ( !FileObject->FileObjectExtension )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension )
    return 0LL;
  v6 = (struct _KTHREAD *)*((_QWORD *)FileObjectExtension + 4);
  if ( !v6 )
    return 0LL;
  v7 = 0LL;
  FsRtlAcquireAutoExpandPushLockExclusive(v6);
  Blink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v6->Header.WaitListHead.Blink;
  p_Blink = &v6->Header.WaitListHead.Blink;
  if ( InstanceId )
  {
    while ( Blink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)p_Blink )
    {
      if ( Blink->OwnerId == OwnerId && Blink->InstanceId == InstanceId )
        goto LABEL_9;
      Blink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Blink->Links.Flink;
    }
  }
  else if ( OwnerId )
  {
    while ( Blink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)p_Blink )
    {
      if ( Blink->OwnerId == OwnerId )
        goto LABEL_9;
      Blink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Blink->Links.Flink;
    }
  }
  else if ( Blink != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)p_Blink )
  {
LABEL_9:
    v7 = Blink;
    if ( Blink )
    {
      Flink = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Blink->Links.Flink;
      if ( (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)Blink->Links.Flink->Blink != Blink
        || (v11 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT **)Blink->Links.Blink, *v11 != v7) )
      {
        __fastfail(3u);
      }
      *v11 = Flink;
      Flink->Links.Blink = (struct _LIST_ENTRY *)v11;
    }
  }
  FsRtlReleaseAutoExpandPushLockExclusive(v6);
  return v7;
}
