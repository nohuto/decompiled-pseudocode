/*
 * XREFs of CmpVolumeManagerGetContextForFile @ 0x14090792C
 * Callers:
 *     CmpVolumeManagerGetContextForFilePath @ 0x14085755C (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpCreateHive @ 0x1408B5E6C (CmpCreateHive.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     IoGetAttachedDeviceReference @ 0x1403EB070 (IoGetAttachedDeviceReference.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     CmSiRWLockReleaseExclusive @ 0x140905AA4 (CmSiRWLockReleaseExclusive.c)
 *     CmpVolumeManagerLockContextListShared @ 0x140905AD8 (CmpVolumeManagerLockContextListShared.c)
 *     CmpVolumeManagerGetContextForGuidUnsafe @ 0x140905B48 (CmpVolumeManagerGetContextForGuidUnsafe.c)
 *     CmpVolumeContextFree @ 0x140905BAC (CmpVolumeContextFree.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140905BD0 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmpVolumeContextCreate @ 0x1409062A8 (CmpVolumeContextCreate.c)
 *     IoVolumeDeviceToGuid @ 0x140907B30 (IoVolumeDeviceToGuid.c)
 */

__int64 __fastcall CmpVolumeManagerGetContextForFile(__int64 a1, void *a2, __int64 a3, struct _LIST_ENTRY **a4)
{
  struct _OBJECT_TYPE *v5; // r8
  struct _PRIVILEGE_SET *v6; // rsi
  NTSTATUS v7; // eax
  PVOID v8; // r15
  int v9; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  __int64 v16; // rcx
  struct _LIST_ENTRY *ContextForGuidUnsafe; // rbx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  __int64 v22; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  struct _KLOCK_ENTRIES *v26; // r9
  struct _LIST_ENTRY *v27; // rcx
  struct _LIST_ENTRY ***v28; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF

  v5 = **(struct _OBJECT_TYPE ***)&CmpCallbackListLock.ApcStateFill[40];
  v28 = 0LL;
  Object = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v7 = ObReferenceObjectByHandle(a2, 0x80u, v5, 0, &Object, 0LL);
  v8 = Object;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_19;
  AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
  v11 = IoVolumeDeviceToGuid(AttachedDeviceReference, &v30);
  v9 = v11;
  if ( v11 == -1073741811 || v11 == -1073741637 || v11 == -1073741808 )
  {
    v9 = CmpVolumeContextCreate(v13, 0LL, (__int64 *)&v28);
    if ( v9 >= 0 )
    {
      CmpVolumeManagerLockContextListExclusive(
        (unsigned __int64 *)&KiSystemServiceTraceCallbackLock.1008,
        v24,
        v25,
        v26);
      goto LABEL_24;
    }
LABEL_26:
    v6 = (struct _PRIVILEGE_SET *)v28;
LABEL_15:
    if ( v6 )
      CmpVolumeContextFree(v6);
    goto LABEL_17;
  }
  if ( v11 >= 0 )
  {
    CmpVolumeManagerLockContextListShared(v13, v12, v14, v15);
    ContextForGuidUnsafe = CmpVolumeManagerGetContextForGuidUnsafe(v16, &v30);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.GlobalUpdateVpThreadPriorityListEntry.Flink,
           0LL,
           17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&KiSystemServiceTraceCallbackLock.1008);
    KeAbPostRelease((unsigned __int64)&KiSystemServiceTraceCallbackLock.1008);
    if ( ContextForGuidUnsafe )
      goto LABEL_14;
    v9 = CmpVolumeContextCreate(v18, (__int64)AttachedDeviceReference, (__int64 *)&v28);
    if ( v9 >= 0 )
    {
      CmpVolumeManagerLockContextListExclusive(
        (unsigned __int64 *)&KiSystemServiceTraceCallbackLock.1008,
        v19,
        v20,
        v21);
      ContextForGuidUnsafe = CmpVolumeManagerGetContextForGuidUnsafe(v22, &v30);
      if ( ContextForGuidUnsafe )
      {
        v6 = (struct _PRIVILEGE_SET *)v28;
LABEL_13:
        CmSiRWLockReleaseExclusive((struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.1008);
LABEL_14:
        *a4 = ContextForGuidUnsafe;
        v9 = 0;
        goto LABEL_15;
      }
LABEL_24:
      v27 = *(struct _LIST_ENTRY **)&KiSystemServiceTraceCallbackLock.SchedulerAssistPriorityFloor;
      ContextForGuidUnsafe = (struct _LIST_ENTRY *)v28;
      if ( **(struct _KTHREAD ***)&KiSystemServiceTraceCallbackLock.SchedulerAssistPriorityFloor != (struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.InGlobalUpdateVpThreadPriorityList )
        __fastfail(3u);
      *v28 = &KiSystemServiceTraceCallbackLock.GlobalUpdateVpThreadPriorityListEntry.Blink;
      ContextForGuidUnsafe->Blink = v27;
      v27->Flink = ContextForGuidUnsafe;
      *(_QWORD *)&KiSystemServiceTraceCallbackLock.SchedulerAssistPriorityFloor = ContextForGuidUnsafe;
      goto LABEL_13;
    }
    goto LABEL_26;
  }
LABEL_17:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_19:
  if ( v8 )
    ObfDereferenceObject(v8);
  return (unsigned int)v9;
}
