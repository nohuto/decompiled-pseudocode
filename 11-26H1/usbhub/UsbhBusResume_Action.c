/*
 * XREFs of UsbhBusResume_Action @ 0x140012FB0
 * Callers:
 *     UsbhReleaseBusStateLock @ 0x1400111B8 (UsbhReleaseBusStateLock.c)
 *     UsbhDispatch_BusEvent @ 0x140012A78 (UsbhDispatch_BusEvent.c)
 *     Usbh_BS_BusPause @ 0x140012DBC (Usbh_BS_BusPause.c)
 * Callees:
 *     UsbhPostInterrupt @ 0x1400133E0 (UsbhPostInterrupt.c)
 *     UsbhPCE_Enable @ 0x140013680 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x140013878 (UsbhPCE_Resume.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 */

__int64 __fastcall UsbhBusResume_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  volatile signed __int32 *DeviceExtension; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int16 i; // bp
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  volatile signed __int32 *v21; // rcx
  signed __int32 v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v26; // r14
  volatile signed __int32 *v27; // rcx
  signed __int32 v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  KIRQL v33; // di
  __int64 v34; // r8
  __int64 v35; // r9
  volatile signed __int32 *v36; // rcx
  signed __int32 v37; // eax
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  __int64 v45; // r8
  volatile signed __int32 *v46; // rcx
  signed __int32 v47; // eax
  unsigned int v48; // edx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rbx
  __int64 Pool2; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rdx
  __int64 v55; // rbx

  v6 = FdoExt(DeviceObject, a2, a3, a4);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v8 = _InterlockedExchangeAdd(DeviceExtension + 220, 0xFFFFFFFF);
        v9 = *((_DWORD *)DeviceExtension + 221);
        v10 = *((_QWORD *)DeviceExtension + 111);
        v11 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(v11 + v10) = 1047750002;
        *(_QWORD *)(v11 + v10 + 8) = 0LL;
        *(_QWORD *)(v11 + v10 + 16) = 0LL;
        *(_QWORD *)(v11 + v10 + 24) = 0LL;
      }
    }
  }
  *(_DWORD *)(v6 + 2656) = 0;
  KeResetEvent((PRKEVENT)(v6 + 2688));
  *(_DWORD *)(v6 + 2712) = 0;
  for ( i = 1; i <= *(unsigned __int8 *)(FdoExt(DeviceObject, v12, v13, v14) + 2938); ++i )
  {
    UsbhPCE_Resume(DeviceObject, a2, i);
    UsbhPCE_Enable(DeviceObject, a2, i);
    v26 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( DeviceObject )
      {
        v27 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
        if ( v27 )
        {
          v28 = _InterlockedExchangeAdd(v27 + 220, 0xFFFFFFFF);
          v29 = *((_DWORD *)v27 + 221);
          v30 = *((_QWORD *)v27 + 111);
          v31 = 32LL * ((v28 - 1) & v29);
          *(_DWORD *)(v31 + v30) = 1329877100;
          *(_QWORD *)(v31 + v30 + 16) = i;
          *(_QWORD *)(v31 + v30 + 8) = 0LL;
          *(_QWORD *)(v31 + v30 + 24) = 1382380368LL;
        }
      }
    }
    v33 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_140070600 = (__int64)&dword_140070608;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( DeviceObject )
      {
        v36 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
        if ( v36 )
        {
          v37 = _InterlockedExchangeAdd(v36 + 220, 0xFFFFFFFF);
          v38 = *((_DWORD *)v36 + 221);
          v39 = *((_QWORD *)v36 + 111);
          v32 = 32LL * ((v37 - 1) & v38);
          *(_DWORD *)(v32 + v39) = 1413771367;
          *(_QWORD *)(v32 + v39 + 16) = i;
          *(_QWORD *)(v32 + v39 + 8) = 0LL;
          *(_QWORD *)(v32 + v39 + 24) = 0LL;
        }
      }
    }
    if ( i )
    {
      v40 = FdoExt(DeviceObject, v32, v34, v35);
      if ( i <= *(unsigned __int8 *)(FdoExt(DeviceObject, v41, v42, v43) + 2938) )
      {
        v44 = *(_QWORD *)(v40 + 3056);
        if ( v44 )
        {
          v45 = v44 + 2928LL * i - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( DeviceObject )
            {
              v46 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
              if ( v46 )
              {
                v47 = _InterlockedExchangeAdd(v46 + 220, 0xFFFFFFFF);
                v48 = *((_DWORD *)v46 + 221);
                v49 = *((_QWORD *)v46 + 111);
                v50 = 32LL * ((v47 - 1) & v48);
                *(_DWORD *)(v50 + v49) = 1044672615;
                *(_QWORD *)(v50 + v49 + 8) = 0LL;
                *(_QWORD *)(v50 + v49 + 16) = i;
                *(_QWORD *)(v50 + v49 + 24) = v45;
              }
            }
          }
          if ( v45 )
          {
            v26 = *(_QWORD *)(v45 + 392);
            if ( v26 )
            {
              v51 = PdoExt(*(_QWORD *)(v45 + 392));
              Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
              if ( Pool2 )
              {
                *(_DWORD *)Pool2 = 1668571500;
                *(_QWORD *)(Pool2 + 32) = v26;
                *(_DWORD *)(Pool2 + 24) = 1382380368;
                *(_QWORD *)(Pool2 + 40) = 0LL;
                v53 = (_QWORD *)(Pool2 + 8);
                v54 = *(_QWORD **)(v51 + 1280);
                if ( *v54 != v51 + 1272 )
                  __fastfail(3u);
                *v53 = v51 + 1272;
                v53[1] = v54;
                *v54 = v53;
                *(_QWORD *)(v51 + 1280) = v53;
              }
              else
              {
                ++*(_DWORD *)(v51 + 1288);
              }
            }
          }
        }
      }
    }
    qword_140070600 = 0LL;
    KeReleaseSpinLock(&HubG, v33);
    if ( v26 )
    {
      v55 = PdoExt(v26);
      KeWaitForSingleObject((PVOID)(v55 + 2896), Executive, 0, 0, 0LL);
      *(_DWORD *)(v55 + 1420) &= ~0x10000000u;
      KeSetEvent((PRKEVENT)(v55 + 2896), 0, 0);
      UsbhUnlatchPdo(DeviceObject, v26, 0LL, 1382380368LL);
    }
  }
  UsbhPostInterrupt(DeviceObject);
  v20 = _InterlockedExchange64((volatile __int64 *)(FdoExt(DeviceObject, v16, v17, v18) + 3288), 0LL);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    if ( DeviceObject )
    {
      v21 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
      if ( v21 )
      {
        v22 = _InterlockedExchangeAdd(v21 + 220, 0xFFFFFFFF);
        v23 = *((_DWORD *)v21 + 221);
        v24 = *((_QWORD *)v21 + 111);
        v19 = 32LL * ((v22 - 1) & v23);
        *(_DWORD *)(v19 + v24) = 762934082;
        *(_QWORD *)(v19 + v24 + 8) = 0LL;
        *(_QWORD *)(v19 + v24 + 16) = 0LL;
        *(_QWORD *)(v19 + v24 + 24) = v20;
      }
    }
  }
  return UsbhDecHubBusy(DeviceObject, v19, v20);
}
