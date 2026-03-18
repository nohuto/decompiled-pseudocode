/*
 * XREFs of ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1400269B4
 * Callers:
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140001AE0 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140002E6C (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1400146DC (-_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_.c)
 *     imp_WdfMemoryCreate @ 0x140014B20 (imp_WdfMemoryCreate.c)
 *     ?Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x140015778 (-Create@FxRequestMemory@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     imp_WdfStringCreate @ 0x1400183B0 (imp_WdfStringCreate.c)
 *     imp_WdfSpinLockCreate @ 0x140018550 (imp_WdfSpinLockCreate.c)
 *     ?_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CONFIG@@PEAVFxDriver@@PEAVFxPkgIo@@EPEAPEAV1@@Z @ 0x1400193C0 (-_Create@FxIoQueue@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_IO_QUEUE_CON.c)
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x140019D0C (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x14001A400 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14001AE64 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     imp_WdfCommonBufferCreate @ 0x14001B0B0 (imp_WdfCommonBufferCreate.c)
 *     ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14001B3B8 (-_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z.c)
 *     ?_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x14001B774 (-_CreateAndInit@FxCmResList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAU_WDF_OBJECT_A.c)
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x14001C20C (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 *     ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x14001C730 (-_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPE.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x14001D738 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z @ 0x14001E080 (-_Create@FxPkgFdo@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAPEAV1@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14001E6BC (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x14001F144 (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14001FCC8 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x14001FFA0 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14002008C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KPEAVFxDevice@@PEAU_WDF_CHILD_LIST_CONFIG@@E@Z @ 0x1400225A0 (-_CreateAndInit@FxChildList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@_KP.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1400235B0 (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x14003ACC8 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     imp_WdfRegistryQueryMultiString @ 0x14003C530 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x14003D9D0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x14003DB20 (imp_WdfPdoInitAddHardwareID.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x14003DC80 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfCollectionCreate @ 0x14004BFD0 (imp_WdfCollectionCreate.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x140053FFC (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1400576AC (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x140057C7C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x140058014 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     FxUsbTargetDeviceCreate @ 0x14005E6BC (FxUsbTargetDeviceCreate.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x140069F98 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x14006B030 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfDriverCreate @ 0x14006BE90 (imp_WdfDriverCreate.c)
 *     ?_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x14006F2B0 (-_CreateAndInit@FxIoResReqList@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x140074C44 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1400759B4 (-AssignName@WDFDEVICE_INIT@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1400786A0 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x14007C640 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F6C0 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfRegistryCreateKey @ 0x140081210 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1400814D0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x140081770 (imp_WdfCommonBufferCreateWithConfig.c)
 *     ?_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x140087D14 (-_Create@FxDmaPacketTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     ?_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1400889F8 (-_Create@FxDmaSystemTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDm.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x140091420 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1400921D0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfLookasideListCreate @ 0x140094310 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x140094770 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     ?_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z @ 0x140094ECC (-_AllocateControlDeviceInit@WDFDEVICE_INIT@@SAPEAU1@PEAVFxDriver@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z @ 0x140095104 (-AllocateCompanionTarget@FxDevice@@QEAAJPEAPEAVFxCompanionTarget@@@Z.c)
 *     FxCmResourceListInsertDescriptor @ 0x140098BAC (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x140098CA0 (FxIoResourceListInsertDescriptor.c)
 *     imp_WdfIoResourceListCreate @ 0x140099180 (imp_WdfIoResourceListCreate.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x14009AD30 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x14009B134 (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?CreateInterfaces@FxUsbDevice@@QEAAJXZ @ 0x14009F36C (-CreateInterfaces@FxUsbDevice@@QEAAJXZ.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A2360 (imp_WdfDmaEnablerCreate.c)
 *     ?AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1400A318C (-AddEjectionDevice@FxPkgPdo@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1400A6474 (-AddRemovalDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1400A663C (-AddUsageDevice@FxPkgPnp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_INTERRUPT_CONFIG@@PEAPEAV1@@Z @ 0x1400AA6CC (-_CreateAndInit@FxInterrupt@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@PEAVFxObject@@PEAU_WDF_OBJ.c)
 *     ?_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE_OBJECT@@@Z @ 0x1400AC798 (-_CreateAndInit@FxSystemThread@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_DEVICE.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400262E0 (WPP_IFR_SF_DDid.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

FX_POOL **__fastcall FxObjectHandleAlloc2(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Size,
        unsigned __int64 Attributes,
        unsigned int ExtraSize,
        _WDF_OBJECT_ATTRIBUTES *ObjectType,
        unsigned __int16 FxDriverGlobals_0,
        FxObjectType PoolFlags)
{
  ULONG Tag; // r13d
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v11; // r9
  unsigned __int64 flags; // rdx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r9
  int id; // edi
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rax
  void *v20; // rax
  FX_POOL **v21; // rdi
  unsigned __int16 v22; // bp
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v23; // rax
  unsigned __int64 ContextSizeOverride; // r8
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  const _GUID *v29; // [rsp+20h] [rbp-68h]
  FxPoolTypeOrPoolFlags typeOrFlags; // [rsp+50h] [rbp-38h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  Tag = FxDriverGlobals->Tag;
  v8 = 0LL;
  v9 = Attributes;
  typeOrFlags.u.PoolFlags = 64LL;
  LODWORD(Attributes) = 15;
  LOWORD(v11) = -16;
  if ( PoolFlags == FxObjectTypeInternal )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      v15 = -1LL;
      if ( v9 + 48 >= v9 )
        v15 = v9 + 48;
      id = v9 + 48 < v9 ? 0xC0000095 : 0;
    }
    else
    {
      v15 = v9;
      id = 0;
    }
    goto LABEL_13;
  }
  flags = 0LL;
  if ( ObjectType )
  {
    ContextTypeInfo = ObjectType->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      flags = ObjectType->ContextSizeOverride;
      if ( !flags )
        flags = ContextTypeInfo->ContextSize;
    }
  }
  v14 = (((int)v9 + 15) & 0xFFF0LL) + ((FxDriverGlobals_0 + 15LL) & 0xFFF0);
  v15 = v14 + 48;
  if ( v14 + 48 < v14 )
  {
    v15 = -1LL;
    id = -1073741675;
    goto LABEL_29;
  }
  Attributes = -1LL;
  v16 = v14 + 48;
  id = 0;
  if ( flags )
  {
    v26 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v26 < flags )
    {
      id = -1073741675;
      goto LABEL_13;
    }
    v27 = v15 + v26;
    v28 = -1LL;
    if ( v27 >= v15 )
      v28 = v27;
    v15 = v28;
    id = v27 < v16 ? 0xC0000095 : 0;
  }
  v18 = v15;
  v11 = v15;
  if ( id < 0 )
    goto LABEL_29;
  if ( FxDriverGlobals->FxVerifierHandle )
  {
    v19 = v15 + 48;
    if ( v15 + 48 >= v15 )
      Attributes = v15 + 48;
    v15 = Attributes;
    id = v19 < v11 ? 0xC0000095 : 0;
    if ( v19 < v18 )
LABEL_29:
      WPP_IFR_SF_DDid(FxDriverGlobals, flags, Attributes, v11, v29, (unsigned __int16)v9, FxDriverGlobals_0, flags, id);
  }
LABEL_13:
  if ( id >= 0 )
  {
    v20 = retaddr;
    *(_QWORD *)&typeOrFlags.UsePoolType = 0LL;
    typeOrFlags.u.PoolFlags = 64LL;
    if ( !FxDriverGlobals->FxPoolTrackingOn )
      v20 = 0LL;
    v21 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, (__m128i *)&typeOrFlags, v15, Tag, v20);
    if ( v21 )
    {
      if ( FxDriverGlobals->FxVerifierHandle )
      {
        *(_OWORD *)v21 = 0LL;
        *((_OWORD *)v21 + 1) = 0LL;
        *((_OWORD *)v21 + 2) = 0LL;
        *((_DWORD *)v21 + 8) = 1146058822;
        v21 += 6;
      }
      if ( PoolFlags == FxObjectTypeExternal )
      {
        v22 = ((FxDriverGlobals_0 + 15) & 0xFFF0) + ((v9 + 15) & 0xFFF0);
        *(_OWORD *)((char *)v21 + v22) = 0LL;
        *(_OWORD *)((char *)v21 + v22 + 16) = 0LL;
        *(_OWORD *)((char *)v21 + v22 + 32) = 0LL;
        *(FX_POOL **)((char *)v21 + v22) = (FX_POOL *)v21;
        if ( ObjectType )
        {
          v23 = ObjectType->ContextTypeInfo;
          if ( v23 )
          {
            ContextSizeOverride = ObjectType->ContextSizeOverride;
            if ( !ContextSizeOverride )
              ContextSizeOverride = v23->ContextSize;
            memset((char *)v21 + v22 + 48, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          }
          *(FX_POOL **)((char *)v21 + v22 + 32) = (FX_POOL *)ObjectType->ContextTypeInfo;
        }
      }
    }
    return v21;
  }
  return (FX_POOL **)v8;
}
