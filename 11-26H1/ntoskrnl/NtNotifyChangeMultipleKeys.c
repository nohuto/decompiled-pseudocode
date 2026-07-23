/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x14093C190
 * Callers:
 *     DifNtNotifyChangeMultipleKeysWrapper @ 0x1406801E0 (DifNtNotifyChangeMultipleKeysWrapper.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14081E11C (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtRegNotificationCallback @ 0x14081E1C0 (SepAdtRegNotificationCallback.c)
 *     ExpWatchLicenseInfoWork @ 0x14083D0E0 (ExpWatchLicenseInfoWork.c)
 *     WheaInitializeRegChangeNotify @ 0x14084FBA4 (WheaInitializeRegChangeNotify.c)
 *     WheaRegChangeNotifyCallback @ 0x14084FC40 (WheaRegChangeNotifyCallback.c)
 *     ExpWatchProductTypeWork @ 0x140935C60 (ExpWatchProductTypeWork.c)
 *     NtNotifyChangeKey @ 0x14093C120 (NtNotifyChangeKey.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     KeInitializeApc @ 0x14044ED90 (KeInitializeApc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     CmLockHive @ 0x1408CEC48 (CmLockHive.c)
 *     CmUnlockHive @ 0x1408CECB0 (CmUnlockHive.c)
 *     CmpFreePostBlock @ 0x1408D75E0 (CmpFreePostBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmpAllocatePostBlock @ 0x14093CDA8 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x14093CF14 (CmpNotifyChangeKey.c)
 *     CmpInitializeParseContext @ 0x14093E5E0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14093E860 (CmpCleanupParseContext.c)
 *     CmpUnlockTwoKcbs @ 0x1409409F0 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x140940A90 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByName @ 0x140C5EF38 (CmObReferenceObjectByName.c)
 */

NTSTATUS __cdecl NtNotifyChangeMultipleKeys(
        HANDLE MasterKeyHandle,
        ULONG Count,
        OBJECT_ATTRIBUTES SubordinateObjects[],
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        PVOID Buffer,
        ULONG BufferSize,
        BOOLEAN Asynchronous)
{
  int v14; // r14d
  void *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  int v21; // edi
  unsigned int v22; // esi
  ULONG_PTR *v23; // r15
  _QWORD *v24; // r14
  __int64 PostBlock; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rsi
  PVOID v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  struct _KLOCK_ENTRIES *v36; // r9
  int v37; // r13d
  __int64 v38; // r9
  __int64 v39; // rcx
  ULONG_PTR v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  char v43; // r12
  void *v45; // rcx
  PVOID v46; // rcx
  _KPROCESS *Process; // rcx
  char v48; // si
  void *v49; // r8
  int v50; // r9d
  unsigned __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // r8
  struct _KLOCK_ENTRIES *v54; // r9
  __int16 v55; // ax
  char v56; // al
  __int64 v57; // r9
  int v58; // edx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  void *CurrentIrql; // r8
  ULONG_PTR v62; // rcx
  __int64 v63; // rcx
  NTSTATUS v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  int v69; // edx
  unsigned __int8 v70; // r13
  _QWORD *v71; // r12
  __int64 v72; // rax
  __int64 v73; // rdx
  _QWORD *v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // r8
  struct _KLOCK_ENTRIES *v78; // r9
  bool v79; // zf
  int v80; // edx
  unsigned __int8 v81; // di
  __int64 v82; // rax
  __int64 v83; // rdx
  _QWORD *v84; // rcx
  __int64 v85; // rcx
  void *v86; // rcx
  size_t v87; // r8
  HANDLE *p_Src; // rdx
  char *v89; // rcx
  PVOID *v90; // rax
  PVOID *v91; // rdx
  _QWORD *v92; // rcx
  PVOID *v93; // rax
  PVOID *v94; // rcx
  _QWORD *v95; // rcx
  __int64 v96; // rcx
  ULONG_PTR v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rdx
  _QWORD *v100; // rcx
  _QWORD *v101; // rcx
  __int64 v102; // rdx
  _QWORD *v103; // rax
  _QWORD **v104; // rdx
  PVOID *v105; // rcx
  char v106; // [rsp+40h] [rbp-2A8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-2A7h]
  bool v108; // [rsp+42h] [rbp-2A6h]
  char v109; // [rsp+44h] [rbp-2A4h]
  unsigned int v110; // [rsp+48h] [rbp-2A0h]
  __int64 Src; // [rsp+50h] [rbp-298h] BYREF
  PVOID v112; // [rsp+58h] [rbp-290h] BYREF
  PVOID P; // [rsp+60h] [rbp-288h]
  PVOID Object; // [rsp+68h] [rbp-280h] BYREF
  void *v115; // [rsp+70h] [rbp-278h]
  PVOID v116[2]; // [rsp+78h] [rbp-270h] BYREF
  OBJECT_ATTRIBUTES *__attribute__((__org_arrdim(0,0))) v117; // [rsp+88h] [rbp-260h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-258h] BYREF
  _KAFFINITY_EX v119; // [rsp+A0h] [rbp-248h] BYREF

  Handle[0] = Event;
  v117 = SubordinateObjects;
  v14 = (int)MasterKeyHandle;
  v115 = IoStatusBlock;
  memset(&v119, 0, 24);
  v116[0] = 0LL;
  Object = 0LL;
  v15 = 0LL;
  P = 0LL;
  v110 = 1;
  memset_0(&v119.StaticBitmap[5], 0, 0x1D0uLL);
  v109 = 0;
  Src = 0LL;
  CmpInitializeThreadInfo(&v119);
  v106 = CmpAcquireShutdownRundown(v17, v16);
  if ( !v106 )
  {
    v21 = -1073741431;
    goto LABEL_43;
  }
  if ( Count > 1 )
    goto LABEL_8;
  LOBYTE(v18) = KeGetCurrentThread()->PreviousMode;
  AccessMode = v18;
  if ( (_BYTE)v18 )
  {
    if ( (CompletionFilter & 0x10000000) != 0 )
    {
      if ( !Asynchronous || ApcRoutine || !Event )
      {
LABEL_8:
        CmpReleaseShutdownRundown(v18);
        v21 = -1073741811;
LABEL_43:
        CmCleanupThreadInfo((_KAFFINITY_EX **)&v119);
        return v21;
      }
      v22 = 4;
      goto LABEL_10;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[1].ReadyTime )
      goto LABEL_53;
    v55 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v55 == 332 || (v79 = v55 == 452, v56 = 0, v79) )
      v56 = 1;
    v48 = 1;
    if ( !v56 )
LABEL_53:
      v48 = 0;
    v109 = v48;
    ProbeForWrite(Buffer, BufferSize, 4u);
    if ( v48 )
    {
      v112 = (PVOID)259;
      if ( ((unsigned __int8)IoStatusBlock & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlWriteULong64ToUser(IoStatusBlock, (__int64)v112);
    }
    else
    {
      *(_OWORD *)&v119.StaticBitmap[2] = 0x103uLL;
      if ( ((unsigned __int8)IoStatusBlock & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyToUser(IoStatusBlock, &v119.StaticBitmap[2], 0x10uLL);
    }
    LOBYTE(v18) = AccessMode;
    if ( Asynchronous )
    {
      v22 = 2;
LABEL_10:
      v110 = v22;
      goto LABEL_11;
    }
    v22 = 1;
    goto LABEL_11;
  }
  if ( !Asynchronous )
  {
    v22 = 1;
    goto LABEL_11;
  }
  v22 = 3;
  v110 = 3;
  if ( !Count )
  {
LABEL_11:
    if ( CompletionFilter != (CompletionFilter & 0x1000000F) )
    {
      v21 = -1073741811;
      goto LABEL_42;
    }
    LOBYTE(v20) = v18;
    v21 = CmObReferenceObjectByHandle(v14, 16, v19, v20, (__int64)v116, 0LL);
    if ( v21 < 0 )
    {
LABEL_42:
      CmpReleaseShutdownRundown(v18);
      goto LABEL_43;
    }
    v23 = 0LL;
    v112 = 0LL;
    if ( Count == 1 )
    {
      CmpInitializeParseContext(&v119.StaticBitmap[5]);
      v21 = CmObReferenceObjectByName(
              (_DWORD)v117,
              0,
              16,
              v50,
              AccessMode,
              (__int64)&v119.StaticBitmap[5],
              (__int64)&v112);
      CmpCleanupParseContext(&v119.StaticBitmap[5], 0LL);
      v24 = v116[0];
      if ( v21 < 0 )
        goto LABEL_40;
      v23 = (ULONG_PTR *)v112;
      if ( *(_QWORD *)(*((_QWORD *)v116[0] + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)v112 + 1) + 32LL) )
      {
        ObfDereferenceObject(v112);
        v21 = -1073741811;
        goto LABEL_40;
      }
    }
    else
    {
      v24 = v116[0];
    }
    PostBlock = CmpAllocatePostBlock(v22, 0x10000LL, 0LL, 0LL);
    v30 = PostBlock;
    v117 = (OBJECT_ATTRIBUTES *)PostBlock;
    if ( !PostBlock )
    {
      if ( Count == 1 )
        ObfDereferenceObject(v23);
      goto LABEL_115;
    }
    if ( Count == 1 )
    {
      v15 = (void *)CmpAllocatePostBlock(v110, 0LL, v23, PostBlock);
      P = v15;
      if ( !v15 )
      {
        ObfDereferenceObject(v23);
        CmpFreePostBlock((PVOID)v30);
LABEL_115:
        v21 = -1073741670;
        goto LABEL_40;
      }
    }
    if ( v110 == 1 )
    {
      v31 = 0LL;
    }
    else
    {
      if ( Handle[0] )
      {
        Object = 0LL;
        v21 = ObReferenceObjectByHandle(Handle[0], 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
        if ( v21 < 0 )
        {
          if ( Count != 1 )
          {
LABEL_49:
            v46 = (PVOID)v30;
LABEL_50:
            CmpFreePostBlock(v46);
            goto LABEL_40;
          }
          v45 = v15;
LABEL_48:
          CmpFreePostBlock(v45);
          goto LABEL_49;
        }
        v31 = Object;
        KeResetEvent((PRKEVENT)Object);
      }
      else
      {
        v31 = 0LL;
      }
      v32 = *(_QWORD **)(v30 + 64);
      v27 = v110;
      if ( v110 == 2 )
      {
        v32[13] = v115;
        *(_QWORD *)(*(_QWORD *)(v30 + 64) + 8LL) = v31;
        v49 = AlpcMessageDeleteProcedure;
        if ( ApcRoutine )
          v49 = ApcRoutine;
        KeInitializeApc(
          *(_QWORD *)(v30 + 64) + 16LL,
          (__int64)KeGetCurrentThread(),
          2,
          (__int64)CmpPostApc,
          (__int64)CmpPostApcRunDown,
          (__int64)v49,
          ApcRoutine != 0LL ? AccessMode : 0,
          (__int64)ApcContext);
      }
      else
      {
        *v32 = v31;
        if ( v110 != 4 )
        {
          *(_QWORD *)(*(_QWORD *)(v30 + 64) + 8LL) = ApcRoutine;
          v27 = *(_QWORD *)(v30 + 64);
          *(_DWORD *)(v27 + 16) = (_DWORD)ApcContext;
        }
      }
    }
    CmpLockRegistry(v27, v26, v28, v29);
    v33 = v24[1];
    if ( Count == 1 )
      CmpLockTwoKcbsShared(v33, v23[1]);
    else
      CmpLockKcbShared(v33);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v24, 0LL)
      || Count == 1 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(v23, 0LL) )
    {
      v62 = v24[1];
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v62, v23[1]);
      else
        CmpUnlockKcb(v62);
      CmpUnlockRegistry(v63);
      if ( v31 )
        ObfDereferenceObject(v31);
      if ( Count == 1 )
        CmpFreePostBlock(v15);
      CmpFreePostBlock((PVOID)v30);
      v21 = -1073741444;
      goto LABEL_40;
    }
    if ( Count != 1 || (v34 = *(_QWORD *)(v23[1] + 32), v51 = *(_QWORD *)(v24[1] + 32LL), v51 == v34) )
    {
      CmLockHive(*(_QWORD *)(v24[1] + 32LL), v34, v35, v36);
      v37 = 1;
    }
    else
    {
      if ( v51 >= v34 )
      {
        CmLockHive(*(_QWORD *)(v23[1] + 32), v34, v35, v36);
        CmLockHive(*(_QWORD *)(v24[1] + 32LL), v76, v77, v78);
        v37 = 3;
      }
      else
      {
        CmLockHive(v51, v34, v35, v36);
        CmLockHive(*(_QWORD *)(v23[1] + 32), v52, v53, v54);
        v37 = 2;
      }
      Src = *(_QWORD *)(v23[1] + 32);
    }
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
    LOBYTE(v38) = WatchTree;
    v21 = CmpNotifyChangeKey(v24, v30, CompletionFilter, v38);
    if ( v21 >= 0 )
    {
      v108 = Count == 1;
      if ( Count == 1 )
      {
        PsReferenceSiloContext(v23);
        if ( v21 )
        {
          LOBYTE(v57) = WatchTree;
          v21 = CmpNotifyChangeKey(v23, P, CompletionFilter, v57);
          v108 = Count == 1;
          if ( v21 < 0 )
          {
            v59 = *(_QWORD *)v30;
            v60 = *(_QWORD **)(v30 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30 || *v60 != v30 )
              goto LABEL_116;
            *v60 = v59;
            *(_QWORD *)(v59 + 8) = v60;
            CurrentIrql = (void *)KeGetCurrentIrql();
            v112 = CurrentIrql;
            if ( (_BYTE)CurrentIrql != 1 )
              __writecr8(1uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v58) = 1;
              KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, v58);
              LOBYTE(CurrentIrql) = (_BYTE)v112;
            }
            v99 = *(_QWORD *)(v30 + 16);
            v100 = *(_QWORD **)(v30 + 24);
            if ( *(_QWORD *)(v99 + 8) != v30 + 16 || *v100 != v30 + 16 )
              goto LABEL_116;
            *v100 = v99;
            *(_QWORD *)(v99 + 8) = v100;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
            __writecr8((unsigned __int8)v112);
            v108 = Count == 1;
          }
        }
        else
        {
          CmpFreePostBlock(P);
          v108 = 0;
        }
      }
      ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
      if ( v37 != 1 )
      {
        if ( v37 != 2 )
        {
          CmUnlockHive(*(_QWORD *)(v24[1] + 32LL));
          v39 = Src;
          goto LABEL_34;
        }
        CmUnlockHive(Src);
      }
      v39 = *(_QWORD *)(v24[1] + 32LL);
LABEL_34:
      CmUnlockHive(v39);
      v40 = v24[1];
      if ( Count == 1 )
        CmpUnlockTwoKcbs(v40, v23[1]);
      else
        CmpUnlockKcb(v40);
      CmpUnlockRegistry(v41);
      if ( v23 )
        ObfDereferenceObject(v23);
      if ( v21 < 0 )
      {
        CmpFreePostBlock((PVOID)v30);
        if ( Object )
          ObfDereferenceObject(Object);
        goto LABEL_40;
      }
      if ( v110 != 1 )
      {
LABEL_40:
        v43 = v106;
        goto LABEL_41;
      }
      CmpReleaseShutdownRundown(v42);
      v106 = 0;
      v64 = KeWaitForSingleObject(*(PVOID *)(v30 + 64), Executive, AccessMode, 1u, 0LL);
      v21 = v64;
      if ( v64 != 192 && v64 != 257 )
      {
        CmpLockRegistry(v66, v65, v67, v68);
        ExAcquireFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
        v81 = KeGetCurrentIrql();
        if ( v81 != 1 )
          __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v80) = 1;
          KiRaiseIrqlProcessIrqlFlags(v81, v80);
        }
        if ( v108 )
        {
          v89 = (char *)P;
          v90 = *(PVOID **)P;
          if ( *(_QWORD *)P )
          {
            v91 = (PVOID *)*((_QWORD *)P + 1);
            if ( v90[1] != P || *v91 != P )
              goto LABEL_116;
            *v91 = v90;
            v90[1] = v91;
          }
          v101 = v89 + 16;
          v102 = *v101;
          v103 = (_QWORD *)v101[1];
          if ( *(_QWORD **)(*v101 + 8LL) != v101 || (_QWORD *)*v103 != v101 )
            goto LABEL_116;
          *v103 = v102;
          *(_QWORD *)(v102 + 8) = v103;
        }
        v82 = *(_QWORD *)v30;
        if ( *(_QWORD *)v30 )
        {
          v92 = *(_QWORD **)(v30 + 8);
          if ( *(_QWORD *)(v82 + 8) != v30 || *v92 != v30 )
            goto LABEL_116;
          *v92 = v82;
          *(_QWORD *)(v82 + 8) = v92;
        }
        v83 = *(_QWORD *)(v30 + 16);
        v84 = *(_QWORD **)(v30 + 24);
        if ( *(_QWORD *)(v83 + 8) == v30 + 16 && *v84 == v30 + 16 )
        {
          *v84 = v83;
          *(_QWORD *)(v83 + 8) = v84;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v81);
          __writecr8(v81);
          ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
          CmpUnlockRegistry(v85);
          v21 = *(_DWORD *)(*(_QWORD *)(v30 + 64) + 24LL);
          if ( v109 )
          {
            Src = (unsigned int)v21;
            if ( AccessMode && ((unsigned __int8)v115 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v86 = v115;
            if ( AccessMode )
            {
              RtlWriteULong64ToUser(v115, Src);
LABEL_145:
              v43 = 0;
              if ( v108 )
                CmpFreePostBlock(P);
              CmpFreePostBlock((PVOID)v30);
LABEL_41:
              ObfDereferenceObject(v24);
              if ( !v43 )
                goto LABEL_43;
              goto LABEL_42;
            }
            v87 = 8LL;
            p_Src = (HANDLE *)&Src;
          }
          else
          {
            Handle[0] = (HANDLE)(unsigned int)v21;
            Handle[1] = 0LL;
            if ( AccessMode && ((unsigned __int8)v115 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v87 = 16LL;
            p_Src = Handle;
            v86 = v115;
            if ( AccessMode )
            {
              RtlCopyToUser(v115, Handle, 0x10uLL);
              goto LABEL_145;
            }
          }
          RtlCopyVolatileMemory(v86, p_Src, v87);
          goto LABEL_145;
        }
LABEL_116:
        __fastfail(3u);
      }
      CmpLockRegistry(v66, v65, v67, v68);
      ExAcquireFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
      v70 = KeGetCurrentIrql();
      if ( v70 != 1 )
        __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v69) = 1;
        KiRaiseIrqlProcessIrqlFlags(v70, v69);
      }
      v71 = P;
      if ( v108 )
      {
        v93 = *(PVOID **)P;
        if ( *(_QWORD *)P )
        {
          v94 = (PVOID *)*((_QWORD *)P + 1);
          if ( v93[1] != P || *v94 != P )
            goto LABEL_116;
          *v94 = v93;
          v93[1] = v94;
        }
        v104 = (_QWORD **)v71[2];
        v105 = (PVOID *)v71[3];
        if ( v104[1] != v71 + 2 || *v105 != v71 + 2 )
          goto LABEL_116;
        *v105 = v104;
        v104[1] = v105;
      }
      v72 = *(_QWORD *)v30;
      if ( *(_QWORD *)v30 )
      {
        v95 = *(_QWORD **)(v30 + 8);
        if ( *(_QWORD *)(v72 + 8) != v30 || *v95 != v30 )
          goto LABEL_116;
        *v95 = v72;
        *(_QWORD *)(v72 + 8) = v95;
      }
      v73 = *(_QWORD *)(v30 + 16);
      v74 = *(_QWORD **)(v30 + 24);
      if ( *(_QWORD *)(v73 + 8) != v30 + 16 || *v74 != v30 + 16 )
        goto LABEL_116;
      *v74 = v73;
      *(_QWORD *)(v73 + 8) = v74;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v70);
      __writecr8(v70);
      ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
      CmpUnlockRegistry(v75);
      if ( !v108 )
        goto LABEL_49;
      v45 = v71;
      goto LABEL_48;
    }
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
    if ( v37 != 1 )
    {
      if ( v37 != 2 )
      {
        CmUnlockHive(*(_QWORD *)(v24[1] + 32LL));
        v96 = Src;
        goto LABEL_175;
      }
      CmUnlockHive(Src);
    }
    v96 = *(_QWORD *)(v24[1] + 32LL);
LABEL_175:
    CmUnlockHive(v96);
    v97 = v24[1];
    if ( Count == 1 )
      CmpUnlockTwoKcbs(v97, v23[1]);
    else
      CmpUnlockKcb(v97);
    CmpUnlockRegistry(v98);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( Count != 1 )
      goto LABEL_40;
    v46 = P;
    goto LABEL_50;
  }
  CmpReleaseShutdownRundown(v18);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v119);
  return -1073741811;
}
