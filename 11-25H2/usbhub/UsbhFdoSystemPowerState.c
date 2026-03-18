/*
 * XREFs of UsbhFdoSystemPowerState @ 0x14002F8C0
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x14004B130 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDisableTimerObject @ 0x14000C938 (UsbhDisableTimerObject.c)
 *     GET_FDO_POWER_STATE @ 0x14000DD54 (GET_FDO_POWER_STATE.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhEtwLogHubPowerEvent @ 0x14002B584 (UsbhEtwLogHubPowerEvent.c)
 *     UsbhAcquireFdoPnpLock @ 0x140030180 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x140030244 (UsbhReleaseFdoPnpLock.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x140030C98 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhAcquireFdoPwrLock @ 0x1400316B0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14003173C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x140031794 (UsbhSetFdoPowerState.c)
 *     UsbhAcquirePowerContext @ 0x14003180C (UsbhAcquirePowerContext.c)
 *     UsbhEtwGetActivityId @ 0x14003642C (UsbhEtwGetActivityId.c)
 *     GET_FDO_PNPSTATE @ 0x14003A93C (GET_FDO_PNPSTATE.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003EAFC (WPP_RECORDER_SF_dd.c)
 *     UsbhFdoSetPowerS0_Action @ 0x14004B590 (UsbhFdoSetPowerS0_Action.c)
 *     UsbhFdoSetPowerSx_Action @ 0x14004B6C8 (UsbhFdoSetPowerSx_Action.c)
 *     Usbh_HubRootHubInitNotification @ 0x14004BB84 (Usbh_HubRootHubInitNotification.c)
 *     Usbh_FDO_Pnp_State @ 0x1400513E4 (Usbh_FDO_Pnp_State.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhFdoSystemPowerState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int LowPart; // r14d
  _DWORD *v5; // r15
  int v6; // r9d
  int v7; // r12d
  __int64 v8; // rdi
  const EVENT_DESCRIPTOR *v9; // r9
  const EVENT_DESCRIPTOR *v10; // r9
  _DWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r8
  int ActivityIdIrp; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v17; // ebx
  const EVENT_DESCRIPTOR *v18; // r9
  __int128 *v19; // r8
  bool v20; // zf
  void *v21; // r12
  const EVENT_DESCRIPTOR *v22; // r9
  _DWORD *v23; // rax
  int v24; // edx
  _DWORD *v25; // rax
  unsigned int v26; // edi
  int v27; // eax
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-78h]
  ULONG RemlockSizea[2]; // [rsp+20h] [rbp-78h]
  ULONG RemlockSizeb[2]; // [rsp+20h] [rbp-78h]
  ULONG RemlockSizec[2]; // [rsp+20h] [rbp-78h]
  __int64 v32; // [rsp+28h] [rbp-70h]
  __int64 v33; // [rsp+28h] [rbp-70h]
  __int128 v34; // [rsp+40h] [rbp-58h] BYREF

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v5 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1349745011, 0LL, (__int64)Irp);
  v7 = v6 + 1;
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Irp, File, v6 + 1, 0x20u);
  v9 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_S0_DISPATCH;
  if ( LowPart != v7 )
    v9 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_SX_DISPATCH;
  RemlockSize[0] = LowPart;
  UsbhEtwLogHubPowerEvent((__int64)DeviceObject, (__int64)Irp, 0LL, v9, *(_QWORD *)RemlockSize, 0);
  if ( (v8 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v8;
    Log((__int64)DeviceObject, 16, 829651315, v8, (__int64)Irp);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2592LL);
    LODWORD(v32) = v8;
    RemlockSizea[0] = LowPart;
    v10 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != v7 )
      v10 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    UsbhEtwLogHubPowerEvent((__int64)DeviceObject, (__int64)Irp, 0LL, v10, *(_QWORD *)RemlockSizea, v32);
    IofCompleteRequest(Irp, 0);
    return (unsigned int)v8;
  }
  v12 = FdoExt((__int64)DeviceObject);
  v13 = (__int64)(v12 + 346);
  UsbhAcquireFdoPnpLock((_DWORD)DeviceObject, (_DWORD)v12 + 1384, 101, 812874099, v7);
  if ( (unsigned int)GET_FDO_PNPSTATE(v13) == 6 )
  {
    UsbhReleaseFdoPnpLock(DeviceObject, v13);
    UsbhDisableTimerObject((__int64)DeviceObject, *((_QWORD *)v5 + 346));
    LODWORD(v8) = Usbh_HubRootHubInitNotification(DeviceObject, 0LL, 0LL);
    if ( (_DWORD)v8 == -1073741536 )
      Usbh_FDO_Pnp_State(v13, 8LL);
    else
      KeWaitForSingleObject(v5 + 644, Executive, 0, 0, 0LL);
    UsbhAcquireFdoPnpLock((_DWORD)DeviceObject, v13, 101, 863205747, v7);
  }
  if ( (unsigned int)GET_FDO_PNPSTATE(v13) != 5 )
  {
    v34 = 0LL;
    UsbhReleaseFdoPnpLock(DeviceObject, v13);
    Log((__int64)DeviceObject, 16, 846428531, (int)v8, (__int64)Irp);
    UsbhAcquireFdoPwrLock(DeviceObject, v13, 101LL, 829651315LL);
    v14 = 201LL;
    if ( LowPart != v7 )
      v14 = 205LL;
    UsbhSetFdoPowerState(DeviceObject, 0LL, v14);
    UsbhReleaseFdoPwrLock(DeviceObject, v13);
    if ( g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(Irp, &v34);
    else
      ActivityIdIrp = -1073741823;
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2654LL);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    goto LABEL_19;
  }
  UsbhReleaseFdoPnpLock(DeviceObject, v13);
  UsbhAcquireFdoPwrLock(DeviceObject, v13, 101LL, 846428531LL);
  if ( (unsigned int)GET_FDO_POWER_STATE(v13) == 213 )
  {
    v34 = 0LL;
    UsbhSetFdoPowerState(DeviceObject, LowPart, 213LL);
    UsbhReleaseFdoPwrLock(DeviceObject, v13);
    ActivityIdIrp = UsbhEtwGetActivityId(Irp, &v34);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2687LL);
    Irp->CurrentLocation += v7;
    ++Irp->Tail.Overlay.CurrentStackLocation;
LABEL_19:
    v17 = PoCallDriver(*((PDEVICE_OBJECT *)v5 + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Irp, 0x20u);
    v18 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != v7 )
      v18 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    goto LABEL_21;
  }
  v20 = LowPart == v7;
  if ( LowPart == v7 )
  {
    if ( FdoExt((__int64)DeviceObject)[1053] == v7 )
    {
      v34 = 0LL;
      UsbhReleaseFdoPwrLock(DeviceObject, v13);
      ActivityIdIrp = UsbhEtwGetActivityId(Irp, &v34);
      UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2715LL);
      Irp->CurrentLocation += v7;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v17 = PoCallDriver(*((PDEVICE_OBJECT *)v5 + 151), Irp);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Irp, 0x20u);
      v18 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
LABEL_21:
      LODWORD(v32) = v17;
      RemlockSizeb[0] = LowPart;
      v19 = &v34;
      if ( ActivityIdIrp < 0 )
        v19 = 0LL;
      UsbhEtwLogHubPowerEvent((__int64)DeviceObject, 0LL, v19, v18, *(_QWORD *)RemlockSizeb, v32);
      return v17;
    }
    v20 = LowPart == v7;
  }
  v21 = (void *)UsbhAcquirePowerContext((_DWORD)DeviceObject, v13, (_DWORD)DeviceObject, (_DWORD)Irp, 0LL, 11, !v20);
  if ( !v21 )
  {
    UsbhReleaseFdoPwrLock(DeviceObject, v13);
    v17 = -1073741670;
    Irp->IoStatus.Status = -1073741670;
    Log((__int64)DeviceObject, 16, 829651315, -1073741670LL, (__int64)Irp);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2747LL);
    LODWORD(v33) = -1073741670;
    RemlockSizec[0] = LowPart;
    v22 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v22 = (const EVENT_DESCRIPTOR *)&USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    UsbhEtwLogHubPowerEvent((__int64)DeviceObject, (__int64)Irp, 0LL, v22, *(_QWORD *)RemlockSizec, v33);
    IofCompleteRequest(Irp, 0);
    goto LABEL_35;
  }
  if ( LowPart == 1 )
  {
    *((_QWORD *)v5 + 634) = MEMORY[0xFFFFF78000000014];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v25 = FdoExt((__int64)DeviceObject);
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        22,
        (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
        v25[1052]);
    }
    v26 = GET_FDO_POWER_STATE(v13);
    v27 = GET_FDO_POWER_STATE(v13) - 205;
    if ( !v27 )
      return UsbhFdoSetPowerS0_Action(DeviceObject, Irp, v21);
    if ( v27 == 1 )
      v26 = 201;
    FdoExt((__int64)DeviceObject)[1053] = 1;
    UsbhSetFdoPowerState(DeviceObject, 0LL, v26);
    UsbhReleaseFdoPwrLock(DeviceObject, v13);
    goto LABEL_52;
  }
  if ( LowPart != 2 && LowPart != 3 && LowPart != 4 && LowPart - 5 > 1 )
  {
LABEL_52:
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2828LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v17 = PoCallDriver(*((PDEVICE_OBJECT *)v5 + 151), Irp);
LABEL_35:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Irp, 0x20u);
    return v17;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v23 = FdoExt((__int64)DeviceObject);
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v24,
      1,
      21,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
      LowPart,
      v23[1052]);
  }
  return UsbhFdoSetPowerSx_Action(DeviceObject, Irp, v21);
}
