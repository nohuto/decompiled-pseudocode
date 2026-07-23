/*
 * XREFs of FsRtlLookupPerFileObjectContext @ 0x14030C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x140279BB0 (ExReleaseAutoExpandPushLockShared.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 */

PFSRTL_PER_FILEOBJECT_CONTEXT __stdcall FsRtlLookupPerFileObjectContext(
        PFILE_OBJECT FileObject,
        PVOID OwnerId,
        PVOID InstanceId)
{
  struct _KLOCK_ENTRIES *v3; // r9
  _QWORD *FileObjectExtension; // rax
  __int64 v7; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *v10; // r15
  LegacyAutoBoost *v11; // r14
  int v12; // eax
  __int64 v13; // rbx
  ULONG_PTR v14; // rbx
  struct _FSRTL_PER_FILEOBJECT_CONTEXT **v15; // rdi
  struct _FSRTL_PER_FILEOBJECT_CONTEXT *i; // rax

  if ( !FileObject )
    return 0LL;
  if ( !FileObject->FileObjectExtension )
    return 0LL;
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( !FileObjectExtension )
    return 0LL;
  v7 = FileObjectExtension[4];
  if ( !v7 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  --CurrentThread->KernelApcDisable;
  v11 = (LegacyAutoBoost *)KeAbPreAcquire(v7, 0LL, 0LL, v3);
  v12 = *(_DWORD *)(v7 + 8);
  if ( (v12 & 1) != 0 )
  {
    v13 = ExSaDecodeHandle(v12 & 0xFFFFFFF8);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v13, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v13, 0, v11, (struct _KTHREAD *)v7);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v7, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v7, 0, v11, (struct _KTHREAD *)v7);
    v13 = v7 | 1;
  }
  v14 = v13 | 2;
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v11 + 33) |= 2u;
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  v15 = (struct _FSRTL_PER_FILEOBJECT_CONTEXT **)(v7 + 16);
  if ( InstanceId )
  {
    for ( i = *v15;
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v15;
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId && i->InstanceId == InstanceId )
      {
LABEL_18:
        v10 = i;
        break;
      }
    }
  }
  else if ( OwnerId )
  {
    for ( i = *v15;
          i != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v15;
          i = (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)i->Links.Flink )
    {
      if ( i->OwnerId == OwnerId )
        goto LABEL_18;
    }
  }
  else if ( *v15 != (struct _FSRTL_PER_FILEOBJECT_CONTEXT *)v15 )
  {
    v10 = *v15;
  }
  ExReleaseAutoExpandPushLockShared(v14, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v10;
}
