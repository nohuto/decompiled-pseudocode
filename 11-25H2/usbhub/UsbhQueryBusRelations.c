/*
 * XREFs of UsbhQueryBusRelations @ 0x14002D43C
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x14003ABD0 (UsbhFdoPnp_QueryDeviceRelations.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     SET_PDO_HWPNPSTATE @ 0x14002DAD4 (SET_PDO_HWPNPSTATE.c)
 *     UsbhAcquirePdoStateLock @ 0x14002E600 (UsbhAcquirePdoStateLock.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 *     memmove @ 0x140061600 (memmove.c)
 */

__int64 __fastcall UsbhQueryBusRelations(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  __int64 v2; // rbp
  int ActivityIdIrp; // esi
  _DWORD *v6; // rax
  __int128 *v7; // r13
  _DWORD *v8; // r15
  __int64 v9; // r8
  void *DeviceExtension; // rdx
  __int64 v11; // rcx
  unsigned int *Information; // rsi
  NTSTATUS v13; // eax
  unsigned int v14; // r10d
  _DWORD *v16; // rax
  _DWORD *v17; // rax
  _DWORD *Pool2; // rax
  _DWORD *v19; // r14
  unsigned int v20; // r15d
  PVOID *v21; // r14
  _DWORD *v22; // rax
  __int64 v23; // rcx
  _QWORD *i; // rbp
  _QWORD *v25; // rsi
  KSPIN_LOCK **v26; // rbp
  KSPIN_LOCK *v27; // rsi
  KSPIN_LOCK *v28; // rax
  KSPIN_LOCK *v29; // r13
  KIRQL v30; // al
  KSPIN_LOCK **v31; // rcx
  _DWORD *v32; // rax
  KIRQL v33; // dl
  __int64 v34; // [rsp+20h] [rbp-78h]
  __int64 v35; // [rsp+28h] [rbp-70h]
  KIRQL v36; // [rsp+30h] [rbp-68h]
  __int128 *v37; // [rsp+38h] [rbp-60h]
  __int128 v38; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0LL;
  v38 = 0LL;
  if ( a2 && g_IoGetActivityIdIrp )
    ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v38);
  else
    ActivityIdIrp = -1073741823;
  v6 = FdoExt((__int64)a1);
  v7 = &v38;
  if ( ActivityIdIrp < 0 )
    v7 = 0LL;
  v37 = v7;
  v8 = v6;
  UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, v7, &USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_DISPATCH, 0, 0);
  v9 = (int)v8[340];
  if ( (UsbhLogMask & 2) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v11 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v11 = 827474513;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = a2;
        *(_QWORD *)(v11 + 24) = v9;
      }
    }
  }
  Information = (unsigned int *)a2->IoStatus.Information;
  if ( Information )
    v2 = *Information;
  if ( v8[340] == 5 )
  {
    v16 = FdoExt((__int64)a1);
    Usbh_SSH_Event(a1, 6u, (__int64)(v16 + 346));
    v17 = FdoExt((__int64)a1);
    Pool2 = (_DWORD *)ExAllocatePool2(
                        64LL,
                        8LL * ((unsigned int)v2 + *((unsigned __int8 *)v17 + 2938) - 1) + 16,
                        1112885333LL);
    v19 = Pool2;
    if ( Pool2 )
    {
      if ( (_DWORD)v2 )
      {
        *Pool2 = v2;
        memmove(Pool2 + 4, Information + 2, 8LL * (unsigned int)v2);
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      Log((__int64)a1, 2, 1363300914, (__int64)a2, (__int64)v19);
      v22 = FdoExt((__int64)a1);
      UsbhAcquirePdoStateLock(v23, v22 + 346, 8LL);
      v8[226] = 0;
      for ( i = (_QWORD *)*((_QWORD *)v8 + 601); i != (_QWORD *)(v8 + 1202); i = (_QWORD *)*i )
      {
        v25 = i - 165;
        Log((__int64)a1, 2, 1902277169, (__int64)(i - 165), 0LL);
        FdoExt((__int64)a1);
        if ( !i[152] )
          v25[317] = MEMORY[0xFFFFF78000000014];
        ObfReferenceObject((PVOID)v25[105]);
        *(_QWORD *)&v19[2 * (*v19)++ + 2] = v25[105];
        SET_PDO_HWPNPSTATE(v25[105], 3LL, 8LL);
      }
      v26 = (KSPIN_LOCK **)(v8 + 1206);
      while ( 1 )
      {
        v27 = *v26;
        if ( *v26 == (KSPIN_LOCK *)v26 )
          break;
        if ( (KSPIN_LOCK **)v27[1] != v26 )
          goto LABEL_39;
        v28 = (KSPIN_LOCK *)*v27;
        if ( *(KSPIN_LOCK **)(*v27 + 8) != v27 )
          goto LABEL_39;
        *v26 = v28;
        v29 = v27 - 165;
        v28[1] = (KSPIN_LOCK)v26;
        Log((__int64)a1, 2, 1902277170, (__int64)(v27 - 165), 0LL);
        SET_PDO_HWPNPSTATE(*(v27 - 60), 5LL, 9LL);
        *v27 = 0LL;
        v27[1] = 0LL;
        v30 = KeAcquireSpinLockRaiseToDpc(v27 + 186);
        v36 = v30;
        if ( *((_DWORD *)v27 + 374) == 1 )
        {
          *((_DWORD *)v29 + 704) = 0;
          USBD_RemoveDeviceFromGlobalList(v29[105]);
          v30 = v36;
        }
        KeReleaseSpinLock(v29 + 351, v30);
        v31 = (KSPIN_LOCK **)*((_QWORD *)v8 + 606);
        if ( *v31 != (KSPIN_LOCK *)(v8 + 1210) )
LABEL_39:
          __fastfail(3u);
        *v27 = (KSPIN_LOCK)(v8 + 1210);
        v27[1] = (KSPIN_LOCK)v31;
        *v31 = v27;
        *((_QWORD *)v8 + 606) = v27;
      }
      v32 = FdoExt((__int64)a1);
      v32[380] = 0;
      qword_14006F5A0 = 0LL;
      v33 = *((_BYTE *)v32 + 1516);
      v32[368] = 1734964085;
      KeReleaseSpinLock(&HubG, v33);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      a2->IoStatus.Status = 0;
      a2->IoStatus.Information = (unsigned __int64)v19;
      v7 = v37;
      v20 = IofCallDriver(*((PDEVICE_OBJECT *)v8 + 151), a2);
    }
    else
    {
      v20 = -1073741670;
      Log((__int64)a1, 2, 1363300915, (__int64)a2, 0LL);
      a2->IoStatus.Information = 0LL;
      if ( (_DWORD)v2 )
      {
        v21 = (PVOID *)(Information + 2);
        do
        {
          ObfDereferenceObject(*v21++);
          --v2;
        }
        while ( v2 );
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Status = -1073741670;
      IofCompleteRequest(a2, 0);
    }
    LODWORD(v35) = 0;
    LODWORD(v34) = 0;
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, v7, &USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_COMPLETE, v34, v35);
    return v20;
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    a2->IoStatus.Status = 0;
    v13 = IofCallDriver(*((PDEVICE_OBJECT *)v8 + 151), a2);
    Log((__int64)a1, 2, 1363300897, 0LL, v13);
    return v14;
  }
}
