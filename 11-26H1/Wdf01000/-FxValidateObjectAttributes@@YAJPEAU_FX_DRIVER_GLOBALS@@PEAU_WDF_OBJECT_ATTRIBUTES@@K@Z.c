/*
 * XREFs of ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0
 * Callers:
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140001AE0 (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140002E6C (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     imp_WdfIoTargetCreate @ 0x1400140A0 (imp_WdfIoTargetCreate.c)
 *     imp_WdfMemoryCreate @ 0x140014B20 (imp_WdfMemoryCreate.c)
 *     imp_WdfDeviceOpenRegistryKey @ 0x140018280 (imp_WdfDeviceOpenRegistryKey.c)
 *     imp_WdfStringCreate @ 0x1400183B0 (imp_WdfStringCreate.c)
 *     imp_WdfSpinLockCreate @ 0x140018550 (imp_WdfSpinLockCreate.c)
 *     imp_WdfTimerCreate @ 0x140018B50 (imp_WdfTimerCreate.c)
 *     imp_WdfIoQueueCreate @ 0x140018EE0 (imp_WdfIoQueueCreate.c)
 *     imp_WdfWorkItemCreate @ 0x14001A180 (imp_WdfWorkItemCreate.c)
 *     imp_WdfCommonBufferCreate @ 0x14001B0B0 (imp_WdfCommonBufferCreate.c)
 *     imp_WdfObjectCreate @ 0x14001B2C0 (imp_WdfObjectCreate.c)
 *     imp_WdfDpcCreate @ 0x14001C0F0 (imp_WdfDpcCreate.c)
 *     imp_WdfWaitLockCreate @ 0x14001C680 (imp_WdfWaitLockCreate.c)
 *     imp_WdfDmaTransactionCreate @ 0x14001DA30 (imp_WdfDmaTransactionCreate.c)
 *     imp_WdfDeviceCreate @ 0x14001E450 (imp_WdfDeviceCreate.c)
 *     imp_WdfMemoryCreatePreallocated @ 0x140023940 (imp_WdfMemoryCreatePreallocated.c)
 *     imp_WdfObjectAllocateContext @ 0x140023DD0 (imp_WdfObjectAllocateContext.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1400241D0 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1400245E0 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     imp_WdfRequestCreate @ 0x140024FC0 (imp_WdfRequestCreate.c)
 *     imp_WdfRegistryQueryMultiString @ 0x14003C530 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfCollectionCreate @ 0x14004BFD0 (imp_WdfCollectionCreate.c)
 *     imp_WdfDeviceAllocAndQueryPropertyEx @ 0x140054750 (imp_WdfDeviceAllocAndQueryPropertyEx.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x140057C7C (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x140058014 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     FxUsbTargetDeviceCreate @ 0x14005E6BC (FxUsbTargetDeviceCreate.c)
 *     ?_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFKEY__@@@Z @ 0x140069F98 (-_OpenKey@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@KKPEAU_WDF_OBJECT_ATTRI.c)
 *     imp_WdfDriverOpenParametersRegistryKey @ 0x14006B030 (imp_WdfDriverOpenParametersRegistryKey.c)
 *     imp_WdfDeviceAllocAndQueryProperty @ 0x14006B680 (imp_WdfDeviceAllocAndQueryProperty.c)
 *     imp_WdfDriverCreate @ 0x14006BE90 (imp_WdfDriverCreate.c)
 *     imp_WdfDeviceInitSetFileObjectConfig @ 0x140078A00 (imp_WdfDeviceInitSetFileObjectConfig.c)
 *     imp_WdfRegistryQueryMemory @ 0x140078F20 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfDeviceInitSetRequestAttributes @ 0x14007D7B0 (imp_WdfDeviceInitSetRequestAttributes.c)
 *     imp_WdfDeviceMiniportCreate @ 0x14007F6C0 (imp_WdfDeviceMiniportCreate.c)
 *     imp_WdfUsbInterfaceSelectSetting @ 0x14007FDA0 (imp_WdfUsbInterfaceSelectSetting.c)
 *     imp_WdfRegistryCreateKey @ 0x140081210 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryOpenKey @ 0x1400814D0 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfCommonBufferCreateWithConfig @ 0x140081770 (imp_WdfCommonBufferCreateWithConfig.c)
 *     imp_WdfChildListCreate @ 0x14008B4F0 (imp_WdfChildListCreate.c)
 *     imp_WdfFdoInitAllocAndQueryProperty @ 0x140090B80 (imp_WdfFdoInitAllocAndQueryProperty.c)
 *     imp_WdfFdoInitAllocAndQueryPropertyEx @ 0x140090C80 (imp_WdfFdoInitAllocAndQueryPropertyEx.c)
 *     imp_WdfFdoInitOpenRegistryKey @ 0x140090DE0 (imp_WdfFdoInitOpenRegistryKey.c)
 *     imp_WdfFdoInitSetDefaultChildListConfig @ 0x140091130 (imp_WdfFdoInitSetDefaultChildListConfig.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1400921D0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfCxDeviceInitSetFileObjectConfig @ 0x140093210 (imp_WdfCxDeviceInitSetFileObjectConfig.c)
 *     imp_WdfCxDeviceInitSetRequestAttributes @ 0x140093800 (imp_WdfCxDeviceInitSetRequestAttributes.c)
 *     imp_WdfLookasideListCreate @ 0x140094310 (imp_WdfLookasideListCreate.c)
 *     imp_WdfDriverOpenPersistentStateRegistryKey @ 0x140094770 (imp_WdfDriverOpenPersistentStateRegistryKey.c)
 *     imp_WdfIoResourceListCreate @ 0x140099180 (imp_WdfIoResourceListCreate.c)
 *     imp_WdfIoTargetAllocAndQueryTargetProperty @ 0x14009BC20 (imp_WdfIoTargetAllocAndQueryTargetProperty.c)
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x14009C760 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x14009D560 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x14009DCB0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 *     imp_WdfDmaEnablerCreate @ 0x1400A2360 (imp_WdfDmaEnablerCreate.c)
 *     imp_WdfInterruptCreate @ 0x1400A2980 (imp_WdfInterruptCreate.c)
 *     VfAllocateContext @ 0x1400E3224 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDd @ 0x140017BE4 (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qdd @ 0x14003EFD8 (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_qiid @ 0x14005646C (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_qid @ 0x1400565E4 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqddd @ 0x14007F870 (WPP_IFR_SF_qqddd.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 */

__int64 __fastcall FxValidateObjectAttributes(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        char Flags)
{
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  int _a4; // ecx
  __int64 ContextSize; // rcx
  const void *ContextSizeOverride; // rcx
  void *ParentObject; // rcx
  _WDF_EXECUTION_LEVEL _a2; // eax
  _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope; // ecx
  unsigned __int64 v12; // r11

  if ( !Attributes )
  {
    if ( (Flags & 8) != 0 )
    {
      WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x12u, 0xAu, WPP_FxValidateFunctions_cpp_Traceguids, 0xC0200212);
      return 3223323154LL;
    }
    return 0LL;
  }
  if ( Attributes->Size != 56 )
  {
    WPP_IFR_SF_qddd(
      FxDriverGlobals,
      (unsigned __int8)Attributes,
      6u,
      0xBu,
      WPP_FxValidateFunctions_cpp_Traceguids,
      Attributes,
      56,
      Attributes->Size,
      -1073741820);
    return 3221225476LL;
  }
  ContextTypeInfo = Attributes->ContextTypeInfo;
  if ( ContextTypeInfo )
  {
    _a4 = ContextTypeInfo->Size;
    if ( ContextTypeInfo->Size != 24 && _a4 != 40 )
    {
      WPP_IFR_SF_qqddd(
        FxDriverGlobals,
        (unsigned __int8)Attributes,
        6u,
        0xCu,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        ContextTypeInfo,
        _a4,
        40,
        -1073741820);
      return 3221225476LL;
    }
    ContextSize = ContextTypeInfo->ContextSize;
    if ( ContextSize )
    {
      if ( !ContextTypeInfo->ContextName )
      {
        WPP_IFR_SF_qiid(
          FxDriverGlobals,
          2u,
          6u,
          0xDu,
          WPP_FxValidateFunctions_cpp_Traceguids,
          Attributes,
          ContextTypeInfo,
          ContextSize,
          -1071644151);
        return 3223323145LL;
      }
    }
  }
  ContextSizeOverride = (const void *)Attributes->ContextSizeOverride;
  if ( ContextSizeOverride )
  {
    if ( !ContextTypeInfo )
    {
      WPP_IFR_SF_qid(
        FxDriverGlobals,
        2u,
        6u,
        0xEu,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        (__int64)ContextSizeOverride,
        -1071644151);
      return 3223323145LL;
    }
    v12 = ContextTypeInfo->ContextSize;
    if ( (unsigned __int64)ContextSizeOverride < v12 )
    {
      WPP_IFR_SF_qiid(
        FxDriverGlobals,
        2u,
        6u,
        0xFu,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        ContextSizeOverride,
        v12,
        -1071644151);
      return 3223323145LL;
    }
  }
  if ( (Flags & 1) != 0 )
  {
    ParentObject = Attributes->ParentObject;
    if ( ParentObject )
    {
      WPP_IFR_SF_qqd(
        FxDriverGlobals,
        2u,
        6u,
        0x10u,
        WPP_FxValidateFunctions_cpp_Traceguids,
        Attributes,
        ParentObject,
        0xC020020F);
      return 3223323151LL;
    }
  }
  else if ( (Flags & 0x10) != 0 && !Attributes->ParentObject )
  {
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0x11u, WPP_FxValidateFunctions_cpp_Traceguids, Attributes, -1071644142);
    return 3223323154LL;
  }
  _a2 = Attributes->ExecutionLevel;
  if ( _a2 == WdfExecutionLevelInvalid || _a2 > WdfExecutionLevelDispatch )
  {
    WPP_IFR_SF_qdd(FxDriverGlobals, 2u, 6u, 0x12u, WPP_FxValidateFunctions_cpp_Traceguids, Attributes, _a2, -1071644151);
    return 3223323145LL;
  }
  SynchronizationScope = Attributes->SynchronizationScope;
  if ( SynchronizationScope == WdfSynchronizationScopeInvalid || SynchronizationScope > WdfSynchronizationScopeNone )
  {
    WPP_IFR_SF_qdd(
      FxDriverGlobals,
      2u,
      6u,
      0x13u,
      WPP_FxValidateFunctions_cpp_Traceguids,
      Attributes,
      SynchronizationScope,
      -1071644151);
    return 3223323145LL;
  }
  if ( (Flags & 4) == 0
    && SynchronizationScope != WdfSynchronizationScopeInheritFromParent
    && SynchronizationScope != WdfSynchronizationScopeNone )
  {
    WPP_IFR_SF_qDd(
      FxDriverGlobals,
      (unsigned __int8)Attributes,
      6u,
      0x14u,
      WPP_FxValidateFunctions_cpp_Traceguids,
      Attributes,
      SynchronizationScope,
      0xC0200210);
    return 3223323152LL;
  }
  if ( (Flags & 2) != 0 || _a2 == WdfExecutionLevelInheritFromParent )
    return 0LL;
  WPP_IFR_SF_qDd(
    FxDriverGlobals,
    (unsigned __int8)Attributes,
    6u,
    0x15u,
    WPP_FxValidateFunctions_cpp_Traceguids,
    Attributes,
    _a2,
    0xC0200211);
  return 3223323153LL;
}
