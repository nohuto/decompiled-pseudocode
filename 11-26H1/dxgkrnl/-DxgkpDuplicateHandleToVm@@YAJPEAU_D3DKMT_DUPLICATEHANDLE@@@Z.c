/*
 * XREFs of ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1401E9C54
 * Callers:
 *     NtDxgkDuplicateHandle @ 0x1401EC630 (NtDxgkDuplicateHandle.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140007E9C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1401E99E0 (-DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOB.c)
 *     ?FindVirtualMachineByGuidAndAcquireLock@@YAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@@Z @ 0x1401F5E90 (-FindVirtualMachineByGuidAndAcquireLock@@YAPEAVDXGVIRTUALMACHINE@@PEAU_GUID@@@Z.c)
 *     ?VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKVMB_GUEST_TRANSACTION@@@Z @ 0x14022E84C (-VmBusSendDuplicateHandle@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEBU_DXGSHAREDALLOCOBJECT@@IPEAXKPEAUDXGKV.c)
 *     ?EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z @ 0x140235BCC (-EndTransaction@DXGVIRTUALMACHINE@@QEAAJPEAUDXGKVMB_GUEST_TRANSACTION@@PEAT_LARGE_INTEGER@@@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CB14 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkpDuplicateHandleToVm(struct _D3DKMT_DUPLICATEHANDLE *a1)
{
  struct DXGVIRTUALMACHINE *v1; // rsi
  void *v3; // rcx
  unsigned int v4; // r15d
  NTSTATUS v5; // eax
  struct _DXGSHAREDALLOCOBJECT *v6; // r12
  int v7; // ebx
  ACCESS_MASK GrantedAccess; // r15d
  struct DXGVIRTUALMACHINE *VirtualMachineByGuidAndAcquireLock; // rax
  struct DXGVIRTUALMACHINE **v10; // rcx
  char ***v11; // rcx
  char **v12; // rax
  DXGSHAREDVMOBJECT *v13; // r14
  unsigned int Object; // [rsp+20h] [rbp-49h]
  struct DXGSHAREDVMOBJECT *v16; // [rsp+30h] [rbp-39h] BYREF
  union _LARGE_INTEGER v17; // [rsp+38h] [rbp-31h] BYREF
  char ***v18; // [rsp+40h] [rbp-29h] BYREF
  char ****v19; // [rsp+48h] [rbp-21h]
  signed __int64 v20; // [rsp+50h] [rbp-19h]
  struct _KEVENT Event; // [rsp+58h] [rbp-11h] BYREF
  int v22; // [rsp+70h] [rbp+7h]
  __int64 *v23; // [rsp+78h] [rbp+Fh]
  int v24; // [rsp+80h] [rbp+17h]
  unsigned int v25; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v26; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID v27; // [rsp+E0h] [rbp+77h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = 0LL;
  v26 = 0LL;
  v3 = *(void **)a1;
  v4 = 0;
  v16 = 0LL;
  v25 = 0;
  HandleInformation = 0LL;
  v27 = 0LL;
  v5 = ObReferenceObjectByHandle(v3, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &v27, &HandleInformation);
  v6 = (struct _DXGSHAREDALLOCOBJECT *)v27;
  v7 = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3168;
    goto LABEL_19;
  }
  GrantedAccess = HandleInformation.GrantedAccess;
  if ( (*((_DWORD *)a1 + 11) & 1) == 0 )
    GrantedAccess = *((_DWORD *)a1 + 10);
  VirtualMachineByGuidAndAcquireLock = FindVirtualMachineByGuidAndAcquireLock((struct _GUID *)((char *)a1 + 8));
  v1 = VirtualMachineByGuidAndAcquireLock;
  if ( !VirtualMachineByGuidAndAcquireLock )
  {
    WdLogSingleEntry4(
      3LL,
      *((unsigned int *)a1 + 2),
      *((unsigned __int16 *)a1 + 6),
      *((unsigned __int16 *)a1 + 7),
      *((_QWORD *)a1 + 2));
    WdLogGlobalForLineNumber = 3193;
    v7 = -1073741275;
    goto LABEL_23;
  }
  if ( *((_DWORD *)VirtualMachineByGuidAndAcquireLock + 98) < 0x14u )
  {
    v7 = -1073741823;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3205;
LABEL_22:
    _InterlockedDecrement((volatile signed __int32 *)v1 + 20);
    ExReleasePushLockSharedEx((char *)v1 + 64, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_23;
  }
  v7 = DxgkpCreateSharedVmObjectsForExistingResource(
         *((struct DXGPROCESSVMWP **)VirtualMachineByGuidAndAcquireLock + 7),
         *(void **)a1,
         v6,
         &v16,
         &v25);
  if ( v7 < 0 )
  {
    v4 = v25;
  }
  else
  {
    v22 = 258;
    v20 = _InterlockedIncrement64(&qword_140168CF0);
    v24 = 8;
    v23 = &v26;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    DXGPUSHLOCK::AcquireExclusive((struct DXGVIRTUALMACHINE *)((char *)v1 + 344));
    v10 = (struct DXGVIRTUALMACHINE **)*((_QWORD *)v1 + 48);
    if ( *v10 != (struct DXGVIRTUALMACHINE *)((char *)v1 + 376) )
      goto LABEL_17;
    v19 = (char ****)*((_QWORD *)v1 + 48);
    v18 = (char ***)((char *)v1 + 376);
    *v10 = (struct DXGVIRTUALMACHINE *)&v18;
    *((_QWORD *)v1 + 48) = &v18;
    *((_QWORD *)v1 + 44) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v1 + 344, 0LL);
    KeLeaveCriticalRegion();
    Object = GrantedAccess;
    v4 = v25;
    v7 = DXG_HOST_GLOBAL_VMBUS::VmBusSendDuplicateHandle(
           (struct DXGVIRTUALMACHINE *)((char *)v1 + 160),
           v6,
           v25,
           *((void **)a1 + 3),
           Object,
           (struct DXGKVMB_GUEST_TRANSACTION *)&v18);
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 3236;
      DXGPUSHLOCK::AcquireExclusive((struct DXGVIRTUALMACHINE *)((char *)v1 + 344));
      v11 = v18;
      v12 = (char **)v19;
      if ( v18[1] == (char **)&v18 && *v19 == (char ***)&v18 )
      {
        *v19 = v18;
        v11[1] = v12;
        *((_QWORD *)v1 + 44) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v1 + 344, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_19;
      }
LABEL_17:
      __fastfail(3u);
    }
    v17.QuadPart = -50000000LL;
    v7 = DXGVIRTUALMACHINE::EndTransaction(v1, (struct DXGKVMB_GUEST_TRANSACTION *)&v18, &v17);
    if ( v7 >= 0 )
      goto LABEL_22;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3246;
  }
LABEL_19:
  v13 = v16;
  v26 = 0LL;
  if ( v16 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)v1 + 7), v4);
    DXGSHAREDVMOBJECT::ReleaseReference(v13);
  }
  if ( v1 )
    goto LABEL_22;
LABEL_23:
  *((_QWORD *)a1 + 4) = v26;
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
