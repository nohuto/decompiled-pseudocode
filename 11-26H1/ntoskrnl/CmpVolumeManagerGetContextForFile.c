/*
 * XREFs of CmpVolumeManagerGetContextForFile @ 0x140A2FA8C
 * Callers:
 *     CmpVolumeManagerGetContextForFilePath @ 0x14085D8EC (CmpVolumeManagerGetContextForFilePath.c)
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     IoGetAttachedDeviceReference @ 0x1402F8660 (IoGetAttachedDeviceReference.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmpVolumeContextFree @ 0x140A2E2E0 (CmpVolumeContextFree.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x140A2E304 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmpVolumeContextCreate @ 0x140A2E5E0 (CmpVolumeContextCreate.c)
 *     IoVolumeDeviceToGuid @ 0x140A2FC90 (IoVolumeDeviceToGuid.c)
 *     CmSiRWLockReleaseExclusive @ 0x140A8992C (CmSiRWLockReleaseExclusive.c)
 *     CmpVolumeManagerGetContextForGuidUnsafe @ 0x140AED84C (CmpVolumeManagerGetContextForGuidUnsafe.c)
 *     CmpVolumeManagerLockContextListShared @ 0x140AF3660 (CmpVolumeManagerLockContextListShared.c)
 */

__int64 __fastcall CmpVolumeManagerGetContextForFile(__int64 a1, void *a2, __int64 a3, int ***a4)
{
  struct _OBJECT_TYPE *Flink; // r8
  struct _PRIVILEGE_SET *v6; // rsi
  NTSTATUS v7; // eax
  PVOID v8; // r15
  int v9; // ebx
  PDEVICE_OBJECT AttachedDeviceReference; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int **ContextForGuidUnsafe; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KLOCK_ENTRIES *v18; // r9
  __int64 v19; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  int *KernelShadowStack; // rcx
  int **v25; // [rsp+30h] [rbp-30h] BYREF
  PVOID Object; // [rsp+38h] [rbp-28h] BYREF
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF

  Flink = (struct _OBJECT_TYPE *)CmpContextListLock.ApcState.ApcListHead[1].Blink->Flink;
  v25 = 0LL;
  Object = 0LL;
  v27 = 0LL;
  v6 = 0LL;
  v7 = ObReferenceObjectByHandle(a2, 0x80u, Flink, 0, &Object, 0LL);
  v8 = Object;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_19;
  AttachedDeviceReference = IoGetAttachedDeviceReference(*((PDEVICE_OBJECT *)Object + 1));
  v11 = IoVolumeDeviceToGuid(AttachedDeviceReference, &v27);
  v9 = v11;
  if ( v11 == -1073741811 || v11 == -1073741637 || v11 == -1073741808 )
  {
    v9 = CmpVolumeContextCreate(v12, 0LL, (__int64 *)&v25);
    if ( v9 >= 0 )
    {
      CmpVolumeManagerLockContextListExclusive(
        &KiSystemServiceTraceCallbackLock.InGlobalUpdateVpThreadPriorityList,
        v21,
        v22,
        v23);
      goto LABEL_24;
    }
LABEL_26:
    v6 = (struct _PRIVILEGE_SET *)v25;
LABEL_15:
    if ( v6 )
      CmpVolumeContextFree(v6);
    goto LABEL_17;
  }
  if ( v11 >= 0 )
  {
    CmpVolumeManagerLockContextListShared();
    ContextForGuidUnsafe = (int **)CmpVolumeManagerGetContextForGuidUnsafe(v13, &v27);
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&KiSystemServiceTraceCallbackLock.InGlobalUpdateVpThreadPriorityList,
           0LL,
           17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&KiSystemServiceTraceCallbackLock.GlobalUpdateVpThreadPriorityListEntry.Blink);
    KeAbPostRelease((unsigned __int64)&KiSystemServiceTraceCallbackLock.InGlobalUpdateVpThreadPriorityList);
    if ( ContextForGuidUnsafe )
      goto LABEL_14;
    v9 = CmpVolumeContextCreate(v15, (__int64)AttachedDeviceReference, (__int64 *)&v25);
    if ( v9 >= 0 )
    {
      CmpVolumeManagerLockContextListExclusive(
        &KiSystemServiceTraceCallbackLock.InGlobalUpdateVpThreadPriorityList,
        v16,
        v17,
        v18);
      ContextForGuidUnsafe = (int **)CmpVolumeManagerGetContextForGuidUnsafe(v19, &v27);
      if ( ContextForGuidUnsafe )
      {
        v6 = (struct _PRIVILEGE_SET *)v25;
LABEL_13:
        CmSiRWLockReleaseExclusive((struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.InGlobalUpdateVpThreadPriorityList);
LABEL_14:
        *a4 = ContextForGuidUnsafe;
        v9 = 0;
        goto LABEL_15;
      }
LABEL_24:
      KernelShadowStack = (int *)KiSystemServiceTraceCallbackLock.KernelShadowStack;
      ContextForGuidUnsafe = v25;
      if ( *(struct _KTHREAD **)KiSystemServiceTraceCallbackLock.KernelShadowStack != (struct _KTHREAD *)&KiSystemServiceTraceCallbackLock.SchedulerAssistPriorityFloor )
        __fastfail(3u);
      *v25 = &KiSystemServiceTraceCallbackLock.SchedulerAssistPriorityFloor;
      ContextForGuidUnsafe[1] = KernelShadowStack;
      *(_QWORD *)KernelShadowStack = ContextForGuidUnsafe;
      KiSystemServiceTraceCallbackLock.KernelShadowStack = ContextForGuidUnsafe;
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
