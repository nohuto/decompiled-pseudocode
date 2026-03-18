/*
 * XREFs of UsbhHubProcessChangeWorker @ 0x140004850
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPCE_wRun @ 0x140004C18 (UsbhPCE_wRun.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x14003E5D8 (UsbhTrapFatalTimeout_x9f.c)
 *     WPP_RECORDER_SF_dq @ 0x14003ECF4 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhHubProcessChangeWorker(PDEVICE_OBJECT DeviceObject, unsigned __int16 *Context)
{
  int v4; // edx
  int v5; // r8d
  __int64 v6; // r15
  _QWORD *v7; // rbp
  KIRQL v8; // al
  void *DeviceExtension; // r8
  __int64 v10; // rcx
  KIRQL v11; // r9
  __int64 v12; // r8
  void *v13; // rcx
  __int64 v14; // rdx
  struct _KEVENT *v15; // r14
  __int64 Signalling; // r8
  void *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rdx
  volatile int Lock; // eax
  union _LARGE_INTEGER Timeout; // [rsp+90h] [rbp+18h] BYREF

  FdoExt(DeviceObject);
  v6 = Context[2];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      v5,
      100,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6,
      (char)Context);
  v7 = (_QWORD *)UsbhIncHubBusy((_DWORD)DeviceObject, (int)Context + 24, (_DWORD)Context, 1129345907, 0);
  Timeout.QuadPart = -6600000000LL - (int)(KeQueryTimeIncrement() - 1);
  if ( KeWaitForSingleObject(Context + 1232, Executive, 0, 0, &Timeout) == 258 )
  {
    v22 = *((_DWORD *)Context + 711);
    v23 = 10LL;
    if ( v22 )
      v23 = v22;
    UsbhTrapFatalTimeout_x9f(DeviceObject, v23, Context);
  }
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 306);
  *((_DWORD *)Context + 603) = 2;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 306, v8);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v10 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v10 = 1464029256;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = Context;
        *(_QWORD *)(v10 + 24) = v6;
      }
    }
  }
  UsbhPCE_wRun(DeviceObject, Context + 12, Context);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 306);
  v12 = *((unsigned int *)Context + 603);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( DeviceObject )
    {
      v13 = DeviceObject->DeviceExtension;
      if ( v13 )
      {
        v14 = *((_QWORD *)v13 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
        *(_DWORD *)v14 = 1682133064;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v12;
        *(_QWORD *)(v14 + 24) = v6;
      }
    }
  }
  if ( *((_DWORD *)Context + 603) == 2 )
    *((_DWORD *)Context + 603) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 306, v11);
  v15 = (struct _KEVENT *)FdoExt(DeviceObject);
  v15[142].Header.Type = 1;
  KeWaitForSingleObject(&v15[139], Executive, 0, 0, 0LL);
  Signalling = v15[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( DeviceObject )
    {
      v17 = DeviceObject->DeviceExtension;
      if ( v17 )
      {
        v18 = *((_QWORD *)v17 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v17 + 220) & *((_DWORD *)v17 + 221));
        *(_DWORD *)v18 = 1667581000;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = v7;
        *(_QWORD *)(v18 + 24) = Signalling;
      }
    }
  }
  if ( v15[142].Header.Signalling )
  {
    if ( v7 == (_QWORD *)1936941672 )
    {
      Lock = v15[130].Header.Lock;
      if ( Lock )
        v15[130].Header.LockNV = Lock - 1;
    }
    else if ( v7 )
    {
      v19 = v7[1];
      v20 = v7 + 1;
      if ( *(_QWORD **)(v19 + 8) != v7 + 1 || (v21 = (_QWORD *)v7[2], (_QWORD *)*v21 != v20) )
        __fastfail(3u);
      *v21 = v19;
      *(_QWORD *)(v19 + 8) = v21;
      v7[2] = v7 + 1;
      *v20 = v20;
      ExFreePoolWithTag(v7, 0);
    }
  }
  KeSetEvent(v15 + 139, 0, 0);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Context + 610, 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(Context + 1208), 0, 0);
}
