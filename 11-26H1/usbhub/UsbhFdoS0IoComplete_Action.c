/*
 * XREFs of UsbhFdoS0IoComplete_Action @ 0x14002A080
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwLogHubPowerEvent @ 0x140028B5C (UsbhEtwLogHubPowerEvent.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002A47C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002A57C (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002AFD0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002B05C (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002B0B8 (UsbhSetFdoPowerState.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall UsbhFdoS0IoComplete_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  _DWORD *v6; // rax
  __int64 Status; // r8
  _DWORD *v8; // r15
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rsi
  int v16; // edx
  volatile signed __int32 *v17; // rcx
  signed __int32 v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  PDEVICE_OBJECT v23; // rcx
  NTSTATUS v24; // eax
  NTSTATUS v25; // esi
  volatile signed __int32 *v27; // rdx
  signed __int32 v28; // ecx
  unsigned int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // r8
  ULONG RemlockSize[2]; // [rsp+20h] [rbp-38h]
  PIRP *Irpa; // [rsp+28h] [rbp-30h]

  v6 = FdoExt((__int64)DeviceObject);
  Status = Irp->IoStatus.Status;
  v8 = v6;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v10 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v11 = *((_DWORD *)DeviceExtension + 221);
        v12 = *((_QWORD *)DeviceExtension + 111);
        v13 = 32LL * ((v10 - 1) & v11);
        *(_DWORD *)(v13 + v12) = 1128870003;
        *(_QWORD *)(v13 + v12 + 8) = 0LL;
        *(_QWORD *)(v13 + v12 + 16) = Irp;
        *(_QWORD *)(v13 + v12 + 24) = Status;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  v14 = Context[9];
  UsbhAcquireFdoPwrLock(DeviceObject, v14, 113LL, 825258857LL);
  v15 = Irp->IoStatus.Status;
  FdoExt((__int64)DeviceObject)[1053] = 1;
  if ( (v15 & 0xC0000000) == 0xC0000000 )
  {
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( DeviceObject )
      {
        v17 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
        if ( v17 )
        {
          v18 = _InterlockedExchangeAdd(v17 + 220, 0xFFFFFFFF);
          v19 = *((_DWORD *)v17 + 221);
          v20 = *((_QWORD *)v17 + 111);
          v21 = 32LL * ((v18 - 1) & v19);
          *(_DWORD *)(v21 + v20) = 556811344;
          *(_QWORD *)(v21 + v20 + 8) = 0LL;
          *(_QWORD *)(v21 + v20 + 16) = 0LL;
          *(_QWORD *)(v21 + v20 + 24) = v15;
        }
      }
    }
    v22 = (unsigned int)v15;
    v23 = DeviceObject;
    goto LABEL_14;
  }
  *((_DWORD *)Context + 7) = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v16,
      1,
      19,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
      (char)DeviceObject);
  Log((__int64)DeviceObject, 16, 1349665840, 0LL, v15);
  UsbhSetFdoPowerState(DeviceObject, 0LL, 209LL, 113LL);
  UsbhReleaseFdoPwrLock(DeviceObject, v14);
  LODWORD(Irpa) = 0;
  RemlockSize[0] = 1;
  UsbhEtwLogHubPowerEvent(
    (__int64)DeviceObject,
    (__int64)Irp,
    0LL,
    &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_START,
    *(_QWORD *)RemlockSize,
    Irpa);
  v24 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), Context, File, 1u, 0x20u);
  v23 = DeviceObject;
  if ( v24 < 0 )
  {
    LODWORD(v15) = 0;
    v22 = 0LL;
LABEL_14:
    UsbhFdoPower_PowerFailureEntry(v23, 118LL, v22, Context);
    goto LABEL_26;
  }
  v25 = PoRequestPowerIrp(DeviceObject, 2u, (POWER_STATE)1, UsbhFdoD0PoComplete_Action, Context, 0LL);
  Log((__int64)DeviceObject, 16, 1345406000, 0LL, v25);
  UsbhAcquireFdoPwrLock(DeviceObject, v14, 113LL, 842036073LL);
  if ( v25 < 0 || dword_1400706DC )
  {
    if ( v25 == 259 )
    {
      Log((__int64)DeviceObject, 16, 1349411923, (__int64)Irp, 259LL);
      UsbhReleaseFdoPwrLock(DeviceObject, v14);
      return 3221225494LL;
    }
    LODWORD(v15) = 0;
    UsbhFdoPower_PowerFailureEntry(DeviceObject, 119LL, 0LL, Context);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), Context, 0x20u);
  }
  else
  {
    Log((__int64)DeviceObject, 16, 1131245651, (__int64)Irp, v25);
    LODWORD(v15) = 0;
    UsbhReleaseFdoPwrLock(DeviceObject, v14);
  }
LABEL_26:
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2272LL);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), Irp, 0x20u);
  if ( (UsbhLogMask & 0x10) != 0 && DeviceObject )
  {
    v27 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
    if ( v27 )
    {
      v28 = _InterlockedExchangeAdd(v27 + 220, 0xFFFFFFFF);
      v29 = *((_DWORD *)v27 + 221);
      v30 = *((_QWORD *)v27 + 111);
      v31 = 32LL * ((v28 - 1) & v29);
      *(_DWORD *)(v31 + v30) = 1414689360;
      *(_QWORD *)(v31 + v30 + 24) = (int)v15;
      *(_QWORD *)(v31 + v30 + 8) = 0LL;
      *(_QWORD *)(v31 + v30 + 16) = Irp;
    }
  }
  return (unsigned int)v15;
}
