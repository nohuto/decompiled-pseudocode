/*
 * XREFs of UsbhFdoUrbPdoFilter @ 0x1400187E0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoValidateConnectionPdo @ 0x140007C8C (UsbhFdoValidateConnectionPdo.c)
 *     UsbhDecPdoIoCount @ 0x140007EA0 (UsbhDecPdoIoCount.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x140019724 (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1400357EC (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1400366EC (UsbhFdoSelectInterfacePdo.c)
 *     UsbhTrapFatal_Dbg @ 0x140039F64 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 *     USBHUB_TriggerCallBacks @ 0x14004F3E4 (USBHUB_TriggerCallBacks.c)
 */

__int64 __fastcall UsbhFdoUrbPdoFilter(
        PDEVICE_OBJECT DeviceObject,
        _QWORD *BugCheckParameter3,
        IRP *BugCheckParameter4,
        __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  __int64 v11; // rsi
  _QWORD *v12; // rbx
  KIRQL v13; // r15
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  _QWORD *v16; // r8
  __int64 result; // rax
  unsigned int v18; // ebx
  int v19; // eax

  v7 = FdoExt(DeviceObject, BugCheckParameter3, BugCheckParameter4, a4);
  if ( !BugCheckParameter3 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v9 = BugCheckParameter3[8];
  if ( !v9 )
    goto LABEL_30;
  if ( *(_DWORD *)v9 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, v9);
  SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityContext->AccessState = *(_ACCESS_STATE **)(v9 + 1160);
  if ( WORD1(SecurityContext->SecurityQos) != 19 )
  {
    switch ( WORD1(SecurityContext->SecurityQos) )
    {
      case 0:
        result = UsbhFdoSelectConfigurationPdo(
                   DeviceObject,
                   (ULONG_PTR)BugCheckParameter3,
                   (ULONG_PTR)BugCheckParameter4);
        break;
      case 1:
        result = UsbhFdoSelectInterfacePdo(DeviceObject, BugCheckParameter3, BugCheckParameter4);
        break;
      case 0x1E:
      case 0x30:
      case 0x31:
        result = UsbhFdoValidateConnectionPdo(
                   (__int64)DeviceObject,
                   (ULONG_PTR)BugCheckParameter3,
                   BugCheckParameter4,
                   v8);
        break;
      case 0x2A:
        result = UsbhFdoGetMsDescriptorPdo(DeviceObject, BugCheckParameter3, BugCheckParameter4);
        break;
      default:
        goto LABEL_28;
    }
    return result;
  }
  if ( (*(_DWORD *)(v9 + 1432) & 0x80000) == 0 )
  {
LABEL_28:
    ++BugCheckParameter4->CurrentLocation;
    ++BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
    v18 = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 1216), BugCheckParameter4);
    UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return v18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      1,
      19,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      *(_QWORD *)(v9 + 840));
  BugCheckParameter4->IoStatus.Status = -1073741637;
  IofCompleteRequest(BugCheckParameter4, 0);
  v11 = BugCheckParameter3[8];
  if ( !v11 )
LABEL_30:
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v11 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  v12 = (_QWORD *)(v11 + 1224);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 1216));
  v14 = *(_QWORD **)(v11 + 1224);
  if ( v14 != (_QWORD *)(v11 + 1224) && v14 )
  {
    while ( v14 != v12 )
    {
      v15 = (_QWORD *)*v14;
      if ( (IRP *)v14[2] == BugCheckParameter4 )
      {
        if ( (_QWORD *)v15[1] != v14 || (v16 = (_QWORD *)v14[1], (_QWORD *)*v16 != v14) )
          __fastfail(3u);
        *v16 = v15;
        v15[1] = v16;
        ExFreePoolWithTag(v14 - 1, 0);
        goto LABEL_17;
      }
      v14 = (_QWORD *)*v14;
    }
  }
  v19 = *(_DWORD *)(v11 + 1264);
  if ( !v19 )
  {
    USBHUB_TriggerCallBacks(BugCheckParameter3);
    KeBugCheckEx(0xFEu, 8uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  *(_DWORD *)(v11 + 1264) = v19 - 1;
LABEL_17:
  if ( (_QWORD *)*v12 != v12 || *(_DWORD *)(v11 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 1216), v13);
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 1216), v13);
    KeSetEvent((PRKEVENT)(v11 + 1240), 0, 0);
  }
  return 3221225659LL;
}
