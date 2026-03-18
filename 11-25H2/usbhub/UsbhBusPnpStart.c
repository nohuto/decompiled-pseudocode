/*
 * XREFs of UsbhBusPnpStart @ 0x140046130
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFreeTimerObject @ 0x140001368 (UsbhFreeTimerObject.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     UsbhInitPortPindicator @ 0x14003F508 (UsbhInitPortPindicator.c)
 *     UsbhInitPortChangeList @ 0x140043D1C (UsbhInitPortChangeList.c)
 *     UsbhAllocateTimerObject @ 0x14004A038 (UsbhAllocateTimerObject.c)
 */

__int64 __fastcall UsbhBusPnpStart(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  _DWORD *v4; // rbx
  __int64 TimerObject; // rax
  PIRP Irp; // rax
  __int64 Pool2; // rax
  unsigned int v8; // eax
  __int64 v9; // rax
  _DWORD *v10; // rax
  PIO_WORKITEM v11; // rax
  _DWORD *v12; // r14
  unsigned __int16 v13; // bp
  _DWORD *v14; // rsi
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v17; // rcx
  __int64 v18; // rsi
  unsigned __int16 v19; // bp
  PIO_WORKITEM *v20; // rsi
  IRP *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx

  v4 = FdoExt((__int64)DeviceObject);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xFu,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  Log((__int64)DeviceObject, 4, 1649628242, 0LL, 0LL);
  *((_QWORD *)v4 + 340) = UsbhAllocateTimerObject(DeviceObject, UsbhIsrRetryTimer, 1232302674LL);
  *((_QWORD *)v4 + 341) = UsbhAllocateTimerObject(DeviceObject, UsbhResetIrqPipeRetryTimer, 1380545137LL);
  *((_QWORD *)v4 + 346) = UsbhAllocateTimerObject(DeviceObject, UsbHubhInitTimeoutTimer, 1231967343LL);
  TimerObject = UsbhAllocateTimerObject(DeviceObject, UsbhInitRetryTimer, 1231966821LL);
  *((_QWORD *)v4 + 347) = TimerObject;
  if ( !*((_QWORD *)v4 + 340) )
    goto LABEL_21;
  if ( !*((_QWORD *)v4 + 341) )
    goto LABEL_21;
  if ( !*((_QWORD *)v4 + 346) )
    goto LABEL_21;
  if ( !TimerObject )
    goto LABEL_21;
  Irp = IoAllocateIrp(*(_BYTE *)(*((_QWORD *)v4 + 151) + 76LL), 0);
  if ( !Irp )
    goto LABEL_21;
  *((_QWORD *)v4 + 333) = Irp;
  Pool2 = ExAllocatePool2(64LL, 152LL, 1112885333LL);
  *((_QWORD *)v4 + 334) = Pool2;
  if ( !Pool2 )
    goto LABEL_21;
  v8 = *((unsigned __int16 *)v4 + 1316);
  *((_QWORD *)v4 + 335) = 0LL;
  if ( !(_WORD)v8 )
    goto LABEL_21;
  v9 = ExAllocatePool2(64LL, v8, 1112885333LL);
  *((_QWORD *)v4 + 335) = v9;
  if ( !v9 )
    goto LABEL_21;
  *((_QWORD *)v4 + 382) = 0LL;
  if ( *((_BYTE *)FdoExt((__int64)DeviceObject) + 2938) )
  {
    v10 = FdoExt((__int64)DeviceObject);
    *((_QWORD *)v4 + 382) = ExAllocatePool2(64LL, 2928LL * *((unsigned __int8 *)v10 + 2938), 1112885333LL);
  }
  if ( *((_QWORD *)v4 + 382)
    && (v4[763] = *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938),
        v11 = IoAllocateWorkItem(DeviceObject),
        (*((_QWORD *)v4 + 148) = v11) != 0LL) )
  {
    v12 = (_DWORD *)*((_QWORD *)v4 + 382);
    v13 = 0;
    v14 = v12 + 7;
    while ( v13 < *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
    {
      *v12 = 1146120296;
      *(_QWORD *)(v14 + 3) = v14 - 1;
      *(v14 - 1) = 2017613128;
      ++v13;
      *v14 = 2;
      *(_QWORD *)(v14 + 1) = DeviceObject;
      v14[27] = 1734964085;
      v14[15] = 1734964085;
      v14[11] = 1734964085;
      v14[7] = 1734964085;
      v14[18] = 1734964085;
      v14[21] = 1734964085;
      v14[24] = 1734964085;
      v14[29] = 1734964085;
      v14[43] = 2017613128;
      *(_QWORD *)(v14 + 47) = v14 + 43;
      v14[44] = 7;
      *(_QWORD *)(v14 + 45) = DeviceObject;
      v14[71] = 1734964085;
      v14[59] = 1734964085;
      v14[55] = 1734964085;
      v14[51] = 1734964085;
      v14[62] = 1734964085;
      v14[65] = 1734964085;
      v14[68] = 1734964085;
      v14[73] = 1734964085;
      *(_QWORD *)(v14 - 3) = DeviceObject;
      *((_WORD *)v14 - 12) = v13;
      v14[93] = 0;
      KeInitializeTimer((PKTIMER)(v14 + 131));
      KeInitializeDpc((PRKDPC)(v14 + 147), UsbhResetPortTimerDpc, v12);
      KeInitializeEvent((PRKEVENT)(v14 + 185), NotificationEvent, 1u);
      KeInitializeEvent((PRKEVENT)(v14 + 597), NotificationEvent, 0);
      v14[603] = 1;
      v14[596] = 0;
      KeInitializeSpinLock((PKSPIN_LOCK)(v14 + 605));
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *(_QWORD *)(v14 + 607) = WorkItem;
      if ( !WorkItem )
        goto LABEL_21;
      UsbhInitPortChangeList((__int64)DeviceObject, (__int64)v12);
      UsbhInitPortPindicator((__int64)DeviceObject, (__int64)v12);
      v12 += 732;
      v14 += 732;
    }
    UsbhDispatch_BusEvent(DeviceObject, a2, 4);
    Log((__int64)DeviceObject, 4, 1045648466, 0LL, 0LL);
    return 0LL;
  }
  else
  {
LABEL_21:
    v17 = (struct _IO_WORKITEM *)*((_QWORD *)v4 + 148);
    if ( v17 )
    {
      IoFreeWorkItem(v17);
      *((_QWORD *)v4 + 148) = 0LL;
    }
    v18 = *((_QWORD *)v4 + 382);
    if ( v18 )
    {
      v19 = 0;
      if ( *((_BYTE *)FdoExt((__int64)DeviceObject) + 2938) )
      {
        v20 = (PIO_WORKITEM *)(v18 + 2456);
        do
        {
          if ( *v20 )
          {
            IoFreeWorkItem(*v20);
            *v20 = 0LL;
          }
          v20 += 366;
          ++v19;
        }
        while ( v19 < *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) );
      }
    }
    UsbhFreeTimerObject((__int64)DeviceObject, (__int64 *)v4 + 340);
    UsbhFreeTimerObject((__int64)DeviceObject, (__int64 *)v4 + 341);
    UsbhFreeTimerObject((__int64)DeviceObject, (__int64 *)v4 + 346);
    UsbhFreeTimerObject((__int64)DeviceObject, (__int64 *)v4 + 347);
    v21 = (IRP *)*((_QWORD *)v4 + 333);
    if ( v21 )
    {
      IoFreeIrp(v21);
      *((_QWORD *)v4 + 333) = 0LL;
    }
    v22 = (void *)*((_QWORD *)v4 + 334);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *((_QWORD *)v4 + 334) = 0LL;
    }
    v23 = (void *)*((_QWORD *)v4 + 335);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *((_QWORD *)v4 + 335) = 0LL;
    }
    v24 = (void *)*((_QWORD *)v4 + 382);
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      *((_QWORD *)v4 + 382) = 0LL;
    }
    return 3221225626LL;
  }
}
