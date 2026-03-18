/*
 * XREFs of UsbhPdoInternalDeviceControl @ 0x140018B20
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoValidateConnectionPdo @ 0x140007C8C (UsbhFdoValidateConnectionPdo.c)
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhWait @ 0x14000C584 (UsbhWait.c)
 *     UsbhSetPdo_AllowIo @ 0x140010690 (UsbhSetPdo_AllowIo.c)
 *     UsbhIdleIrp_Event @ 0x1400152D4 (UsbhIdleIrp_Event.c)
 *     UsbhFdoReturnPortStatus @ 0x140017DD0 (UsbhFdoReturnPortStatus.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x140019724 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1400357EC (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1400366EC (UsbhFdoSelectInterfacePdo.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     UsbhFdoReturnDeviceHandle @ 0x14003B41C (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x14003B4D4 (UsbhFdoReturnTtDeviceHandle.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 *     UsbhFdoCyclePdoPort @ 0x140040084 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x140040208 (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x14004026C (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x14004035C (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x140040444 (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x14004063C (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x140040A5C (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x140040AC0 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x140040B80 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x140040D9C (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnHubName @ 0x140040E44 (UsbhFdoReturnHubName.c)
 *     UsbhFdoReturnRootHubPdo @ 0x140040EE8 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x140040FD8 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x140041094 (UsbhFdoSubmitPdoIdleNotification.c)
 *     USBHUB_TriggerCallBacks @ 0x14004F3E4 (USBHUB_TriggerCallBacks.c)
 */

__int64 __fastcall UsbhPdoInternalDeviceControl(_QWORD *BugCheckParameter3, IRP *BugCheckParameter4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v5; // r14
  unsigned int LowPart; // ebx
  __int64 v7; // rbp
  KSPIN_LOCK *v8; // r15
  KIRQL v9; // al
  KIRQL v10; // r12
  __int64 Pool2; // rax
  __int64 v12; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _DEVICE_OBJECT *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  unsigned int MsDescriptorPdo; // r14d
  __int64 v24; // rbp
  _QWORD *v25; // rbx
  KIRQL v26; // r12
  _QWORD *v27; // rcx
  _QWORD *v28; // rdx
  _QWORD *v29; // r8
  __int64 result; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  __int64 v37; // rcx
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  unsigned int v47; // ebx
  unsigned int v48; // ebx
  unsigned int v49; // ebx
  unsigned int Status; // ebx
  int v51; // eax
  int v52; // [rsp+70h] [rbp+8h]

  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = BugCheckParameter3[8];
  if ( !v5 )
    goto LABEL_66;
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, v5);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 0x220FB3u:
      UsbhWait(*(_QWORD *)(v5 + 1184), 0x64u);
      if ( *(_BYTE *)(v5 + 2741) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            10,
            (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
        Log(*(_QWORD *)(v5 + 1184), 256, 1397903939, 0LL, *(_QWORD *)(v5 + 1184));
        UsbhSetPdo_AllowIo(v37, (__int64)BugCheckParameter3);
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
        v52 = 1232023609;
        goto LABEL_9;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          3,
          11,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
      Log(*(_QWORD *)(v5 + 1184), 256, 1397903953, 0LL, *(_QWORD *)(v5 + 1184));
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
      v31 = *(_QWORD *)(v5 + 1184);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 64);
          if ( v32 )
          {
            v33 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884))
                + *(_QWORD *)(v32 + 888);
            *(_DWORD *)v33 = 1213354579;
            *(_QWORD *)(v33 + 8) = 0LL;
            *(_QWORD *)(v33 + 16) = 0LL;
            *(_QWORD *)(v33 + 24) = v31;
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
      v52 = 1232023603;
      goto LABEL_9;
  }
  if ( LowPart > 0x220424 )
  {
    if ( LowPart > 0x22044F )
    {
      switch ( LowPart )
      {
        case 0x491404u:
          v52 = 1232023857;
          goto LABEL_9;
        case 0x491408u:
          v52 = 1232023858;
          goto LABEL_9;
        case 0x49140Fu:
          v52 = 1232023859;
          goto LABEL_9;
      }
    }
    else
    {
      switch ( LowPart )
      {
        case 0x22044Fu:
          v52 = 1232023856;
          goto LABEL_9;
        case 0x22042Cu:
          v52 = 1232023652;
          goto LABEL_9;
        case 0x220433u:
          v52 = 1232023607;
          goto LABEL_9;
        case 0x220437u:
          v52 = 1232023608;
          goto LABEL_9;
        case 0x22043Bu:
          v52 = 1232023606;
          goto LABEL_9;
      }
    }
LABEL_106:
    v52 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    goto LABEL_9;
  }
  if ( LowPart == 2229284 )
  {
    v52 = 1232023602;
  }
  else
  {
    switch ( LowPart )
    {
      case 0x220003u:
        v52 = 1232023604;
        break;
      case 0x220007u:
        goto LABEL_109;
      case 0x22000Fu:
        v52 = 1232023601;
        break;
      case 0x220013u:
        v52 = 1232023605;
        break;
      case 0x220017u:
        v52 = 1232023649;
        break;
      case 0x22001Bu:
        v52 = 1232023600;
        break;
      case 0x22001Fu:
        v52 = 1232023650;
        break;
      case 0x220020u:
        v52 = 1232023651;
        break;
      case 0x220027u:
        v52 = 1232023653;
        break;
      case 0x22002Bu:
        v52 = 1232023654;
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
      *(_DWORD *)(Pool2 + 32) = v52;
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
      v18 = *(struct _DEVICE_OBJECT **)(v5 + 1184);
      v19 = FdoExt(v18, v15, v16, v17);
      v21 = BugCheckParameter3[8];
      if ( !v21 )
        goto LABEL_66;
      if ( *(_DWORD *)v21 != 1329877064 )
        UsbhTrapFatal_Dbg(BugCheckParameter3, v21);
      SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
      SecurityContext->AccessState = *(_ACCESS_STATE **)(v21 + 1160);
      if ( WORD1(SecurityContext->SecurityQos) != 19 )
      {
        switch ( WORD1(SecurityContext->SecurityQos) )
        {
          case 0:
            MsDescriptorPdo = UsbhFdoSelectConfigurationPdo(
                                v18,
                                (ULONG_PTR)BugCheckParameter3,
                                (ULONG_PTR)BugCheckParameter4);
            break;
          case 1:
            MsDescriptorPdo = UsbhFdoSelectInterfacePdo(v18, BugCheckParameter3, BugCheckParameter4);
            break;
          case 0x1E:
          case 0x30:
          case 0x31:
            MsDescriptorPdo = UsbhFdoValidateConnectionPdo(
                                (__int64)v18,
                                (ULONG_PTR)BugCheckParameter3,
                                BugCheckParameter4,
                                v20);
            break;
          case 0x2A:
            MsDescriptorPdo = UsbhFdoGetMsDescriptorPdo(v18, BugCheckParameter3, BugCheckParameter4);
            break;
          default:
            goto LABEL_64;
        }
        return MsDescriptorPdo;
      }
      if ( (*(_DWORD *)(v21 + 1432) & 0x80000) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            v21,
            1,
            19,
            (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
            *(_QWORD *)(v21 + 840));
        MsDescriptorPdo = -1073741637;
        BugCheckParameter4->IoStatus.Status = -1073741637;
        IofCompleteRequest(BugCheckParameter4, 0);
        v24 = BugCheckParameter3[8];
        if ( v24 )
        {
          if ( *(_DWORD *)v24 != 1329877064 )
            UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
          v25 = (_QWORD *)(v24 + 1224);
          v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 1216));
          v27 = *(_QWORD **)(v24 + 1224);
          if ( v27 == (_QWORD *)(v24 + 1224) || !v27 )
          {
LABEL_159:
            v51 = *(_DWORD *)(v24 + 1264);
            if ( !v51 )
            {
              USBHUB_TriggerCallBacks(BugCheckParameter3);
              KeBugCheckEx(0xFEu, 8uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
            }
            *(_DWORD *)(v24 + 1264) = v51 - 1;
            goto LABEL_31;
          }
          while ( 1 )
          {
            if ( v27 == v25 )
              goto LABEL_159;
            v28 = (_QWORD *)*v27;
            if ( (IRP *)v27[2] == BugCheckParameter4 )
              break;
            v27 = (_QWORD *)*v27;
          }
          if ( (_QWORD *)v28[1] == v27 )
          {
            v29 = (_QWORD *)v27[1];
            if ( (_QWORD *)*v29 == v27 )
            {
              *v29 = v28;
              v28[1] = v29;
              ExFreePoolWithTag(v27 - 1, 0);
LABEL_31:
              if ( (_QWORD *)*v25 != v25 || *(_DWORD *)(v24 + 1264) )
              {
                KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 1216), v26);
              }
              else
              {
                KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 1216), v26);
                KeSetEvent((PRKEVENT)(v24 + 1240), 0, 0);
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
      MsDescriptorPdo = IofCallDriver(*(PDEVICE_OBJECT *)(v19 + 1216), BugCheckParameter4);
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
        v39 = LowPart - 2228256;
        if ( !v39 )
          return UsbhFdoReturnHubName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v40 = v39 - 7;
        if ( !v40 )
          return UsbhFdoSubmitPdoIdleNotification(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v41 = v40 - 4;
        if ( !v41 )
          return UsbhFdoRecordFailure(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v42 = v41 - 1013;
        if ( !v42 )
          return UsbhFdoReturnDeviceBusInfo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        if ( v42 == 4 )
          return UsbhFdoReturnControllerName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        goto LABEL_150;
      }
      if ( LowPart == 2228255 )
        return UsbhFdoCyclePdoPort(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      v34 = LowPart - 2228231;
      if ( v34 )
      {
        v35 = v34 - 8;
        if ( !v35 )
          return UsbhFdoReturnRootHubPdo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        v36 = v35 - 4;
        if ( !v36 )
          return UsbhFdoReturnPortStatus(*(_QWORD *)(v5 + 1184), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
        v38 = v36 - 4;
        if ( !v38 )
        {
          BugCheckParameter4->IoStatus.Status = 0;
          IofCompleteRequest(BugCheckParameter4, 0);
          UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          return 0LL;
        }
        if ( v38 == 4 )
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
      v43 = LowPart - 2229299;
      if ( v43 )
      {
        v44 = v43 - 4;
        if ( v44 )
        {
          v45 = v44 - 4;
          if ( !v45 )
            return UsbhFdoReturnTtDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
          v46 = v45 - 4;
          if ( !v46 )
            return UsbhFdoReturnTopologyAddress(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
          if ( v46 == 4 )
            return UsbhIdleIrp_Event(*(_QWORD *)(v5 + 1184), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4, 7u, 0);
          goto LABEL_150;
        }
        LOBYTE(v17) = 1;
      }
      else
      {
        v17 = 0LL;
      }
      return UsbhFdoReturnDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, v17);
    }
    v47 = LowPart - 2232243;
    if ( !v47 )
      return UsbhFdoResetPdoPort(
               *(PDEVICE_OBJECT *)(v5 + 1184),
               (ULONG_PTR)BugCheckParameter3,
               (ULONG_PTR)BugCheckParameter4);
    v48 = v47 - 2557009;
    if ( v48 )
    {
      v49 = v48 - 4;
      if ( v49 )
      {
        if ( v49 == 7 )
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
