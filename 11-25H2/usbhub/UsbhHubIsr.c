/*
 * XREFs of UsbhHubIsr @ 0x1400113D0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1400119F8 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhQueueWorkItemWithRetry @ 0x140016AA0 (UsbhQueueWorkItemWithRetry.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubIsr(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  struct _KEVENT *v5; // rdi
  _LIST_ENTRY *Flink; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  signed __int32 v9; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 Status; // rsi
  __int64 Flink_high; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int i; // r15d
  __int64 PortData; // rax
  struct _KEVENT *v18; // rcx
  unsigned int v20; // esi
  KIRQL v21; // bp
  _DWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  _DWORD *v25; // rax
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rdx
  _DWORD *v29; // rax
  _BYTE *v30; // r11
  _DWORD *v31; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  v5 = (struct _KEVENT *)FdoExt((__int64)Context);
  Flink = v5[111].Header.WaitListHead.Flink;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( Context )
    {
      v7 = Context[8];
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 1145661539;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = Flink;
        *(_QWORD *)(v8 + 24) = Irp;
      }
    }
  }
  v9 = _InterlockedDecrement(&v5[113].Header.Lock);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( Context )
    {
      v10 = Context[8];
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
        *(_DWORD *)v11 = 1717790819;
        *(_QWORD *)(v11 + 24) = v9;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = Flink;
      }
    }
  }
  Status = Irp->IoStatus.Status;
  Flink_high = SHIDWORD(Flink->Flink);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( Context )
    {
      v14 = Context[8];
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 843671651;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = Status;
        *(_QWORD *)(v15 + 24) = Flink_high;
      }
    }
  }
  if ( (int)Status >= 0 && !HIDWORD(Flink[2].Flink) )
  {
    Log((_DWORD)Context, 4, 1769101906, Status, SHIDWORD(Flink->Flink));
    UsbhException((__int64)Context, 0, 116, 0LL, 0, Status, HIDWORD(Flink->Flink), v30, 1094, 0);
  }
  if ( (Status & 0xC0000000) != 0xC0000000 && SHIDWORD(Flink->Flink) >= 0 && v9 != -1 )
  {
    LODWORD(v5[110].Header.WaitListHead.Blink) = 0;
    v20 = 0;
    FdoExt((__int64)Context);
    do
    {
      if ( ((unsigned __int8)(1 << (v20 & 7)) & *((_BYTE *)&v5[111].Header.WaitListHead.Blink->Flink
                                                + ((unsigned __int64)v20 >> 3))) != 0 )
        break;
      ++v20;
    }
    while ( v20 <= *((unsigned __int8 *)FdoExt((__int64)Context) + 2938) );
    if ( v20 > *((unsigned __int8 *)FdoExt((__int64)Context) + 2938) )
    {
      Log((_DWORD)Context, 4, 1113870435, v20, 0LL);
      UsbhException((__int64)Context, 0, 117, 0LL, 0, 0, 0, usbfile_bus_c, 1190, 0);
      v20 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        v20);
    v21 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v22 = FdoExt((__int64)Context);
    v22[383] = v20;
    v22[384] = 1;
    v23 = v22 + 386;
    v24 = (_QWORD *)qword_14006F6A8;
    if ( *(__int64 **)qword_14006F6A8 != &qword_14006F6A0 )
      __fastfail(3u);
    v23[1] = qword_14006F6A8;
    *v23 = &qword_14006F6A0;
    *v24 = v23;
    qword_14006F6A8 = (__int64)v23;
    v25 = FdoExt((__int64)Context);
    _InterlockedAdd(v25 + 685, 1u);
    v26 = (int)v25[685];
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( Context )
      {
        v27 = Context[8];
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
          *(_DWORD *)v28 = 726813000;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = Context;
          *(_QWORD *)(v28 + 24) = v26;
        }
      }
    }
    KeReleaseSpinLock(&SpinLock, v21);
    v29 = FdoExt((__int64)Context);
    UsbhQueueWorkItemWithRetry(
      (_DWORD)Context,
      v5[113].Header.WaitListHead.Flink,
      (unsigned int)UsbhHubIsrWorker,
      0,
      (__int64)(v29 + 346),
      v20,
      1230467945);
    v18 = &stru_14006F6B0;
    goto LABEL_25;
  }
  if ( (_DWORD)Status == -1073741536 )
  {
    if ( HIDWORD(Flink->Flink) != -1073676288 )
      goto LABEL_23;
  }
  else if ( (_DWORD)Status != -1073741823 || HIDWORD(Flink->Flink) != -1073741819 )
  {
    goto LABEL_23;
  }
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)Context) + 2938); ++i )
  {
    PortData = UsbhGetPortData((__int64)Context, i);
    Usbh_CheckPortHwPendingStatus(Context, PortData);
  }
LABEL_23:
  if ( Usb_Disconnected(Status) )
  {
LABEL_24:
    v18 = v5 + 112;
LABEL_25:
    KeSetEvent(v18, 0, 0);
    return 3221225494LL;
  }
  if ( (_DWORD)Status == -1073741536 || v9 == -1 )
  {
    Log((_DWORD)Context, 4, 1667778867, Status, v9);
    goto LABEL_24;
  }
  if ( ++LODWORD(v5[110].Header.WaitListHead.Blink) < 3u )
  {
    LODWORD(v5[106].Header.WaitListHead.Blink) |= 0x1000u;
    v31 = FdoExt((__int64)Context);
    UsbhQueueWorkItemWithRetry(
      (_DWORD)Context,
      v5[113].Header.WaitListHead.Blink,
      (unsigned int)UsbhHubResetIrqPipeWorker,
      0,
      (__int64)(v31 + 346),
      0,
      1230467689);
  }
  else
  {
    KeSetEvent(v5 + 112, 0, 0);
    UsbhException((__int64)Context, 0, 7, 0LL, 0, Status, HIDWORD(Flink->Flink), usbfile_bus_c, 1147, 0);
  }
  return 3221225494LL;
}
