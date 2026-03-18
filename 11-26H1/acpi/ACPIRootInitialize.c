/*
 * XREFs of ACPIRootInitialize @ 0x1400B9B0C
 * Callers:
 *     ACPITableLoad @ 0x140049220 (ACPITableLoad.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001B3DC (WPP_RECORDER_SF_.c)
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     ACPIInitReferenceDeviceExtension @ 0x14001E480 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     AMLIGetParent @ 0x14001E8A8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     IsHypervisorLpiCapable @ 0x1400494F8 (IsHypervisorLpiCapable.c)
 *     _ACPIInternalError @ 0x14004B798 (_ACPIInternalError.c)
 *     ACPIInternalSetDeviceInterface @ 0x14004E790 (ACPIInternalSetDeviceInterface.c)
 *     HviGetHypervisorFeatures @ 0x140053758 (HviGetHypervisorFeatures.c)
 *     AMLISetNSObjectContext @ 0x140053F34 (AMLISetNSObjectContext.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x140054B0C (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x140054F3C (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x140055074 (ACPIFixedFeatureButtonInitialize.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     ACPIEvaluateOscMethodOnRootBus @ 0x1400AA558 (ACPIEvaluateOscMethodOnRootBus.c)
 *     AcpiEvaluateOscVsmMethodOnRootBus @ 0x1400AAEA0 (AcpiEvaluateOscVsmMethodOnRootBus.c)
 *     ACPIOverrideUsb4Control @ 0x1400AB060 (ACPIOverrideUsb4Control.c)
 *     AcpiDiagTraceS4DsmFailure @ 0x1400AB2A4 (AcpiDiagTraceS4DsmFailure.c)
 *     ACPIPccLegacyInitialize @ 0x1400B2490 (ACPIPccLegacyInitialize.c)
 *     ACPIPccInterruptInitialize @ 0x1400B2BE0 (ACPIPccInterruptInitialize.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1400B967C (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus @ 0x1400B97FC (ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1400B9984 (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     ACPIVerifyUSB4Presence @ 0x1400BA408 (ACPIVerifyUSB4Presence.c)
 *     ACPIWriteEmcaSupportToRegistry @ 0x1400BA4C0 (ACPIWriteEmcaSupportToRegistry.c)
 *     ACPIWriteStrictS4SupportToRegistry @ 0x1400BA544 (ACPIWriteStrictS4SupportToRegistry.c)
 *     IsHypervisorCpcCapable @ 0x1400BA5A8 (IsHypervisorCpcCapable.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1400C8FDC (ACPIWriteOscSupportToRegistry.c)
 *     ACPIAmliEvaluateOsc @ 0x1400CD900 (ACPIAmliEvaluateOsc.c)
 */

__int64 ACPIRootInitialize()
{
  unsigned int v0; // r15d
  int v1; // edi
  int v2; // esi
  unsigned int v3; // r12d
  int v4; // edx
  __int64 v5; // rbx
  __int64 *v6; // rcx
  int v7; // edx
  int v8; // ecx
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v14; // r9
  bool v15; // al
  bool v16; // bl
  __int64 v17; // rcx
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // r8d
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rcx
  int v28; // r8d
  __int64 v29; // rcx
  unsigned __int8 v30; // al
  bool v31; // cc
  int v32; // eax
  _QWORD *v33; // rax
  _DWORD v35[4]; // [rsp+30h] [rbp-40h] BYREF
  int v36[4]; // [rsp+40h] [rbp-30h] BYREF
  __int64 Data; // [rsp+50h] [rbp-20h] BYREF
  char v38; // [rsp+58h] [rbp-18h]

  v35[0] = 0;
  v38 = 0;
  Data = 0LL;
  *(_QWORD *)v36 = 0LL;
  v0 = 0;
  gUsb4ControlGranted = 0;
  v1 = 0;
  v2 = 0;
  LOBYTE(v3) = 0;
  if ( (int)AMLIGetNameSpaceObject("\\_SB", 0LL, v36, 0) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        22,
        30,
        (__int64)&WPP_6ec2c04a42a73872bc28b180499bcec1_Traceguids);
    }
    ACPIInternalError(0x110C51uLL);
  }
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  v5 = *(_QWORD *)v36;
  v6 = *(__int64 **)v36;
  *(_QWORD *)(RootDeviceExtension + 760) = *(_QWORD *)v36;
  AMLISetNSObjectContext(v6, RootDeviceExtension);
  ACPIRootDeviceNotifyPepDiscoverDevice();
  ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice();
  ACPIFixedFeatureButtonInitialize();
  v8 = ACPIPccInterruptInitialize();
  if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      21,
      31,
      (__int64)&WPP_6ec2c04a42a73872bc28b180499bcec1_Traceguids,
      v8);
  }
  v9 = (__int64 *)AMLIGetParent(v5);
  v10 = AMLIGetNamedChild(v9, 1229867359);
  AMLIDereferenceHandleEx((__int64)v9);
  if ( v10 )
  {
    AMLIAsyncEvalObject(v10, 0LL, 0, 0LL, 0LL, 0LL);
    AMLIDereferenceHandleEx((__int64)v10);
  }
  if ( (AcpiOverrideAttributes & 0x4000) == 0 )
  {
    v36[0] = 0;
    if ( !(unsigned int)ACPIEvaluateOscWheaMethodOnRootBus(v12, v11, v13, v14, v36) )
      v1 = 1;
  }
  ACPIPccLegacyInitialize(v12);
  v15 = IsHypervisorLpiCapable();
  *(_OWORD *)v36 = 0LL;
  v16 = v15;
  HviGetHypervisorFeatures();
  if ( (*(_QWORD *)v36 & 0x100000000000LL) != 0 )
  {
    if ( !(unsigned __int8)IsHypervisorCpcCapable() )
      AcpiRootFeaturesSupported &= 0xFFFEEF9F;
    if ( !v16 )
      AcpiRootFeaturesSupported &= ~1u;
    v35[0] |= 1u;
  }
  ACPIOverrideUsb4Control();
  if ( (AcpiOverrideAttributes & 0x8000000) != 0 )
    AcpiRootFeaturesSupported &= ~0x200000u;
  if ( !(unsigned int)ACPIEvaluateOscMethodOnRootBus(v17, 0, v18) )
  {
    v21 = ((unsigned int)AcpiRootFeaturesSupported >> 4) & 1;
    AcpiRootFeaturesGranted = AcpiRootFeaturesSupported;
    if ( v21 )
      v1 = 1;
    if ( (AcpiRootFeaturesSupported & 0x20) != 0 )
    {
      LOBYTE(v19) = -(AcpiRootFeaturesSupported & 0x40);
      v2 = ((AcpiRootFeaturesSupported & 0x40) != 0) + 1;
    }
    if ( (AcpiRootFeaturesSupported & 0x40000) != 0 )
    {
      if ( (int)ACPIVerifyUSB4Presence(v19) < 0 )
      {
        gUsb4ControlGranted = 0;
        Usb4ControlRetained = 0;
      }
      else
      {
        gUsb4ControlGranted = 1;
        Usb4ControlRetained = 1;
      }
    }
    v0 = v21;
    v3 = ((unsigned int)AcpiRootFeaturesSupported >> 19) & 1;
    if ( (AcpiRootFeaturesSupported & 0x200000) != 0 && (AcpiOverrideAttributes & 0x8000000) == 0 )
      AcpiPrmSupportGranted = 1;
  }
  v22 = *(_QWORD *)(RootDeviceExtension + 760);
  *(_OWORD *)v36 = SB_OSC_IOV_UUID;
  ACPIAmliEvaluateOsc(v22, (int)v36, v20, 1, v35);
  AcpiEvaluateOscVsmMethodOnRootBus(v24, v23, v25);
  ACPIWriteOscSupportToRegistry(v1, v0, v2, v26, v3, AcpiPrmSupportGranted);
  if ( v1 )
  {
    ACPIEvaluateDsmEmcaMethodOnRootBus(v27, (__int64)&Data);
    ACPIWriteEmcaSupportToRegistry(&Data);
  }
  AcpiInterruptCombiningSupported = 0;
  v29 = *((_QWORD *)AcpiInformation + 1);
  v30 = *(_BYTE *)(v29 + 8);
  v31 = v30 <= 6u;
  if ( v30 != 6 )
  {
LABEL_35:
    if ( v31 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(v29 + 131) < 2u )
  {
    v31 = 1;
    goto LABEL_35;
  }
LABEL_36:
  AcpiRootFeaturesSupported |= 0x2000u;
  ACPIEvaluateOscMethodOnRootBus(v29, 1u, v28);
  AcpiInterruptCombiningSupported = (AcpiRootFeaturesSupported & 0x2000) != 0;
LABEL_37:
  if ( *((_BYTE *)AcpiInformation + 133) )
  {
    v32 = ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus();
    if ( v32 < 0 )
      AcpiDiagTraceS4DsmFailure(v32);
    ACPIWriteStrictS4SupportToRegistry();
  }
  v33 = (_QWORD *)(RootDeviceExtension + 864);
  *(_QWORD *)(RootDeviceExtension + 872) = RootDeviceExtension + 864;
  *v33 = v33;
  KeInitializeEvent((PRKEVENT)(RootDeviceExtension + 904), SynchronizationEvent, 1u);
  Usb4FeatureControlPushLock = 0LL;
  AcpiUsb4FeatureControlGranted = 0;
  ACPIInternalSetDeviceInterface(*(PDEVICE_OBJECT *)(RootDeviceExtension + 784), &GUID_ACPI_ROOT_DEVICE_UUID);
  return 0LL;
}
