/*
 * XREFs of PiProcessNewDeviceNode @ 0x140AA5E3C
 * Callers:
 *     PiProcessNewDeviceNodeWorker @ 0x1407A5070 (PiProcessNewDeviceNodeWorker.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140AA5DC4 (PiProcessNewDeviceNodeAsync.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14049E704 (McTemplateK0p_EtwWriteTransfer.c)
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x1404E3478 (PpMarkDeviceStackExtensionFlag.c)
 *     PnpIrpDeviceEnumerated @ 0x1404E9D38 (PnpIrpDeviceEnumerated.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     McTemplateK0pzz_EtwWriteTransfer @ 0x1405DA384 (McTemplateK0pzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzzz_EtwWriteTransfer @ 0x1405DA468 (McTemplateK0zzzzz_EtwWriteTransfer.c)
 *     PpvUtilFailDriver @ 0x1405DCFE0 (PpvUtilFailDriver.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PnpDisableDevice @ 0x1407A4630 (PnpDisableDevice.c)
 *     PiDevCfgGetFailedInstallProblemStatus @ 0x1407A9AD4 (PiDevCfgGetFailedInstallProblemStatus.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1407ABD9C (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpProfileCancelTransitioningDock @ 0x1407AD2F8 (PpProfileCancelTransitioningDock.c)
 *     PnpSetInvalidIDEvent @ 0x1407ADB90 (PnpSetInvalidIDEvent.c)
 *     PnpTraceDockDeviceEnumeration @ 0x1407B19D8 (PnpTraceDockDeviceEnumeration.c)
 *     PiIommuPutInterface @ 0x1407B4A48 (PiIommuPutInterface.c)
 *     PiUpdateDevicePanel @ 0x140908BF0 (PiUpdateDevicePanel.c)
 *     PnpSetPlugPlayEvent @ 0x140908CAC (PnpSetPlugPlayEvent.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140909994 (PiDcUpdateDeviceContainerMembership.c)
 *     PnpSaveDeviceCapabilities @ 0x140909F30 (PnpSaveDeviceCapabilities.c)
 *     _CmSetDeviceRegProp @ 0x14090A0E8 (_CmSetDeviceRegProp.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x14090D4E8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeFlags @ 0x14090DD60 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x14090E080 (PipClearDevNodeFlags.c)
 *     PpIrpQueryCapabilities @ 0x14090E564 (PpIrpQueryCapabilities.c)
 *     PipSetDevNodeUserFlags @ 0x14090E790 (PipSetDevNodeUserFlags.c)
 *     PnpIrpQueryID @ 0x14090E818 (PnpIrpQueryID.c)
 *     PipClearDevNodeUserFlags @ 0x14090F028 (PipClearDevNodeUserFlags.c)
 *     PnpFixupID @ 0x14090F468 (PnpFixupID.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x14091034C (PnpNewDeviceNodeDependencyCheck.c)
 *     PiQueryResourceRequirements @ 0x140910EEC (PiQueryResourceRequirements.c)
 *     PiDeviceRegistration @ 0x140912D28 (PiDeviceRegistration.c)
 *     PipClearDevNodeProblem @ 0x140914C5C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x140916A54 (PipSetDevNodeProblem.c)
 *     PnpCheckDeviceIdsChanged @ 0x140982820 (PnpCheckDeviceIdsChanged.c)
 *     _CmGetDeviceRegProp @ 0x140996210 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140999B20 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     _PnpSetObjectProperty @ 0x1409DBEB0 (_PnpSetObjectProperty.c)
 *     KseAddHardwareId @ 0x1409E4D00 (KseAddHardwareId.c)
 *     PnpFindAlternateStringData @ 0x140AA3080 (PnpFindAlternateStringData.c)
 *     PnpLogDuplicateDevice @ 0x140AA4B1C (PnpLogDuplicateDevice.c)
 *     PipDmgInitializeIommuExtension @ 0x140AA4E2C (PipDmgInitializeIommuExtension.c)
 *     PiQueryAndAllocateBootResources @ 0x140AA5534 (PiQueryAndAllocateBootResources.c)
 *     PiQueryRemovableDeviceOverride @ 0x140AA7454 (PiQueryRemovableDeviceOverride.c)
 *     PnpQueryDeviceText @ 0x140AA7990 (PnpQueryDeviceText.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140AA7A68 (PiBuildDeviceNodeInstancePath.c)
 *     PnpQueryExtendedAddress @ 0x140AA7C14 (PnpQueryExtendedAddress.c)
 *     PipDmgDestroyIommuExtension @ 0x140AA7CBC (PipDmgDestroyIommuExtension.c)
 *     PiIommuGetInterface @ 0x140AA7CF0 (PiIommuGetInterface.c)
 *     PnpGetDeviceLocationStrings @ 0x140AA7E00 (PnpGetDeviceLocationStrings.c)
 *     PnpQueryBusInformation @ 0x140AA85F4 (PnpQueryBusInformation.c)
 *     PnpGenerateDeviceIdsHash @ 0x140AA8798 (PnpGenerateDeviceIdsHash.c)
 *     PnpQueryDeviceID @ 0x140AA88B8 (PnpQueryDeviceID.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140AD10DC (PpDevCfgProcessDeviceOperations.c)
 *     PipMakeGloballyUniqueId @ 0x140AF2168 (PipMakeGloballyUniqueId.c)
 *     _CmCreateDevice @ 0x140AF2C20 (_CmCreateDevice.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140AF6F40 (PnpIsDeviceInstanceEnabled.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140B07DD0 (PnpInitializeInheritedRestrictedSd.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140B0E5C0 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140B0F3DC (PipGenerateContainerID.c)
 *     PnpInitializeSessionId @ 0x140B18FB0 (PnpInitializeSessionId.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140B19254 (PnpClearDeviceTemporaryProperties.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140B29A70 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PpDevCfgProcessDevice @ 0x140B4491C (PpDevCfgProcessDevice.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  __int64 v25; // rdx
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
  __int64 v36; // rdx
  ULONG_PTR v37; // rsi
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r8
  PVOID v41; // rsi
  __int64 v42; // rcx
  _WORD *v43; // rcx
  __int64 v44; // rcx
  unsigned __int16 *v45; // rbx
  _WORD *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  _WORD *v50; // rcx
  __int64 v51; // rcx
  unsigned __int16 *v52; // rbx
  _WORD *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // eax
  int v57; // eax
  struct _KTHREAD *v58; // rax
  __int64 v59; // rax
  char v60; // si
  __int64 v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rdx
  struct _KTHREAD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  int FailedInstallProblemStatus; // r8d
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  _QWORD *v71; // rcx
  int v72; // eax
  PVOID v73; // rbx
  __int64 v74; // rcx
  int v75; // r12d
  int v76; // eax
  PVOID v77; // r15
  __int64 v78; // rcx
  WCHAR *v79; // rsi
  __int64 v80; // r8
  PVOID v81; // rdx
  struct _KTHREAD *v82; // rax
  struct _KTHREAD *v83; // rax
  struct _KTHREAD *v84; // rax
  PVOID v85; // rbx
  int v86; // eax
  int v87; // ecx
  int v88; // eax
  char v89; // cl
  int v90; // ebx
  int v91; // eax
  unsigned int v92; // edx
  char v93; // al
  PVOID v94; // rcx
  int AlternateStringData; // eax
  unsigned int v96; // ebx
  __int64 v97; // rax
  int v98; // r12d
  PVOID v99; // rbx
  int v100; // ebx
  __int64 v101; // rdx
  int v102; // eax
  int v103; // r12d
  unsigned int v104; // eax
  __int64 v105; // r8
  int v106; // eax
  __int64 v107; // r8
  int v108; // eax
  struct _KTHREAD *v109; // rax
  struct _KTHREAD *v110; // rax
  int v111; // ebx
  int v112; // eax
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  PVOID v116; // rcx
  unsigned int v117; // ebx
  int v119; // [rsp+58h] [rbp-B0h] BYREF
  int v120; // [rsp+5Ch] [rbp-ACh]
  unsigned int v121; // [rsp+60h] [rbp-A8h] BYREF
  int v122; // [rsp+64h] [rbp-A4h]
  char v123; // [rsp+68h] [rbp-A0h] BYREF
  char v124; // [rsp+69h] [rbp-9Fh] BYREF
  int v125; // [rsp+6Ch] [rbp-9Ch]
  __int64 v126; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  PVOID v128; // [rsp+80h] [rbp-88h]
  void *v129; // [rsp+88h] [rbp-80h] BYREF
  int v130; // [rsp+90h] [rbp-78h] BYREF
  int v131; // [rsp+94h] [rbp-74h]
  int v132; // [rsp+98h] [rbp-70h]
  int v133; // [rsp+9Ch] [rbp-6Ch] BYREF
  unsigned int v134; // [rsp+A0h] [rbp-68h] BYREF
  PVOID v135; // [rsp+A8h] [rbp-60h] BYREF
  PVOID v136; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v137; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v138; // [rsp+C0h] [rbp-48h] BYREF
  PVOID v139; // [rsp+C8h] [rbp-40h] BYREF
  const wchar_t *v140; // [rsp+D0h] [rbp-38h] BYREF
  PVOID v141; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v142; // [rsp+E0h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+E8h] [rbp-20h] BYREF
  WCHAR *v144; // [rsp+F0h] [rbp-18h] BYREF
  PVOID v145; // [rsp+F8h] [rbp-10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp-8h] BYREF
  __int64 v147; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v148[80]; // [rsp+118h] [rbp+10h] BYREF
  int v149; // [rsp+168h] [rbp+60h] BYREF
  int v150; // [rsp+16Ch] [rbp+64h]
  GUID Guid; // [rsp+1A8h] [rbp+A0h] BYREF

  SourceString = 0LL;
  v137 = 0LL;
  memset_0(&v149, 0, 0x40uLL);
  Guid = 0LL;
  v142 = 0LL;
  DestinationString = 0LL;
  v136 = 0LL;
  v140 = 0LL;
  v145 = 0LL;
  v141 = 0LL;
  P = 0LL;
  v139 = 0LL;
  v144 = 0LL;
  v130 = 0;
  v133 = 0;
  v124 = 0;
  v129 = 0LL;
  if ( (byte_140EF3DCB & 0x10) != 0 )
    McTemplateK0p_EtwWriteTransfer(v2, (__int64)KMPnPEvt_ProcessNewDevice_Start, 0LL, BugCheckParameter2);
  LOBYTE(v126) = 0;
  LOWORD(v119) = 0;
  v120 = 0;
  v3 = 0LL;
  v125 = 0;
  v4 = 0;
  v5 = *(_QWORD *)(BugCheckParameter2 + 32);
  v147 = MEMORY[0xFFFFF78000000014];
  LODWORD(v135) = 0;
  v134 = 0;
  v132 = 0;
  v131 = 0;
  v121 = 0;
  v122 = 0;
  PiPnpRtlBeginOperation(&v145);
  PipClearDevNodeFlags(BugCheckParameter2, 0x2000000);
  v6 = PnpQueryDeviceID(BugCheckParameter2, &v137, &v140);
  if ( v6 < 0 )
  {
    v7 = v6;
    if ( v6 == -1073479624 )
      v7 = -1073741823;
    v125 = v7;
  }
  v8 = PpIrpQueryCapabilities(v5, &v149);
  PipClearDevNodeUserFlags(BugCheckParameter2, 2);
  v10 = v150;
  v11 = 0;
  if ( v8 >= 0 )
  {
    if ( (v150 & 0x20000) != 0 )
    {
      PipSetDevNodeUserFlags(BugCheckParameter2, 2u);
      v10 = v150;
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
  v138 = -1LL;
  PnpQueryExtendedAddress(v5, &v138);
  PnpQueryDeviceText(*(_QWORD *)(BugCheckParameter2 + 32), 0LL, v13, &v136);
  PnpQueryDeviceText(*(_QWORD *)(BugCheckParameter2 + 32), 1LL, v14, &v139);
  v15 = PnpIrpQueryID(*(_QWORD **)(BugCheckParameter2 + 32), 3, &P);
  v16 = P;
  GloballyUniqueId = v15;
  v128 = P;
  if ( v15 < 0 )
  {
    if ( v15 != -1073479624 && v15 != -1073741670 )
    {
LABEL_24:
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        v16 = 0LL;
        v128 = 0LL;
      }
      goto LABEL_26;
    }
LABEL_22:
    PipSetDevNodeProblem(BugCheckParameter2, 9LL, GloballyUniqueId);
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
      PipSetDevNodeProblem(BugCheckParameter2, 9LL, -1073741637);
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
      v129 = 0LL;
      GloballyUniqueId = PipMakeGloballyUniqueId(v20, v16, &v129);
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
      v128 = v129;
    }
  }
  v21 = v140;
  v22 = v128;
  while ( 1 )
  {
    if ( GloballyUniqueId < 0 )
    {
      v23 = (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0;
      v125 = GloballyUniqueId;
      if ( v23 || *(_DWORD *)(BugCheckParameter2 + 404) != 9 )
      {
        if ( GloballyUniqueId == -1073741670 )
        {
          v24 = -1073741670;
          v25 = 3LL;
        }
        else
        {
          v24 = GloballyUniqueId;
          v25 = 19LL;
        }
        PipSetDevNodeProblem(BugCheckParameter2, v25, v24);
      }
      v22 = v128;
    }
    Device = PiBuildDeviceNodeInstancePath(BugCheckParameter2, v137, v21, v22);
    if ( Device < 0 )
    {
      v122 = v4;
      goto LABEL_55;
    }
    if ( (byte_140EF3DCB & 0x10) != 0 )
      McTemplateK0pzz_EtwWriteTransfer(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL),
        v26,
        v28,
        BugCheckParameter2,
        *(_QWORD *)(BugCheckParameter2 + 48),
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL));
    CurrentThread = KeGetCurrentThread();
    P = 0LL;
    v120 = 0;
    v30 = 0;
    v123 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    Device = CmCreateDevice(
               PiPnpRtlCtx,
               *(_QWORD *)(BugCheckParameter2 + 48),
               983103,
               (unsigned int)&P,
               (__int64)&v123,
               0);
    if ( Device >= 0 )
    {
      v30 = 2 - (v123 != 0);
      v120 = v30;
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    if ( Device < 0 )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 19LL, Device);
      v3 = P;
LABEL_55:
      v30 = v120;
      v125 = Device;
      v31 = v122;
      goto LABEL_56;
    }
    v31 = 0;
    v3 = P;
    if ( v30 == 1 )
      v31 = 0x20000;
    v122 = v31;
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
    v37 = (ULONG_PTR)v35;
    if ( !v35 )
      goto LABEL_99;
    if ( v35 == (_QWORD *)v5 )
    {
      ObfDereferenceObjectWithTag(v35, 0x65706E50u);
LABEL_99:
      v30 = v120;
      goto LABEL_100;
    }
    if ( !v11 )
    {
      PpvUtilFailDriver(0);
      IoAddTriageDumpDataBlock(v5, (PVOID)*(unsigned __int16 *)(v5 + 2));
      v42 = *(_QWORD *)(v5 + 8);
      if ( v42 )
      {
        IoAddTriageDumpDataBlock(v42, (PVOID)(unsigned int)*(__int16 *)(v42 + 2));
        v43 = (_WORD *)(*(_QWORD *)(v5 + 8) + 56LL);
        if ( *v43 )
        {
          IoAddTriageDumpDataBlock((ULONG)v43, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v5 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v5 + 8) + 56LL));
        }
      }
      v44 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
      if ( v44 )
      {
        v45 = (unsigned __int16 *)(v44 + 40);
        IoAddTriageDumpDataBlock(v44, (PVOID)0x388);
        if ( *v45 )
        {
          IoAddTriageDumpDataBlock((ULONG)v45, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v45 + 1), (PVOID)*v45);
        }
        v46 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) + 56LL);
        if ( *v46 )
        {
          IoAddTriageDumpDataBlock((ULONG)v46, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) + 56LL));
        }
        v47 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) + 16LL);
        if ( v47 && *(_WORD *)(v47 + 56) )
        {
          IoAddTriageDumpDataBlock(v47 + 56, (PVOID)2);
          v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v48 + 64), (PVOID)*(unsigned __int16 *)(v48 + 56));
        }
      }
      IoAddTriageDumpDataBlock(v37, (PVOID)*(unsigned __int16 *)(v37 + 2));
      v49 = *(_QWORD *)(v37 + 8);
      if ( v49 )
      {
        IoAddTriageDumpDataBlock(v49, (PVOID)(unsigned int)*(__int16 *)(v49 + 2));
        v50 = (_WORD *)(*(_QWORD *)(v37 + 8) + 56LL);
        if ( *v50 )
        {
          IoAddTriageDumpDataBlock((ULONG)v50, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(v37 + 8) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v37 + 8) + 56LL));
        }
      }
      v51 = *(_QWORD *)(*(_QWORD *)(v37 + 312) + 40LL);
      if ( v51 )
      {
        v52 = (unsigned __int16 *)(v51 + 40);
        IoAddTriageDumpDataBlock(v51, (PVOID)0x388);
        if ( *v52 )
        {
          IoAddTriageDumpDataBlock((ULONG)v52, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v52 + 1), (PVOID)*v52);
        }
        v53 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 312) + 40LL) + 56LL);
        if ( *v53 )
        {
          IoAddTriageDumpDataBlock((ULONG)v53, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 312) + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v37 + 312) + 40LL) + 56LL));
        }
        v54 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 312) + 40LL) + 16LL);
        if ( v54 && *(_WORD *)(v54 + 56) )
        {
          IoAddTriageDumpDataBlock(v54 + 56, (PVOID)2);
          v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 312) + 40LL) + 16LL);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v55 + 64), (PVOID)*(unsigned __int16 *)(v55 + 56));
        }
      }
      KeBugCheckEx(0xCAu, 1uLL, v5, v37, 0LL);
    }
    ZwClose(v3);
    v150 &= ~0x40u;
    v3 = 0LL;
    v11 = 0;
    PipSetDevNodeProblem(BugCheckParameter2, 42LL, 0);
    v38 = *(_QWORD *)(*(_QWORD *)(v37 + 312) + 40LL);
    PnpLogDuplicateDevice((PCWSTR)v137, (PCWSTR)v128);
    if ( (byte_140EF3DCB & 0x40) != 0 )
      McTemplateK0zzzzz_EtwWriteTransfer(
        *(_QWORD *)(v38 + 16),
        v39,
        v40,
        (const wchar_t *)v137,
        v21,
        (const wchar_t *)v128,
        *(const wchar_t **)(*(_QWORD *)(v38 + 16) + 48LL),
        *(const wchar_t **)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL));
    if ( *(_QWORD *)(v38 + 16) == *(_QWORD *)(BugCheckParameter2 + 16) )
      PpvUtilFailDriver(0);
    ObfDereferenceObjectWithTag((PVOID)v37, 0x65706E50u);
    v41 = v128;
    GloballyUniqueId = PipMakeGloballyUniqueId(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 32LL), v128, &v129);
    if ( v41 )
      ExFreePoolWithTag(v41, 0);
    v22 = v129;
    v4 = v122;
    v128 = v129;
  }
  v64 = KeGetCurrentThread();
  --v64->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  if ( v3 && v136 )
  {
    v65 = -1LL;
    do
      ++v65;
    while ( *((_WORD *)v136 + v65) );
    CmSetDeviceRegProp(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      (__int64)v3,
      1u,
      1,
      (__int64)v136,
      2 * v65 + 2,
      v31);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
LABEL_100:
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 && *(_DWORD *)(BugCheckParameter2 + 404) == 42 )
    PipClearDevNodeProblem(BugCheckParameter2, v36);
LABEL_103:
  if ( v3 )
  {
    if ( v30 != 1 )
      PnpClearDeviceTemporaryProperties(*(_QWORD *)(BugCheckParameter2 + 48), v3);
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (__int64)v3,
      0LL,
      (__int64)DEVPKEY_Device_LastKnownParent,
      18,
      *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL) + 2,
      v31);
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (__int64)v3,
      0LL,
      (__int64)&DEVPKEY_Device_LastArrivalDate,
      16,
      (__int64)&v147,
      8u,
      v31);
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (__int64)v3,
      0LL,
      (__int64)&DEVPKEY_Device_LastRemovalDate,
      0,
      0LL,
      0,
      v31);
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (__int64)v3,
      0LL,
      (__int64)DEVPKEY_Device_HardwareConfigurationIndex,
      7,
      (__int64)&PnpCurrentHardwareConfigurationIndex,
      4u,
      v31);
  }
  if ( (v150 & 0x4000) != 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
      || (v56 = *(_DWORD *)(BugCheckParameter2 + 404), v56 != 1) && v56 != 14 )
    {
      PnpDisableDevice(BugCheckParameter2, 0x1Du);
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v57 = *(_DWORD *)(BugCheckParameter2 + 404), v57 != 9) && ((v57 - 3) & 0xFFFFFFEF) != 0 )
  {
    v58 = KeGetCurrentThread();
    --v58->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    if ( v3 && v139 )
    {
      v59 = -1LL;
      do
        ++v59;
      while ( *((_WORD *)v139 + v59) );
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (__int64)v3,
        0xEu,
        1,
        (__int64)v139,
        2 * v59 + 2,
        v31);
    }
    v60 = v30 == 1;
    LOBYTE(v119) = v60;
    PnpSaveDeviceCapabilities(BugCheckParameter2, &v149, v60);
    if ( v138 != -1 )
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        (__int64)v3,
        0LL,
        (__int64)&DEVPKEY_Device_ExtendedAddress,
        9,
        (__int64)&v138,
        8u,
        v31);
    v61 = *(_QWORD *)(BugCheckParameter2 + 48);
    v130 = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v61,
                (__int64)v3,
                0xBu,
                (__int64)&v133,
                (__int64)&v121,
                (__int64)&v130,
                0) < 0
      || v133 != 4
      || v130 != 4 )
    {
      v62 = 0;
      v63 = 1LL;
      v121 = 0;
      goto LABEL_137;
    }
    v62 = v121;
    if ( (v121 & 0x20) != 0 )
    {
      LOBYTE(v119) = v60;
      v63 = 18LL;
      if ( (v121 & 1) != 0 )
        goto LABEL_138;
LABEL_137:
      LOBYTE(v119) = 1;
LABEL_138:
      if ( (v150 & 0x100) != 0 )
      {
        v66 = *(_QWORD *)(BugCheckParameter2 + 48);
        v121 = v62 | 0x400;
        CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v66, (__int64)v3, 0xBu, 4, (__int64)&v121, 4, v31);
      }
      else
      {
        if ( (_DWORD)v63 == 28 )
        {
          FailedInstallProblemStatus = PiDevCfgGetFailedInstallProblemStatus(
                                         *(_QWORD *)(BugCheckParameter2 + 48),
                                         (int)v3);
          v63 = 28LL;
        }
        else
        {
          FailedInstallProblemStatus = 0;
        }
        PipSetDevNodeProblem(BugCheckParameter2, v63, FailedInstallProblemStatus);
      }
    }
    else if ( (v121 & 0x40) != 0 )
    {
      v63 = 28LL;
      LOBYTE(v119) = v60;
      goto LABEL_138;
    }
    v68 = PnpMapDeviceObjectToDeviceInstance(*(_QWORD *)(BugCheckParameter2 + 32), BugCheckParameter2 + 40);
    v69 = v125;
    if ( v68 < 0 )
      v69 = v68;
    v125 = v69;
    if ( PnpBootMode )
    {
      *(_DWORD *)(BugCheckParameter2 + 704) |= 0x1000u;
      v132 = 2;
    }
    else
    {
      v70 = (unsigned __int8)v126;
      if ( (v121 & 0x40000) != 0 )
        v70 = 1;
      LODWORD(v126) = v70;
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  v71 = *(_QWORD **)(BugCheckParameter2 + 32);
  LODWORD(v129) = 0;
  v72 = PnpIrpQueryID(v71, 1, &v141);
  v73 = v141;
  P = v141;
  if ( v72 < 0 )
  {
    if ( v72 == -1073479624 )
      goto LABEL_156;
    goto LABEL_158;
  }
  LODWORD(v129) = 2 * PnpFixupID((int *)v141, 0x400u, 1, 0xFFFFFFFF, *(_QWORD *)(BugCheckParameter2 + 16) + 56LL);
  if ( !(_DWORD)v129 )
  {
    v72 = -1073479624;
LABEL_156:
    PipSetDevNodeProblem(BugCheckParameter2, 9LL, v72);
    v74 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)(v74 + 396) & 0x200000) == 0 )
    {
      PipSetDevNodeFlags(v74, 0x200000u);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL));
    }
LABEL_158:
    if ( v73 )
    {
      ExFreePoolWithTag(v73, 0);
      v73 = 0LL;
      LODWORD(v129) = 0;
      P = 0LL;
    }
  }
  KseAddHardwareId((PCWSTR)v73);
  v75 = 0;
  v76 = PnpIrpQueryID(*(_QWORD **)(BugCheckParameter2 + 32), 2, &v142);
  v77 = v142;
  if ( v76 < 0 )
  {
    if ( v76 == -1073479624 )
      goto LABEL_164;
    goto LABEL_166;
  }
  v75 = 2 * PnpFixupID((int *)v142, 0x400u, 1, 0xFFFFFFFF, *(_QWORD *)(BugCheckParameter2 + 16) + 56LL);
  if ( !v75 )
  {
    v76 = -1073479624;
LABEL_164:
    PipSetDevNodeProblem(BugCheckParameter2, 9LL, v76);
    v78 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)(v78 + 396) & 0x200000) == 0 )
    {
      PipSetDevNodeFlags(v78, 0x200000u);
      PnpSetInvalidIDEvent((const void **)(*(_QWORD *)(BugCheckParameter2 + 16) + 40LL));
    }
LABEL_166:
    if ( v77 )
    {
      ExFreePoolWithTag(v77, 0);
      v77 = 0LL;
      v75 = 0;
    }
  }
  PnpGenerateDeviceIdsHash(v73, v77, BugCheckParameter2 + 684);
  PnpIrpQueryID(*(_QWORD **)(BugCheckParameter2 + 32), 5, &SourceString);
  v79 = (WCHAR *)SourceString;
  if ( SourceString )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlGUIDFromString(&DestinationString, &Guid) < 0 )
    {
      ExFreePoolWithTag(v79, 0);
      v79 = 0LL;
    }
  }
  if ( (int)PiQueryRemovableDeviceOverride(BugCheckParameter2, v73, v77, &v124) >= 0 )
  {
    LOBYTE(v80) = v124;
  }
  else
  {
    if ( (v150 & 0x20) != 0 || (v150 & 0x40000) != 0 || (v150 & 0x10) == 0 )
      LOBYTE(v80) = 0;
    else
      v80 = 1LL;
    if ( v79 )
      goto LABEL_186;
  }
  v81 = 0LL;
  if ( v120 != 1 )
    v81 = v3;
  if ( (int)PipGenerateContainerID(BugCheckParameter2, v81, v80, v79, &v144) >= 0 )
  {
    if ( v79 )
      ExFreePoolWithTag(v79, 0);
    v79 = v144;
  }
LABEL_186:
  if ( !v79
    || (RtlInitUnicodeString(&DestinationString, v79),
        RtlGUIDFromString(&DestinationString, (GUID *)(BugCheckParameter2 + 664)) < 0) )
  {
    *(_OWORD *)(BugCheckParameter2 + 664) = 0LL;
  }
  v82 = KeGetCurrentThread();
  --v82->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  PipSetDevNodeFlags(BugCheckParameter2, 0x20u);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v3 && v79 )
  {
    v83 = KeGetCurrentThread();
    --v83->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    PiDcUpdateDeviceContainerMembership(*(_QWORD *)(BugCheckParameter2 + 48), (__int64)v3, v79);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
  v84 = KeGetCurrentThread();
  --v84->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  if ( v3 )
  {
    if ( (_BYTE)v119 || v120 == 1 )
    {
      v85 = P;
    }
    else
    {
      v85 = P;
      v86 = PnpCheckDeviceIdsChanged(
              BugCheckParameter2,
              (__int64)v3,
              (const WCHAR *)P,
              (int)v129,
              1,
              (_BYTE *)&v119 + 1);
      v87 = BYTE1(v119);
      if ( v86 < 0 )
        v87 = 0;
      v131 = v87;
      BYTE1(v119) = v87;
      if ( !(_BYTE)v87 )
      {
        v88 = PnpCheckDeviceIdsChanged(BugCheckParameter2, (__int64)v3, (const WCHAR *)v77, v75, 0, (_BYTE *)&v119 + 1);
        v89 = BYTE1(v119);
        if ( v88 < 0 )
          v89 = 0;
        LOBYTE(v131) = v89;
      }
    }
    if ( v85 )
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (__int64)v3,
        2u,
        7,
        (__int64)v85,
        (int)v129,
        v122);
    v90 = v122;
    if ( v77 )
      CmSetDeviceRegProp(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        (__int64)v3,
        3u,
        7,
        (__int64)v77,
        v75,
        v122);
    if ( (_BYTE)v131 || (_BYTE)v126 )
    {
      if ( (_BYTE)v119 )
      {
        v92 = v121;
        v93 = (char)v135;
      }
      else
      {
        v91 = PpDevCfgCheckDeviceNeedsUpdate(*(_QWORD *)(BugCheckParameter2 + 48), (__int64)v3, &v134);
        v92 = v121;
        if ( v91 < 0 )
        {
          v93 = 0;
        }
        else
        {
          v93 = v134;
          v92 = v134 | v121;
          v121 |= v134;
        }
      }
      if ( (v93 & 0x20) != 0 || (v92 & 0x40000) != 0 )
      {
        v121 = v92 & 0xFFFBFFFF;
        CmSetDeviceRegProp(
          *(__int64 *)&PiPnpRtlCtx,
          *(_QWORD *)(BugCheckParameter2 + 48),
          (__int64)v3,
          0xBu,
          4,
          (__int64)&v121,
          4,
          v90);
        LOBYTE(v92) = v121;
      }
      if ( (v92 & 0x20) != 0 )
      {
        LOBYTE(v119) = 1;
        PipSetDevNodeProblem(BugCheckParameter2, 18LL, 0);
      }
    }
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  if ( v3 )
  {
    v94 = v136;
    AlternateStringData = 0;
    v135 = 0LL;
    v96 = 0;
    LODWORD(v126) = 0;
    if ( v136 )
    {
      v97 = -1LL;
      do
        ++v97;
      while ( *((_WORD *)v136 + v97) );
      v96 = 2 * v97 + 2;
      AlternateStringData = PnpFindAlternateStringData(v136, v96, &v135, &v126);
      v94 = v136;
    }
    v98 = v122;
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (__int64)v3,
      0LL,
      (__int64)&DEVPKEY_Device_BusReportedDeviceDesc,
      AlternateStringData != 0 ? 25 : 18,
      (__int64)v94,
      v96,
      v122);
    if ( (int)PnpGetDeviceLocationStrings(BugCheckParameter2, &v135, &v126) >= 0 )
    {
      v99 = v135;
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(BugCheckParameter2 + 48),
        1,
        (__int64)v3,
        0LL,
        (__int64)&DEVPKEY_Device_LocationPaths,
        8210,
        (__int64)v135,
        2 * v126,
        v98);
      ExFreePoolWithTag(v99, 0);
    }
  }
  PnpQueryBusInformation(BugCheckParameter2);
  memset_0(v148, 0, sizeof(v148));
  PipDmgDestroyIommuExtension(BugCheckParameter2);
  if ( (int)PiIommuGetInterface(*(_QWORD *)(BugCheckParameter2 + 32)) >= 0 )
  {
    v100 = PipDmgInitializeIommuExtension(BugCheckParameter2, (ULONG_PTR)v148);
    PiIommuPutInterface((__int64)v148, v101);
    v102 = v125;
    if ( v100 < 0 )
      v102 = v100;
    v125 = v102;
  }
  if ( (v150 & 0x4000) != 0
    || (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) != 0 && *(_DWORD *)(BugCheckParameter2 + 404) == 14 )
  {
    goto LABEL_237;
  }
  if ( !(_BYTE)v119 )
  {
    if ( v3 )
      PpDevCfgProcessDeviceOperations(BugCheckParameter2, v3);
LABEL_237:
    v103 = v120;
    goto LABEL_238;
  }
  v103 = v120;
  v104 = v132;
  if ( v120 == 1 )
    v104 = v132 | 1;
  PpDevCfgProcessDevice(BugCheckParameter2, v3, v104);
LABEL_238:
  PiQueryResourceRequirements(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v106 = *(_DWORD *)(BugCheckParameter2 + 404), v106 != 22)
    && v106 != 29
    && v106 != 14
    && v106 != 9
    && v106 != 3
    && v106 != 19 )
  {
    PnpIsDeviceInstanceEnabled(v3, BugCheckParameter2 + 40, 1LL);
  }
  if ( v3 )
  {
    LOBYTE(v105) = v103 == 1;
    PnpInitializeSessionId(BugCheckParameter2, v3, v105);
    LOBYTE(v107) = v103 == 1;
    PnpInitializeInheritedRestrictedSd(BugCheckParameter2, v3, v107);
  }
  PiQueryAndAllocateBootResources(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v108 = *(_DWORD *)(BugCheckParameter2 + 404), v108 != 9) && ((v108 - 3) & 0xFFFFFFEF) != 0 )
  {
    v109 = KeGetCurrentThread();
    --v109->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    PnpSaveDeviceCapabilities(BugCheckParameter2, &v149, v103 == 1);
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    PpHotSwapUpdateRemovalPolicy(BugCheckParameter2);
    v110 = KeGetCurrentThread();
    --v110->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    v111 = PiDeviceRegistration(
             (unsigned __int16 *)(BugCheckParameter2 + 40),
             1,
             (UNICODE_STRING *)(BugCheckParameter2 + 56));
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    if ( v111 < 0 )
      PipSetDevNodeProblem(BugCheckParameter2, 19LL, v111);
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x2000) == 0
    || (v112 = *(_DWORD *)(BugCheckParameter2 + 404), v112 != 9) && v112 != 3 )
  {
    PnpIrpDeviceEnumerated(v5);
    if ( v3 )
      PiUpdateDevicePanel(BugCheckParameter2, v3);
    v114 = *(_QWORD *)(BugCheckParameter2 + 48);
    if ( v114 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v113, v114, 1);
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v115, *(_QWORD *)(BugCheckParameter2 + 48), 14);
    }
    PnpSetPlugPlayEvent((__int128 *)&GUID_DEVICE_ENUMERATED, (__int64 *)v5);
    PnpNewDeviceNodeDependencyCheck(BugCheckParameter2);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v77 )
    ExFreePoolWithTag(v77, 0);
  if ( v79 )
    ExFreePoolWithTag(v79, 0);
  if ( v3 )
    ZwClose(v3);
  if ( v128 )
    ExFreePoolWithTag(v128, 0);
  if ( v139 )
    ExFreePoolWithTag(v139, 0);
  if ( v136 )
    ExFreePoolWithTag(v136, 0);
  if ( v137 )
    ExFreePoolWithTag(v137, 0);
  v116 = v145;
  if ( v145 )
    PiPnpRtlEndOperation((char *)v145);
  if ( (byte_140EF3DCB & 0x10) != 0 )
    McTemplateK0p_EtwWriteTransfer((__int64)v116, (__int64)KMPnPEvt_ProcessNewDevice_Stop, 0LL, BugCheckParameter2);
  v117 = v125;
  if ( *(_DWORD *)(BugCheckParameter2 + 568) )
    PnpTraceDockDeviceEnumeration();
  return v117;
}
