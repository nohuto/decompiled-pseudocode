/*
 * XREFs of PnpProcessQueryRemoveAndEject @ 0x1409B3C10
 * Callers:
 *     PnpProcessTargetDeviceEvent @ 0x1409B3AC4 (PnpProcessTargetDeviceEvent.c)
 *     PnpShutdownDevices @ 0x140B6EEA4 (PnpShutdownDevices.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PnpRequestDeviceAction @ 0x14047BEF8 (PnpRequestDeviceAction.c)
 *     PnpIsChainDereferenced @ 0x1404DC41C (PnpIsChainDereferenced.c)
 *     PipAreDriversLoaded @ 0x140516350 (PipAreDriversLoaded.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpFinalizeDeviceRemovalForReset @ 0x1407A570C (PnpFinalizeDeviceRemovalForReset.c)
 *     PnpProcessCompletedEject @ 0x1407A7890 (PnpProcessCompletedEject.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1407B029C (PpProfileBeginHardwareProfileTransition.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1407B02D0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x1407B0558 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileQueryHardwareProfileChange @ 0x1407B061C (PpProfileQueryHardwareProfileChange.c)
 *     IopEjectDevice @ 0x1407B5808 (IopEjectDevice.c)
 *     IopQueryDockRemovalInterface @ 0x1407B59D8 (IopQueryDockRemovalInterface.c)
 *     PiEventAllocatePendingEjectRelations @ 0x1407BB7A0 (PiEventAllocatePendingEjectRelations.c)
 *     PiProcessQueryRemoveNoFdo @ 0x1407BB834 (PiProcessQueryRemoveNoFdo.c)
 *     PoGetLightestSystemStateForEject @ 0x1407CBA68 (PoGetLightestSystemStateForEject.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeUserFlags @ 0x1409B08C0 (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1409B1158 (PipClearDevNodeUserFlags.c)
 *     PiEventRemovalPostSurpriseRemove @ 0x1409B30F0 (PiEventRemovalPostSurpriseRemove.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409B337C (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpInvalidateRelationsInList @ 0x1409B372C (PnpInvalidateRelationsInList.c)
 *     PnpCompileDeviceInstancePaths @ 0x1409B394C (PnpCompileDeviceInstancePaths.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1409B4458 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1409B4610 (PnpNotifyUserModeDeviceRemoval.c)
 *     PiEventAllocateVetoBuffer @ 0x1409B47CC (PiEventAllocateVetoBuffer.c)
 *     PiDetermineDeleteType @ 0x1409B485C (PiDetermineDeleteType.c)
 *     PiCheckRemovalPreconditions @ 0x1409B4930 (PiCheckRemovalPreconditions.c)
 *     PnpBuildRemovalRelationList @ 0x1409B4990 (PnpBuildRemovalRelationList.c)
 *     PnpResizeTargetDeviceBlock @ 0x1409B4A30 (PnpResizeTargetDeviceBlock.c)
 *     PnpAllocateCriticalMemory @ 0x1409B4B74 (PnpAllocateCriticalMemory.c)
 *     PiSendTargetDeviceRemoveCompleteNotification @ 0x1409B4C30 (PiSendTargetDeviceRemoveCompleteNotification.c)
 *     PiInvalidateSpeculativeRelations @ 0x1409B4C90 (PiInvalidateSpeculativeRelations.c)
 *     PiProcessQueryAndCancelRemoval @ 0x1409B568C (PiProcessQueryAndCancelRemoval.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x1409B584C (PiEventAreDeviceRelationsExcluded.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1409B586C (PnpBuildUnsafeRemovalDeviceList.c)
 *     IopFreeRelationList @ 0x1409B5B30 (IopFreeRelationList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1409B6D78 (PnpDeleteLockedDeviceNodes.c)
 *     IoGetLegacyVetoList @ 0x1409C05B0 (IoGetLegacyVetoList.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     IopEnumerateRelations @ 0x140AED59C (IopEnumerateRelations.c)
 *     PnpRestartDeviceNode @ 0x140B23CFC (PnpRestartDeviceNode.c)
 *     PiRestartRemovalRelations @ 0x140B3BCBC (PiRestartRemovalRelations.c)
 *     PiLogSurpriseRemoveEvent @ 0x140B4F184 (PiLogSurpriseRemoveEvent.c)
 *     PnpTrackQueryRemoveDevices @ 0x140B58E48 (PnpTrackQueryRemoveDevices.c)
 *     PnpFinalizeVetoedRemove @ 0x140B61B54 (PnpFinalizeVetoedRemove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpProcessQueryRemoveAndEject(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r13d
  PVOID *v3; // r12
  _QWORD *v4; // r14
  unsigned int v5; // esi
  __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  int v9; // ebx
  GUID *v11; // r8
  __int64 *v12; // rbx
  int v13; // r9d
  PVOID v14; // rbx
  unsigned int v15; // r15d
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // r10d
  _DWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  char v24; // bl
  int v25; // eax
  __int64 v26; // rdx
  char v27; // al
  unsigned int v28; // ecx
  __int64 v29; // rcx
  char v30; // al
  unsigned int v31; // ebx
  PVOID i; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // r9
  __int64 VetoBuffer; // rax
  _BYTE *v40; // r14
  _QWORD *v41; // r11
  __int64 v42; // rdx
  unsigned int *v43; // r8
  int v44; // r13d
  __int64 v45; // rbx
  char v46; // r12
  bool v47; // r13
  __int64 v48; // rcx
  __int64 v49; // rdx
  int v50; // ebx
  __int64 v51; // r12
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  int v56; // eax
  char v57; // al
  __int64 v58; // rcx
  _DWORD *v59; // rcx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rbx
  __int64 v63; // r13
  __int64 PendingEjectRelations; // rax
  _QWORD *v65; // rbx
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rdx
  int LightestSystemStateForEject; // eax
  PVOID v70; // [rsp+40h] [rbp-49h] BYREF
  __int64 v71; // [rsp+48h] [rbp-41h] BYREF
  PVOID Object; // [rsp+50h] [rbp-39h]
  PVOID *v73; // [rsp+58h] [rbp-31h]
  PCWSTR SourceString; // [rsp+60h] [rbp-29h] BYREF
  __int64 v75; // [rsp+68h] [rbp-21h] BYREF
  unsigned int **v76; // [rsp+70h] [rbp-19h] BYREF
  __int64 CriticalMemory; // [rsp+78h] [rbp-11h]
  __int64 v78; // [rsp+80h] [rbp-9h] BYREF
  PVOID P; // [rsp+88h] [rbp-1h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp+7h] BYREF
  char v82; // [rsp+F8h] [rbp+6Fh]
  char v83; // [rsp+100h] [rbp+77h]
  bool v84; // [rsp+100h] [rbp+77h]
  PVOID v85; // [rsp+108h] [rbp+7Fh]

  v1 = *a1;
  v2 = 0;
  SourceString = 0LL;
  v71 = 0LL;
  v3 = 0LL;
  v75 = 0LL;
  v4 = *(_QWORD **)(v1 + 160);
  v5 = 7;
  v85 = 0LL;
  v78 = 0LL;
  v76 = 0LL;
  v70 = 0LL;
  P = 0LL;
  Object = v4;
  DestinationString = 0LL;
  if ( v4 )
    v6 = *(_QWORD *)(v4[39] + 40LL);
  else
    v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiEngineLock, 1u);
  ExAcquireResourceSharedLite(&IopDeviceTreeLock, 1u);
  v8 = *(_DWORD *)(v6 + 300);
  if ( v8 == 789 || v8 == 790 )
  {
    v9 = -1073741738;
    goto LABEL_5;
  }
  v37 = PiDetermineDeleteType(v1);
  v5 = v37;
  if ( v37 != 4 )
  {
    LOBYTE(v38) = 1;
    PnpRecordBlackboxPnpEventInformation(v1, v37, 0LL, v38);
  }
  v9 = PiCheckRemovalPreconditions(v5, v1);
  if ( v9 >= 0 )
  {
    if ( v5 != 4 )
      goto LABEL_177;
    if ( (*(_DWORD *)(v6 + 396) & 0x80000) != 0 )
    {
      v9 = 0;
      goto LABEL_5;
    }
    v56 = *(_DWORD *)(v6 + 568);
    if ( v56 == 3 || v56 == 4 )
    {
      v57 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(v6 + 560) & 0x10) == 0 )
      {
        v9 = -2147483608;
        PnpFinalizeVetoedRemove(v1, 8LL, v6 + 40);
        goto LABEL_5;
      }
      v57 = 1;
    }
    v9 = 0;
    if ( v57 )
    {
LABEL_177:
      if ( !v5 && !(unsigned int)PipAreDriversLoaded(v6) )
      {
        v9 = PiProcessQueryRemoveNoFdo(v1);
        goto LABEL_5;
      }
      VetoBuffer = PiEventAllocateVetoBuffer(v5);
      v73 = (PVOID *)VetoBuffer;
      v3 = (PVOID *)VetoBuffer;
      if ( VetoBuffer )
      {
        if ( (int)PnpBuildRemovalRelationList(v4, v5, VetoBuffer, &v76) >= 0 )
        {
          v40 = v76;
          v24 = 0;
          v82 = 0;
          v83 = 0;
          CriticalMemory = PnpAllocateCriticalMemory(v5, 64LL, 8LL * **v76, 1315991120LL);
          v41 = (_QWORD *)CriticalMemory;
          v85 = (PVOID)CriticalMemory;
          if ( !CriticalMemory )
          {
            v9 = -1073741670;
            goto LABEL_73;
          }
          v18 = 0;
          while ( 1 )
          {
            if ( !v40[8] )
              goto LABEL_53;
            v19 = *(_DWORD **)v40;
            if ( v18 >= **(_DWORD **)v40 )
              goto LABEL_53;
            if ( !v19 )
              break;
            _mm_lfence();
            v20 = v18++;
            v21 = *(_QWORD *)&v19[6 * v20 + 4];
            if ( v19[6 * v20 + 6] || (v5 & 0xFFFFFFFB) == 0 )
            {
              if ( v21 )
                v22 = *(_DWORD **)(*(_QWORD *)(v21 + 312) + 40LL);
              else
                v22 = 0LL;
              if ( v5 != 2 )
              {
                if ( !v5 )
                  goto LABEL_104;
                v23 = v22[142];
                if ( v23 == 1 )
                {
                  v82 = 1;
                }
                else
                {
                  if ( v23 )
                    v24 = 1;
                  v83 = v24;
                }
                if ( v5 == 4 )
                {
LABEL_104:
                  if ( (v22[99] & 0x1000) != 0 )
                  {
                    v49 = 1LL;
LABEL_129:
                    PnpFinalizeVetoedRemove(v1, v49, v22 + 10);
                    v9 = -2147483608;
LABEL_73:
                    IopFreeRelationList(v40);
                    if ( v9 != -2147483608 )
                      PnpFinalizeVetoedRemove(v1, 0LL, 0LL);
                    goto LABEL_5;
                  }
                  if ( v22[75] == 787 )
                  {
                    v49 = 5LL;
                    goto LABEL_129;
                  }
                }
              }
              v17 = v2++;
              v41[v17] = v21;
            }
          }
          v83 = v24;
LABEL_53:
          v85 = v41;
          v25 = PnpResizeTargetDeviceBlock(a1, v5);
          v1 = *a1;
          v9 = v25;
          if ( v25 >= 0 )
          {
            v27 = PiEventAreDeviceRelationsExcluded(v5, v26, 0LL);
            v9 = PnpCompileDeviceInstancePaths(v28, (__int64)v40, v27, (__int64 *)&v70);
            if ( v5 == 3 )
              PnpBuildUnsafeRemovalDeviceList(v29, v40, &P);
          }
          if ( v9 < 0 )
            goto LABEL_73;
          if ( !v82 )
            goto LABEL_58;
          PpProfileBeginHardwareProfileTransition(v83);
          v50 = v2 - 1;
          if ( (int)(v2 - 1) >= 0 )
          {
            v51 = CriticalMemory + 8LL * v50;
            do
            {
              if ( *(_QWORD *)v51 )
                v58 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v51 + 312LL) + 40LL);
              else
                v58 = 0LL;
              if ( *(_DWORD *)(v58 + 568) == 1 )
                PpProfileIncludeInHardwareProfileTransition(v58, 3);
              v51 -= 8LL;
              --v50;
            }
            while ( v50 >= 0 );
            v40 = v76;
            v3 = v73;
          }
          if ( v5 == 4 )
          {
            if ( (int)IoGetLegacyVetoList(&SourceString, v3) >= 0 && *(_DWORD *)v3 )
            {
              PpProfileCancelHardwareProfileTransition();
              IopFreeRelationList(v40);
              v59 = *(_DWORD **)(v1 + 48);
              if ( v59 )
                *v59 = *(_DWORD *)v3;
              if ( *(_QWORD *)(v1 + 56) )
              {
                RtlInitUnicodeString(&DestinationString, SourceString);
                RtlCopyUnicodeString(*(PUNICODE_STRING *)(v1 + 56), &DestinationString);
              }
              ExFreePoolWithTag((PVOID)SourceString, 0);
              SourceString = 0LL;
              goto LABEL_78;
            }
            if ( (int)PpProfileQueryHardwareProfileChange(v83, 0, (int)v3, (__int64)(v3 + 1)) < 0 )
            {
              PpProfileCancelHardwareProfileTransition();
              IopFreeRelationList(v40);
              PnpFinalizeVetoedRemove(v1, *(unsigned int *)v3, v3 + 1);
              v9 = -2147483608;
              goto LABEL_5;
            }
          }
          else
          {
LABEL_58:
            if ( (v5 & 0xFFFFFFFB) != 0 )
            {
              if ( ((v5 - 3) & 0xFFFFFFFD) != 0 )
                goto LABEL_16;
              PiLogSurpriseRemoveEvent(v1, v5, v40);
              PnpDeleteLockedDeviceNodes((_DWORD)Object, (_DWORD)v40, 3, 0, 0, 0, 0LL, 0LL);
LABEL_15:
              if ( v5 == 3 )
              {
                v14 = P;
                if ( P )
                {
                  PnpNotifyUserModeDeviceRemoval(v1, P, &GUID_DEVICE_SURPRISE_REMOVAL, 0LL, 0LL, 0LL);
                  ExFreePoolWithTag(v14, 0x4B706E50u);
                }
                v11 = &GUID_TARGET_DEVICE_REMOVE_COMPLETE;
LABEL_17:
                PnpNotifyUserModeDeviceRemoval(v1, v70, v11, 0LL, 0LL, 0LL);
                v12 = (__int64 *)CriticalMemory;
                PiSendTargetDeviceRemoveCompleteNotification(CriticalMemory, v2);
                if ( (*(_DWORD *)(v6 + 704) & 0x8000) != 0 && (*(_DWORD *)(v6 + 396) & 0x10) != 0 )
                  PnpFinalizeDeviceRemovalForReset(v6, (int)v40);
                PiInvalidateSpeculativeRelations(v5, v40);
                if ( ((v5 - 3) & 0xFFFFFFFD) == 0 )
                {
                  PiEventRemovalPostSurpriseRemove(v1, v5, &v76);
                  ExReleaseResourceLite(&IopDeviceTreeLock);
                  ExReleaseResourceLite(&PiEngineLock);
                  KeLeaveCriticalRegion();
                  PnpIsChainDereferenced(v12, v2, 0, 1u, 0LL);
                  v9 = 0;
                  goto LABEL_20;
                }
                v44 = (int)Object;
                if ( *(_DWORD *)(v6 + 568) )
                {
                  IopQueryDockRemovalInterface((int)Object, &v71);
                  v45 = v71;
                  if ( v71 )
                    guard_dispatch_icall_no_overrides(*(_QWORD *)(v71 + 8), 3LL);
                }
                else
                {
                  v45 = v71;
                }
                if ( v5 )
                {
                  if ( v5 != 4 )
                  {
                    LOBYTE(v13) = 0;
LABEL_84:
                    PnpDeleteLockedDeviceNodes(
                      v44,
                      (_DWORD)v40,
                      2,
                      v13,
                      *(_DWORD *)(v1 + 16),
                      *(_DWORD *)(v1 + 20),
                      0LL,
                      0LL);
                    v46 = HIWORD(*(_DWORD *)(v6 + 560)) & 1;
                    v47 = (*(_DWORD *)(v6 + 560) & 8) != 0;
                    v84 = v47;
                    if ( v5 != 4 )
                    {
                      PiRestartRemovalRelations(v1, v40, Object);
                      PnpUnlinkDeviceRemovalRelations(v48, (__int64)v40);
                      if ( !v5 )
                        PnpTrackQueryRemoveDevices(v40, 0LL);
                      IopFreeRelationList(v40);
                      if ( v5 == 2 )
                      {
                        PnpNotifyUserModeDeviceRemoval(v1, v70, &GUID_TARGET_DEVICE_REMOVE_COMPLETE, 0LL, 0LL, 0LL);
                      }
                      else if ( !v5
                             && (*(_DWORD *)(v1 + 152) & 2) == 0
                             && (*(_DWORD *)(v6 + 396) & 0x2000) != 0
                             && *(_DWORD *)(v6 + 404) == 18 )
                      {
                        PipClearDevNodeProblem(v6);
                        PnpRestartDeviceNode(v6);
                        PnpRequestDeviceAction(*(PVOID *)(v6 + 32), 0x10u, 1, 0LL, 0LL, 0LL, 0LL);
                      }
                      goto LABEL_89;
                    }
                    if ( (*(_DWORD *)(v6 + 560) & 8) == 0 && !v46 )
                    {
                      PnpUnlinkDeviceRemovalRelations(1LL, (__int64)v40);
                      PnpTrackQueryRemoveDevices(v40, 0LL);
                      IopFreeRelationList(v40);
LABEL_89:
                      if ( v45 )
                      {
                        guard_dispatch_icall_no_overrides(*(_QWORD *)(v45 + 8), 1LL);
                        guard_dispatch_icall_no_overrides(*(_QWORD *)(v45 + 8), v55);
                      }
                      v9 = 0;
                      goto LABEL_92;
                    }
                    v75 = 1LL;
                    if ( (unsigned __int8)IopEnumerateRelations(
                                            (_DWORD)v40,
                                            (unsigned int)&v75,
                                            (unsigned int)&v78,
                                            0,
                                            0LL) )
                    {
                      do
                      {
                        if ( v78 )
                        {
                          v61 = *(_QWORD *)(v78 + 312);
                          v62 = *(_QWORD *)(v61 + 40);
                          if ( v62 )
                          {
                            PipSetDevNodeFlags(*(_QWORD *)(v61 + 40), 0x80000u);
                            v63 = *(_QWORD *)(v62 + 696);
                            if ( v63 )
                            {
                              IopFreeRelationList(*(PVOID *)(v63 + 64));
                              *(_QWORD *)(v63 + 64) = 0LL;
                              *(_QWORD *)(v62 + 696) = 0LL;
                            }
                          }
                        }
                      }
                      while ( (unsigned __int8)IopEnumerateRelations(
                                                 (_DWORD)v40,
                                                 (unsigned int)&v75,
                                                 (unsigned int)&v78,
                                                 0,
                                                 0LL) );
                      v47 = v84;
                    }
                    PnpUnlinkDeviceRemovalRelations(v60, (__int64)v40);
                    PendingEjectRelations = PiEventAllocatePendingEjectRelations(v1, (__int64)v40, v82, v71);
                    v65 = (_QWORD *)PendingEjectRelations;
                    if ( !PendingEjectRelations )
                    {
                      v66 = v71;
                      if ( v71 )
                      {
                        guard_dispatch_icall_no_overrides(*(_QWORD *)(v71 + 8), 1LL);
                        guard_dispatch_icall_no_overrides(*(_QWORD *)(v66 + 8), v67);
                      }
                      if ( v82 )
                        PpProfileCancelHardwareProfileTransition();
                      PnpInvalidateRelationsInList(v40, 4u, 0, 1);
                      PnpTrackQueryRemoveDevices(v40, 0LL);
                      IopFreeRelationList(v40);
                      PnpFinalizeVetoedRemove(v1, 0LL, 0LL);
LABEL_172:
                      v9 = -2147483608;
LABEL_92:
                      v3 = v73;
                      goto LABEL_5;
                    }
                    *(_QWORD *)(v6 + 696) = PendingEjectRelations;
                    LightestSystemStateForEject = PoGetLightestSystemStateForEject(
                                                    v82,
                                                    v47,
                                                    v46,
                                                    (_DWORD *)(PendingEjectRelations + 92));
                    if ( LightestSystemStateForEject < 0 )
                    {
                      v68 = 9LL;
                      if ( LightestSystemStateForEject != -1073741090 )
                        v68 = 0LL;
                      PnpFinalizeVetoedRemove(v1, v68, 0LL);
                      v65[6] = 0LL;
                      *((_BYTE *)v65 + 89) = 0;
                      v65[1] = v65;
                      *v65 = v65;
                      PnpProcessCompletedEject(v65);
                      goto LABEL_172;
                    }
                    PpDevNodeUnlockTree(1LL);
                    IopEjectDevice(Object, (__int64)v65);
                    v3 = v73;
                    v9 = 259;
                    goto LABEL_23;
                  }
                }
                else
                {
                  PipSetDevNodeFlags(v6, 0x2000000u);
                }
                v13 = 1;
                goto LABEL_84;
              }
LABEL_16:
              v11 = &GUID_DEVICE_REMOVE_PENDING;
              goto LABEL_17;
            }
          }
          v30 = v82;
          v31 = 0;
          for ( i = v85; ; i = v85 )
          {
            v33 = *(_QWORD *)v40;
            if ( v31 >= **(_DWORD **)v40 )
              break;
            if ( !v33 )
            {
              v82 = v30;
              v85 = i;
              break;
            }
            _mm_lfence();
            v34 = v31++;
            v35 = *(_QWORD *)(v33 + 24 * v34 + 16);
            if ( v35 )
              v36 = *(_QWORD *)(*(_QWORD *)(v35 + 312) + 40LL);
            else
              v36 = 0LL;
            PipSetDevNodeUserFlags(v36, 0x100u);
            v30 = v82;
          }
          v9 = PiProcessQueryAndCancelRemoval(v5, v1, v40, v2, CriticalMemory, v3, &v70);
          if ( v9 < 0 )
          {
            if ( v82 )
              PpProfileCancelHardwareProfileTransition();
            v15 = 0;
            while ( 1 )
            {
              v16 = *(_QWORD *)v40;
              if ( v15 >= **(_DWORD **)v40 || !v16 )
                break;
              _mm_lfence();
              v52 = v15++;
              v53 = *(_QWORD *)(v16 + 24 * v52 + 16);
              if ( v53 )
                v54 = *(_QWORD *)(*(_QWORD *)(v53 + 312) + 40LL);
              else
                v54 = 0LL;
              PipClearDevNodeUserFlags(v54, 256);
            }
            IopFreeRelationList(v40);
            goto LABEL_5;
          }
          goto LABEL_15;
        }
        v42 = *(unsigned int *)v3;
        v43 = (unsigned int *)(v3 + 1);
      }
      else
      {
        v43 = 0LL;
        v42 = 0LL;
      }
      PnpFinalizeVetoedRemove(v1, v42, v43);
LABEL_78:
      v9 = -2147483608;
    }
  }
LABEL_5:
  ExReleaseResourceLite(&IopDeviceTreeLock);
  ExReleaseResourceLite(&PiEngineLock);
  KeLeaveCriticalRegion();
  if ( v9 == -1073741738 )
  {
LABEL_6:
    if ( !v3 )
      goto LABEL_7;
    goto LABEL_23;
  }
LABEL_20:
  if ( v5 == 4 )
    goto LABEL_6;
  if ( !v3 )
  {
    PnpRecordBlackboxPnpEventInformation(v1, v5, 0LL, 0LL);
    goto LABEL_7;
  }
  PnpRecordBlackboxPnpEventInformation(v1, v5, v3, 0LL);
LABEL_23:
  if ( !PnpShutdownEvent.Header.SignalState )
  {
    ExFreePoolWithTag(v3[2], 0x4D706E50u);
    v3[2] = 0LL;
    ExFreePoolWithTag(v3, 0x4D706E50u);
  }
LABEL_7:
  if ( v70 )
    ExFreePoolWithTag(v70, 0);
  if ( v85 )
    ExFreePoolWithTag(v85, 0);
  return (unsigned int)v9;
}
