/*
 * XREFs of IoReportDetectedDevice @ 0x1407A0B40
 * Callers:
 *     HalpDriverEntry @ 0x140784A00 (HalpDriverEntry.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     RtlStringCchPrintfExW @ 0x140446160 (RtlStringCchPrintfExW.c)
 *     RtlStringCbLengthW @ 0x140478794 (RtlStringCbLengthW.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PpDevNodeRemoveFromTree @ 0x1404D43C8 (PpDevNodeRemoveFromTree.c)
 *     PpDevNodeInsertIntoTree @ 0x1404E1FF0 (PpDevNodeInsertIntoTree.c)
 *     PipAreDriversLoaded @ 0x140516350 (PipAreDriversLoaded.c)
 *     PipIsDevNodeDNStarted @ 0x140516374 (PipIsDevNodeDNStarted.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140728BC0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x140729B40 (ZwDeleteKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     IopGetOriginalServiceName @ 0x1407A19B4 (IopGetOriginalServiceName.c)
 *     IopGetRootDeviceId @ 0x1407A1A44 (IopGetRootDeviceId.c)
 *     IopIsReportedAlready @ 0x1407A1ADC (IopIsReportedAlready.c)
 *     IoReportResourceUsageInternal @ 0x1407A4E78 (IoReportResourceUsageInternal.c)
 *     PnpSetRegistryDword @ 0x1407A6E24 (PnpSetRegistryDword.c)
 *     PnpAllocateDeviceInstancePath @ 0x1407A811C (PnpAllocateDeviceInstancePath.c)
 *     IopDuplicateDetection @ 0x1407A88D0 (IopDuplicateDetection.c)
 *     IopCreateRootEnumeratedDeviceObject @ 0x1407B06DC (IopCreateRootEnumeratedDeviceObject.c)
 *     IopCreateLegacyDeviceIds @ 0x1407B52F8 (IopCreateLegacyDeviceIds.c)
 *     _CmOpenDeviceRegKey @ 0x1409575B0 (_CmOpenDeviceRegKey.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14095A580 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeProblem @ 0x14096F6C8 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1409714C0 (PipSetDevNodeProblem.c)
 *     _CmSetDeviceRegProp @ 0x1409AC6A0 (_CmSetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1409AC818 (PnpDeviceObjectToDeviceInstance.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1409B4D20 (PnpCleanupDeviceRegistryValues.c)
 *     PpDeviceRegistration @ 0x1409B4D7C (PpDeviceRegistration.c)
 *     RtlUpcaseUnicodeString @ 0x1409D2F80 (RtlUpcaseUnicodeString.c)
 *     PnpUnicodeStringToWstrFree @ 0x140A18820 (PnpUnicodeStringToWstrFree.c)
 *     _PnpSetObjectProperty @ 0x140A19100 (_PnpSetObjectProperty.c)
 *     PnpUnicodeStringToWstr @ 0x140A69BB0 (PnpUnicodeStringToWstr.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 *     PnpDetermineResourceListSize @ 0x140AA0E1C (PnpDetermineResourceListSize.c)
 *     _CmCreateDevice @ 0x140AF540C (_CmCreateDevice.c)
 *     IopDoDeferredSetInterfaceState @ 0x140B0C470 (IopDoDeferredSetInterfaceState.c)
 *     PipAllocateDeviceNode @ 0x140B15754 (PipAllocateDeviceNode.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x140B2BAF0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140B36034 (IopWriteAllocatedResourcesToRegistry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoReportDetectedDevice(
        PDRIVER_OBJECT DriverObject,
        INTERFACE_TYPE LegacyBusType,
        ULONG BusNumber,
        ULONG SlotNumber,
        PCM_RESOURCE_LIST ResourceList,
        PIO_RESOURCE_REQUIREMENTS_LIST ResourceRequirements,
        BOOLEAN ResourceAssigned,
        PDEVICE_OBJECT *DeviceObject)
{
  UNICODE_STRING *p_ServiceKeyName; // r12
  __int64 DeviceNode; // rdi
  PDEVICE_OBJECT v11; // rax
  int v12; // r15d
  PDEVICE_OBJECT v13; // r13
  __int64 v14; // rdx
  NTSTATUS result; // eax
  wchar_t *Buffer; // rcx
  wchar_t *i; // rax
  const UNICODE_STRING *v18; // rcx
  int appended; // ebx
  int v20; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 Length; // dx
  wchar_t *v23; // rax
  size_t v24; // r15
  signed __int64 v25; // rcx
  __int16 v26; // cx
  struct _DEVICE_OBJECT *v27; // rax
  struct _DEVICE_OBJECT *v28; // r15
  PDEVICE_OBJECT v29; // rcx
  int v30; // eax
  __int64 Pool2; // rax
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  NTSTATUS DeviceInstancePath; // eax
  NTSTATUS v36; // eax
  STRSAFE_PCNZWCH v37; // r13
  __int64 v38; // rdx
  __int64 v39; // r9
  PDRIVER_OBJECT v40; // rbx
  bool v41; // zf
  UNICODE_STRING *v42; // rbx
  int LegacyDeviceIds; // eax
  int v44; // eax
  _DWORD *v45; // r15
  HANDLE v46; // rbx
  ULONG v47; // eax
  HANDLE v48; // rbx
  unsigned int v49; // eax
  unsigned int v50; // ebx
  void *v51; // rax
  void *v52; // rsi
  __int64 v53; // r8
  int v54; // edx
  int dwFlags; // [rsp+20h] [rbp-E0h]
  NTSTRSAFE_PCWSTR pszFormat; // [rsp+28h] [rbp-D8h]
  __int64 v57; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+38h] [rbp-C8h]
  int v59; // [rsp+40h] [rbp-C0h]
  char v60; // [rsp+50h] [rbp-B0h] BYREF
  char v61; // [rsp+51h] [rbp-AFh] BYREF
  char v62; // [rsp+52h] [rbp-AEh] BYREF
  char v63; // [rsp+53h] [rbp-ADh]
  _DWORD cbMax[3]; // [rsp+54h] [rbp-ACh] BYREF
  int v65; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  ULONG v67; // [rsp+78h] [rbp-88h]
  __int64 v68; // [rsp+80h] [rbp-80h] BYREF
  int v69; // [rsp+88h] [rbp-78h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v71; // [rsp+98h] [rbp-68h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+A0h] [rbp-60h] BYREF
  PDEVICE_OBJECT v73; // [rsp+A8h] [rbp-58h] BYREF
  PDRIVER_OBJECT v74; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  STRSAFE_PCNZWCH psz; // [rsp+C8h] [rbp-38h] BYREF
  size_t pcbLength; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Data; // [rsp+D8h] [rbp-28h]
  PVOID P; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v80; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v81; // [rsp+F8h] [rbp-8h] BYREF
  PDEVICE_OBJECT *v82; // [rsp+108h] [rbp+8h]
  _WORD v83[200]; // [rsp+110h] [rbp+10h] BYREF

  p_ServiceKeyName = &DriverObject->DriverExtension->ServiceKeyName;
  Data = ResourceRequirements;
  v82 = DeviceObject;
  Destination.Buffer = v83;
  DeviceNode = 0LL;
  v11 = *DeviceObject;
  v12 = 0;
  LODWORD(ppszDestEnd) = SlotNumber;
  v13 = 0LL;
  v67 = BusNumber;
  v14 = 2LL;
  v74 = DriverObject;
  v61 = 0;
  *(_QWORD *)&Destination.Length = 26214400LL;
  psz = 0LL;
  memset(cbMax, 0, sizeof(cbMax));
  pcbLength = 0LL;
  v69 = 0;
  v71 = 0LL;
  v60 = 0;
  v68 = 0LL;
  v65 = 0;
  KeyHandle = 0LL;
  v63 = 0;
  v73 = 0LL;
  P = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( v11 )
  {
    DeviceNode = (__int64)v11->DeviceObjectExtension->DeviceNode;
    v68 = DeviceNode;
    if ( !DeviceNode )
      return -1073741578;
LABEL_13:
    appended = PiPnpRtlBeginOperation(&P, v14);
    if ( appended >= 0 )
    {
      PpDevNodeLockTree(1LL);
      if ( !DeviceNode && (v74->Flags & 4) == 0 )
      {
        v20 = IopDuplicateDetection((unsigned int)LegacyBusType, v67, (unsigned int)ppszDestEnd, &v68);
        DeviceNode = v68;
        appended = v20;
        if ( v20 >= 0 )
        {
          if ( v68 )
            v12 = 1;
          v65 = v12;
        }
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      if ( DeviceNode )
        goto LABEL_90;
      appended = RtlAppendUnicodeToString(&Destination, L"\\");
      if ( appended >= 0 )
      {
        Length = Destination.Length;
        v67 = Destination.Length;
        v23 = &v83[(unsigned __int64)Destination.Length >> 1];
        *(_QWORD *)&DestinationString.Length = v23;
        v24 = (400 - (unsigned __int64)Destination.Length) >> 1;
        while ( 1 )
        {
          LODWORD(v57) = (_DWORD)v13;
          Destination.Length = Length;
          ppszDestEnd = v23;
          RtlStringCchPrintfExW(v23, v24, &ppszDestEnd, 0LL, 0, L"%04u", v57);
          v25 = &ppszDestEnd[-((unsigned __int64)Destination.Length >> 1)] - v83;
          if ( (_DWORD)v25 == -1 )
            v26 = 400 - Destination.Length;
          else
            v26 = 2 * v25;
          Destination.Length += v26;
          appended = CmCreateDevice(PiPnpRtlCtx, Destination.Buffer, 983103, (unsigned int)&cbMax[1], (__int64)&v60, 0);
          if ( appended < 0 )
            goto LABEL_32;
          if ( v60 )
          {
            v13 = v73;
            goto LABEL_52;
          }
          v65 = 0;
          if ( (unsigned __int8)IopIsReportedAlready(
                                  (unsigned int)&Destination,
                                  cbMax[1],
                                  (_DWORD)p_ServiceKeyName,
                                  (_DWORD)ResourceList,
                                  (__int64)&v65) )
            break;
          ZwClose(*(HANDLE *)&cbMax[1]);
          Length = v67;
          LODWORD(v13) = (_DWORD)v13 + 1;
          v23 = *(wchar_t **)&DestinationString.Length;
        }
        v27 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(&Destination, 1953261124LL);
        v73 = v27;
        v13 = v27;
        if ( !v27 )
        {
          appended = -1073741823;
          DeviceNode = 0LL;
          goto LABEL_32;
        }
        DeviceNode = (__int64)v27->DeviceObjectExtension->DeviceNode;
        v68 = DeviceNode;
LABEL_52:
        if ( !DeviceNode )
        {
          appended = IopCreateRootEnumeratedDeviceObject(&v73);
          if ( appended < 0 )
            goto LABEL_32;
          v28 = v73;
          v29 = v73;
          v63 = 1;
          v73->Flags |= 0x1000u;
          v30 = PipAllocateDeviceNode(v29, &v68);
          DeviceNode = v68;
          if ( v30 == -1073740946 || !v68 )
          {
            IoDeleteDevice(v28);
            appended = -1073741670;
            goto LABEL_32;
          }
          if ( (v74->Flags & 4) == 0 )
          {
            Pool2 = ExAllocatePool2(0x100uLL);
            *(_QWORD *)(DeviceNode + 64) = Pool2;
            if ( !Pool2 )
              goto LABEL_58;
            *(_WORD *)(DeviceNode + 58) = p_ServiceKeyName->Length;
            DeviceInstancePath = RtlUpcaseUnicodeString((PUNICODE_STRING)(DeviceNode + 56), p_ServiceKeyName, 0);
            appended = DeviceInstancePath;
            if ( DeviceInstancePath < 0 )
              goto LABEL_63;
          }
          DeviceInstancePath = PnpAllocateDeviceInstancePath(DeviceNode, (unsigned int)Destination.Length + 2);
          appended = DeviceInstancePath;
          if ( DeviceInstancePath < 0 )
            goto LABEL_63;
          DeviceInstancePath = RtlUpcaseUnicodeString((PUNICODE_STRING)(DeviceNode + 40), &Destination, 0);
          appended = DeviceInstancePath;
          if ( DeviceInstancePath < 0 )
            goto LABEL_63;
          *(_WORD *)(*(_QWORD *)(DeviceNode + 48) + 2 * ((unsigned __int64)*(unsigned __int16 *)(DeviceNode + 40) >> 1)) = 0;
          v69 = 32;
          v36 = CmSetDeviceRegProp(PiPnpRtlCtx, *(_QWORD *)(DeviceNode + 48), cbMax[1], 11, 4, (__int64)&v69, 4, 0);
          appended = v36;
          if ( v36 < 0 )
            goto LABEL_67;
          v61 = -1;
          v36 = PnpSetObjectProperty(
                  PiPnpRtlCtx,
                  *(_QWORD *)(DeviceNode + 48),
                  1,
                  0LL,
                  (__int64)&DEVPKEY_Device_Reported,
                  17,
                  (__int64)&v61,
                  1,
                  0);
          appended = v36;
          if ( v36 < 0 )
            goto LABEL_67;
          v36 = PnpUnicodeStringToWstr(&psz, cbMax, p_ServiceKeyName);
          appended = v36;
          if ( v36 < 0 )
            goto LABEL_67;
          v37 = psz;
          appended = RtlStringCbLengthW(psz, cbMax[0], &pcbLength);
          if ( appended < 0 )
          {
            PnpUnicodeStringToWstrFree(v37, p_ServiceKeyName);
            PipSetDevNodeProblem(DeviceNode, 19LL, (unsigned int)appended);
            goto LABEL_32;
          }
          appended = CmSetDeviceRegProp(
                       PiPnpRtlCtx,
                       *(_QWORD *)(DeviceNode + 48),
                       cbMax[1],
                       5,
                       1,
                       (__int64)v37,
                       (int)pcbLength + 2,
                       0);
          PnpUnicodeStringToWstrFree(v37, p_ServiceKeyName);
          if ( appended < 0 )
          {
            v32 = (unsigned int)appended;
            goto LABEL_68;
          }
          v71 = 0LL;
          v36 = CmOpenDeviceRegKey(PiPnpRtlCtx, *(_QWORD *)(DeviceNode + 48), 19, 0, 983103, 1, (__int64)&v71, 0LL);
          appended = v36;
          if ( v36 < 0 )
            goto LABEL_67;
          v36 = PnpSetRegistryDword(v71);
          appended = v36;
          if ( v36 < 0 )
            goto LABEL_67;
          v40 = v74;
          if ( (v74->Flags & 4) == 0 )
          {
            LOBYTE(v39) = 1;
            LOBYTE(v38) = 1;
            PpDeviceRegistration(&Destination, v38, 0LL, v39);
          }
          v41 = (v40->Flags & 4) == 0;
          v42 = (UNICODE_STRING *)&v80;
          Destination.Buffer = 0LL;
          if ( v41 )
            v42 = p_ServiceKeyName;
          *(_DWORD *)&Destination.Length = 0;
          cbMax[0] = 400;
          if ( (int)IopGetOriginalServiceName(v42, v83, cbMax) >= 0 && cbMax[0] > 2u )
          {
            WORD1(v81) = 400;
            *((_QWORD *)&v81 + 1) = v83;
            LOWORD(v81) = LOWORD(cbMax[0]) - 2;
            v42 = (UNICODE_STRING *)&v81;
          }
          LegacyDeviceIds = IopCreateLegacyDeviceIds(v28, v42, ResourceList);
          appended = LegacyDeviceIds;
          v34 = DeviceNode;
          if ( LegacyDeviceIds < 0 )
          {
            v32 = (unsigned int)LegacyDeviceIds;
            v33 = 19LL;
            goto LABEL_61;
          }
          PipSetDevNodeFlags(DeviceNode, 17LL);
          *(_DWORD *)(DeviceNode + 660) = *((_DWORD *)IopRootDeviceNode + 165);
          PipSetDevNodeState(DeviceNode, 772);
          PpDevNodeInsertIntoTree((__int64)IopRootDeviceNode, DeviceNode);
          DeviceInstancePath = PnpMapDeviceObjectToDeviceInstance(v28, DeviceNode + 40);
          appended = DeviceInstancePath;
          if ( DeviceInstancePath < 0 )
          {
LABEL_63:
            v32 = (unsigned int)DeviceInstancePath;
            goto LABEL_59;
          }
          PsReferenceSiloContext(v28);
LABEL_100:
          v45 = Data;
          if ( !ResourceList && !Data )
            goto LABEL_107;
          v36 = CmOpenDeviceRegKey(
                  PiPnpRtlCtx,
                  *(_QWORD *)(DeviceNode + 48),
                  20,
                  0,
                  983103,
                  1,
                  (__int64)&KeyHandle,
                  0LL);
          appended = v36;
          if ( v36 >= 0 )
          {
            if ( !ResourceList
              || (v46 = KeyHandle,
                  DestinationString = 0LL,
                  RtlInitUnicodeString(&DestinationString, L"BootConfig"),
                  v47 = PnpDetermineResourceListSize(ResourceList),
                  v36 = ZwSetValueKey(v46, &DestinationString, 0, 8u, ResourceList, v47),
                  appended = v36,
                  v36 >= 0) )
            {
              if ( !v45
                || (v48 = KeyHandle,
                    DestinationString = 0LL,
                    RtlInitUnicodeString(&DestinationString, L"BasicConfigVector"),
                    v36 = ZwSetValueKey(v48, &DestinationString, 0, 0xAu, v45, *v45),
                    appended = v36,
                    v36 >= 0) )
              {
LABEL_107:
                if ( ResourceAssigned )
                {
                  PipSetDevNodeFlags(DeviceNode, 256LL);
                  PnpSetRegistryDword(*(HANDLE *)&cbMax[1]);
                  v49 = PnpDetermineResourceListSize(ResourceList);
                  IopWriteAllocatedResourcesToRegistry(DeviceNode, ResourceList, v49);
                }
                else if ( ResourceList && ResourceList->Count && ResourceList->List[0].PartialResourceList.Count )
                {
                  v50 = PnpDetermineResourceListSize(ResourceList);
                  v51 = (void *)ExAllocatePool2(0x100uLL);
                  v52 = v51;
                  if ( !v51 )
                  {
LABEL_58:
                    v32 = 3221225626LL;
                    appended = -1073741670;
LABEL_59:
                    v33 = 3LL;
                    goto LABEL_60;
                  }
                  memmove(v51, ResourceList, v50);
                  pszFormat = *(NTSTRSAFE_PCWSTR *)(DeviceNode + 32);
                  v53 = *((_QWORD *)pszFormat + 1);
                  v62 = 0;
                  appended = IoReportResourceUsageInternal(
                               0,
                               v54,
                               v53,
                               0,
                               dwFlags,
                               (__int64)pszFormat,
                               (__int64)v52,
                               v58,
                               v59,
                               (__int64)&v62);
                  ExFreePoolWithTag(v52, 0x47706E50u);
                  if ( appended >= 0 && !v62 )
                  {
LABEL_122:
                    *(_DWORD *)(DeviceNode + 660) = *(_DWORD *)(*(_QWORD *)(DeviceNode + 16) + 660LL);
                    IopDoDeferredSetInterfaceState(DeviceNode);
                    PipSetDevNodeState(DeviceNode, 777);
                    if ( v63 )
                      PipSetDevNodeFlags(DeviceNode, 0x80000000LL);
                    *v82 = *(PDEVICE_OBJECT *)(DeviceNode + 32);
                    goto LABEL_40;
                  }
                  if ( !(unsigned int)PipIsDevNodeDNStarted(DeviceNode) )
                    PipSetDevNodeProblem(DeviceNode, 12LL, (unsigned int)appended);
                  appended = -1073741800;
                }
                else
                {
                  PipSetDevNodeFlags(DeviceNode, 256LL);
                }
                if ( appended >= 0 )
                  goto LABEL_122;
                goto LABEL_32;
              }
            }
          }
LABEL_67:
          v32 = (unsigned int)v36;
LABEL_68:
          v33 = 19LL;
LABEL_60:
          v34 = DeviceNode;
LABEL_61:
          PipSetDevNodeProblem(v34, v33, v32);
          goto LABEL_32;
        }
        v12 = v65;
LABEL_90:
        if ( v12 )
        {
          if ( (unsigned int)PipAreDriversLoaded(DeviceNode)
            || (*(_DWORD *)(DeviceNode + 396) & 0x6000) != 0
            && (v44 = *(_DWORD *)(DeviceNode + 404), v44 != 1)
            && v44 != 18
            && v44 != 28 )
          {
            ObfDereferenceObject(*(PVOID *)(DeviceNode + 32));
            appended = -1073741810;
            goto LABEL_32;
          }
          if ( !v13 )
            PipClearDevNodeProblem(DeviceNode);
        }
        if ( !*(_QWORD *)&cbMax[1] )
        {
          appended = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(DeviceNode + 32), &cbMax[1], 983103LL);
          if ( appended < 0 )
          {
LABEL_32:
            if ( v60 )
            {
              if ( KeyHandle )
                ZwDeleteKey(KeyHandle);
              if ( v71 )
                ZwDeleteKey(v71);
              if ( *(_QWORD *)&cbMax[1] )
                ZwDeleteKey(*(HANDLE *)&cbMax[1]);
              PnpCleanupDeviceRegistryValues(DeviceNode + 40);
              PpDevNodeRemoveFromTree((_QWORD *)DeviceNode);
              IoDeleteDevice(*(PDEVICE_OBJECT *)(DeviceNode + 32));
              ObfDereferenceObject(*(PVOID *)(DeviceNode + 32));
            }
            goto LABEL_40;
          }
        }
        goto LABEL_100;
      }
    }
LABEL_40:
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    PpDevNodeUnlockTree(1LL);
    if ( KeyHandle )
      ZwClose(KeyHandle);
    if ( v71 )
      ZwClose(v71);
    if ( *(_QWORD *)&cbMax[1] )
      ZwClose(*(HANDLE *)&cbMax[1]);
    if ( P )
      PiPnpRtlEndOperation(P);
    return appended;
  }
  if ( (DriverObject->Flags & 4) != 0 )
  {
    Buffer = p_ServiceKeyName->Buffer;
    for ( i = &Buffer[((unsigned __int64)p_ServiceKeyName->Length >> 1) - 1]; i != Buffer; --i )
    {
      if ( *i == 92 )
      {
        *((_QWORD *)&v80 + 1) = i + 1;
        v18 = (const UNICODE_STRING *)&v80;
        LOWORD(v80) = p_ServiceKeyName->Length
                    - 2 * ((__int64)(unsigned int)((_DWORD)i + 2 - LODWORD(p_ServiceKeyName->Buffer)) >> 1);
        WORD1(v80) = v80;
        goto LABEL_12;
      }
    }
    return -1073741585;
  }
  else
  {
    v18 = p_ServiceKeyName;
LABEL_12:
    result = IopGetRootDeviceId(v18, &Destination);
    if ( result >= 0 )
      goto LABEL_13;
  }
  return result;
}
