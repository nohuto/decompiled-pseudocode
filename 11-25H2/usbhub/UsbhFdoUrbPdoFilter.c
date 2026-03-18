/*
 * XREFs of UsbhFdoUrbPdoFilter @ 0x140008670
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1400095A4 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhDecPdoIoCount @ 0x14000F830 (UsbhDecPdoIoCount.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x14001107C (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x14001C3D0 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhFdoSelectInterfacePdo @ 0x14003838C (UsbhFdoSelectInterfacePdo.c)
 *     UsbhTrapFatal_Dbg @ 0x14003A52C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_q @ 0x14003EDC0 (WPP_RECORDER_SF_q.c)
 *     USBHUB_TriggerCallBacks @ 0x14004EEC4 (USBHUB_TriggerCallBacks.c)
 */

__int64 __fastcall UsbhFdoUrbPdoFilter(
        PDEVICE_OBJECT DeviceObject,
        _QWORD *BugCheckParameter3,
        IRP *BugCheckParameter4)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // rbx
  KIRQL v11; // r15
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // r8
  __int64 result; // rax
  unsigned int v16; // ebx
  int v17; // eax

  v6 = FdoExt(DeviceObject);
  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = BugCheckParameter3[8];
  if ( !v7 )
    goto LABEL_30;
  if ( *(_DWORD *)v7 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, v7);
  SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityContext->AccessState = *(_ACCESS_STATE **)(v7 + 1160);
  if ( WORD1(SecurityContext->SecurityQos) != 19 )
  {
    switch ( WORD1(SecurityContext->SecurityQos) )
    {
      case 0:
        result = UsbhFdoSelectConfigurationPdo(DeviceObject, BugCheckParameter3, BugCheckParameter4);
        break;
      case 1:
        result = UsbhFdoSelectInterfacePdo(DeviceObject, BugCheckParameter3, BugCheckParameter4);
        break;
      case 0x1E:
      case 0x30:
      case 0x31:
        result = UsbhFdoValidateConnectionPdo(DeviceObject, BugCheckParameter3, BugCheckParameter4);
        break;
      case 0x2A:
        result = UsbhFdoGetMsDescriptorPdo(DeviceObject, BugCheckParameter3, BugCheckParameter4);
        break;
      default:
        goto LABEL_28;
    }
    return result;
  }
  if ( (*(_DWORD *)(v7 + 1432) & 0x80000) == 0 )
  {
LABEL_28:
    ++BugCheckParameter4->CurrentLocation;
    ++BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
    v16 = IofCallDriver(*(PDEVICE_OBJECT *)(v6 + 1216), BugCheckParameter4);
    UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return v16;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      1,
      19,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      *(_QWORD *)(v7 + 840));
  BugCheckParameter4->IoStatus.Status = -1073741637;
  IofCompleteRequest(BugCheckParameter4, 0);
  v9 = BugCheckParameter3[8];
  if ( !v9 )
LABEL_30:
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v9 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  v10 = (_QWORD *)(v9 + 1224);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 1216));
  v12 = *(_QWORD **)(v9 + 1224);
  if ( v12 != (_QWORD *)(v9 + 1224) && v12 )
  {
    while ( v12 != v10 )
    {
      v13 = (_QWORD *)*v12;
      if ( (IRP *)v12[2] == BugCheckParameter4 )
      {
        if ( (_QWORD *)v13[1] != v12 || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12) )
          __fastfail(3u);
        *v14 = v13;
        v13[1] = v14;
        ExFreePoolWithTag(v12 - 1, 0);
        goto LABEL_17;
      }
      v12 = (_QWORD *)*v12;
    }
  }
  v17 = *(_DWORD *)(v9 + 1264);
  if ( !v17 )
  {
    USBHUB_TriggerCallBacks(BugCheckParameter3);
    KeBugCheckEx(0xFEu, 8uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  *(_DWORD *)(v9 + 1264) = v17 - 1;
LABEL_17:
  if ( (_QWORD *)*v10 != v10 || *(_DWORD *)(v9 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 1216), v11);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 1216), v11);
    KeSetEvent((PRKEVENT)(v9 + 1240), 0, 0);
  }
  return 3221225659LL;
}
