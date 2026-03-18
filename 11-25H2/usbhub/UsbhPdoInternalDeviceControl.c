/*
 * XREFs of UsbhPdoInternalDeviceControl @ 0x1400089B0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1400095A4 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoReturnPortStatus @ 0x140009E40 (UsbhFdoReturnPortStatus.c)
 *     UsbhDecPdoIoCount @ 0x14000F830 (UsbhDecPdoIoCount.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x14001107C (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhWait @ 0x140014114 (UsbhWait.c)
 *     UsbhSetPdo_AllowIo @ 0x140017608 (UsbhSetPdo_AllowIo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x14001C3D0 (UsbhFdoValidateConnectionPdo.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhIdleIrp_Event @ 0x140033A44 (UsbhIdleIrp_Event.c)
 *     UsbhFdoSelectInterfacePdo @ 0x14003838C (UsbhFdoSelectInterfacePdo.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     UsbhFdoReturnDeviceHandle @ 0x14003B9B4 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x14003BA6C (UsbhFdoReturnTtDeviceHandle.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14003EDC0 (WPP_RECORDER_SF_q.c)
 *     UsbhFdoCyclePdoPort @ 0x1400405A0 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x140040708 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x14004076C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x14004085C (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x140040944 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x140040B3C (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x140040F3C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x140040FA0 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x140041060 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x140041270 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnHubName @ 0x140041318 (UsbhFdoReturnHubName.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1400413B8 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1400414A8 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x140041564 (UsbhFdoSubmitPdoIdleNotification.c)
 *     USBHUB_TriggerCallBacks @ 0x14004EEC4 (USBHUB_TriggerCallBacks.c)
 */

__int64 __fastcall UsbhPdoInternalDeviceControl(_QWORD *BugCheckParameter3, IRP *BugCheckParameter4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  __int64 v5; // r14
  unsigned int LowPart; // ebx
  __int64 v7; // rbp
  KSPIN_LOCK *v8; // r12
  KIRQL v9; // al
  KIRQL v10; // r13
  __int64 Pool2; // rax
  __int64 v12; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // r9
  struct _DEVICE_OBJECT *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  unsigned int MsDescriptorPdo; // r14d
  __int64 v21; // rbp
  _QWORD *v22; // rbx
  KIRQL v23; // r12
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // r8
  __int64 result; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  __int64 v34; // rcx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  unsigned int Status; // ebx
  int v48; // eax
  int v49; // [rsp+70h] [rbp+8h]

  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = BugCheckParameter3[8];
  if ( !v5 )
    goto LABEL_66;
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 0x220FB3u:
      UsbhWait(*(_QWORD *)(v5 + 1184), 100LL);
      if ( *(_BYTE *)(v5 + 2741) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            10,
            (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
        Log(*(_QWORD *)(v5 + 1184), 256, 1397903939, 0, *(_QWORD *)(v5 + 1184));
        UsbhSetPdo_AllowIo(v34, BugCheckParameter3);
        BugCheckParameter4->IoStatus.Status = 0;
        IofCompleteRequest(BugCheckParameter4, 0);
        result = 0LL;
        *(_QWORD *)(v5 + 2784) = 0LL;
        *(_BYTE *)(v5 + 2741) = 0;
        return result;
      }
      if ( *(_DWORD *)(v5 + 784) != 2 )
      {
LABEL_109:
        v49 = 1232023609;
        goto LABEL_9;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          3,
          11,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
      Log(*(_QWORD *)(v5 + 1184), 256, 1397903953, 0, *(_QWORD *)(v5 + 1184));
      *(_QWORD *)(v5 + 2784) = BugCheckParameter4;
LABEL_46:
      BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      return 259LL;
    case 0x220FABu:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          0x40000000u,
          3,
          12,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
          *(_QWORD *)(v5 + 1184));
      v28 = *(_QWORD *)(v5 + 1184);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 64);
          if ( v29 )
          {
            v30 = *(_QWORD *)(v29 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
            *(_DWORD *)v30 = 1213354579;
            *(_QWORD *)(v30 + 8) = 0LL;
            *(_QWORD *)(v30 + 16) = 0LL;
            *(_QWORD *)(v30 + 24) = v28;
          }
        }
      }
      *(_QWORD *)(v5 + 2792) = BugCheckParameter4;
      goto LABEL_46;
    case 0x220463u:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          0x40000000u,
          1,
          13,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
          *(_QWORD *)(v5 + 840));
      BugCheckParameter4->IoStatus.Status = 0;
      IofCompleteRequest(BugCheckParameter4, 0);
      *(_DWORD *)(v5 + 1432) |= 0x80000u;
      return 0LL;
    case 0x220420u:
      v49 = 1232023603;
      goto LABEL_9;
  }
  if ( LowPart > 0x220424 )
  {
    if ( LowPart > 0x22044F )
    {
      switch ( LowPart )
      {
        case 0x491404u:
          v49 = 1232023857;
          goto LABEL_9;
        case 0x491408u:
          v49 = 1232023858;
          goto LABEL_9;
        case 0x49140Fu:
          v49 = 1232023859;
          goto LABEL_9;
      }
    }
    else
    {
      switch ( LowPart )
      {
        case 0x22044Fu:
          v49 = 1232023856;
          goto LABEL_9;
        case 0x22042Cu:
          v49 = 1232023652;
          goto LABEL_9;
        case 0x220433u:
          v49 = 1232023607;
          goto LABEL_9;
        case 0x220437u:
          v49 = 1232023608;
          goto LABEL_9;
        case 0x22043Bu:
          v49 = 1232023606;
          goto LABEL_9;
      }
    }
LABEL_106:
    v49 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    goto LABEL_9;
  }
  if ( LowPart == 2229284 )
  {
    v49 = 1232023602;
  }
  else
  {
    switch ( LowPart )
    {
      case 0x220003u:
        v49 = 1232023604;
        break;
      case 0x220007u:
        goto LABEL_109;
      case 0x22000Fu:
        v49 = 1232023601;
        break;
      case 0x220013u:
        v49 = 1232023605;
        break;
      case 0x220017u:
        v49 = 1232023649;
        break;
      case 0x22001Bu:
        v49 = 1232023600;
        break;
      case 0x22001Fu:
        v49 = 1232023650;
        break;
      case 0x220020u:
        v49 = 1232023651;
        break;
      case 0x220027u:
        v49 = 1232023653;
        break;
      case 0x22002Bu:
        v49 = 1232023654;
        break;
      default:
        goto LABEL_106;
    }
  }
LABEL_9:
  v7 = BugCheckParameter3[8];
  if ( !v7 )
    goto LABEL_66;
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  v8 = (KSPIN_LOCK *)(v7 + 1216);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 1216));
  v10 = v9;
  if ( *(_DWORD *)(v7 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 1216), v9);
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    BugCheckParameter4->IoStatus.Status = -1073741810;
    IofCompleteRequest(BugCheckParameter4, 0);
    return 3221225486LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 24) = BugCheckParameter4;
      v12 = v7 + 1224;
      *(_DWORD *)Pool2 = 1330201673;
      *(_DWORD *)(Pool2 + 32) = v49;
      v13 = (_QWORD *)(Pool2 + 8);
      v14 = *(_QWORD **)(v12 + 8);
      if ( *v14 != v12 )
        goto LABEL_158;
      *v13 = v12;
      v13[1] = v14;
      *v14 = v13;
      *(_QWORD *)(v12 + 8) = v13;
    }
    else
    {
      ++*(_DWORD *)(v7 + 1264);
    }
    KeReleaseSpinLock(v8, v10);
    if ( LowPart == 2228227 )
    {
      v16 = *(struct _DEVICE_OBJECT **)(v5 + 1184);
      v17 = FdoExt(v16);
      v18 = BugCheckParameter3[8];
      if ( !v18 )
        goto LABEL_66;
      if ( *(_DWORD *)v18 != 1329877064 )
        UsbhTrapFatal_Dbg(BugCheckParameter3, v18);
      SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
      SecurityContext->AccessState = *(_ACCESS_STATE **)(v18 + 1160);
      if ( WORD1(SecurityContext->SecurityQos) != 19 )
      {
        switch ( WORD1(SecurityContext->SecurityQos) )
        {
          case 0:
            MsDescriptorPdo = UsbhFdoSelectConfigurationPdo(v16, BugCheckParameter3, BugCheckParameter4);
            break;
          case 1:
            MsDescriptorPdo = UsbhFdoSelectInterfacePdo(v16, BugCheckParameter3, BugCheckParameter4);
            break;
          case 0x1E:
          case 0x30:
          case 0x31:
            MsDescriptorPdo = UsbhFdoValidateConnectionPdo(v16, BugCheckParameter3, BugCheckParameter4);
            break;
          case 0x2A:
            MsDescriptorPdo = UsbhFdoGetMsDescriptorPdo(v16, BugCheckParameter3, BugCheckParameter4);
            break;
          default:
            goto LABEL_64;
        }
        return MsDescriptorPdo;
      }
      if ( (*(_DWORD *)(v18 + 1432) & 0x80000) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            1,
            19,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
            *(_QWORD *)(v18 + 840));
        MsDescriptorPdo = -1073741637;
        BugCheckParameter4->IoStatus.Status = -1073741637;
        IofCompleteRequest(BugCheckParameter4, 0);
        v21 = BugCheckParameter3[8];
        if ( v21 )
        {
          if ( *(_DWORD *)v21 != 1329877064 )
            UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
          v22 = (_QWORD *)(v21 + 1224);
          v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 1216));
          v24 = *(_QWORD **)(v21 + 1224);
          if ( v24 == (_QWORD *)(v21 + 1224) || !v24 )
          {
LABEL_159:
            v48 = *(_DWORD *)(v21 + 1264);
            if ( !v48 )
            {
              USBHUB_TriggerCallBacks(BugCheckParameter3);
              KeBugCheckEx(0xFEu, 8uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
            }
            *(_DWORD *)(v21 + 1264) = v48 - 1;
            goto LABEL_31;
          }
          while ( 1 )
          {
            if ( v24 == v22 )
              goto LABEL_159;
            v25 = (_QWORD *)*v24;
            if ( (IRP *)v24[2] == BugCheckParameter4 )
              break;
            v24 = (_QWORD *)*v24;
          }
          if ( (_QWORD *)v25[1] == v24 )
          {
            v26 = (_QWORD *)v24[1];
            if ( (_QWORD *)*v26 == v24 )
            {
              *v26 = v25;
              v25[1] = v26;
              ExFreePoolWithTag(v24 - 1, 0);
LABEL_31:
              if ( (_QWORD *)*v22 != v22 || *(_DWORD *)(v21 + 1264) )
              {
                KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 1216), v23);
              }
              else
              {
                KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 1216), v23);
                KeSetEvent((PRKEVENT)(v21 + 1240), 0, 0);
              }
              return MsDescriptorPdo;
            }
          }
LABEL_158:
          __fastfail(3u);
        }
LABEL_66:
        UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
      }
LABEL_64:
      ++BugCheckParameter4->CurrentLocation;
      ++BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
      MsDescriptorPdo = IofCallDriver(*(PDEVICE_OBJECT *)(v17 + 1216), BugCheckParameter4);
LABEL_65:
      UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      return MsDescriptorPdo;
    }
    if ( LowPart <= 0x22042C )
    {
      if ( LowPart == 2229292 )
      {
        MsDescriptorPdo = -1073741637;
        BugCheckParameter4->IoStatus.Status = -1073741637;
        IofCompleteRequest(BugCheckParameter4, 0);
        goto LABEL_65;
      }
      if ( LowPart > 0x22001F )
      {
        v36 = LowPart - 2228256;
        if ( !v36 )
          return UsbhFdoReturnHubName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v37 = v36 - 7;
        if ( !v37 )
          return UsbhFdoSubmitPdoIdleNotification(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v38 = v37 - 4;
        if ( !v38 )
          return UsbhFdoRecordFailure(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v39 = v38 - 1013;
        if ( !v39 )
          return UsbhFdoReturnDeviceBusInfo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        if ( v39 == 4 )
          return UsbhFdoReturnControllerName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        goto LABEL_150;
      }
      if ( LowPart == 2228255 )
        return UsbhFdoCyclePdoPort(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      v31 = LowPart - 2228231;
      if ( v31 )
      {
        v32 = v31 - 8;
        if ( !v32 )
          return UsbhFdoReturnRootHubPdo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v33 = v32 - 4;
        if ( !v33 )
          return UsbhFdoReturnPortStatus(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v35 = v33 - 4;
        if ( !v35 )
        {
          BugCheckParameter4->IoStatus.Status = 0;
          IofCompleteRequest(BugCheckParameter4, 0);
          UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          return 0LL;
        }
        if ( v35 == 4 )
          return UsbhFdoReturnHubCount(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
LABEL_150:
        Status = BugCheckParameter4->IoStatus.Status;
        BugCheckParameter4->IoStatus.Status = Status;
        IofCompleteRequest(BugCheckParameter4, 0);
        UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        return Status;
      }
      return UsbhFdoResetPdoPort(
               *(PDEVICE_OBJECT *)(v5 + 1184),
               (ULONG_PTR)BugCheckParameter3,
               (ULONG_PTR)BugCheckParameter4);
    }
    if ( LowPart <= 0x22044F )
    {
      if ( LowPart == 2229327 )
        return UsbhFdoReturnDeviceConfigInfo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      v40 = LowPart - 2229299;
      if ( v40 )
      {
        v41 = v40 - 4;
        if ( v41 )
        {
          v42 = v41 - 4;
          if ( !v42 )
            return UsbhFdoReturnTtDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
          v43 = v42 - 4;
          if ( !v43 )
            return UsbhFdoReturnTopologyAddress(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
          if ( v43 == 4 )
            return UsbhIdleIrp_Event(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, 7LL, 0);
          goto LABEL_150;
        }
        LOBYTE(v15) = 1;
      }
      else
      {
        v15 = 0LL;
      }
      return UsbhFdoReturnDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, v15);
    }
    v44 = LowPart - 2232243;
    if ( !v44 )
      return UsbhFdoResetPdoPort(
               *(PDEVICE_OBJECT *)(v5 + 1184),
               (ULONG_PTR)BugCheckParameter3,
               (ULONG_PTR)BugCheckParameter4);
    v45 = v44 - 2557009;
    if ( v45 )
    {
      v46 = v45 - 4;
      if ( v46 )
      {
        if ( v46 == 7 )
          return UsbhFdoHandleNotifyForwardProgress(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        goto LABEL_150;
      }
      return UsbhFdoHandleFreeDumpDataIoctl(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    }
    else
    {
      return UsbhFdoHandleGetDumpDataIoctl(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    }
  }
}
