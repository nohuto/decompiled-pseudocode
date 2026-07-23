/*
 * XREFs of PiProcessNewDeviceNode @ 0x1409D9370
 * Callers:
 *     PiProcessNewDeviceNodeWorker @ 0x1407A7BB0 (PiProcessNewDeviceNodeWorker.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1409D92F8 (PiProcessNewDeviceNodeAsync.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140498254 (McTemplateK0p_EtwWriteTransfer.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404DCA0C (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIrpDeviceEnumerated @ 0x1404E30E8 (PnpIrpDeviceEnumerated.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     McTemplateK0pzz_EtwWriteTransfer @ 0x1405DCB84 (McTemplateK0pzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzzz_EtwWriteTransfer @ 0x1405DCC68 (McTemplateK0zzzzz_EtwWriteTransfer.c)
 *     PpvUtilFailDriver @ 0x1405DF948 (PpvUtilFailDriver.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PnpDisableDevice @ 0x1407A7170 (PnpDisableDevice.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1407AC750 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1407AEDDC (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x1407B0358 (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x1407B0BF0 (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x1407B4A38 (PnpTraceDockDeviceEnumeration.c)
 *     PiIommuPutInterface @ 0x1407B7AA8 (PiIommuPutInterface.c)
 *     PnpCheckDeviceIdsChanged @ 0x140944830 (PnpCheckDeviceIdsChanged.c)
 *     _CmGetDeviceRegProp @ 0x140956C70 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     PiUpdateDevicePanel @ 0x1409ABC40 (PiUpdateDevicePanel.c)
 *     PnpSetPlugPlayEvent @ 0x1409ABCFC (PnpSetPlugPlayEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x1409ABF4C (PiDcUpdateDeviceContainerMembership.c)
 *     PnpSaveDeviceCapabilities @ 0x1409AC4E8 (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1409AF618 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1409B01B0 (PipClearDevNodeFlags.c)
 *     PpIrpQueryCapabilities @ 0x1409B0694 (PpIrpQueryCapabilities.c)
 *     PipSetDevNodeUserFlags @ 0x1409B08C0 (PipSetDevNodeUserFlags.c)
 *     PnpIrpQueryID @ 0x1409B0948 (PnpIrpQueryID.c)
 *     PipClearDevNodeUserFlags @ 0x1409B1158 (PipClearDevNodeUserFlags.c)
 *     PnpFixupID @ 0x1409B1598 (PnpFixupID.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409B247C (PnpNewDeviceNodeDependencyCheck.c)
 *     PiQueryResourceRequirements @ 0x1409B2FCC (PiQueryResourceRequirements.c)
 *     PiDeviceRegistration @ 0x1409B4E08 (PiDeviceRegistration.c)
 *     KseAddHardwareId @ 0x1409D80D0 (KseAddHardwareId.c)
 *     PiQueryRemovableDeviceOverride @ 0x1409DA988 (PiQueryRemovableDeviceOverride.c)
 *     PnpQueryDeviceText @ 0x1409DAEC4 (PnpQueryDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1409DAF9C (PiBuildDeviceNodeInstancePath.c)
 *     PnpQueryExtendedAddress @ 0x1409DB148 (PnpQueryExtendedAddress.c)
 *     PipDmgDestroyIommuExtension @ 0x1409DB1F0 (PipDmgDestroyIommuExtension.c)
 *     PiIommuGetInterface @ 0x1409DB224 (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x1409DB334 (PnpGetDeviceLocationStrings.c)
 *     PnpQueryBusInformation @ 0x1409DBB28 (PnpQueryBusInformation.c)
 *     PnpGenerateDeviceIdsHash @ 0x1409DBCCC (PnpGenerateDeviceIdsHash.c)
 *     PnpQueryDeviceID @ 0x1409DBDEC (PnpQueryDeviceID.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     PnpLogDuplicateDevice @ 0x140A37A98 (PnpLogDuplicateDevice.c)
 *     PiQueryAndAllocateBootResources @ 0x140AA072C (PiQueryAndAllocateBootResources.c)
 *     PnpFindAlternateStringData @ 0x140AA4B50 (PnpFindAlternateStringData.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140AE8284 (PpDevCfgProcessDeviceOperations.c)
 *     PipMakeGloballyUniqueId @ 0x140AF4A38 (PipMakeGloballyUniqueId.c)
 *     _CmCreateDevice @ 0x140AF540C (_CmCreateDevice.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140AF95E0 (PnpIsDeviceInstanceEnabled.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140B09F00 (PnpInitializeInheritedRestrictedSd.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140B0FDF8 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140B10C0C (PipGenerateContainerID.c)
 *     PnpInitializeSessionId @ 0x140B1B3F8 (PnpInitializeSessionId.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140B1B6A4 (PnpClearDeviceTemporaryProperties.c)
 *     PipDmgInitializeIommuExtension @ 0x140B21C1C (PipDmgInitializeIommuExtension.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140B2BAF0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDevCfgProcessDevice @ 0x140B466DC (PpDevCfgProcessDevice.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessNewDeviceNode(ULONG_PTR BugCheckParameter2)
{
  __int64 v2; // rcx
  PVOID v3; // r14
  int v4; // esi
  ULONG_PTR v5; // r13
  int v6; // eax
  int v7; // r12d
  int v8; // ebx
  int v9; // edx
  char v10; // al
  char v11; // r15
  int v12; // eax
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // eax
  PVOID v16; // r12
  int GloballyUniqueId; // ebx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  const wchar_t *v21; // r12
  PVOID v22; // rax
  bool v23; // zf
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  int Device; // ebx
  __int64 v28; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v30; // esi
  int v31; // ebx
  int v32; // eax
  int v33; // edx
  int v34; // eax
  _QWORD *v35; // rax
  ULONG_PTR v36; // rsi
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r8
  PVOID v40; // rsi
  __int64 v41; // rcx
  _WORD *v42; // rcx
  __int64 v43; // rcx
  unsigned __int16 *v44; // rbx
  _WORD *v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  _WORD *v49; // rcx
  __int64 v50; // rcx
  unsigned __int16 *v51; // rbx
  _WORD *v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rcx
  int v55; // eax
  int v56; // eax
  struct _KTHREAD *v57; // rax
  __int64 v58; // rax
  char v59; // si
  __int64 v60; // rdx
  unsigned int v61; // eax
  int v62; // edx
  struct _KTHREAD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rdx
  int FailedInstallProblemStatus; // r8d
  int v67; // eax
  int v68; // ecx
  int v69; // eax
  _QWORD *v70; // rcx
  int v71; // eax
  PVOID v72; // rbx
  __int64 v73; // rcx
  int v74; // r12d
  int v75; // eax
  PVOID v76; // r15
  __int64 v77; // rcx
  WCHAR *v78; // rsi
  __int64 v79; // r8
  PVOID v80; // rdx
  struct _KTHREAD *v81; // rax
  struct _KTHREAD *v82; // rax
  struct _KTHREAD *v83; // rax
  PVOID v84; // rbx
  int v85; // eax
  int v86; // ecx
  int v87; // eax
  char v88; // cl
  int v89; // ebx
  int v90; // eax
  unsigned int v91; // edx
  char v92; // al
  PVOID v93; // rcx
  int AlternateStringData; // eax
  unsigned int v95; // ebx
  __int64 v96; // rax
  int v97; // r12d
  PVOID v98; // rbx
  int v99; // ebx
  __int64 v100; // rdx
  int v101; // eax
  int v102; // r12d
  unsigned int v103; // eax
  __int64 v104; // r8
  int v105; // eax
  __int64 v106; // r8
  int v107; // eax
  struct _KTHREAD *v108; // rax
  struct _KTHREAD *v109; // rax
  int v110; // ebx
  int v111; // eax
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  PVOID v115; // rcx
  unsigned int v116; // ebx
  int v118; // [rsp+58h] [rbp-B0h] BYREF
  int v119; // [rsp+5Ch] [rbp-ACh]
  unsigned int v120; // [rsp+60h] [rbp-A8h] BYREF
  int v121; // [rsp+64h] [rbp-A4h]
  char v122; // [rsp+68h] [rbp-A0h] BYREF
  char v123; // [rsp+69h] [rbp-9Fh] BYREF
  int v124; // [rsp+6Ch] [rbp-9Ch]
  __int64 v125; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID v127; // [rsp+80h] [rbp-88h]
  void *v128; // [rsp+88h] [rbp-80h] BYREF
  int v129; // [rsp+90h] [rbp-78h] BYREF
  int v130; // [rsp+94h] [rbp-74h]
  int v131; // [rsp+98h] [rbp-70h]
  int v132; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v133; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v134; // [rsp+A8h] [rbp-60h] BYREF
  PVOID v135; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v136; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v137; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v138; // [rsp+C8h] [rbp-40h] BYREF
  const wchar_t *v139; // [rsp+D0h] [rbp-38h] BYREF
  PVOID v140; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v141; // [rsp+E0h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+E8h] [rbp-20h] BYREF
  WCHAR *v143; // [rsp+F0h] [rbp-18h] BYREF
  PVOID v144; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp-8h] BYREF
  __int64 v146; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v147[80]; // [rsp+118h] [rbp+10h] BYREF
  int v148; // [rsp+168h] [rbp+60h] BYREF
  int v149; // [rsp+16Ch] [rbp+64h]
  GUID Guid; // [rsp+1A8h] [rbp+A0h] BYREF

  SourceString = 0LL;
  v136 = 0LL;
  memset_0(&v148, 0, 0x40uLL);
  Guid = 0LL;
  v141 = 0LL;
  DestinationString = 0LL;
  v135 = 0LL;
  v139 = 0LL;
  v144 = 0LL;
  v140 = 0LL;
  P = 0LL;
  v138 = 0LL;
  v143 = 0LL;
  v129 = 0;
  v132 = 0;
  v123 = 0;
  v128 = 0LL;
  if ( (byte_140EF412B & 0x10) != 0 )
    McTemplateK0p_EtwWriteTransfer(v2, (__int64)KMPnPEvt_ProcessNewDevice_Start, 0LL, BugCheckParameter2);
  LOBYTE(v125) = 0;
  LOWORD(v118) = 0;
  v119 = 0;
  v3 = 0LL;
  v124 = 0;
  v4 = 0;
  v5 = *(_QWORD *)(BugCheckParameter2 + 32);
  v146 = MEMORY[0xFFFFF78000000014];
  LODWORD(v134) = 0;
  v133 = 0;
  v131 = 0;
  v130 = 0;
  v120 = 0;
  v121 = 0;
  PiPnpRtlBeginOperation(&v144);
  PipClearDevNodeFlags(BugCheckParameter2, 0x2000000);
  v6 = PnpQueryDeviceID(BugCheckParameter2, &v136, &v139);
  if ( v6 < 0 )
  {
    v7 = v6;
    if ( v6 == -1073479624 )
      v7 = -1073741823;
    v124 = v7;
  }
  v8 = PpIrpQueryCapabilities(v5, &v148);
  PipClearDevNodeUserFlags(BugCheckParameter2, 2);
  v10 = v149;
  v11 = 0;
  if ( v8 >= 0 )
  {
    if ( (v149 & 0x20000) != 0 )
    {
      PipSetDevNodeUserFlags(BugCheckParameter2, 2u);
      v10 = v149;
    }
    if ( (v10 & 0x40) != 0 )
      v11 = 1;
  }
  if ( (v10 & 0x20) != 0 )
  {
    if ( *(_DWORD *)(BugCheckParameter2 + 568) == 4 )
      PpProfileCancelTransitioningDock(BugCheckParameter2, v9);
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 568) = v12;
  v137 = -1LL;
  PnpQueryExtendedAddress(v5, &v137);
  PnpQueryDeviceText(*(_QWORD *)(BugCheckParameter2 + 32), 0LL, v13, &v135);
  PnpQueryDeviceText(*(_QWORD *)(BugCheckParameter2 + 32), 1LL, v14, &v138);
  v15 = PnpIrpQueryID(*(_QWORD **)(BugCheckParameter2 + 32), 3, &P);
  v16 = P;
  GloballyUniqueId = v15;
  v127 = P;
  if ( v15 < 0 )
  {
    if ( v15 != -1073479624 && v15 != -1073741670 )
    {
LABEL_24:
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        v16 = 0LL;
        v127 = 0LL;
      }
      goto LABEL_26;
    }
LABEL_22:
    PipSetDevNodeProblem(BugCheckParameter2, 9, GloballyUniqueId);
    v18 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)(v18 + 396) & 0x200000) == 0 )
    {
      PipSetDevNodeFlags(v18, 0x200000u);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL));
    }
    goto LABEL_24;
  }
  if ( !(2 * (unsigned int)PnpFixupID((int *)P, 0xC8u, 0, 0, *(_QWORD *)(BugCheckParameter2 + 16) + 56LL)) )
  {
    GloballyUniqueId = -1073479624;
    goto LABEL_22;
  }
LABEL_26:
  if ( v11 )
  {
    if ( GloballyUniqueId == -1073741637 )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 9, -1073741637);
      PipSetDevNodeFlags(*(_QWORD *)(BugCheckParameter2 + 16), 0x200000u);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL));
    }
  }
  else if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0 || *(_DWORD *)(BugCheckParameter2 + 404) != 9 )
  {
    v19 = *(_QWORD **)(BugCheckParameter2 + 16);
    if ( v19 != IopRootDeviceNode )
    {
      v20 = v19[4];
      v128 = 0LL;
      GloballyUniqueId = PipMakeGloballyUniqueId(v20, v16, &v128);
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      v127 = v128;
    }
  }
  v21 = v139;
  v22 = v127;
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v23 = (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0;
      v124 = GloballyUniqueId;
      if ( v23 || *(_DWORD *)(BugCheckParameter2 + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v24 = -1073741670;
          v25 = 3;
        }
        else
        {
          v24 = GloballyUniqueId;
          v25 = 19;
        }
        PipSetDevNodeProblem(BugCheckParameter2, v25, v24);
      }
      v22 = v127;
    }
    Device = PiBuildDeviceNodeInstancePath(BugCheckParameter2, v136, v21, v22);
    if ( Device < 0 )
    {
      v121 = v4;
      goto LABEL_55;
    }
    if ( (byte_140EF412B & 0x10) != 0 )
      McTemplateK0pzz_EtwWriteTransfer(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL),
        v26,
        v28,
        BugCheckParameter2,
        *(_QWORD *)(BugCheckParameter2 + 48),
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL));
    CurrentThread = KeGetCurrentThread();
    P = 0LL;
    v119 = 0;
    v30 = 0;
    v122 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    Device = CmCreateDevice(
               PiPnpRtlCtx,
               *(_QWORD *)(BugCheckParameter2 + 48),
               983103,
               (unsigned int)&P,
               (__int64)&v122,
               0);
    if ( Device >= 0 )
    {
      v30 = 2 - (v122 != 0);
      v119 = v30;
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    if ( Device < 0 )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 19, Device);
      v3 = P;
LABEL_55:
      v30 = v119;
      v124 = Device;
      v31 = v121;
      goto LABEL_56;
    }
    v31 = 0;
    v3 = P;
    if ( v30 == 1 )
      v31 = 0x20000;
    v121 = v31;
LABEL_56:
    PpMarkDeviceStackExtensionFlag(v5, 16, 1);
    v32 = *(_DWORD *)(BugCheckParameter2 + 300);
    if ( v32 == 769 )
    {
      v33 = 772;
LABEL_60:
      PipSetDevNodeState(BugCheckParameter2, v33);
      goto LABEL_61;
    }
    if ( v32 == 770 )
    {
      v33 = 771;
      goto LABEL_60;
    }
LABEL_61:
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 )
    {
      v34 = *(_DWORD *)(BugCheckParameter2 + 404);
      if ( v34 == 9 || ((v34 - 3) & 0xFFFFFFEF) == 0 )
        goto LABEL_103;
    }
    if ( v30 == 1 )
      break;
    v35 = PnpDeviceObjectFromDeviceInstanceWithTag(BugCheckParameter2 + 40, 0x65706E50u);
    v36 = (ULONG_PTR)v35;
    if ( !v35 )
      goto LABEL_99;
    if ( v35 == (_QWORD *)v5 )
    {
      ObfDereferenceObjectWithTag(v35, 0x65706E50u);
LABEL_99:
      v30 = v119;
      goto LABEL_100;
    }
    if ( !v11 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock(v5, (PVOID)*(unsigned __int16 *)(v5 + 2));
      v41 = *(_QWORD *)(v5 + 8);
      if ( v41 )
      {
        IoAddTriageDumpDataBlock(v41, (PVOID)(unsigned int)*(__int16 *)(v41 + 2));
        v42 = (_WORD *)(*(_QWORD *)(v5 + 8) + 56LL);
        if ( *v42 )
        {
          IoAddTriageDumpDataBlock((ULONG)v42, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v5 + 8) + 56LL));
        }
      }
      v43 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
      if ( v43 )
      {
        v44 = (unsigned __int16 *)(v43 + 40);
        IoAddTriageDumpDataBlock(v43, (PVOID)0x388);
        if ( *v44 )
        {
          IoAddTriageDumpDataBlock((ULONG)v44, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v44 + 1), (PVOID)*v44);
        }
        v45 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) + 56LL);
        if ( *v45 )
        {
          IoAddTriageDumpDataBlock((ULONG)v45, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) + 56LL));
        }
        v46 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) + 16LL);
        if ( v46 && *(_WORD *)(v46 + 56) )
        {
          IoAddTriageDumpDataBlock(v46 + 56, (PVOID)2);
          v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v47 + 64), (PVOID)*(unsigned __int16 *)(v47 + 56));
        }
      }
      IoAddTriageDumpDataBlock(v36, (PVOID)*(unsigned __int16 *)(v36 + 2));
      v48 = *(_QWORD *)(v36 + 8);
      if ( v48 )
      {
        IoAddTriageDumpDataBlock(v48, (PVOID)(unsigned int)*(__int16 *)(v48 + 2));
        v49 = (_WORD *)(*(_QWORD *)(v36 + 8) + 56LL);
        if ( *v49 )
        {
          IoAddTriageDumpDataBlock((ULONG)v49, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v36 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v36 + 8) + 56LL));
        }
      }
      v50 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
      if ( v50 )
      {
        v51 = (unsigned __int16 *)(v50 + 40);
        IoAddTriageDumpDataBlock(v50, (PVOID)0x388);
        if ( *v51 )
        {
          IoAddTriageDumpDataBlock((ULONG)v51, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v51 + 1), (PVOID)*v51);
        }
        v52 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL) + 56LL);
        if ( *v52 )
        {
          IoAddTriageDumpDataBlock((ULONG)v52, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL) + 56LL));
        }
        v53 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL) + 16LL);
        if ( v53 && *(_WORD *)(v53 + 56) )
        {
          IoAddTriageDumpDataBlock(v53 + 56, (PVOID)2);
          v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v54 + 64), (PVOID)*(unsigned __int16 *)(v54 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, v5, v36, 0LL);
    }
    ZwClose(v3);
    v149 &= ~0x40u;
    v3 = 0LL;
    v11 = 0;
    PipSetDevNodeProblem(BugCheckParameter2, 42, 0);
    v37 = *(_QWORD *)(*(_QWORD *)(v36 + 312) + 40LL);
    PnpLogDuplicateDevice((PCWSTR)v136, (PCWSTR)v127);
    if ( (byte_140EF412B & 0x40) != 0 )
      McTemplateK0zzzzz_EtwWriteTransfer(
        *(_QWORD *)(v37 + 16),
        v38,
        v39,
        (const wchar_t *)v136,
        v21,
        (const wchar_t *)v127,
        *(const wchar_t **)(*(_QWORD *)(v37 + 16) + 48LL),
        *(const wchar_t **)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL));
    if ( *(_QWORD *)(v37 + 16) == *(_QWORD *)(BugCheckParameter2 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v36, 0x65706E50u);
    v40 = v127;
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 32LL), v127, &v128);
    if ( v40 )
      ExFreePoolWithTag(v40, 0);
    v22 = v128;
    v4 = v121;
    v127 = v128;
  }
  v63 = KeGetCurrentThread();
  --v63->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  if ( v3 && v135 )
  {
    v64 = -1LL;
    do
      ++v64;
    while ( *((_WORD *)v135 + v64) );
    CmSetDeviceRegProp(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      (__int64)v3,
      1u,
      1,
      (__int64)v135,
      2 * v64 + 2,
      v31);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
LABEL_100:
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 && *(_DWORD *)(BugCheckParameter2 + 404) == 42 )
    PipClearDevNodeProblem(BugCheckParameter2);
LABEL_103:
  if ( v3 )
  {
    if ( v30 != 1 )
      PnpClearDeviceTemporaryProperties(*(_QWORD *)(BugCheckParameter2 + 48), v3);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL) + 2,
      v31);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v146,
      8,
      v31);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v31);
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4,
      v31);
  }
  if ( (v149 & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
      || (v55 = *(_DWORD *)(BugCheckParameter2 + 404), v55 != 1) && v55 != 14 )
    {
      PnpDisableDevice(BugCheckParameter2, 0x1Du);
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v56 = *(_DWORD *)(BugCheckParameter2 + 404), v56 != 9) && ((v56 - 3) & 0xFFFFFFEF) != 0 )
  {
    v57 = KeGetCurrentThread();
    --v57->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    if ( v3 && v138 )
    {
      v58 = -1LL;
      do
        ++v58;
      while ( *((_WORD *)v138 + v58) );
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (__int64)v3,
        0xEu,
        1,
        (__int64)v138,
        2 * v58 + 2,
        v31);
    }
    v59 = v30 == 1;
    LOBYTE(v118) = v59;
    PnpSaveDeviceCapabilities(BugCheckParameter2, &v148, v59);
    if ( v137 != -1 )
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_ExtendedAddress,
        9,
        (__int64)&v137,
        8,
        v31);
    v60 = *(_QWORD *)(BugCheckParameter2 + 48);
    v129 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v60,
                (__int64)v3,
                0xBu,
                (__int64)&v132,
                (__int64)&v120,
                (__int64)&v129,
                0) < 0
      || v132 != 4
      || v129 != 4 )
    {
      v61 = 0;
      v62 = 1;
      v120 = 0;
      goto LABEL_137;
    }
    v61 = v120;
    if ( (v120 & 0x20) != 0 )
    {
      LOBYTE(v118) = v59;
      v62 = 18;
      if ( (v120 & 1) != 0 )
        goto LABEL_138;
LABEL_137:
      LOBYTE(v118) = 1;
LABEL_138:
      if ( (v149 & 0x100) != 0 )
      {
        v65 = *(_QWORD *)(BugCheckParameter2 + 48);
        v120 = v61 | 0x400;
        CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v65, (__int64)v3, 0xBu, 4, (__int64)&v120, 4, v31);
      }
      else
      {
        if ( v62 == 28 )
        {
          FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(
                                         *(_QWORD *)(BugCheckParameter2 + 48),
                                         (int)v3);
          v62 = 28;
        }
        else
        {
          FailedInstallProblemStatus = 0;
        }
        PipSetDevNodeProblem(BugCheckParameter2, v62, FailedInstallProblemStatus);
      }
    }
    else if ( (v120 & 0x40) != 0 )
    {
      v62 = 28;
      LOBYTE(v118) = v59;
      goto LABEL_138;
    }
    v67 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(BugCheckParameter2 + 32), BugCheckParameter2 + 40);
    v68 = v124;
    if ( v67 < 0 )
      v68 = v67;
    v124 = v68;
    if ( PnpBootMode )
    {
      *(_DWORD *)(BugCheckParameter2 + 704) |= 0x1000u;
      v131 = 2;
    }
    else
    {
      v69 = (unsigned __int8)v125;
      if ( (v120 & 0x40000) != 0 )
        v69 = 1;
      LODWORD(v125) = v69;
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  v70 = *(_QWORD **)(BugCheckParameter2 + 32);
  LODWORD(v128) = 0;
  v71 = PnpIrpQueryID(v70, 1, &v140);
  v72 = v140;
  P = v140;
  if ( v71 < 0 )
  {
    if ( v71 == -1073479624 )
      goto LABEL_156;
    goto LABEL_158;
  }
  LODWORD(v128) = 2 * PnpFixupID((int *)v140, 0x400u, 1, 0xFFFFFFFF, *(_QWORD *)(BugCheckParameter2 + 16) + 56LL);
  if ( !(_DWORD)v128 )
  {
    v71 = -1073479624;
LABEL_156:
    PipSetDevNodeProblem(BugCheckParameter2, 9, v71);
    v73 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)(v73 + 396) & 0x200000) == 0 )
    {
      PipSetDevNodeFlags(v73, 0x200000u);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL));
    }
LABEL_158:
    if ( v72 )
    {
      ExFreePoolWithTag(v72, 0);
      v72 = 0LL;
      LODWORD(v128) = 0;
      P = 0LL;
    }
  }
  KseAddHardwareId((WCHAR *)v72);
  v74 = 0;
  v75 = PnpIrpQueryID(*(_QWORD **)(BugCheckParameter2 + 32), 2, &v141);
  v76 = v141;
  if ( v75 < 0 )
  {
    if ( v75 == -1073479624 )
      goto LABEL_164;
    goto LABEL_166;
  }
  v74 = 2 * PnpFixupID((int *)v141, 0x400u, 1, 0xFFFFFFFF, *(_QWORD *)(BugCheckParameter2 + 16) + 56LL);
  if ( !v74 )
  {
    v75 = -1073479624;
LABEL_164:
    PipSetDevNodeProblem(BugCheckParameter2, 9, v75);
    v77 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)(v77 + 396) & 0x200000) == 0 )
    {
      PipSetDevNodeFlags(v77, 0x200000u);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL));
    }
LABEL_166:
    if ( v76 )
    {
      ExFreePoolWithTag(v76, 0);
      v76 = 0LL;
      v74 = 0;
    }
  }
  PnpGenerateDeviceIdsHash(v72, v76, BugCheckParameter2 + 684);
  PnpIrpQueryID(*(_QWORD **)(BugCheckParameter2 + 32), 5, &SourceString);
  v78 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v78, 0);
      v78 = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(BugCheckParameter2, v72, v76, &v123) >= 0 )
  {
    LOBYTE(v79) = v123;
  }
  else
  {
    if ( (v149 & 0x20) != 0 || (v149 & 0x40000) != 0 || (v149 & 0x10) == 0 )
      LOBYTE(v79) = 0;
    else
      v79 = 1LL;
    if ( v78 )
      goto LABEL_186;
  }
  v80 = 0LL;
  if ( v119 != 1 )
    v80 = v3;
  if ( (int)PipGenerateContainerID(BugCheckParameter2, v80, v79, v78, &v143) >= 0 )
  {
    if ( v78 )
      ExFreePoolWithTag(v78, 0);
    v78 = v143;
  }
LABEL_186:
  if ( !v78
    || (RtlInitUnicodeString(&DestinationString, v78),
        RtlGUIDFromString(&DestinationString, (GUID *)(BugCheckParameter2 + 664)) < 0) )
  {
    *(_OWORD *)(BugCheckParameter2 + 664) = 0LL;
  }
  v81 = KeGetCurrentThread();
  --v81->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(BugCheckParameter2, 0x20u);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v3 && v78 )
  {
    v82 = KeGetCurrentThread();
    --v82->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(BugCheckParameter2 + 48), (__int64)v3, v78);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  v83 = KeGetCurrentThread();
  --v83->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  if ( v3 )
  {
    if ( (_BYTE)v118 || v119 == 1 )
    {
      v84 = P;
    }
    else
    {
      v84 = P;
      v85 = PnpCheckDeviceIdsChanged(
              BugCheckParameter2,
              (__int64)v3,
              (const WCHAR *)P,
              (int)v128,
              1,
              (_BYTE *)&v118 + 1);
      v86 = BYTE1(v118);
      if ( v85 < 0 )
        v86 = 0;
      v130 = v86;
      BYTE1(v118) = v86;
      if ( !(_BYTE)v86 )
      {
        v87 = PnpCheckDeviceIdsChanged(BugCheckParameter2, (__int64)v3, (const WCHAR *)v76, v74, 0, (_BYTE *)&v118 + 1);
        v88 = BYTE1(v118);
        if ( v87 < 0 )
          v88 = 0;
        LOBYTE(v130) = v88;
      }
    }
    if ( v84 )
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (__int64)v3,
        2u,
        7,
        (__int64)v84,
        (int)v128,
        v121);
    v89 = v121;
    if ( v76 )
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (__int64)v3,
        3u,
        7,
        (__int64)v76,
        v74,
        v121);
    if ( (_BYTE)v130 || (_BYTE)v125 )
    {
      if ( (_BYTE)v118 )
      {
        v91 = v120;
        v92 = (char)v134;
      }
      else
      {
        v90 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(BugCheckParameter2 + 48), (__int64)v3, &v133);
        v91 = v120;
        if ( v90 < 0 )
        {
          v92 = 0;
        }
        else
        {
          v92 = v133;
          v91 = v133 | v120;
          v120 |= v133;
        }
      }
      if ( (v92 & 0x20) != 0 || (v91 & 0x40000) != 0 )
      {
        v120 = v91 & 0xFFFBFFFF;
        CmSetDeviceRegProp(
          *(__int64 *)&PiPnpRtlCtx,
          *(_QWORD *)(BugCheckParameter2 + 48),
          (__int64)v3,
          0xBu,
          4,
          (__int64)&v120,
          4,
          v89);
        LOBYTE(v91) = v120;
      }
      if ( (v91 & 0x20) != 0 )
      {
        LOBYTE(v118) = 1;
        PipSetDevNodeProblem(BugCheckParameter2, 18, 0);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v3 )
  {
    v93 = v135;
    AlternateStringData = 0;
    v134 = 0LL;
    v95 = 0;
    LODWORD(v125) = 0;
    if ( v135 )
    {
      v96 = -1LL;
      do
        ++v96;
      while ( *((_WORD *)v135 + v96) );
      v95 = 2 * v96 + 2;
      AlternateStringData = PnpFindAlternateStringData(v135, v95, &v134, &v125);
      v93 = v135;
    }
    v97 = v121;
    PnpSetObjectProperty(
      PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v93,
      v95,
      v121);
    if ( (int)PnpGetDeviceLocationStrings(BugCheckParameter2, &v134, &v125) >= 0 )
    {
      v98 = v134;
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v134,
        2 * v125,
        v97);
      ExFreePoolWithTag(v98, 0);
    }
  }
  PnpQueryBusInformation(BugCheckParameter2);
  memset_0(v147, 0, sizeof(v147));
  PipDmgDestroyIommuExtension(BugCheckParameter2);
  if ( (int)PiIommuGetInterface(*(_QWORD *)(BugCheckParameter2 + 32)) >= 0 )
  {
    v99 = PipDmgInitializeIommuExtension(BugCheckParameter2);
    PiIommuPutInterface((__int64)v147, v100);
    v101 = v124;
    if ( v99 < 0 )
      v101 = v99;
    v124 = v101;
  }
  if ( (v149 & 0x4000) != 0
    || (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 && *(_DWORD *)(BugCheckParameter2 + 404) == 14 )
  {
    goto LABEL_237;
  }
  if ( !(_BYTE)v118 )
  {
    if ( v3 )
      PpDevCfgProcessDeviceOperations(BugCheckParameter2, v3);
LABEL_237:
    v102 = v119;
    goto LABEL_238;
  }
  v102 = v119;
  v103 = v131;
  if ( v119 == 1 )
    v103 = v131 | 1;
  PpDevCfgProcessDevice(BugCheckParameter2, v3, v103);
LABEL_238:
  PiQueryResourceRequirements(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v105 = *(_DWORD *)(BugCheckParameter2 + 404), v105 != 22)
    && v105 != 29
    && v105 != 14
    && v105 != 9
    && v105 != 3
    && v105 != 19 )
  {
    PnpIsDeviceInstanceEnabled(v3, BugCheckParameter2 + 40, 1LL);
  }
  if ( v3 )
  {
    LOBYTE(v104) = v102 == 1;
    PnpInitializeSessionId(BugCheckParameter2, v3, v104);
    LOBYTE(v106) = v102 == 1;
    PnpInitializeInheritedRestrictedSd(BugCheckParameter2, v3, v106);
  }
  PiQueryAndAllocateBootResources(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v107 = *(_DWORD *)(BugCheckParameter2 + 404), v107 != 9) && ((v107 - 3) & 0xFFFFFFEF) != 0 )
  {
    v108 = KeGetCurrentThread();
    --v108->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    PnpSaveDeviceCapabilities(BugCheckParameter2, &v148, v102 == 1);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    PpHotSwapUpdateRemovalPolicy(BugCheckParameter2);
    v109 = KeGetCurrentThread();
    --v109->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    v110 = PiDeviceRegistration(
             (unsigned __int16 *)(BugCheckParameter2 + 40),
             1,
             (UNICODE_STRING *)(BugCheckParameter2 + 56));
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    if ( v110 < 0 )
      PipSetDevNodeProblem(BugCheckParameter2, 19, v110);
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v111 = *(_DWORD *)(BugCheckParameter2 + 404), v111 != 9) && v111 != 3 )
  {
    PnpIrpDeviceEnumerated(v5);
    if ( v3 )
      PiUpdateDevicePanel(BugCheckParameter2, v3);
    v113 = *(_QWORD *)(BugCheckParameter2 + 48);
    if ( v113 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v112, v113, 1);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v114, *(_QWORD *)(BugCheckParameter2 + 48), 14);
    }
    PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, (__int64 *)v5);
    PnpNewDeviceNodeDependencyCheck(BugCheckParameter2);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v76 )
    ExFreePoolWithTag(v76, 0);
  if ( v78 )
    ExFreePoolWithTag(v78, 0);
  if ( v3 )
    ZwClose(v3);
  if ( v127 )
    ExFreePoolWithTag(v127, 0);
  if ( v138 )
    ExFreePoolWithTag(v138, 0);
  if ( v135 )
    ExFreePoolWithTag(v135, 0);
  if ( v136 )
    ExFreePoolWithTag(v136, 0);
  v115 = v144;
  if ( v144 )
    PiPnpRtlEndOperation((char *)v144);
  if ( (byte_140EF412B & 0x10) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)v115, (__int64)KMPnPEvt_ProcessNewDevice_Stop, 0LL, BugCheckParameter2);
  v116 = v124;
  if ( *(_DWORD *)(BugCheckParameter2 + 568) )
    PnpTraceDockDeviceEnumeration();
  return v116;
}
