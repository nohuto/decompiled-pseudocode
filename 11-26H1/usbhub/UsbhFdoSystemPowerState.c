/*
 * XREFs of UsbhFdoSystemPowerState @ 0x140028454
 * Callers:
 *     UsbhFdoPower_SetPower @ 0x14004ACE0 (UsbhFdoPower_SetPower.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     Log @ 0x140009B80 (Log.c)
 *     GET_FDO_POWER_STATE @ 0x140012D8C (GET_FDO_POWER_STATE.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhAcquireFdoPnpLock @ 0x140028330 (UsbhAcquireFdoPnpLock.c)
 *     UsbhReleaseFdoPnpLock @ 0x1400283F4 (UsbhReleaseFdoPnpLock.c)
 *     UsbhEtwLogHubPowerEvent @ 0x140028B5C (UsbhEtwLogHubPowerEvent.c)
 *     UsbhAcquirePowerContext @ 0x140029EE4 (UsbhAcquirePowerContext.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002A57C (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002AFD0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002B0B8 (UsbhSetFdoPowerState.c)
 *     UsbhEtwGetActivityId @ 0x1400347C0 (UsbhEtwGetActivityId.c)
 *     GET_FDO_PNPSTATE @ 0x14003A39C (GET_FDO_PNPSTATE.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003E5C0 (WPP_RECORDER_SF_dd.c)
 *     UsbhFdoSetPowerS0_Action @ 0x14004B144 (UsbhFdoSetPowerS0_Action.c)
 *     UsbhFdoSetPowerSx_Action @ 0x14004B27C (UsbhFdoSetPowerSx_Action.c)
 *     Usbh_HubRootHubInitNotification @ 0x14004B738 (Usbh_HubRootHubInitNotification.c)
 *     Usbh_FDO_Pnp_State @ 0x1400518D4 (Usbh_FDO_Pnp_State.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhFdoSystemPowerState(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int LowPart; // ebx
  _DWORD *v5; // r13
  int v6; // r9d
  int v7; // r15d
  __int64 v8; // rsi
  void *v9; // r9
  void *v10; // r9
  _DWORD *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  int ActivityIdIrp; // esi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v18; // edi
  void *v19; // r9
  __int128 *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  void *v28; // r15
  void *v29; // r9
  _DWORD *v30; // rax
  int v31; // edx
  _DWORD *v32; // rax
  unsigned int v33; // esi
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  unsigned int v38; // ebx
  __int128 v39; // [rsp+40h] [rbp-58h] BYREF

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v5 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 16, 1349745011, 0LL, (__int64)Irp);
  v7 = v6 + 1;
  v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Irp, File, v6 + 1, 0x20u);
  v9 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_DISPATCH;
  if ( LowPart != v7 )
    v9 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_DISPATCH;
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v9, LowPart, 0);
  if ( (v8 & 0xC0000000) == 0xC0000000 )
  {
    Irp->IoStatus.Status = v8;
    Log((__int64)DeviceObject, 16, 829651315, v8, (__int64)Irp);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2592LL);
    v10 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != v7 )
      v10 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v10, LowPart, v8);
    IofCompleteRequest(Irp, 0);
    return (unsigned int)v8;
  }
  v12 = FdoExt((__int64)DeviceObject) + 346;
  UsbhAcquireFdoPnpLock((__int64)DeviceObject, (__int64)v12, 101, 812874099, v7);
  if ( (unsigned int)GET_FDO_PNPSTATE(v12) == 6 )
  {
    UsbhReleaseFdoPnpLock((__int64)DeviceObject, (__int64)v12);
    UsbhDisableTimerObject((__int64)DeviceObject, *((_QWORD *)v5 + 346), v13, v14);
    LODWORD(v8) = Usbh_HubRootHubInitNotification(DeviceObject, 0LL, 0LL);
    if ( (_DWORD)v8 == -1073741536 )
      Usbh_FDO_Pnp_State(v12, 8LL);
    else
      KeWaitForSingleObject(v5 + 644, Executive, 0, 0, 0LL);
    UsbhAcquireFdoPnpLock((__int64)DeviceObject, (__int64)v12, 101, 863205747, v7);
  }
  if ( (unsigned int)GET_FDO_PNPSTATE(v12) != 5 )
  {
    v39 = 0LL;
    UsbhReleaseFdoPnpLock((__int64)DeviceObject, (__int64)v12);
    Log((__int64)DeviceObject, 16, 846428531, (int)v8, (__int64)Irp);
    UsbhAcquireFdoPwrLock(DeviceObject, v12, 101LL, 829651315LL);
    v15 = 201LL;
    if ( LowPart != v7 )
      v15 = 205LL;
    UsbhSetFdoPowerState(DeviceObject, 0LL, v15, (unsigned int)(LowPart != v7) + 127);
    UsbhReleaseFdoPwrLock(DeviceObject, v12);
    if ( g_IoGetActivityIdIrp )
      ActivityIdIrp = g_IoGetActivityIdIrp(Irp, &v39);
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
  UsbhReleaseFdoPnpLock((__int64)DeviceObject, (__int64)v12);
  UsbhAcquireFdoPwrLock(DeviceObject, v12, 101LL, 846428531LL);
  if ( (unsigned int)GET_FDO_POWER_STATE((__int64)v12, v21, v22, v23) == 213 )
  {
    v39 = 0LL;
    UsbhSetFdoPowerState(DeviceObject, LowPart, 213LL, 104 - (unsigned int)(v7 != LowPart));
    UsbhReleaseFdoPwrLock(DeviceObject, v12);
    ActivityIdIrp = UsbhEtwGetActivityId(Irp, &v39);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2687LL);
    Irp->CurrentLocation += v7;
    ++Irp->Tail.Overlay.CurrentStackLocation;
LABEL_19:
    v18 = PoCallDriver(*((PDEVICE_OBJECT *)v5 + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Irp, 0x20u);
    v19 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != v7 )
      v19 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    goto LABEL_21;
  }
  v24 = LowPart == v7;
  if ( LowPart == v7 )
  {
    if ( FdoExt((__int64)DeviceObject)[1053] == v7 )
    {
      v39 = 0LL;
      UsbhReleaseFdoPwrLock(DeviceObject, v12);
      ActivityIdIrp = UsbhEtwGetActivityId(Irp, &v39);
      UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2715LL);
      Irp->CurrentLocation += v7;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v18 = PoCallDriver(*((PDEVICE_OBJECT *)v5 + 151), Irp);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Irp, 0x20u);
      v19 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
LABEL_21:
      v20 = &v39;
      if ( ActivityIdIrp < 0 )
        v20 = 0LL;
      UsbhEtwLogHubPowerEvent(DeviceObject, 0LL, v20, v19, LowPart, v18);
      return v18;
    }
    v24 = LowPart == v7;
  }
  v28 = (void *)UsbhAcquirePowerContext(
                  (_DWORD)DeviceObject,
                  (_DWORD)v12,
                  (_DWORD)DeviceObject,
                  (_DWORD)Irp,
                  0LL,
                  11,
                  !v24);
  if ( !v28 )
  {
    UsbhReleaseFdoPwrLock(DeviceObject, v12);
    v18 = -1073741670;
    Irp->IoStatus.Status = -1073741670;
    Log((__int64)DeviceObject, 16, 829651315, -1073741670LL, (__int64)Irp);
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2747LL);
    v29 = &USBHUB_ETW_EVENT_HUB_POWER_SET_S0_COMPLETE;
    if ( LowPart != 1 )
      v29 = &USBHUB_ETW_EVENT_HUB_POWER_SET_SX_COMPLETE;
    UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, v29, LowPart, -1073741670);
    IofCompleteRequest(Irp, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Irp, 0x20u);
    return v18;
  }
  if ( LowPart == 1 )
  {
    *((_QWORD *)v5 + 634) = MEMORY[0xFFFFF78000000014];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v32 = FdoExt((__int64)DeviceObject);
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        22,
        (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
        v32[1052]);
    }
    v33 = GET_FDO_POWER_STATE((__int64)v12, v25, v26, v27);
    v37 = GET_FDO_POWER_STATE((__int64)v12, v34, v35, v36) - 205;
    if ( !v37 )
      return UsbhFdoSetPowerS0_Action(DeviceObject, Irp, v28);
    if ( v37 == 1 )
      v33 = 201;
    FdoExt((__int64)DeviceObject)[1053] = 1;
    UsbhSetFdoPowerState(DeviceObject, 0LL, v33, 129LL);
    UsbhReleaseFdoPwrLock(DeviceObject, v12);
LABEL_51:
    UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2828LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v38 = PoCallDriver(*((PDEVICE_OBJECT *)v5 + 151), Irp);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Irp, 0x20u);
    return v38;
  }
  if ( LowPart != 2 && LowPart != 3 && LowPart != 4 && LowPart - 5 > 1 )
    goto LABEL_51;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v30 = FdoExt((__int64)DeviceObject);
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v31,
      1,
      21,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
      LowPart,
      v30[1052]);
  }
  return UsbhFdoSetPowerSx_Action(DeviceObject, Irp, v28);
}
