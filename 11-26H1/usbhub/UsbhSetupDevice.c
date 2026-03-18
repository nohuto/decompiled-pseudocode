/*
 * XREFs of UsbhSetupDevice @ 0x14000901C
 * Callers:
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 * Callees:
 *     UsbhFreeID @ 0x1400081A4 (UsbhFreeID.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhBuildDeviceID @ 0x14000D9A8 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x14000DCB8 (UsbhBuildHardwareID.c)
 *     UsbhBuildCompatibleID @ 0x14000E768 (UsbhBuildCompatibleID.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1400199F0 (UsbhQueryPortState.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhUpdateUxdSettings @ 0x1400220B4 (UsbhUpdateUxdSettings.c)
 *     UsbhGetLanguageIdString @ 0x14002D494 (UsbhGetLanguageIdString.c)
 *     UsbhSyncSendCommandToDevice @ 0x14002DA80 (UsbhSyncSendCommandToDevice.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x140031674 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetProductIdString @ 0x140036108 (UsbhGetProductIdString.c)
 *     Usbh__TestPoint__Ulong @ 0x1400367D4 (Usbh__TestPoint__Ulong.c)
 *     UsbhGetSerialNumber @ 0x1400389E8 (UsbhGetSerialNumber.c)
 *     UsbhGetDeviceInformation @ 0x14003947C (UsbhGetDeviceInformation.c)
 *     UsbhValidateDeviceDescriptor @ 0x14003A018 (UsbhValidateDeviceDescriptor.c)
 *     UsbhGetMSOS_Descriptor @ 0x1400425A4 (UsbhGetMSOS_Descriptor.c)
 *     UsbhGetMsOs20DescriptorSet @ 0x14004285C (UsbhGetMsOs20DescriptorSet.c)
 *     UsbhGetMsOsContainerID @ 0x1400429A0 (UsbhGetMsOsContainerID.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x140042CA4 (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhSendMsOs20AltEnumCommand @ 0x140043454 (UsbhSendMsOs20AltEnumCommand.c)
 *     UsbhGetAlternateUsbDescriptors @ 0x140046E6C (UsbhGetAlternateUsbDescriptors.c)
 *     UsbhGetBillboardInfo @ 0x140047008 (UsbhGetBillboardInfo.c)
 *     WPP_RECORDER_SF_S @ 0x140049A2C (WPP_RECORDER_SF_S.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x140057930 (UsbhBusIf_SetClearRootPortResumeTime.c)
 *     UsbhBusIf_SetMsOs20Support @ 0x140057A3C (UsbhBusIf_SetMsOs20Support.c)
 *     UsbhValidateBOSDescriptorSet @ 0x14005BBC0 (UsbhValidateBOSDescriptorSet.c)
 *     UsbhValidateMsOs20DescriptorSet @ 0x14005C040 (UsbhValidateMsOs20DescriptorSet.c)
 *     UsbhGetBosDescriptor @ 0x14005CAF8 (UsbhGetBosDescriptor.c)
 *     UsbhGetDeviceDescriptor @ 0x14005CC9C (UsbhGetDeviceDescriptor.c)
 *     UsbhGetQualifierDescriptorFromDevice @ 0x14005CD78 (UsbhGetQualifierDescriptorFromDevice.c)
 *     WnfPublishUsbPartnerDualRoleFeatures @ 0x140060850 (WnfPublishUsbPartnerDualRoleFeatures.c)
 *     UsbDualRoleFeaturesQueryLocalMachine @ 0x140061480 (UsbDualRoleFeaturesQueryLocalMachine.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 __fastcall UsbhSetupDevice(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // r12
  __int64 v8; // rbx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  int *v16; // r13
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  int (__fastcall *v24)(_QWORD, __int64, __int64, int *, _QWORD); // r10
  __int64 v25; // rcx
  int v26; // r8d
  int BosDescriptor; // r14d
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  char AlternateUsbDescriptors; // r15
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // r9
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  char v40; // cl
  __int64 v41; // rcx
  char v42; // al
  __int128 v43; // xmm0
  int MSOS_Descriptor; // eax
  void *v45; // r9
  int v46; // r8d
  PDEVICE_OBJECT v47; // rcx
  __int64 v48; // rdx
  int v49; // r14d
  int v50; // r8d
  void *Pool2; // r14
  int QualifierDescriptorFromDevice; // eax
  int v53; // eax
  unsigned int v54; // r10d
  int ValueData; // [rsp+20h] [rbp-69h]
  int ValueDataa; // [rsp+20h] [rbp-69h]
  int *ValueLength; // [rsp+28h] [rbp-61h]
  int v58; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v59[2]; // [rsp+58h] [rbp-31h] BYREF
  int v60; // [rsp+5Ah] [rbp-2Fh]
  __int16 v61; // [rsp+5Eh] [rbp-2Bh]
  int v62; // [rsp+60h] [rbp-29h] BYREF
  int v63; // [rsp+64h] [rbp-25h] BYREF
  __int64 v64; // [rsp+68h] [rbp-21h]
  __int128 v65; // [rsp+70h] [rbp-19h] BYREF
  __int128 v66; // [rsp+80h] [rbp-9h]
  __int128 v67; // [rsp+90h] [rbp+7h]
  __int64 v68; // [rsp+A0h] [rbp+17h]
  __int16 v69; // [rsp+100h] [rbp+77h] BYREF
  int v70; // [rsp+108h] [rbp+7Fh] BYREF

  v70 = 0;
  v58 = 0;
  LOBYTE(v69) = 0;
  v64 = FdoExt(a1, a2, a3, a4);
  v7 = v64;
  v8 = PdoExt(a2);
  Log(a1, 4, 1936028740, a2, *(unsigned __int16 *)(v8 + 1428));
  v9 = *(void **)(v8 + 2392);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(v8 + 2392) = 0LL;
  }
  v10 = *(void **)(v8 + 1136);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(v8 + 1136) = 0LL;
  }
  v11 = *(void **)(v8 + 1144);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(v8 + 1144) = 0LL;
  }
  v12 = *(void **)(v8 + 2240);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(v8 + 2240) = 0LL;
  }
  v13 = *(void **)(v8 + 2400);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *(_QWORD *)(v8 + 2400) = 0LL;
  }
  v14 = *(void **)(v8 + 2840);
  *(_QWORD *)(v8 + 2408) = 0LL;
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(v8 + 2840) = 0LL;
  }
  UsbhFreeID(v8 + 2128);
  *(_DWORD *)(v8 + 1420) &= ~0x200u;
  UsbhFreeID(v8 + 2176);
  UsbhFreeID(v8 + 2192);
  v15 = *(void **)(v8 + 2528);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(v8 + 2528) = 0LL;
  }
  v16 = (int *)(v8 + 2824);
  memset((void *)(v8 + 2824), 0, 0x40uLL);
  result = UsbhQueryPortState(a1, *(unsigned __int16 *)(v8 + 1428), &v70, &v58);
  if ( a3 )
    *a3 = v58;
  if ( (result & 0xC0000000) == 0xC0000000 )
  {
    *(_DWORD *)(v8 + 2820) = 1073807368;
    return result;
  }
  v18 = 1LL;
  if ( (v70 & 0x200) != 0 )
  {
    *(_DWORD *)(v8 + 1168) = 0;
    v18 = 0LL;
  }
  else if ( (v70 & 0x400) != 0 )
  {
    *(_DWORD *)(v8 + 1168) = 2;
    v18 = 2LL;
  }
  else
  {
    *(_DWORD *)(v8 + 1168) = 1;
  }
  Log(a1, 4, 1936999473, a2, v18);
  v63 = 18;
  v62 = 0;
  v19 = *(_QWORD *)(v8 + 1160);
  v23 = FdoExt(a1, v20, v21, v22);
  v24 = *(int (__fastcall **)(_QWORD, __int64, __int64, int *, _QWORD))(v23 + 4272);
  if ( !v24 )
    goto LABEL_115;
  ValueLength = &v62;
  if ( v24(*(_QWORD *)(v23 + 4232), v19, v8 + 1400, &v63, 0LL) < 0 )
    goto LABEL_115;
  UsbhGetInitRegUsbDeviceFlags(v25, a2);
  if ( !*(_BYTE *)(v8 + 2895) )
    goto LABEL_32;
  if ( (int)UsbhSendMsOs20AltEnumCommand(a1, a2, v8 + 2888) < 0 )
  {
LABEL_42:
    *(_DWORD *)(v8 + 2820) = 1073807390;
    return 3221225485LL;
  }
  if ( (int)UsbhGetDeviceDescriptor(a1, a2) < 0 )
  {
LABEL_115:
    *(_DWORD *)(v8 + 2820) = 1073807360;
    return 3221225485LL;
  }
  if ( !(unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v8 + 1400, v26, 0, 0LL) )
  {
    *(_DWORD *)(v8 + 2820) = 1073807365;
    return 3221225485LL;
  }
  UsbhBusIf_SetMsOs20Support(a1, *(_QWORD *)(v8 + 1160), v8 + 1400, 0LL);
LABEL_32:
  result = UsbhGetDeviceInformation(a1, a2);
  BosDescriptor = result;
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  if ( *(_WORD *)(v8 + 1402) > 0x200u && (*(_DWORD *)(v8 + 1432) & 0x20000) == 0 )
  {
    v28 = *(_QWORD *)(v8 + 1184);
    v70 = 0;
    BosDescriptor = UsbhGetBosDescriptor(v28, a2, &v70);
    if ( BosDescriptor < 0 )
      return (unsigned int)BosDescriptor;
    v29 = *(_QWORD *)(v8 + 2400);
    v68 = 0LL;
    v65 = 0LL;
    v66 = 0LL;
    v67 = 0LL;
    AlternateUsbDescriptors = UsbhValidateBOSDescriptorSet(a1, v29, (int)v8 + 1400, v70, (__int64)&v65);
    if ( AlternateUsbDescriptors == 1 )
      *(_DWORD *)(v8 + 2804) |= 0x20u;
    v32 = *((_QWORD *)&v66 + 1);
    if ( *((_QWORD *)&v66 + 1) )
    {
      if ( *(_BYTE *)(*((_QWORD *)&v66 + 1) + 7LL) && (*(_DWORD *)(v8 + 1420) & 0x40000000) == 0 )
      {
        v33 = **((_QWORD **)&v66 + 1);
        *v16 |= 4u;
        *(_QWORD *)(v8 + 2888) = v33;
        BosDescriptor = UsbhSendMsOs20AltEnumCommand(a1, a2, v32);
        if ( BosDescriptor < 0 )
          goto LABEL_42;
        AlternateUsbDescriptors = UsbhGetAlternateUsbDescriptors(a1, a2, &v65);
        if ( !AlternateUsbDescriptors )
          return 3221225485LL;
        RtlWriteRegistryValue(0, *(PCWSTR *)(v8 + 1144), L"MsOs20DescriptorSetInfo", 3u, (PVOID)(v8 + 2888), 8u);
        v32 = *((_QWORD *)&v66 + 1);
        v7 = v64;
      }
      if ( v32 )
      {
        *v16 |= 1u;
        *(_DWORD *)(v8 + 1432) &= 0xFFFFF9FF;
        if ( *(_WORD *)(v32 + 4) )
        {
          LOBYTE(v32) = *(_BYTE *)(v32 + 6);
          UsbhBusIf_SetMsOs20Support(a1, *(_QWORD *)(v8 + 1160), 0LL, v32);
          BosDescriptor = UsbhGetMsOs20DescriptorSet(a1, a2, *((_QWORD *)&v66 + 1));
          if ( BosDescriptor < 0 )
          {
            ValueData = *(unsigned __int16 *)(v8 + 1428);
            *(_DWORD *)(v8 + 2820) = 1073807388;
            UsbhEtwLogHubIrpEvent(
              a1,
              0LL,
              0LL,
              &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_FAILURE,
              ValueData,
              BosDescriptor);
            return (unsigned int)BosDescriptor;
          }
          AlternateUsbDescriptors = UsbhValidateMsOs20DescriptorSet(a1, a2, *((_QWORD *)&v66 + 1));
          if ( !AlternateUsbDescriptors )
          {
            ValueDataa = *(unsigned __int16 *)(v8 + 1428);
            *(_DWORD *)(v8 + 2820) = 1073807389;
            UsbhEtwLogHubIrpEvent(
              a1,
              0LL,
              0LL,
              &USBHUB_ETW_EVENT_HUB_ENUM_MSOS20_DESC_VALIDATION_FAILURE,
              ValueDataa,
              -1073741811);
            return 3221225485LL;
          }
          v35 = *v16;
          if ( (*v16 & 0x200) != 0 )
            *(_DWORD *)(v8 + 1420) |= 0x20u;
          if ( (v35 & 0x80u) != 0 && (*(_BYTE *)(v8 + 1180) & 0x10) != 0 && (*(_BYTE *)(v8 + 1420) & 4) == 0 )
          {
            LOBYTE(v34) = 1;
            v36 = *(unsigned __int8 *)(*(_QWORD *)(v8 + 2856) + 5LL);
            if ( (*(_BYTE *)(v7 + 2560) & 1) == 0 )
              v36 = 20LL;
            UsbhBusIf_SetClearRootPortResumeTime(a1, *(_QWORD *)(v8 + 1160), v34, v36);
            *(_DWORD *)(v8 + 1420) |= 0x20000000u;
          }
        }
      }
    }
    v37 = v67;
    if ( (_QWORD)v67 )
    {
      *(_DWORD *)(v8 + 1432) |= 0x40000u;
      LOBYTE(v30) = 1;
      v38 = *(_QWORD *)(v8 + 3056);
      *(_DWORD *)(v8 + 3048) = *(_DWORD *)(v37 + 22);
      v39 = *(unsigned int *)(v37 + 22);
      v70 = 0;
      WnfPublishUsbPartnerDualRoleFeatures(v38, v30, v39);
      UsbDualRoleFeaturesQueryLocalMachine(&v70);
      v59[0] = 64;
      v61 = 0;
      v40 = *(_BYTE *)(v67 + 21);
      v60 = v70;
      v59[1] = v40;
      v41 = *(_QWORD *)(v8 + 1184);
      LOWORD(v70) = 0;
      BosDescriptor = UsbhSyncSendCommandToDevice(
                        v41,
                        a2,
                        (unsigned int)v59,
                        0,
                        (__int64)&v70,
                        (_DWORD)ValueLength,
                        (__int64)&v58);
      if ( BosDescriptor < 0 )
        Log(a1, 4, 1399075121, 0, 0LL);
    }
    if ( *((_QWORD *)&v67 + 1) )
    {
      result = UsbhGetBillboardInfo(*(_QWORD *)(v8 + 1184), a2);
      BosDescriptor = result;
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(v8 + 2408) = *((_QWORD *)&v67 + 1);
    }
    if ( *(_BYTE *)(*(_QWORD *)(v8 + 2392) + 4LL) > 1u && (_BYTE)v68 == 1 )
    {
      v42 = *(_BYTE *)(v8 + 1404);
      if ( !v42 || v42 == -17 && *(_BYTE *)(v8 + 1405) == 2 && *(_BYTE *)(v8 + 1406) == 1 )
        *(_DWORD *)(v8 + 1420) |= 0x20u;
    }
    if ( !*(_BYTE *)(v8 + 2732) && AlternateUsbDescriptors == 1 && (_QWORD)v66 )
    {
      v43 = *(_OWORD *)(v66 + 4);
      *(_BYTE *)(v8 + 2732) = 1;
      *(_OWORD *)(v8 + 2716) = v43;
    }
    if ( *((_QWORD *)&v65 + 1) )
    {
      *(_DWORD *)(v8 + 1420) |= 0x80000u;
      *(_DWORD *)(v8 + 2804) |= 0x200u;
    }
  }
  if ( BosDescriptor < 0 )
    return (unsigned int)BosDescriptor;
  if ( (*(_BYTE *)v16 & 2) == 0 )
  {
    MSOS_Descriptor = UsbhGetMSOS_Descriptor(a1, a2);
    BosDescriptor = MSOS_Descriptor;
    if ( (MSOS_Descriptor & 0xC0000000) == 0xC0000000 && MSOS_Descriptor != -1073741637 )
    {
      v45 = &USBHUB_ETW_EVENT_HUB_ENUM_MSOS_DESC_FAILURE;
LABEL_82:
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, v45, *(unsigned __int16 *)(v8 + 1428), BosDescriptor);
      return (unsigned int)BosDescriptor;
    }
  }
  result = UsbhUpdateUxdSettings(a1, a2, 0LL, &v69);
  if ( (result & 0xC0000000) == 0xC0000000 )
    return result;
  BosDescriptor = UsbhGetSerialNumber(a1, a2, v8 + 2128);
  v47 = (PDEVICE_OBJECT)(BosDescriptor & 0xC0000000);
  if ( (_DWORD)v47 == -1073741824 )
  {
    v45 = &USBHUB_ETW_EVENT_HUB_ENUM_SERIAL_NUMBER_FAILURE;
    goto LABEL_82;
  }
  v48 = *(_QWORD *)(v8 + 2136);
  if ( v48 )
  {
    *(_DWORD *)(v8 + 1420) |= 0x200u;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v47 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          v48,
          v46,
          40,
          (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
          v48);
    }
  }
  if ( (*(_DWORD *)(v8 + 1432) & 0x400) != 0 && (*(_DWORD *)(v8 + 1420) & 0x20) == 0 )
    *(_QWORD *)(v8 + 2528) = UsbhGetMsOsExtendedConfigDesc(v47, a2);
  if ( (*(_DWORD *)(v8 + 1180) & 0x10) == 0 )
    BosDescriptor = UsbhGetMsOsContainerID(a1, a2);
  if ( (BosDescriptor & 0xC0000000) == 0xC0000000 && BosDescriptor != -1073741637 )
    return (unsigned int)BosDescriptor;
  UsbhFreeID(v8 + 2096);
  UsbhFreeID(v8 + 2080);
  UsbhFreeID(v8 + 2112);
  v49 = UsbhBuildDeviceID(a1, a2, v8 + 2080);
  if ( v49 >= 0 )
  {
    v49 = UsbhBuildHardwareID(a1, a2, v8 + 2096);
    if ( v49 >= 0 )
    {
      v49 = UsbhBuildCompatibleID(a1, a2, v8 + 2112);
      if ( (v49 & 0xC0000000) != 0xC0000000 )
        goto LABEL_102;
      UsbhFreeID(v8 + 2096);
    }
    UsbhFreeID(v8 + 2080);
  }
LABEL_102:
  UsbhGetLanguageIdString(a1, a2, v8 + 2176);
  if ( *(_BYTE *)(v8 + 1415) && (*(_DWORD *)(v8 + 1432) & 0x800) == 0 )
    UsbhGetProductIdString(*(_QWORD *)(v8 + 1184), a2, 1033LL, v8 + 2160);
  if ( v49 >= 0 && *(_DWORD *)(v64 + 2536) == 1 && *(_DWORD *)(v8 + 1168) == 1 && *(_WORD *)(v8 + 1402) >= 0x200u )
  {
    Pool2 = (void *)ExAllocatePool2(64LL, 10LL, 1112885333LL);
    if ( Pool2 )
    {
      v69 = 10;
      QualifierDescriptorFromDevice = UsbhGetQualifierDescriptorFromDevice(a1, a2, v50, (_DWORD)Pool2, (__int64)&v69);
      if ( QualifierDescriptorFromDevice >= 0 )
      {
        UsbhException(
          a1,
          *(unsigned __int16 *)(v8 + 1428),
          100,
          (_DWORD)Pool2,
          10,
          QualifierDescriptorFromDevice,
          0,
          (__int64)usbfile_bus_c,
          4689,
          0);
        *(_DWORD *)(v8 + 1420) |= 1u;
      }
      ExFreePoolWithTag(Pool2, 0);
    }
    v49 = 0;
  }
  v53 = Usbh__TestPoint__Ulong(a1, 6LL, (unsigned int)v49, *(unsigned __int16 *)(v8 + 1428));
  Log(a1, 4, 1936999486, a2, v53);
  return v54;
}
