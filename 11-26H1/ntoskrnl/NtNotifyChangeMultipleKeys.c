/*
 * XREFs of NtNotifyChangeMultipleKeys @ 0x14097A180
 * Callers:
 *     DifNtNotifyChangeMultipleKeysWrapper @ 0x14067C600 (DifNtNotifyChangeMultipleKeysWrapper.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140817F0C (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtRegNotificationCallback @ 0x140817FB0 (SepAdtRegNotificationCallback.c)
 *     ExpWatchLicenseInfoWork @ 0x140836EA0 (ExpWatchLicenseInfoWork.c)
 *     WheaInitializeRegChangeNotify @ 0x140849894 (WheaInitializeRegChangeNotify.c)
 *     WheaRegChangeNotifyCallback @ 0x140849930 (WheaRegChangeNotifyCallback.c)
 *     ExpWatchProductTypeWork @ 0x140973C50 (ExpWatchProductTypeWork.c)
 *     NtNotifyChangeKey @ 0x14097A110 (NtNotifyChangeKey.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140395BB0 (KeResetEvent.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     KeInitializeApc @ 0x140457520 (KeInitializeApc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     CmLockHive @ 0x1408C8694 (CmLockHive.c)
 *     CmUnlockHive @ 0x1408C86FC (CmUnlockHive.c)
 *     CmpFreePostBlock @ 0x1408D1020 (CmpFreePostBlock.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     CmpAllocatePostBlock @ 0x14097AD98 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x14097AF04 (CmpNotifyChangeKey.c)
 *     CmpInitializeParseContext @ 0x14097C5D0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14097C850 (CmpCleanupParseContext.c)
 *     CmpUnlockTwoKcbs @ 0x14097E9E0 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x14097EA80 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 *     CmObReferenceObjectByName @ 0x140C58F38 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall NtNotifyChangeMultipleKeys(
        int a1,
        unsigned int a2,
        __int64 a3,
        void *a4,
        void (__stdcall *a5)(POPLOCK Oplock),
        __int64 a6,
        _QWORD *a7,
        unsigned int a8,
        char a9,
        volatile void *Address,
        SIZE_T Length,
        char a12)
{
  void *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r9d
  NTSTATUS v21; // edi
  unsigned int v22; // esi
  ULONG_PTR *v23; // r15
  _QWORD *v24; // r14
  __int64 PostBlock; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  PVOID v28; // rdi
  _QWORD *v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // r8
  struct _KLOCK_ENTRIES *v33; // r9
  int v34; // r13d
  __int64 v35; // r9
  __int64 v36; // rcx
  ULONG_PTR v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  char v40; // r12
  void *v42; // rcx
  PVOID v43; // rcx
  _KPROCESS *Process; // rcx
  char v45; // si
  void (__stdcall *v46)(POPLOCK); // r8
  int v47; // r9d
  unsigned __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // r8
  struct _KLOCK_ENTRIES *v51; // r9
  __int16 v52; // ax
  char v53; // al
  __int64 v54; // r9
  int v55; // edx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  void *CurrentIrql; // r8
  ULONG_PTR v59; // rcx
  __int64 v60; // rcx
  NTSTATUS v61; // eax
  __int64 v62; // rcx
  int v63; // edx
  unsigned __int8 v64; // r13
  _QWORD *v65; // r12
  __int64 v66; // rax
  __int64 v67; // rdx
  _QWORD *v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // r8
  struct _KLOCK_ENTRIES *v72; // r9
  bool v73; // zf
  int v74; // edx
  unsigned __int8 v75; // di
  __int64 v76; // rax
  __int64 v77; // rdx
  _QWORD *v78; // rcx
  __int64 v79; // rcx
  void *v80; // rcx
  size_t v81; // r8
  HANDLE *p_Src; // rdx
  char *v83; // rcx
  PVOID *v84; // rax
  PVOID *v85; // rdx
  _QWORD *v86; // rcx
  PVOID *v87; // rax
  PVOID *v88; // rcx
  _QWORD *v89; // rcx
  __int64 v90; // rcx
  ULONG_PTR v91; // rcx
  __int64 v92; // rcx
  __int64 v93; // rdx
  _QWORD *v94; // rcx
  _QWORD *v95; // rcx
  __int64 v96; // rdx
  _QWORD *v97; // rax
  _QWORD **v98; // rdx
  PVOID *v99; // rcx
  char v100; // [rsp+40h] [rbp-2A8h]
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-2A7h]
  bool v102; // [rsp+42h] [rbp-2A6h]
  char v103; // [rsp+44h] [rbp-2A4h]
  unsigned int v104; // [rsp+48h] [rbp-2A0h]
  __int64 Src; // [rsp+50h] [rbp-298h] BYREF
  PVOID v106; // [rsp+58h] [rbp-290h] BYREF
  PVOID P; // [rsp+60h] [rbp-288h]
  PVOID Object; // [rsp+68h] [rbp-280h] BYREF
  void *v109; // [rsp+70h] [rbp-278h]
  PVOID v110[2]; // [rsp+78h] [rbp-270h] BYREF
  __int64 v111; // [rsp+88h] [rbp-260h]
  HANDLE Handle[2]; // [rsp+90h] [rbp-258h] BYREF
  _KAFFINITY_EX v113; // [rsp+A0h] [rbp-248h] BYREF

  Handle[0] = a4;
  v111 = a3;
  v109 = a7;
  memset(&v113, 0, 24);
  v110[0] = 0LL;
  Object = 0LL;
  v15 = 0LL;
  P = 0LL;
  v104 = 1;
  memset_0(&v113.StaticBitmap[5], 0, 0x1D0uLL);
  v103 = 0;
  Src = 0LL;
  CmpInitializeThreadInfo(&v113);
  v100 = CmpAcquireShutdownRundown(v17, v16);
  if ( !v100 )
  {
    v21 = -1073741431;
    goto LABEL_43;
  }
  if ( a2 > 1 )
    goto LABEL_8;
  LOBYTE(v18) = KeGetCurrentThread()->PreviousMode;
  AccessMode = v18;
  if ( (_BYTE)v18 )
  {
    if ( (a8 & 0x10000000) != 0 )
    {
      if ( !a12 || a5 || !a4 )
      {
LABEL_8:
        CmpReleaseShutdownRundown(v18);
        v21 = -1073741811;
LABEL_43:
        CmCleanupThreadInfo((_KAFFINITY_EX **)&v113);
        return (unsigned int)v21;
      }
      v22 = 4;
      goto LABEL_10;
    }
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( !Process[1].ReadyTime )
      goto LABEL_53;
    v52 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v52 == 332 || (v73 = v52 == 452, v53 = 0, v73) )
      v53 = 1;
    v45 = 1;
    if ( !v53 )
LABEL_53:
      v45 = 0;
    v103 = v45;
    ProbeForWrite(Address, (unsigned int)Length, 4u);
    if ( v45 )
    {
      v106 = (PVOID)259;
      if ( ((unsigned __int8)a7 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlWriteULong64ToUser(a7, (__int64)v106);
    }
    else
    {
      *(_OWORD *)&v113.StaticBitmap[2] = 0x103uLL;
      if ( ((unsigned __int8)a7 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlCopyToUser(a7, &v113.StaticBitmap[2], 0x10uLL);
    }
    LOBYTE(v18) = AccessMode;
    if ( a12 )
    {
      v22 = 2;
LABEL_10:
      v104 = v22;
      goto LABEL_11;
    }
    v22 = 1;
    goto LABEL_11;
  }
  if ( !a12 )
  {
    v22 = 1;
    goto LABEL_11;
  }
  v22 = 3;
  v104 = 3;
  if ( !a2 )
  {
LABEL_11:
    if ( a8 != (a8 & 0x1000000F) )
    {
      v21 = -1073741811;
      goto LABEL_42;
    }
    LOBYTE(v20) = v18;
    v21 = CmObReferenceObjectByHandle(a1, 16, v19, v20, (__int64)v110, 0LL);
    if ( v21 < 0 )
    {
LABEL_42:
      CmpReleaseShutdownRundown(v18);
      goto LABEL_43;
    }
    v23 = 0LL;
    v106 = 0LL;
    if ( a2 == 1 )
    {
      CmpInitializeParseContext(&v113.StaticBitmap[5]);
      v21 = CmObReferenceObjectByName(v111, 0, 16, v47, AccessMode, (__int64)&v113.StaticBitmap[5], (__int64)&v106);
      CmpCleanupParseContext(&v113.StaticBitmap[5], 0LL);
      v24 = v110[0];
      if ( v21 < 0 )
        goto LABEL_40;
      v23 = (ULONG_PTR *)v106;
      if ( *(_QWORD *)(*((_QWORD *)v110[0] + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)v106 + 1) + 32LL) )
      {
        ObfDereferenceObject(v106);
        v21 = -1073741811;
        goto LABEL_40;
      }
    }
    else
    {
      v24 = v110[0];
    }
    PostBlock = CmpAllocatePostBlock(v22, 0x10000LL, 0LL, 0LL);
    v27 = PostBlock;
    v111 = PostBlock;
    if ( !PostBlock )
    {
      if ( a2 == 1 )
        ObfDereferenceObject(v23);
      goto LABEL_115;
    }
    if ( a2 == 1 )
    {
      v15 = (void *)CmpAllocatePostBlock(v104, 0LL, v23, PostBlock);
      P = v15;
      if ( !v15 )
      {
        ObfDereferenceObject(v23);
        CmpFreePostBlock((PVOID)v27);
LABEL_115:
        v21 = -1073741670;
        goto LABEL_40;
      }
    }
    if ( v104 == 1 )
    {
      v28 = 0LL;
    }
    else
    {
      if ( Handle[0] )
      {
        Object = 0LL;
        v21 = ObReferenceObjectByHandle(Handle[0], 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
        if ( v21 < 0 )
        {
          if ( a2 != 1 )
          {
LABEL_49:
            v43 = (PVOID)v27;
LABEL_50:
            CmpFreePostBlock(v43);
            goto LABEL_40;
          }
          v42 = v15;
LABEL_48:
          CmpFreePostBlock(v42);
          goto LABEL_49;
        }
        v28 = Object;
        KeResetEvent((PRKEVENT)Object);
      }
      else
      {
        v28 = 0LL;
      }
      v29 = *(_QWORD **)(v27 + 64);
      v26 = v104;
      if ( v104 == 2 )
      {
        v29[13] = v109;
        *(_QWORD *)(*(_QWORD *)(v27 + 64) + 8LL) = v28;
        v46 = AlpcMessageDeleteProcedure;
        if ( a5 )
          v46 = a5;
        KeInitializeApc(
          *(_QWORD *)(v27 + 64) + 16LL,
          (__int64)KeGetCurrentThread(),
          2,
          (__int64)CmpPostApc,
          (__int64)CmpPostApcRunDown,
          (__int64)v46,
          a5 != 0LL ? AccessMode : 0,
          a6);
      }
      else
      {
        *v29 = v28;
        if ( v104 != 4 )
        {
          *(_QWORD *)(*(_QWORD *)(v27 + 64) + 8LL) = a5;
          v26 = *(_QWORD *)(v27 + 64);
          *(_DWORD *)(v26 + 16) = a6;
        }
      }
    }
    CmpLockRegistry(v26);
    v30 = v24[1];
    if ( a2 == 1 )
      CmpLockTwoKcbsShared(v30, v23[1]);
    else
      CmpLockKcbShared(v30);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v24, 0LL)
      || a2 == 1 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(v23, 0LL) )
    {
      v59 = v24[1];
      if ( a2 == 1 )
        CmpUnlockTwoKcbs(v59, v23[1]);
      else
        CmpUnlockKcb(v59);
      CmpUnlockRegistry(v60);
      if ( v28 )
        ObfDereferenceObject(v28);
      if ( a2 == 1 )
        CmpFreePostBlock(v15);
      CmpFreePostBlock((PVOID)v27);
      v21 = -1073741444;
      goto LABEL_40;
    }
    if ( a2 != 1 || (v31 = *(_QWORD *)(v23[1] + 32), v48 = *(_QWORD *)(v24[1] + 32LL), v48 == v31) )
    {
      CmLockHive(*(_QWORD *)(v24[1] + 32LL), v31, v32, v33);
      v34 = 1;
    }
    else
    {
      if ( v48 >= v31 )
      {
        CmLockHive(*(_QWORD *)(v23[1] + 32), v31, v32, v33);
        CmLockHive(*(_QWORD *)(v24[1] + 32LL), v70, v71, v72);
        v34 = 3;
      }
      else
      {
        CmLockHive(v48, v31, v32, v33);
        CmLockHive(*(_QWORD *)(v23[1] + 32), v49, v50, v51);
        v34 = 2;
      }
      Src = *(_QWORD *)(v23[1] + 32);
    }
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
    LOBYTE(v35) = a9;
    v21 = CmpNotifyChangeKey(v24, v27, a8, v35);
    if ( v21 >= 0 )
    {
      v102 = a2 == 1;
      if ( a2 == 1 )
      {
        PsReferenceSiloContext(v23);
        if ( v21 )
        {
          LOBYTE(v54) = a9;
          v21 = CmpNotifyChangeKey(v23, P, a8, v54);
          v102 = a2 == 1;
          if ( v21 < 0 )
          {
            v56 = *(_QWORD *)v27;
            v57 = *(_QWORD **)(v27 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 || *v57 != v27 )
              goto LABEL_116;
            *v57 = v56;
            *(_QWORD *)(v56 + 8) = v57;
            CurrentIrql = (void *)KeGetCurrentIrql();
            v106 = CurrentIrql;
            if ( (_BYTE)CurrentIrql != 1 )
              __writecr8(1uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v55) = 1;
              KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, v55);
              LOBYTE(CurrentIrql) = (_BYTE)v106;
            }
            v93 = *(_QWORD *)(v27 + 16);
            v94 = *(_QWORD **)(v27 + 24);
            if ( *(_QWORD *)(v93 + 8) != v27 + 16 || *v94 != v27 + 16 )
              goto LABEL_116;
            *v94 = v93;
            *(_QWORD *)(v93 + 8) = v94;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)CurrentIrql);
            __writecr8((unsigned __int8)v106);
            v102 = a2 == 1;
          }
        }
        else
        {
          CmpFreePostBlock(P);
          v102 = 0;
        }
      }
      ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
      if ( v34 != 1 )
      {
        if ( v34 != 2 )
        {
          CmUnlockHive(*(_QWORD *)(v24[1] + 32LL));
          v36 = Src;
          goto LABEL_34;
        }
        CmUnlockHive(Src);
      }
      v36 = *(_QWORD *)(v24[1] + 32LL);
LABEL_34:
      CmUnlockHive(v36);
      v37 = v24[1];
      if ( a2 == 1 )
        CmpUnlockTwoKcbs(v37, v23[1]);
      else
        CmpUnlockKcb(v37);
      CmpUnlockRegistry(v38);
      if ( v23 )
        ObfDereferenceObject(v23);
      if ( v21 < 0 )
      {
        CmpFreePostBlock((PVOID)v27);
        if ( Object )
          ObfDereferenceObject(Object);
        goto LABEL_40;
      }
      if ( v104 != 1 )
      {
LABEL_40:
        v40 = v100;
        goto LABEL_41;
      }
      CmpReleaseShutdownRundown(v39);
      v100 = 0;
      v61 = KeWaitForSingleObject(*(PVOID *)(v27 + 64), Executive, AccessMode, 1u, 0LL);
      v21 = v61;
      if ( v61 != 192 && v61 != 257 )
      {
        CmpLockRegistry(v62);
        ExAcquireFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
        v75 = KeGetCurrentIrql();
        if ( v75 != 1 )
          __writecr8(1uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v74) = 1;
          KiRaiseIrqlProcessIrqlFlags(v75, v74);
        }
        if ( v102 )
        {
          v83 = (char *)P;
          v84 = *(PVOID **)P;
          if ( *(_QWORD *)P )
          {
            v85 = (PVOID *)*((_QWORD *)P + 1);
            if ( v84[1] != P || *v85 != P )
              goto LABEL_116;
            *v85 = v84;
            v84[1] = v85;
          }
          v95 = v83 + 16;
          v96 = *v95;
          v97 = (_QWORD *)v95[1];
          if ( *(_QWORD **)(*v95 + 8LL) != v95 || (_QWORD *)*v97 != v95 )
            goto LABEL_116;
          *v97 = v96;
          *(_QWORD *)(v96 + 8) = v97;
        }
        v76 = *(_QWORD *)v27;
        if ( *(_QWORD *)v27 )
        {
          v86 = *(_QWORD **)(v27 + 8);
          if ( *(_QWORD *)(v76 + 8) != v27 || *v86 != v27 )
            goto LABEL_116;
          *v86 = v76;
          *(_QWORD *)(v76 + 8) = v86;
        }
        v77 = *(_QWORD *)(v27 + 16);
        v78 = *(_QWORD **)(v27 + 24);
        if ( *(_QWORD *)(v77 + 8) == v27 + 16 && *v78 == v27 + 16 )
        {
          *v78 = v77;
          *(_QWORD *)(v77 + 8) = v78;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v75);
          __writecr8(v75);
          ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
          CmpUnlockRegistry(v79);
          v21 = *(_DWORD *)(*(_QWORD *)(v27 + 64) + 24LL);
          if ( v103 )
          {
            Src = (unsigned int)v21;
            if ( AccessMode && ((unsigned __int8)v109 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v80 = v109;
            if ( AccessMode )
            {
              RtlWriteULong64ToUser(v109, Src);
LABEL_145:
              v40 = 0;
              if ( v102 )
                CmpFreePostBlock(P);
              CmpFreePostBlock((PVOID)v27);
LABEL_41:
              ObfDereferenceObject(v24);
              if ( !v40 )
                goto LABEL_43;
              goto LABEL_42;
            }
            v81 = 8LL;
            p_Src = (HANDLE *)&Src;
          }
          else
          {
            Handle[0] = (HANDLE)(unsigned int)v21;
            Handle[1] = 0LL;
            if ( AccessMode && ((unsigned __int8)v109 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v81 = 16LL;
            p_Src = Handle;
            v80 = v109;
            if ( AccessMode )
            {
              RtlCopyToUser(v109, Handle, 0x10uLL);
              goto LABEL_145;
            }
          }
          RtlCopyVolatileMemory(v80, p_Src, v81);
          goto LABEL_145;
        }
LABEL_116:
        __fastfail(3u);
      }
      CmpLockRegistry(v62);
      ExAcquireFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
      v64 = KeGetCurrentIrql();
      if ( v64 != 1 )
        __writecr8(1uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v63) = 1;
        KiRaiseIrqlProcessIrqlFlags(v64, v63);
      }
      v65 = P;
      if ( v102 )
      {
        v87 = *(PVOID **)P;
        if ( *(_QWORD *)P )
        {
          v88 = (PVOID *)*((_QWORD *)P + 1);
          if ( v87[1] != P || *v88 != P )
            goto LABEL_116;
          *v88 = v87;
          v87[1] = v88;
        }
        v98 = (_QWORD **)v65[2];
        v99 = (PVOID *)v65[3];
        if ( v98[1] != v65 + 2 || *v99 != v65 + 2 )
          goto LABEL_116;
        *v99 = v98;
        v98[1] = v99;
      }
      v66 = *(_QWORD *)v27;
      if ( *(_QWORD *)v27 )
      {
        v89 = *(_QWORD **)(v27 + 8);
        if ( *(_QWORD *)(v66 + 8) != v27 || *v89 != v27 )
          goto LABEL_116;
        *v89 = v66;
        *(_QWORD *)(v66 + 8) = v89;
      }
      v67 = *(_QWORD *)(v27 + 16);
      v68 = *(_QWORD **)(v27 + 24);
      if ( *(_QWORD *)(v67 + 8) != v27 + 16 || *v68 != v27 + 16 )
        goto LABEL_116;
      *v68 = v67;
      *(_QWORD *)(v67 + 8) = v68;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v64);
      __writecr8(v64);
      ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
      CmpUnlockRegistry(v69);
      if ( !v102 )
        goto LABEL_49;
      v42 = v65;
      goto LABEL_48;
    }
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)(&CmpKeyLockTracker.SwapListEntry + 1));
    if ( v34 != 1 )
    {
      if ( v34 != 2 )
      {
        CmUnlockHive(*(_QWORD *)(v24[1] + 32LL));
        v90 = Src;
        goto LABEL_175;
      }
      CmUnlockHive(Src);
    }
    v90 = *(_QWORD *)(v24[1] + 32LL);
LABEL_175:
    CmUnlockHive(v90);
    v91 = v24[1];
    if ( a2 == 1 )
      CmpUnlockTwoKcbs(v91, v23[1]);
    else
      CmpUnlockKcb(v91);
    CmpUnlockRegistry(v92);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( a2 != 1 )
      goto LABEL_40;
    v43 = P;
    goto LABEL_50;
  }
  CmpReleaseShutdownRundown(v18);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v113);
  return 3221225485LL;
}
