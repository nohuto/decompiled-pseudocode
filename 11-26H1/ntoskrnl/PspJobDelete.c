/*
 * XREFs of PspJobDelete @ 0x140615810
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExpIsFastResourceOwned @ 0x1403D8310 (ExpIsFastResourceOwned.c)
 *     RtlIsZeroMemory @ 0x1404D9FD0 (RtlIsZeroMemory.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x140725010 (ZwDeleteWnfStateName.c)
 *     PsDereferenceCpuPartition @ 0x1407F28B8 (PsDereferenceCpuPartition.c)
 *     PspLockJobAndRootExclusive @ 0x1407F8DE0 (PspLockJobAndRootExclusive.c)
 *     PspNetRateControlDispatch @ 0x1407F8EB0 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1407F9160 (PspRemoveRateControl.c)
 *     PspUnlockJobAndRootExclusive @ 0x1407FA038 (PspUnlockJobAndRootExclusive.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     ExMapHandleToPointer @ 0x1408FA200 (ExMapHandleToPointer.c)
 *     ExDestroyHandle @ 0x14092C030 (ExDestroyHandle.c)
 *     PspEmptyPropertySet @ 0x140955BE8 (PspEmptyPropertySet.c)
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x14095A894 (PspLockJobExclusive.c)
 *     PspRemoveCpuRateControl @ 0x1409E0978 (PspRemoveCpuRateControl.c)
 *     PsReturnSharedPoolQuota @ 0x1409E0BA0 (PsReturnSharedPoolQuota.c)
 *     PsInvokeWin32Callout @ 0x140A41140 (PsInvokeWin32Callout.c)
 *     PspLockJobListExclusive @ 0x140A76AA0 (PspLockJobListExclusive.c)
 *     PspUnlockJobListExclusive @ 0x140A7812C (PspUnlockJobListExclusive.c)
 *     IoFreeMiniCompletionPacket @ 0x140A7A5E0 (IoFreeMiniCompletionPacket.c)
 *     PspLockJobsAndProcessExclusive @ 0x140AAEA78 (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x140AAEB40 (PspGetJobLockHierarchyForDeletion.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140AAED7C (PspUnlockJobsAndProcessExclusive.c)
 *     PspJobDeleteStorageArrays @ 0x140AEA79C (PspJobDeleteStorageArrays.c)
 *     PspJobIoRateControlDisable @ 0x140AF9C90 (PspJobIoRateControlDisable.c)
 *     PspRemoveIoAttribution @ 0x140AFC3A8 (PspRemoveIoAttribution.c)
 *     PspDeleteSilo @ 0x140B47D68 (PspDeleteSilo.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspJobDelete(char *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v3; // rsi
  __int64 v4; // rax
  void *v5; // rcx
  __int64 v6; // rcx
  char **v7; // rdx
  PVOID *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  char *v12; // rax
  char *v13; // rcx
  char **v14; // rdx
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v16; // rcx
  void *v17; // rcx
  struct _KTHREAD *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rax
  void *v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // [rsp+38h] [rbp-49h] BYREF
  __int128 v24; // [rsp+40h] [rbp-41h] BYREF
  __int128 v25; // [rsp+50h] [rbp-31h]
  __int64 v26; // [rsp+60h] [rbp-21h]
  _OWORD v27[2]; // [rsp+68h] [rbp-19h] BYREF
  int v28; // [rsp+88h] [rbp+7h]
  _OWORD v29[2]; // [rsp+90h] [rbp+Fh] BYREF
  __int64 v30; // [rsp+B0h] [rbp+2Fh]

  v30 = 0LL;
  LODWORD(v26) = 0;
  memset(v29, 0, sizeof(v29));
  v28 = 0;
  v24 = 0LL;
  v25 = 0LL;
  CurrentThread = KeGetCurrentThread();
  memset(v27, 0, sizeof(v27));
  PspEmptyPropertySet(Object + 1512);
  PspJobDeleteStorageArrays(Object);
  v3 = (__int64 *)(Object + 1544);
  if ( *((_QWORD *)Object + 155) || *v3 )
  {
    PspLockJobAndRootExclusive(Object, CurrentThread);
    if ( *((_QWORD *)Object + 155) )
      PspRemoveCpuRateControl(Object);
    v4 = *v3;
    if ( *v3 )
    {
      LODWORD(v30) = 4;
      *(_QWORD *)&v29[0] = *(_QWORD *)(v4 + 56);
      PspNetRateControlDispatch(v29);
      PspRemoveRateControl(Object);
    }
    PspUnlockJobAndRootExclusive(Object, CurrentThread);
  }
  PspJobIoRateControlDisable(Object);
  if ( *((_QWORD *)Object + 198) )
  {
    PspLockJobAndRootExclusive(Object, CurrentThread);
    if ( *((_QWORD *)Object + 198) )
      PspRemoveIoAttribution(Object);
    PspUnlockJobAndRootExclusive(Object, CurrentThread);
  }
  v23 = *((_DWORD *)Object + 144);
  if ( v23 <= 0xFFFFFFFD )
  {
    if ( (unsigned __int8)IsWin32kJobNotifyCallOutPresent() )
    {
      if ( (*((_DWORD *)Object + 388) & 0x10) != 0 )
        Win32kJobTerminateNotify(Object);
    }
    else
    {
      *(_QWORD *)&v25 = Object;
      DWORD2(v25) = 2;
      v26 = 0LL;
      PspLockJobExclusive(Object, CurrentThread);
      PsInvokeWin32Callout(6LL, &v24, 1LL, &v23);
      PspUnlockJobExclusive(Object, CurrentThread);
    }
  }
  v5 = (void *)*((_QWORD *)Object + 69);
  *((_DWORD *)Object + 64) = 0;
  if ( v5 )
  {
    ObfDereferenceObjectWithTag(v5, 0x624A7350u);
    *((_QWORD *)Object + 69) = 0LL;
  }
  v6 = *((_QWORD *)Object + 66);
  if ( v6 )
  {
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(v6 + 8));
    ExFreePoolWithTag(*((PVOID *)Object + 66), 0x614A7350u);
    PsReturnSharedPoolQuota(*((PVOID *)Object + 67));
  }
  PspLockJobListExclusive(CurrentThread);
  v7 = (char **)*((_QWORD *)Object + 3);
  if ( v7[1] != Object + 24 )
    goto LABEL_51;
  v8 = (PVOID *)*((_QWORD *)Object + 4);
  if ( *v8 != Object + 24 )
    goto LABEL_51;
  *v8 = v7;
  v7[1] = (char *)v8;
  PspUnlockJobListExclusive(CurrentThread);
  v9 = (void *)*((_QWORD *)Object + 152);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x624A7350u);
    v10 = (void *)*((_QWORD *)Object + 153);
    *((_QWORD *)Object + 152) = 0LL;
    PsReturnSharedPoolQuota(v10);
  }
  v11 = *((_QWORD *)Object + 154);
  if ( v11 )
    IoFreeMiniCompletionPacket(v11);
  if ( !RtlIsZeroMemory(Object + 1108, 8uLL) )
    ZwDeleteWnfStateName(Object + 1108);
  PspGetJobLockHierarchyForDeletion(Object, v27);
  PspLockJobsAndProcessExclusive(v27, 0LL, CurrentThread, 0LL);
  v12 = Object + 1272;
  v13 = (char *)*((_QWORD *)Object + 159);
  if ( v13 != Object + 1272 )
  {
    if ( *((char **)v13 + 1) == v12 )
    {
      v14 = (char **)*((_QWORD *)Object + 160);
      if ( *v14 == v12 )
      {
        *v14 = v13;
        *((_QWORD *)v13 + 1) = v14;
        *((_QWORD *)Object + 160) = Object + 1272;
        *(_QWORD *)v12 = v12;
        ObDereferenceObjectDeferDeleteWithTag(*((PVOID *)Object + 163), 0x73507350u);
        *((_QWORD *)Object + 163) = 0LL;
        goto LABEL_33;
      }
    }
LABEL_51:
    __fastfail(3u);
  }
LABEL_33:
  PspUnlockJobsAndProcessExclusive(v27, 0LL, CurrentThread);
  if ( (Object[82] & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, (ULONG_PTR)(Object + 56), 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( ExpIsFastResourceOwned((_QWORD *)Object + 7) )
    KeBugCheckEx(0x1C6u, 4uLL, v16, 0LL, 0LL);
  *(_WORD *)(v16 + 26) &= 0xFFBEu;
  if ( *((_QWORD *)Object + 167) )
  {
    v17 = (void *)*((_QWORD *)Object + 168);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x624A7350u);
      *((_QWORD *)Object + 168) = 0LL;
    }
  }
  if ( (*((_DWORD *)Object + 388) & 0x40000000) != 0 )
    PspDeleteSilo(Object);
  v18 = KeGetCurrentThread();
  --v18->KernelApcDisable;
  v19 = *((_DWORD *)Object + 367);
  if ( v19 )
  {
    v20 = ExMapHandleToPointer(PspSiloMonitorLock.WaitBlock[1].SparePtr, v19);
    ExDestroyHandle(PspSiloMonitorLock.WaitBlock[1].SparePtr, *((unsigned int *)Object + 367), v20);
  }
  KeLeaveCriticalRegion();
  v21 = (void *)*((_QWORD *)Object + 224);
  if ( v21 )
    ObfDereferenceObjectWithTag(v21, 0x624A7350u);
  v22 = *((_QWORD *)Object + 229);
  if ( v22 )
    PsDereferenceCpuPartition(v22, 1649046352LL);
}
