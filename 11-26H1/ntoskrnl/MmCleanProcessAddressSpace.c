/*
 * XREFs of MmCleanProcessAddressSpace @ 0x140A00B64
 * Callers:
 *     PspRundownSingleProcess @ 0x1409FEA50 (PspRundownSingleProcess.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     MiReferenceVad @ 0x14027DE00 (MiReferenceVad.c)
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     MiBeginProcessClean @ 0x140315D5C (MiBeginProcessClean.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140317570 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403175E4 (LOCK_ADDRESS_SPACE.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiCleanWorkingSet @ 0x1403C5004 (MiCleanWorkingSet.c)
 *     PsReturnProcessQuota @ 0x1403C716C (PsReturnProcessQuota.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403FE8A4 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403FE914 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiGetSharedVm @ 0x140441D90 (MiGetSharedVm.c)
 *     MiGetProcessPartition @ 0x1404441E0 (MiGetProcessPartition.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     MiVadDeleted @ 0x14047A3A8 (MiVadDeleted.c)
 *     MiReturnProcessCommitment @ 0x14047EE9C (MiReturnProcessCommitment.c)
 *     MiGetFirstVad @ 0x1404B1910 (MiGetFirstVad.c)
 *     MiCleanCfg @ 0x1404BD924 (MiCleanCfg.c)
 *     ExFreeSvmAsid @ 0x1404C7CDC (ExFreeSvmAsid.c)
 *     MiClearCommitReleaseState @ 0x1406E8EF4 (MiClearCommitReleaseState.c)
 *     VmpCleanProcessAddressSpace @ 0x140822D14 (VmpCleanProcessAddressSpace.c)
 *     MiDeleteAweInfoPages @ 0x14087F2AC (MiDeleteAweInfoPages.c)
 *     MiCleanVad @ 0x140A00E3C (MiCleanVad.c)
 *     MiCleanEmbryonicProcess @ 0x140AF4064 (MiCleanEmbryonicProcess.c)
 *     PsDereferenceSession @ 0x140AF4110 (PsDereferenceSession.c)
 *     MiContractWsSwapPageFile @ 0x140AF687C (MiContractWsSwapPageFile.c)
 */

__int64 __fastcall MmCleanProcessAddressSpace(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 ProcessPartition; // rax
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  __int64 v11; // r14
  __int64 v12; // r13
  int v13; // ebp
  _QWORD *FirstVad; // rax
  void *v15; // rbx
  void *v16; // r12
  ULONG_PTR NextVad; // rax
  __int64 v18; // r8
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  __int64 v22; // r8
  struct _KLOCK_ENTRIES *v23; // r9
  BOOL v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _KLOCK_ENTRIES *v31; // r9
  __int64 v32; // r8
  struct _KLOCK_ENTRIES *v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  struct _KLOCK_ENTRIES *v41; // r9
  __int64 v42; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  BOOL v44; // [rsp+80h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 1648);
  memset(&Event, 0, sizeof(Event));
  if ( v4 )
    VmpCleanProcessAddressSpace(a1, v4, a3, a4);
  result = MiCleanEmbryonicProcess(a1);
  if ( !(_DWORD)result )
  {
    MiGetSharedVm(a1 + 1024);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    CurrentThread = KeGetCurrentThread();
    v44 = MiBeginProcessClean((__int64)CurrentThread, a1);
    ProcessPartition = MiGetProcessPartition(a1);
    v11 = *(_QWORD *)(a1 + 1040);
    v12 = ProcessPartition;
LABEL_5:
    while ( 1 )
    {
      v13 = 0;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, v9, v10);
      FirstVad = MiGetFirstVad(a1);
      v15 = FirstVad;
      if ( !FirstVad )
        break;
      MiReferenceVad((ULONG_PTR)FirstVad);
      while ( 1 )
      {
        v16 = v15;
        NextVad = MiGetNextVad((unsigned __int64)v15);
        v15 = (void *)NextVad;
        if ( NextVad )
          MiReferenceVad(NextVad);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, (__int64)v16, v18, v19);
        if ( (unsigned int)MiCleanVad(v16) )
          v13 = 1;
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1, v20, v21);
        if ( !v15 )
          break;
        MiLockVad((__int64)CurrentThread, (__int64)v15, v22, v23);
        if ( (unsigned int)MiVadDeleted((__int64)v15) )
        {
          MiUnlockVad((__int64)CurrentThread, (__int64)v15);
          UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
          MiLockVad((__int64)CurrentThread, (__int64)v15, v40, v41);
          MiCleanVad(v15);
          goto LABEL_5;
        }
        MiUnlockVad((__int64)CurrentThread, (__int64)v15);
      }
      if ( !v13 )
        break;
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    }
    *(_QWORD *)(v11 + 1152) = &Event;
    v24 = _InterlockedAdd((volatile signed __int32 *)(v11 + 1128), 0xFFFFFFFF) != 0;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    if ( v24 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( (HIBYTE(*(_DWORD *)(a1 + 1208)) & 0x30) == 0x30 )
      MiClearCommitReleaseState(a1 + 1024, v25, v27);
    ExFreeSvmAsid(v26, v25);
    MiCleanCfg(v29, v28, v30, v31);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1, v32, v33);
    *(_QWORD *)(v11 + 1152) = 0LL;
    v36 = *(_QWORD *)(*(_QWORD *)(a1 + 1040) + 1296LL);
    if ( v36 )
    {
      v42 = MiDeleteAweInfoPages(v36);
      if ( v42 )
      {
        *(_QWORD *)(a1 + 1392) = 0LL;
        MiReturnProcessCommitment(a1, v42);
      }
    }
    v37 = *(_QWORD **)(a1 + 784);
    if ( v37 && *v37 )
      *v37 = 0LL;
    v38 = MiCleanWorkingSet(a1, v34, v35);
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
    PsReturnProcessQuota((struct _KPROCESS *)a1, v39, v38);
    result = *(unsigned int *)(a1 + 500);
    if ( (result & 0x10000) != 0 )
      result = PsDereferenceSession();
    if ( v44 )
      return MiContractWsSwapPageFile(v12);
  }
  return result;
}
