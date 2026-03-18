/*
 * XREFs of UsbhBusPause_Action @ 0x14000333C
 * Callers:
 *     Usbh_BS_BusRun @ 0x140001DE4 (Usbh_BS_BusRun.c)
 * Callees:
 *     UsbhQueuePauseChange @ 0x140003C48 (UsbhQueuePauseChange.c)
 *     UsbhPCE_Disable @ 0x140003E98 (UsbhPCE_Disable.c)
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhPostInterrupt @ 0x14000C308 (UsbhPostInterrupt.c)
 *     UsbhSsh_CheckHubIdle @ 0x14002BA08 (UsbhSsh_CheckHubIdle.c)
 */

__int64 __fastcall UsbhBusPause_Action(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v4; // rbx
  void *DeviceExtension; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rdx
  __int64 v9; // rcx
  unsigned __int16 i; // r14
  void *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r13
  void *v16; // rdx
  __int64 v17; // rcx
  void *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  void *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbp
  void *v24; // rdx
  __int64 v25; // rcx
  KIRQL v26; // di
  void *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  void *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 Pool2; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // rbx
  void *v39; // rdx
  __int64 v40; // rcx
  KIRQL v41; // r15
  void *v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rbx
  _QWORD *v45; // rdi
  _QWORD *v46; // rdx
  _QWORD *v47; // r8
  void *v48; // r9
  __int64 v49; // rcx
  __int64 v50; // rdx
  _QWORD *v51; // rcx
  int v52; // eax
  void *v53; // rdx
  __int64 v54; // rcx

  v4 = FdoExt(DeviceObject);
  if ( _bittest(&UsbhLogMask, 0xBu) )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v6 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v6 = 829776240;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = 0LL;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 2712), 0xFFFFFFFF) == 1 )
  {
    v7 = *(_QWORD *)(v4 + 2664);
    if ( _bittest(&UsbhLogMask, 0xBu) )
    {
      if ( DeviceObject )
      {
        v8 = DeviceObject->DeviceExtension;
        if ( v8 )
        {
          v9 = *((_QWORD *)v8 + 111)
             + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v8 + 220) & *((_DWORD *)v8 + 221));
          *(_DWORD *)v9 = 1363763555;
          *(_QWORD *)(v9 + 8) = 0LL;
          *(_QWORD *)(v9 + 16) = v7;
          *(_QWORD *)(v9 + 24) = 0LL;
        }
      }
    }
    IoCancelIrp(*(PIRP *)(v4 + 2664));
  }
  KeWaitForSingleObject((PVOID)(v4 + 2688), Executive, 0, 0, 0LL);
  if ( *(_DWORD *)(a2 + 128) == 2 && (int)UsbhSsh_CheckHubIdle(DeviceObject) < 0 )
  {
    *(_DWORD *)(v4 + 2712) = 0;
    KeResetEvent((PRKEVENT)(v4 + 2688));
    UsbhPostInterrupt(DeviceObject);
    return 3221225473LL;
  }
  else
  {
    for ( i = 1; i <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938); ++i )
    {
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( DeviceObject )
        {
          v11 = DeviceObject->DeviceExtension;
          if ( v11 )
          {
            v12 = *((_QWORD *)v11 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
            *(_DWORD *)v12 = 1413771367;
            *(_QWORD *)(v12 + 16) = i;
            *(_QWORD *)(v12 + 8) = 0LL;
            *(_QWORD *)(v12 + 24) = 0LL;
          }
        }
      }
      if ( i )
      {
        v13 = FdoExt(DeviceObject);
        if ( i <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) && (v14 = *(_QWORD *)(v13 + 3056)) != 0 )
        {
          v15 = v14 + 2928LL * i - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( DeviceObject )
            {
              v16 = DeviceObject->DeviceExtension;
              if ( v16 )
              {
                v17 = *((_QWORD *)v16 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v16 + 220) & *((_DWORD *)v16 + 221));
                *(_DWORD *)v17 = 1044672615;
                *(_QWORD *)(v17 + 8) = 0LL;
                *(_QWORD *)(v17 + 16) = i;
                *(_QWORD *)(v17 + 24) = v15;
              }
            }
          }
        }
        else
        {
          v15 = 0LL;
        }
      }
      else
      {
        v15 = 0LL;
      }
      if ( (UsbhLogMask & 0x800) != 0 )
      {
        if ( DeviceObject )
        {
          v18 = DeviceObject->DeviceExtension;
          if ( v18 )
          {
            v19 = *((_QWORD *)v18 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v18 + 220) & *((_DWORD *)v18 + 221));
            *(_DWORD *)v19 = 1467310448;
            *(_QWORD *)(v19 + 24) = i;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 16) = 0LL;
          }
        }
      }
      if ( v15 )
      {
        v20 = *(int *)(v15 + 696);
        if ( (UsbhLogMask & 0x800) != 0 )
        {
          if ( DeviceObject )
          {
            v21 = DeviceObject->DeviceExtension;
            if ( v21 )
            {
              v22 = *((_QWORD *)v21 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
              *(_DWORD *)v22 = 846553456;
              *(_QWORD *)(v22 + 24) = i;
              *(_QWORD *)(v22 + 8) = 0LL;
              *(_QWORD *)(v22 + 16) = v20;
            }
          }
        }
      }
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeWaitForSingleObject((PVOID)(v15 + 520), Executive, 0, 0, 0LL);
      v23 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( DeviceObject )
        {
          v24 = DeviceObject->DeviceExtension;
          if ( v24 )
          {
            v25 = *((_QWORD *)v24 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v24 + 220) & *((_DWORD *)v24 + 221));
            *(_DWORD *)v25 = 1329877100;
            *(_QWORD *)(v25 + 16) = i;
            *(_QWORD *)(v25 + 8) = 0LL;
            *(_QWORD *)(v25 + 24) = 1348564304LL;
          }
        }
      }
      v26 = KeAcquireSpinLockRaiseToDpc(&HubG);
      qword_14006F5A0 = (__int64)&dword_14006F5A8;
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( DeviceObject )
        {
          v27 = DeviceObject->DeviceExtension;
          if ( v27 )
          {
            v28 = *((_QWORD *)v27 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
            *(_DWORD *)v28 = 1413771367;
            *(_QWORD *)(v28 + 16) = i;
            *(_QWORD *)(v28 + 8) = 0LL;
            *(_QWORD *)(v28 + 24) = 0LL;
          }
        }
      }
      if ( i )
      {
        v29 = FdoExt(DeviceObject);
        if ( i <= *(unsigned __int8 *)(FdoExt(DeviceObject) + 2938) )
        {
          v30 = *(_QWORD *)(v29 + 3056);
          if ( v30 )
          {
            v31 = v30 + 2928LL * i - 2928;
            if ( (UsbhLogMask & 8) != 0 )
            {
              if ( DeviceObject )
              {
                v32 = DeviceObject->DeviceExtension;
                if ( v32 )
                {
                  v33 = *((_QWORD *)v32 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v32 + 220) & *((_DWORD *)v32 + 221));
                  *(_DWORD *)v33 = 1044672615;
                  *(_QWORD *)(v33 + 8) = 0LL;
                  *(_QWORD *)(v33 + 16) = i;
                  *(_QWORD *)(v33 + 24) = v31;
                }
              }
            }
            if ( v31 )
            {
              v23 = *(_QWORD *)(v31 + 392);
              if ( v23 )
              {
                v34 = PdoExt(*(_QWORD *)(v31 + 392));
                Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
                if ( Pool2 )
                {
                  *(_DWORD *)Pool2 = 1668571500;
                  *(_QWORD *)(Pool2 + 32) = v23;
                  *(_DWORD *)(Pool2 + 24) = 1348564304;
                  *(_QWORD *)(Pool2 + 40) = 0LL;
                  v36 = (_QWORD *)(Pool2 + 8);
                  v37 = *(_QWORD **)(v34 + 1280);
                  if ( *v37 != v34 + 1272 )
                    goto LABEL_97;
                  *v36 = v34 + 1272;
                  v36[1] = v37;
                  *v37 = v36;
                  *(_QWORD *)(v34 + 1280) = v36;
                }
                else
                {
                  ++*(_DWORD *)(v34 + 1288);
                }
              }
            }
          }
        }
      }
      qword_14006F5A0 = 0LL;
      KeReleaseSpinLock(&HubG, v26);
      if ( v23 )
      {
        v38 = PdoExt(v23);
        KeWaitForSingleObject((PVOID)(v38 + 2896), Executive, 0, 0, 0LL);
        *(_DWORD *)(v38 + 1420) |= 0x10000000u;
        KeSetEvent((PRKEVENT)(v38 + 2896), 0, 0);
        if ( _bittest(&UsbhLogMask, 8u) )
        {
          if ( DeviceObject )
          {
            v39 = DeviceObject->DeviceExtension;
            if ( v39 )
            {
              v40 = *((_QWORD *)v39 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v39 + 220) & *((_DWORD *)v39 + 221));
              *(_DWORD *)v40 = 1329877109;
              *(_QWORD *)(v40 + 8) = 0LL;
              *(_QWORD *)(v40 + 16) = v23;
              *(_QWORD *)(v40 + 24) = 1348564304LL;
            }
          }
        }
        v41 = KeAcquireSpinLockRaiseToDpc(&HubG);
        qword_14006F5A0 = (__int64)&dword_14006F5A8;
        if ( _bittest(&UsbhLogMask, 8u) )
        {
          if ( DeviceObject )
          {
            v42 = DeviceObject->DeviceExtension;
            if ( v42 )
            {
              v43 = *((_QWORD *)v42 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v42 + 220) & *((_DWORD *)v42 + 221));
              *(_QWORD *)(v43 + 8) = 0LL;
              *(_DWORD *)v43 = 1348891236;
              *(_QWORD *)(v43 + 16) = v23;
              *(_QWORD *)(v43 + 24) = 1348564304LL;
            }
          }
        }
        v44 = PdoExt(v23);
        v45 = (_QWORD *)(v44 + 1272);
        v46 = *(_QWORD **)(v44 + 1272);
        if ( v46 == (_QWORD *)(v44 + 1272) )
          goto LABEL_84;
        do
        {
          v47 = v46 - 1;
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            if ( DeviceObject )
            {
              v48 = DeviceObject->DeviceExtension;
              if ( v48 )
              {
                v49 = *((_QWORD *)v48 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v48 + 220) & *((_DWORD *)v48 + 221));
                *(_QWORD *)(v49 + 8) = 0LL;
                *(_DWORD *)v49 = 1064591724;
                *(_QWORD *)(v49 + 16) = v44;
                *(_QWORD *)(v49 + 24) = 1348564304LL;
              }
            }
          }
          if ( *((_DWORD *)v47 + 6) == 1348564304 && !v47[5] )
            break;
          v46 = (_QWORD *)*v46;
          v47 = 0LL;
        }
        while ( v46 != v45 );
        if ( !v47 )
        {
LABEL_84:
          v52 = *(_DWORD *)(v44 + 1288);
          if ( v52 )
            *(_DWORD *)(v44 + 1288) = v52 - 1;
        }
        else
        {
          v50 = v47[1];
          if ( *(_QWORD **)(v50 + 8) != v47 + 1 || (v51 = (_QWORD *)v47[2], (_QWORD *)*v51 != v47 + 1) )
LABEL_97:
            __fastfail(3u);
          *v51 = v50;
          *(_QWORD *)(v50 + 8) = v51;
          ExFreePoolWithTag(v47, 0);
        }
        if ( (_QWORD *)*v45 == v45 && !*(_DWORD *)(v44 + 1288) )
          KeSetEvent((PRKEVENT)(v44 + 1296), 0, 0);
        qword_14006F5A0 = 0LL;
        KeReleaseSpinLock(&HubG, v41);
      }
      UsbhQueuePauseChange(DeviceObject, i, a2);
      UsbhPCE_Disable(DeviceObject, i, a2);
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeSetEvent((PRKEVENT)(v15 + 520), 0, 0);
    }
    if ( (UsbhLogMask & 0x800) != 0 )
    {
      if ( DeviceObject )
      {
        v53 = DeviceObject->DeviceExtension;
        if ( v53 )
        {
          v54 = *((_QWORD *)v53 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v53 + 220) & *((_DWORD *)v53 + 221));
          *(_DWORD *)v54 = 1047880048;
          *(_QWORD *)(v54 + 8) = 0LL;
          *(_QWORD *)(v54 + 16) = 0LL;
          *(_QWORD *)(v54 + 24) = 0LL;
        }
      }
    }
    return 0LL;
  }
}
