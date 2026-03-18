/*
 * XREFs of UsbhHubIsr @ 0x14002F9E0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhQueueWorkItemWithRetry @ 0x14000FB5C (UsbhQueueWorkItemWithRetry.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x140030018 (Usbh_CheckPortHwPendingStatus.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubIsr(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  _DWORD *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  signed __int32 v12; // r14d
  __int64 v13; // rcx
  signed __int32 v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 Status; // rsi
  __int64 v19; // r8
  __int64 v20; // rcx
  signed __int32 v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int i; // r15d
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 PortData; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  struct _KEVENT *v31; // rcx
  unsigned int v33; // esi
  KIRQL v34; // bp
  _DWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  _DWORD *v38; // rax
  __int64 v39; // r9
  __int64 v40; // rdx
  signed __int32 v41; // eax
  unsigned int v42; // r8d
  __int64 v43; // rdx
  __int64 v44; // r8
  _DWORD *v45; // rax
  _BYTE *v46; // r11
  _DWORD *v47; // rax
  __int64 v48; // [rsp+28h] [rbp-50h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  v5 = FdoExt((__int64)Context);
  v6 = *((_QWORD *)v5 + 334);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( Context )
    {
      v7 = Context[8];
      if ( v7 )
      {
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 880), 0xFFFFFFFF);
        v9 = *(_DWORD *)(v7 + 884);
        v10 = *(_QWORD *)(v7 + 888);
        v11 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(v11 + v10) = 1145661539;
        *(_QWORD *)(v11 + v10 + 8) = 0LL;
        *(_QWORD *)(v11 + v10 + 16) = v6;
        *(_QWORD *)(v11 + v10 + 24) = Irp;
      }
    }
  }
  v12 = _InterlockedDecrement(v5 + 678);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( Context )
    {
      v13 = Context[8];
      if ( v13 )
      {
        v14 = _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 880), 0xFFFFFFFF);
        v15 = *(_DWORD *)(v13 + 884);
        v16 = *(_QWORD *)(v13 + 888);
        v17 = 32LL * ((v14 - 1) & v15);
        *(_DWORD *)(v17 + v16) = 1717790819;
        *(_QWORD *)(v17 + v16 + 24) = v12;
        *(_QWORD *)(v17 + v16 + 8) = 0LL;
        *(_QWORD *)(v17 + v16 + 16) = v6;
      }
    }
  }
  Status = Irp->IoStatus.Status;
  v19 = *(int *)(v6 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( Context )
    {
      v20 = Context[8];
      if ( v20 )
      {
        v21 = _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 880), 0xFFFFFFFF);
        v22 = *(_DWORD *)(v20 + 884);
        v23 = *(_QWORD *)(v20 + 888);
        v24 = 32LL * ((v21 - 1) & v22);
        *(_DWORD *)(v24 + v23) = 843671651;
        *(_QWORD *)(v24 + v23 + 8) = 0LL;
        *(_QWORD *)(v24 + v23 + 16) = Status;
        *(_QWORD *)(v24 + v23 + 24) = v19;
      }
    }
  }
  if ( (int)Status >= 0 && !*(_DWORD *)(v6 + 36) )
  {
    Log((__int64)Context, 4, 1769101906, Status, *(int *)(v6 + 4));
    UsbhException((__int64)Context, 0, 116, 0LL, 0, Status, *(_DWORD *)(v6 + 4), v46, 1094, 0);
  }
  if ( (Status & 0xC0000000) != 0xC0000000 && *(int *)(v6 + 4) >= 0 && v12 != -1 )
  {
    v5[664] = 0;
    v33 = 0;
    FdoExt((__int64)Context);
    do
    {
      if ( ((unsigned __int8)(1 << (v33 & 7)) & *(_BYTE *)(((unsigned __int64)v33 >> 3) + *((_QWORD *)v5 + 335))) != 0 )
        break;
      ++v33;
    }
    while ( v33 <= *((unsigned __int8 *)FdoExt((__int64)Context) + 2938) );
    if ( v33 > *((unsigned __int8 *)FdoExt((__int64)Context) + 2938) )
    {
      Log((__int64)Context, 4, 1113870435, v33, 0LL);
      UsbhException((__int64)Context, 0, 117, 0LL, 0, 0, 0, usbfile_bus_c, 1190, 0);
      v33 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v48) = v33;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        v48);
    }
    v34 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v35 = FdoExt((__int64)Context);
    v35[383] = v33;
    v35[384] = 1;
    v36 = v35 + 386;
    v37 = (_QWORD *)qword_140070708;
    if ( *(__int64 **)qword_140070708 != &qword_140070700 )
      __fastfail(3u);
    v36[1] = qword_140070708;
    *v36 = &qword_140070700;
    *v37 = v36;
    qword_140070708 = (__int64)v36;
    v38 = FdoExt((__int64)Context);
    _InterlockedAdd(v38 + 685, 1u);
    v39 = (int)v38[685];
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( Context )
      {
        v40 = Context[8];
        if ( v40 )
        {
          v41 = _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 880), 0xFFFFFFFF);
          v42 = *(_DWORD *)(v40 + 884);
          v43 = *(_QWORD *)(v40 + 888);
          v44 = 32LL * ((v41 - 1) & v42);
          *(_DWORD *)(v44 + v43) = 726813000;
          *(_QWORD *)(v44 + v43 + 8) = 0LL;
          *(_QWORD *)(v44 + v43 + 16) = Context;
          *(_QWORD *)(v44 + v43 + 24) = v39;
        }
      }
    }
    KeReleaseSpinLock(&SpinLock, v34);
    v45 = FdoExt((__int64)Context);
    UsbhQueueWorkItemWithRetry(
      (__int64)Context,
      *((_QWORD *)v5 + 340),
      (__int64)UsbhHubIsrWorker,
      0LL,
      (__int64)(v45 + 346),
      v33,
      0x49577369u);
    v31 = &stru_140070710;
    goto LABEL_25;
  }
  if ( (_DWORD)Status == -1073741536 )
  {
    if ( *(_DWORD *)(v6 + 4) != -1073676288 )
      goto LABEL_23;
  }
  else if ( (_DWORD)Status != -1073741823 || *(_DWORD *)(v6 + 4) != -1073741819 )
  {
    goto LABEL_23;
  }
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)Context) + 2938); ++i )
  {
    PortData = UsbhGetPortData((__int64)Context, (unsigned __int16)i, v26, v27);
    Usbh_CheckPortHwPendingStatus(Context, PortData, v29, v30);
  }
LABEL_23:
  if ( Usb_Disconnected(Status) )
  {
LABEL_24:
    v31 = (struct _KEVENT *)(v5 + 672);
LABEL_25:
    KeSetEvent(v31, 0, 0);
    return 3221225494LL;
  }
  if ( (_DWORD)Status == -1073741536 || v12 == -1 )
  {
    Log((__int64)Context, 4, 1667778867, Status, v12);
    goto LABEL_24;
  }
  if ( ++v5[664] < 3u )
  {
    v5[640] |= 0x1000u;
    v47 = FdoExt((__int64)Context);
    UsbhQueueWorkItemWithRetry(
      (__int64)Context,
      *((_QWORD *)v5 + 341),
      (__int64)UsbhHubResetIrqPipeWorker,
      0LL,
      (__int64)(v47 + 346),
      0,
      0x49577269u);
  }
  else
  {
    KeSetEvent((PRKEVENT)v5 + 112, 0, 0);
    UsbhException((__int64)Context, 0, 7, 0LL, 0, Status, *(_DWORD *)(v6 + 4), usbfile_bus_c, 1147, 0);
  }
  return 3221225494LL;
}
