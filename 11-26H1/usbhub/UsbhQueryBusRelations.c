/*
 * XREFs of UsbhQueryBusRelations @ 0x140034C9C
 * Callers:
 *     UsbhFdoPnp_QueryDeviceRelations @ 0x14003A640 (UsbhFdoPnp_QueryDeviceRelations.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAcquirePdoStateLock @ 0x140010E10 (UsbhAcquirePdoStateLock.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     SET_PDO_HWPNPSTATE @ 0x140033458 (SET_PDO_HWPNPSTATE.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 *     memmove @ 0x140061CC0 (memmove.c)
 */

__int64 __fastcall UsbhQueryBusRelations(__int64 a1, IRP *a2)
{
  __int64 v2; // rbp
  int ActivityIdIrp; // esi
  _DWORD *v6; // rax
  __int128 *v7; // r13
  _DWORD *v8; // r15
  __int64 v9; // r8
  __int64 v10; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int *Information; // rsi
  NTSTATUS v16; // eax
  unsigned int v17; // r10d
  _DWORD *v19; // rax
  _DWORD *v20; // rax
  _DWORD *Pool2; // rax
  _DWORD *v22; // r14
  unsigned int v23; // r15d
  PVOID *v24; // r14
  _DWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *i; // rbp
  _QWORD *v28; // rsi
  KSPIN_LOCK **v29; // rbp
  KSPIN_LOCK *v30; // rsi
  KSPIN_LOCK *v31; // rax
  KSPIN_LOCK *v32; // r13
  KIRQL v33; // al
  KSPIN_LOCK v34; // rcx
  KSPIN_LOCK **v35; // rcx
  _DWORD *v36; // rax
  KIRQL v37; // dl
  KIRQL v38; // [rsp+30h] [rbp-68h]
  __int128 *v39; // [rsp+38h] [rbp-60h]
  __int128 v40; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0LL;
  v40 = 0LL;
  if ( a2 && g_IoGetActivityIdIrp )
    ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v40);
  else
    ActivityIdIrp = -1073741823;
  v6 = FdoExt(a1);
  v7 = &v40;
  if ( ActivityIdIrp < 0 )
    v7 = 0LL;
  v39 = v7;
  v8 = v6;
  UsbhEtwLogHubIrpEvent(a1, 0LL, v7, &USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_DISPATCH);
  v9 = (int)v8[340];
  if ( (UsbhLogMask & 2) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 880), 0xFFFFFFFF);
        v12 = *(_DWORD *)(v10 + 884);
        v13 = *(_QWORD *)(v10 + 888);
        v14 = 32LL * ((v11 - 1) & v12);
        *(_DWORD *)(v14 + v13) = 827474513;
        *(_QWORD *)(v14 + v13 + 8) = 0LL;
        *(_QWORD *)(v14 + v13 + 16) = a2;
        *(_QWORD *)(v14 + v13 + 24) = v9;
      }
    }
  }
  Information = (unsigned int *)a2->IoStatus.Information;
  if ( Information )
    v2 = *Information;
  if ( v8[340] == 5 )
  {
    v19 = FdoExt(a1);
    Usbh_SSH_Event(a1, 6u, (__int64)(v19 + 346));
    v20 = FdoExt(a1);
    Pool2 = (_DWORD *)ExAllocatePool2(
                        64LL,
                        8LL * ((unsigned int)v2 + *((unsigned __int8 *)v20 + 2938) - 1) + 16,
                        1112885333LL);
    v22 = Pool2;
    if ( Pool2 )
    {
      if ( (_DWORD)v2 )
      {
        *Pool2 = v2;
        memmove(Pool2 + 4, Information + 2, 8LL * (unsigned int)v2);
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      Log(a1, 2, 1363300914, (__int64)a2, (__int64)v22);
      v25 = FdoExt(a1);
      UsbhAcquirePdoStateLock(v26, (__int64)(v25 + 346), 8);
      v8[226] = 0;
      for ( i = (_QWORD *)*((_QWORD *)v8 + 601); i != (_QWORD *)(v8 + 1202); i = (_QWORD *)*i )
      {
        v28 = i - 165;
        Log(a1, 2, 1902277169, (__int64)(i - 165), 0LL);
        FdoExt(a1);
        if ( !i[152] )
          v28[317] = MEMORY[0xFFFFF78000000014];
        ObfReferenceObject((PVOID)v28[105]);
        *(_QWORD *)&v22[2 * (*v22)++ + 2] = v28[105];
        SET_PDO_HWPNPSTATE(v28[105], 3, 8);
      }
      v29 = (KSPIN_LOCK **)(v8 + 1206);
      while ( 1 )
      {
        v30 = *v29;
        if ( *v29 == (KSPIN_LOCK *)v29 )
          break;
        if ( (KSPIN_LOCK **)v30[1] != v29 )
          goto LABEL_39;
        v31 = (KSPIN_LOCK *)*v30;
        if ( *(KSPIN_LOCK **)(*v30 + 8) != v30 )
          goto LABEL_39;
        *v29 = v31;
        v32 = v30 - 165;
        v31[1] = (KSPIN_LOCK)v29;
        Log(a1, 2, 1902277170, (__int64)(v30 - 165), 0LL);
        SET_PDO_HWPNPSTATE(*(v30 - 60), 5, 9);
        *v30 = 0LL;
        v30[1] = 0LL;
        v33 = KeAcquireSpinLockRaiseToDpc(v30 + 186);
        v38 = v33;
        if ( *((_DWORD *)v30 + 374) == 1 )
        {
          v34 = v32[105];
          *((_DWORD *)v32 + 704) = 0;
          USBD_RemoveDeviceFromGlobalList(v34);
          v33 = v38;
        }
        KeReleaseSpinLock(v32 + 351, v33);
        v35 = (KSPIN_LOCK **)*((_QWORD *)v8 + 606);
        if ( *v35 != (KSPIN_LOCK *)(v8 + 1210) )
LABEL_39:
          __fastfail(3u);
        *v30 = (KSPIN_LOCK)(v8 + 1210);
        v30[1] = (KSPIN_LOCK)v35;
        *v35 = v30;
        *((_QWORD *)v8 + 606) = v30;
      }
      v36 = FdoExt(a1);
      v36[380] = 0;
      qword_140070600 = 0LL;
      v37 = *((_BYTE *)v36 + 1516);
      v36[368] = 1734964085;
      KeReleaseSpinLock(&HubG, v37);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      a2->IoStatus.Status = 0;
      a2->IoStatus.Information = (unsigned __int64)v22;
      v7 = v39;
      v23 = IofCallDriver(*((PDEVICE_OBJECT *)v8 + 151), a2);
    }
    else
    {
      v23 = -1073741670;
      Log(a1, 2, 1363300915, (__int64)a2, 0LL);
      a2->IoStatus.Information = 0LL;
      if ( (_DWORD)v2 )
      {
        v24 = (PVOID *)(Information + 2);
        do
        {
          ObfDereferenceObject(*v24++);
          --v2;
        }
        while ( v2 );
      }
      if ( Information )
        ExFreePoolWithTag(Information, 0);
      a2->IoStatus.Status = -1073741670;
      IofCompleteRequest(a2, 0);
    }
    UsbhEtwLogHubIrpEvent(a1, 0LL, v7, &USBHUB_ETW_EVENT_HUB_QUERY_BUSRELATIONS_COMPLETE);
    return v23;
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    a2->IoStatus.Status = 0;
    v16 = IofCallDriver(*((PDEVICE_OBJECT *)v8 + 151), a2);
    Log(a1, 2, 1363300897, 0LL, v16);
    return v17;
  }
}
