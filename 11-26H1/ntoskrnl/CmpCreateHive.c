/*
 * XREFs of CmpCreateHive @ 0x1408BC440
 * Callers:
 *     CmpLoadHiveVolatile @ 0x140853B84 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140854058 (CmpRefreshHive.c)
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140868610 (CmpHiveCachePopulateHiveEntryThread.c)
 *     CmpInitHiveFromFile @ 0x1408BAE88 (CmpInitHiveFromFile.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmpCreateTemporaryHive @ 0x140A7FC0C (CmpCreateTemporaryHive.c)
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x140CF1290 (CmpInitializePreloadedHive.c)
 *     CmpInitializeSystemHive @ 0x140CF19B8 (CmpInitializeSystemHive.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     CmpRecheckHiveVolumePolicy @ 0x140468310 (CmpRecheckHiveVolumePolicy.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmpAdjustFileCFSafety @ 0x1404E3E08 (CmpAdjustFileCFSafety.c)
 *     CmpAllocateForNonPagedHive @ 0x1404FEF00 (CmpAllocateForNonPagedHive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwSetInformationObject @ 0x140728B40 (ZwSetInformationObject.c)
 *     CmpLogHiveInitializeEvent @ 0x140775A1C (CmpLogHiveInitializeEvent.c)
 *     CmpGetVolumeClusterSize @ 0x1408BCE30 (CmpGetVolumeClusterSize.c)
 *     CmpDestroyHive @ 0x1408BD394 (CmpDestroyHive.c)
 *     HvLockHiveFlusherShared @ 0x1408C9DE8 (HvLockHiveFlusherShared.c)
 *     CmpLockHiveListExclusive @ 0x1408CEA7C (CmpLockHiveListExclusive.c)
 *     CmpUnlockHiveList @ 0x1408CEBE8 (CmpUnlockHiveList.c)
 *     HvUnlockHiveFlusherShared @ 0x1408D65AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408E1470 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x1408E14D4 (HvUnlockHiveWriter.c)
 *     ObDuplicateObject @ 0x1408F6C40 (ObDuplicateObject.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140A2FA8C (CmpVolumeManagerGetContextForFile.c)
 *     CmpAllocate @ 0x140A8F2D0 (CmpAllocate.c)
 *     CmpHiveInitialize @ 0x140ABA0E0 (CmpHiveInitialize.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140AC0BC4 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140AC0C10 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvHiveStartFileBacked @ 0x140AC430C (HvHiveStartFileBacked.c)
 *     CmpReorganizeHive @ 0x140AE10D4 (CmpReorganizeHive.c)
 *     HvMarkBaseBlockDirty @ 0x140AE1304 (HvMarkBaseBlockDirty.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140AEE648 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvHiveStartMemoryBacked @ 0x140B4A534 (HvHiveStartMemoryBacked.c)
 *     CmCheckRegistry @ 0x140B87680 (CmCheckRegistry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpCreateHive(
        ULONG_PTR *a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  int v14; // r15d
  void *Pool2; // r13
  HANDLE v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int VolumeClusterSize; // eax
  int ContextForFile; // ebx
  __int64 v21; // rcx
  __int64 v22; // rax
  ULONG_PTR v23; // rdi
  void *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  void **v28; // r13
  void *v29; // rcx
  __int64 v30; // r8
  __int64 (__fastcall *v31)(unsigned int, char); // rax
  unsigned int v32; // eax
  int v33; // r15d
  char CanHiveSectionBeExtended; // al
  int v35; // r12d
  int v36; // ecx
  int v37; // eax
  __int64 v38; // rax
  int v39; // eax
  unsigned __int16 *v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rcx
  _QWORD *v47; // rbx
  ULONG_PTR *v48; // rax
  int v49; // eax
  void *v51; // rcx
  __int128 *v52; // rax
  __int128 *v53; // rcx
  int started; // eax
  struct _KTHREAD *Thread; // rax
  __int64 v56; // rax
  void *v57; // rcx
  unsigned int v58; // r8d
  int v59; // edx
  int v60; // r9d
  int v61; // r10d
  int v62; // [rsp+20h] [rbp-E0h]
  int v63; // [rsp+30h] [rbp-D0h]
  _WORD ObjectInformation[2]; // [rsp+80h] [rbp-80h] BYREF
  char v65; // [rsp+84h] [rbp-7Ch]
  char v66; // [rsp+85h] [rbp-7Bh]
  unsigned int v67; // [rsp+88h] [rbp-78h] BYREF
  int v68; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v69; // [rsp+90h] [rbp-70h] BYREF
  int v70[3]; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v71; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-58h]
  __int64 v73; // [rsp+B0h] [rbp-50h]
  __int64 v74; // [rsp+B8h] [rbp-48h]
  __int64 v75; // [rsp+C0h] [rbp-40h]
  ULONG_PTR *v76; // [rsp+D0h] [rbp-30h]
  __int128 v77; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v78; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v79[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v80; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v81)(int, int, int, int, ULONG); // [rsp+118h] [rbp+18h]
  struct _KAPC_STATE ApcState; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v83; // [rsp+150h] [rbp+50h] BYREF
  unsigned int *v84; // [rsp+170h] [rbp+70h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  _WORD *v86; // [rsp+180h] [rbp+80h]
  __int64 v87; // [rsp+188h] [rbp+88h]
  int *v88; // [rsp+190h] [rbp+90h]
  __int64 v89; // [rsp+198h] [rbp+98h]
  unsigned int *v90; // [rsp+1A0h] [rbp+A0h]
  __int64 v91; // [rsp+1A8h] [rbp+A8h]
  __int64 v92; // [rsp+1B0h] [rbp+B0h]
  __int64 v93; // [rsp+1B8h] [rbp+B8h]
  __int64 v94; // [rsp+1C0h] [rbp+C0h]
  int v95; // [rsp+1C8h] [rbp+C8h]
  int v96; // [rsp+1CCh] [rbp+CCh]
  __int64 v97; // [rsp+1D0h] [rbp+D0h]
  __int64 v98; // [rsp+1D8h] [rbp+D8h]
  __int64 v99; // [rsp+1E0h] [rbp+E0h]
  int v100; // [rsp+1E8h] [rbp+E8h]
  int v101; // [rsp+1ECh] [rbp+ECh]
  __int64 v102; // [rsp+1F0h] [rbp+F0h]
  __int64 v103; // [rsp+1F8h] [rbp+F8h]
  __int64 v104; // [rsp+200h] [rbp+100h]
  int v105; // [rsp+208h] [rbp+108h]
  int v106; // [rsp+20Ch] [rbp+10Ch]
  __int64 *v107; // [rsp+210h] [rbp+110h]
  __int64 v108; // [rsp+218h] [rbp+118h]

  v69 = a2;
  *(_QWORD *)&v70[1] = a7;
  v14 = a3;
  v74 = a9;
  Pool2 = 0LL;
  v73 = a10;
  v72 = a12;
  v16 = 0LL;
  v76 = a1;
  v17 = a5;
  v67 = a4;
  v71 = a5;
  v81 = 0LL;
  v70[0] = 0;
  v65 = 0;
  v66 = 0;
  v75 = 0LL;
  *(_OWORD *)v79 = 0LL;
  v80 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v77 = 0LL;
  v78 = 0LL;
  if ( a2 <= 2 || a2 == 5 )
  {
    if ( (a3 & 0xF5617EEC) != 0 )
    {
      v62 = 16;
      goto LABEL_97;
    }
    if ( a4 > 2 )
    {
      v62 = 32;
      goto LABEL_97;
    }
    if ( !a5 && a2 == 1 )
    {
      v62 = 48;
LABEL_97:
      ContextForFile = -1073741811;
      SetFailureLocation(a13, (int)v16, 1, -1073741811, v62);
      return (unsigned int)ContextForFile;
    }
    if ( a6 )
    {
      if ( (a3 & 0x8001) == 1 )
      {
        v62 = 64;
        goto LABEL_97;
      }
      v16 = (HANDLE)*a6;
      if ( !*a6 && (a6[1] || a6[2]) )
      {
        v62 = 80;
        goto LABEL_96;
      }
      v17 = a6[1];
      if ( v17 && !a4 )
      {
        v62 = 96;
LABEL_96:
        LODWORD(v16) = 0;
        goto LABEL_97;
      }
      v18 = a6[2];
      if ( v18 && a4 != 2 )
      {
        v62 = 112;
        goto LABEL_96;
      }
      if ( a6[3] && (v16 || v17 || v18) )
      {
        v62 = 128;
        goto LABEL_96;
      }
    }
    v65 = CmpAcquireShutdownRundown(v17, v16);
    if ( !v65 )
      return (unsigned int)-1073741431;
    v68 = 1;
    if ( a6 )
    {
      if ( *a6 )
      {
        VolumeClusterSize = CmpGetVolumeClusterSize((HANDLE)*a6);
        ContextForFile = VolumeClusterSize;
        if ( VolumeClusterSize < 0 )
        {
          SetFailureLocation(a13, 0, 1, VolumeClusterSize, 160);
          goto LABEL_112;
        }
      }
    }
    Pool2 = (void *)ExAllocatePool2(0x40uLL);
    if ( !Pool2 )
    {
      ContextForFile = -1073741801;
      goto LABEL_112;
    }
    if ( (v14 & 0x2000000) != 0 )
      v22 = CmpAllocateForNonPagedHive(0x12E0u, 0);
    else
      v22 = CmpAllocate(4832LL, 0LL, 808537411LL);
    v23 = v22;
    if ( v22 )
    {
      CmpHiveInitialize(v22, Pool2);
      if ( !a6 )
        goto LABEL_33;
      if ( *a6 )
      {
        ContextForFile = ObDuplicateObject((_DWORD)PsInitialSystemProcess, *a6, 0, (int)v23 + 1544, 0, 512, 2, 0);
        if ( ContextForFile < 0 )
          goto LABEL_70;
        v24 = *(void **)(v23 + 1544);
        ObjectInformation[0] = 256;
        ZwSetInformationObject(v24, ObjectHandleFlagInformation, ObjectInformation, 2u);
      }
      v25 = a6[3];
      if ( v25 )
      {
        ContextForFile = ObDuplicateObject((_DWORD)PsInitialSystemProcess, v25, 0, (int)v23 + 1560, 0, 512, 2, 0);
        if ( ContextForFile < 0 )
          goto LABEL_70;
        v57 = *(void **)(v23 + 1560);
        ObjectInformation[0] = 256;
        ZwSetInformationObject(v57, ObjectHandleFlagInformation, ObjectInformation, 2u);
      }
      if ( v67 == 1 )
      {
        v27 = a6[1];
        if ( !v27 )
          goto LABEL_33;
        v28 = (void **)(v23 + 1552);
      }
      else
      {
        if ( v67 != 2 )
          goto LABEL_33;
        v26 = a6[1];
        if ( v26 )
        {
          ContextForFile = ObDuplicateObject((_DWORD)PsInitialSystemProcess, v26, 0, (int)v23 + 1576, 0, 512, 2, 0);
          if ( ContextForFile < 0 )
            goto LABEL_70;
          v51 = *(void **)(v23 + 1576);
          ObjectInformation[0] = 256;
          ZwSetInformationObject(v51, ObjectHandleFlagInformation, ObjectInformation, 2u);
        }
        v27 = a6[2];
        if ( !v27 )
        {
LABEL_33:
          if ( (a8 & 0x8000000) != 0 )
            *(_DWORD *)(v23 + 4120) |= 0x80u;
          if ( a8 < 0 )
            *(_DWORD *)(v23 + 4120) |= 0x800u;
          CmpAttachToRegistryProcess(&ApcState);
          v66 = 1;
          v31 = (__int64 (__fastcall *)(unsigned int, char))CmpAllocate;
          if ( (v14 & 0x2000000) != 0 )
            v31 = CmpAllocateForNonPagedHive;
          v79[0] = (__int64)v31;
          v79[1] = (__int64)CmpFree;
          *((_QWORD *)&v80 + 1) = CmpFileWrite;
          v81 = CmpFileRead;
          v32 = v69;
          *(_QWORD *)(v23 + 56) = a13;
          *(_QWORD *)a13 = v23;
          if ( v32 != 2 && v32 != 5 && (v32 || !a6 || !*a6) )
          {
            if ( a11 )
            {
              LODWORD(v77) = *(_DWORD *)(a11 + 112);
              *((_QWORD *)&v77 + 1) = *(_QWORD *)(a11 + 104);
              LODWORD(v78) = *(_DWORD *)(a11 + 128);
              v53 = &v78;
              *((_QWORD *)&v78 + 1) = *(_QWORD *)(a11 + 120);
              v52 = &v77;
            }
            else
            {
              v52 = (__int128 *)v75;
              v53 = (__int128 *)v75;
            }
            v35 = v69;
            started = HvHiveStartMemoryBacked(
                        v23,
                        v71,
                        (__int64)v79,
                        v68,
                        *(__int64 *)&v70[1],
                        a8,
                        v74,
                        v73,
                        (__int64)v52,
                        (__int64)v53,
                        v72,
                        (__int64)v70,
                        a13);
            ContextForFile = started;
            if ( started < 0 )
            {
              SetFailureLocation(a13, 0, 1, started, 232);
              goto LABEL_70;
            }
LABEL_47:
            if ( (v14 & 0x180000) == 0x80000 && (a8 & 0x800000) == 0 )
            {
              v38 = *(_QWORD *)(v23 + 64);
              if ( *(_DWORD *)(v38 + 24) < 6u || (*(_DWORD *)(v38 + 144) & 2) == 0 )
              {
                ContextForFile = -1073741811;
                goto LABEL_70;
              }
            }
            if ( ((v35 - 1) & 0xFFFFFFFA) == 0 && v35 != 6 )
            {
              v39 = CmCheckRegistry(v23);
              ContextForFile = v39;
              if ( v39 == -2147483606 )
              {
                if ( (unsigned int)dword_140E09EE8 > 5 )
                {
                  ContextForFile = 0;
                  if ( tlgKeywordOn((__int64)&dword_140E09EE8, 0x400000000000LL) )
                  {
                    v67 = v58;
                    v84 = &v67;
                    v86 = ObjectInformation;
                    v59 = *(unsigned __int16 *)(a13 + 8);
                    v60 = *(unsigned __int16 *)(a13 + 10);
                    v92 = a13 + 8;
                    v88 = &v68;
                    v94 = a13 + 12;
                    v61 = *(unsigned __int8 *)(a13 + 394);
                    v95 = 12 * v59;
                    v99 = a13 + 108;
                    v100 = 12 * v60;
                    v104 = a13 + 396;
                    v107 = &v71;
                    LOWORD(v69) = v61;
                    ObjectInformation[0] = v59;
                    LOWORD(v68) = v60;
                    v97 = a13 + 10;
                    v102 = a13 + 394;
                    v85 = 4LL;
                    v87 = 2LL;
                    v89 = 2LL;
                    v90 = &v69;
                    v91 = 2LL;
                    v93 = 2LL;
                    v96 = 0;
                    v98 = 2LL;
                    v101 = 0;
                    v103 = 2LL;
                    v105 = 8 * v61;
                    v106 = 0;
                    v71 = 0x1000000LL;
                    v108 = 8LL;
                    tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140E09EE8,
                      (unsigned __int8 *)&dword_14005782A + 2,
                      0LL,
                      0LL,
                      0xDu,
                      &v83);
                  }
                  goto LABEL_55;
                }
              }
              else if ( v39 < 0 )
              {
                SetFailureLocation(a13, 0, 1, v39, 240);
                goto LABEL_70;
              }
            }
            ContextForFile = 0;
LABEL_55:
            if ( (a8 & 0x800000) != 0 )
            {
              v56 = *(_QWORD *)(v23 + 64);
              if ( *(_DWORD *)(v56 + 24) < 6u || (*(_DWORD *)(v56 + 144) & 2) == 0 )
              {
                HvMarkBaseBlockDirty(v23);
                *(_DWORD *)(*(_QWORD *)(v23 + 64) + 24LL) = 6;
                *(_DWORD *)(*(_QWORD *)(v23 + 64) + 144LL) |= 2u;
              }
            }
            v40 = *(unsigned __int16 **)&v70[1];
            CmpReorganizeHive(v23);
            CmpLockRegistry(v42, v41, v43, v44);
            HvLockHiveFlusherShared(v23);
            HvLockHiveWriter(v23);
            if ( v35 )
              ContextForFile = HvCheckAndUpdateHiveBackupTimeStamp(v23);
            else
              *(_BYTE *)(v23 + 195) = 1;
            HvUnlockHiveWriter(v23);
            HvUnlockHiveFlusherShared(v23);
            CmpUnlockRegistry(v45);
            if ( ContextForFile >= 0 )
            {
              v47 = (_QWORD *)(v23 + 1608);
              if ( (a8 & 0x1000000) != 0 )
              {
                *(_QWORD *)(v23 + 1616) = v23 + 1608;
                *v47 = v47;
              }
              else
              {
                CmpLockHiveListExclusive();
                Thread = PspSiloMonitorLock.WaitBlock[2].Thread;
                if ( *(struct _KTHREAD **)PspSiloMonitorLock.WaitBlock[2].Thread != (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
                  __fastfail(3u);
                *v47 = &PspSiloMonitorLock.WaitBlockFill11[112];
                *(_QWORD *)(v23 + 1616) = Thread;
                *(_QWORD *)&Thread->Header.Lock = v47;
                PspSiloMonitorLock.WaitBlock[2].Thread = (struct _KTHREAD *)(v23 + 1608);
                CmpUnlockHiveList();
                CmpRecheckHiveVolumePolicy(v23);
              }
              v48 = v76;
              *(_QWORD *)(v23 + 56) = 0LL;
              *v48 = v23;
              CmpReleaseShutdownRundown(v46);
              v65 = 0;
              if ( (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
                CmpLogHiveInitializeEvent(v23, v35, v40, v70[0]);
              ContextForFile = 0;
LABEL_71:
              CmpDetachFromRegistryProcess(&ApcState);
              goto LABEL_72;
            }
            SetFailureLocation(a13, 0, 1, ContextForFile, 256);
LABEL_70:
            CmpDestroyHive((PVOID)v23);
            if ( !v66 )
              goto LABEL_72;
            goto LABEL_71;
          }
          v33 = v14 | 0x20000;
          ContextForFile = CmpVolumeManagerGetContextForFile(CmpAllocateForNonPagedHive, *a6, v30, v23 + 4800);
          if ( ContextForFile < 0 )
            goto LABEL_70;
          if ( !(unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal(*(_QWORD *)(v23 + 4800))
            && (a8 & 0x2000000) == 0
            && (v33 & 0x8000) == 0
            && (a8 & 0x40) == 0 )
          {
            if ( (a8 & 0x20) != 0 )
              goto LABEL_44;
            if ( (int)CmpAdjustFileCFSafety((HANDLE)*a6, 1) >= 0 )
            {
              *(_DWORD *)(v23 + 4120) |= 0x10000u;
LABEL_44:
              CanHiveSectionBeExtended = CmpVolumeContextCanHiveSectionBeExtended(*(_QWORD *)(v23 + 4800));
              v35 = v69;
              v36 = v33 | 0x8000000;
              if ( CanHiveSectionBeExtended )
                v36 = v33;
              v14 = v36;
              v37 = HvHiveStartFileBacked(
                      v23,
                      (__int64)v79,
                      v68,
                      v63,
                      *(__int64 *)&v70[1],
                      a8,
                      v74,
                      v73,
                      v72,
                      (__int64)v70,
                      a13);
              ContextForFile = v37;
              if ( v37 < 0 )
              {
                SetFailureLocation(a13, 0, 1, v37, 228);
                goto LABEL_70;
              }
              goto LABEL_47;
            }
          }
          v33 |= 0x800000u;
          goto LABEL_44;
        }
        v28 = (void **)(v23 + 1584);
      }
      ContextForFile = ObDuplicateObject((_DWORD)PsInitialSystemProcess, v27, 0, (_DWORD)v28, 0, 512, 2, 0);
      if ( ContextForFile < 0 )
        goto LABEL_70;
      v29 = *v28;
      ObjectInformation[0] = 256;
      ZwSetInformationObject(v29, ObjectHandleFlagInformation, ObjectInformation, 2u);
      goto LABEL_33;
    }
    ContextForFile = -1073741670;
    LODWORD(v16) = 0;
    v49 = 176;
  }
  else
  {
    ContextForFile = -1073741811;
    v49 = 0;
  }
  SetFailureLocation(a13, (int)v16, 1, ContextForFile, v49);
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    v66 = 0;
  }
LABEL_72:
  if ( v65 )
LABEL_112:
    CmpReleaseShutdownRundown(v21);
  return (unsigned int)ContextForFile;
}
