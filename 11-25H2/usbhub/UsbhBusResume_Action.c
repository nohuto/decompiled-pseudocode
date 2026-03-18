/*
 * XREFs of UsbhBusResume_Action @ 0x14000CC28
 * Callers:
 *     UsbhReleaseBusStateLock @ 0x140001008 (UsbhReleaseBusStateLock.c)
 *     Usbh_BS_BusPause @ 0x14000D538 (Usbh_BS_BusPause.c)
 *     UsbhDispatch_BusEvent @ 0x14000DD84 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhPostInterrupt @ 0x14000C308 (UsbhPostInterrupt.c)
 *     UsbhPCE_Enable @ 0x14000D168 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x14000D350 (UsbhPCE_Resume.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 */

LONG __fastcall UsbhBusResume_Action(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  struct _KEVENT *v4; // rbx
  void *DeviceExtension; // rdx
  __int64 v6; // rcx
  unsigned __int16 i; // bp
  _QWORD *v8; // rbx
  void *v9; // rdx
  __int64 v10; // rcx
  struct _KEVENT *v11; // rdi
  __int64 Signalling; // r8
  void *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  __int64 v19; // r14
  void *v20; // rdx
  __int64 v21; // rcx
  KIRQL v22; // di
  void *v23; // rdx
  __int64 v24; // rcx
  _DWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r8
  void *v28; // rdx
  __int64 v29; // rcx
  _DWORD *v30; // rbx
  __int64 Pool2; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rdx
  _DWORD *v34; // rbx
  volatile int Lock; // eax

  v4 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v6 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v6 = 1047750002;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = 0LL;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
    }
  }
  LODWORD(v4[110].Header.WaitListHead.Blink) = 0;
  KeResetEvent(v4 + 112);
  v4[113].Header.LockNV = 0;
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
  {
    UsbhPCE_Resume(DeviceObject, a2, i);
    UsbhPCE_Enable(DeviceObject, a2, i);
    v19 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( DeviceObject )
      {
        v20 = DeviceObject->DeviceExtension;
        if ( v20 )
        {
          v21 = *((_QWORD *)v20 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v20 + 220) & *((_DWORD *)v20 + 221));
          *(_DWORD *)v21 = 1329877100;
          *(_QWORD *)(v21 + 16) = i;
          *(_QWORD *)(v21 + 8) = 0LL;
          *(_QWORD *)(v21 + 24) = 1382380368LL;
        }
      }
    }
    v22 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_14006F5A0 = (__int64)&dword_14006F5A8;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( DeviceObject )
      {
        v23 = DeviceObject->DeviceExtension;
        if ( v23 )
        {
          v24 = *((_QWORD *)v23 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v23 + 220) & *((_DWORD *)v23 + 221));
          *(_DWORD *)v24 = 1413771367;
          *(_QWORD *)(v24 + 16) = i;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 24) = 0LL;
        }
      }
    }
    if ( i )
    {
      v25 = FdoExt((__int64)DeviceObject);
      if ( i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
      {
        v26 = *((_QWORD *)v25 + 382);
        if ( v26 )
        {
          v27 = v26 + 2928LL * i - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( DeviceObject )
            {
              v28 = DeviceObject->DeviceExtension;
              if ( v28 )
              {
                v29 = *((_QWORD *)v28 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v28 + 220) & *((_DWORD *)v28 + 221));
                *(_DWORD *)v29 = 1044672615;
                *(_QWORD *)(v29 + 8) = 0LL;
                *(_QWORD *)(v29 + 16) = i;
                *(_QWORD *)(v29 + 24) = v27;
              }
            }
          }
          if ( v27 )
          {
            v19 = *(_QWORD *)(v27 + 392);
            if ( v19 )
            {
              v30 = PdoExt(*(_QWORD *)(v27 + 392));
              Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
              if ( Pool2 )
              {
                *(_DWORD *)Pool2 = 1668571500;
                *(_QWORD *)(Pool2 + 32) = v19;
                *(_DWORD *)(Pool2 + 24) = 1382380368;
                *(_QWORD *)(Pool2 + 40) = 0LL;
                v32 = (_QWORD *)(Pool2 + 8);
                v33 = (_QWORD *)*((_QWORD *)v30 + 160);
                if ( (_DWORD *)*v33 != v30 + 318 )
                  goto LABEL_48;
                *v32 = v30 + 318;
                v32[1] = v33;
                *v33 = v32;
                *((_QWORD *)v30 + 160) = v32;
              }
              else
              {
                ++v30[322];
              }
            }
          }
        }
      }
    }
    qword_14006F5A0 = 0LL;
    KeReleaseSpinLock(&HubG, v22);
    if ( v19 )
    {
      v34 = PdoExt(v19);
      KeWaitForSingleObject(v34 + 724, Executive, 0, 0, 0LL);
      v34[355] &= ~0x10000000u;
      KeSetEvent((PRKEVENT)(v34 + 724), 0, 0);
      UsbhUnlatchPdo(DeviceObject, v19, 0LL, 1382380368LL);
    }
  }
  UsbhPostInterrupt(DeviceObject);
  v8 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)FdoExt((__int64)DeviceObject) + 411, 0LL);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      v9 = DeviceObject->DeviceExtension;
      if ( v9 )
      {
        v10 = *((_QWORD *)v9 + 111)
            + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v9 + 220) & *((_DWORD *)v9 + 221));
        *(_DWORD *)v10 = 762934082;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 24) = v8;
      }
    }
  }
  v11 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
  v11[142].Header.Type = 1;
  KeWaitForSingleObject(&v11[139], Executive, 0, 0, 0LL);
  Signalling = v11[142].Header.Signalling;
  if ( (UsbhLogMask & 0x10000) != 0 )
  {
    if ( DeviceObject )
    {
      v13 = DeviceObject->DeviceExtension;
      if ( v13 )
      {
        v14 = *((_QWORD *)v13 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
        *(_DWORD *)v14 = 1667581000;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v8;
        *(_QWORD *)(v14 + 24) = Signalling;
      }
    }
  }
  if ( v11[142].Header.Signalling )
  {
    if ( v8 == (_QWORD *)1936941672 )
    {
      Lock = v11[130].Header.Lock;
      if ( Lock )
        v11[130].Header.LockNV = Lock - 1;
    }
    else if ( v8 )
    {
      v15 = v8 + 1;
      v16 = v8[1];
      if ( *(_QWORD **)(v16 + 8) != v8 + 1 || (v17 = (_QWORD *)v8[2], (_QWORD *)*v17 != v15) )
LABEL_48:
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      v8[2] = v8 + 1;
      *v15 = v15;
      ExFreePoolWithTag(v8, 0);
    }
  }
  return KeSetEvent(v11 + 139, 0, 0);
}
