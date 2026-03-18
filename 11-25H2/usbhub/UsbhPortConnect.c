/*
 * XREFs of UsbhPortConnect @ 0x140013B30
 * Callers:
 *     <none>
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhIncHubBusy @ 0x140007B90 (UsbhIncHubBusy.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhResetPort @ 0x140012B44 (UsbhResetPort.c)
 *     UsbhAcquireEnumBusLock @ 0x140012E54 (UsbhAcquireEnumBusLock.c)
 *     UsbhRawWait @ 0x140014184 (UsbhRawWait.c)
 *     UsbhCreatePdo @ 0x140014360 (UsbhCreatePdo.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14001B830 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhDisablePort @ 0x14001C650 (UsbhDisablePort.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x14002E37C (Usbh_ErrorDisconnect_PdoEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhPortConnect(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  void *DeviceExtension; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  __int128 *v8; // r8
  __int64 v9; // r9
  unsigned __int16 *v10; // rcx
  int v11; // eax
  _QWORD *v12; // r15
  __int64 v13; // rdx
  int Pdo; // esi
  unsigned __int64 v15; // rsi
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rcx
  void *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _DWORD *Pool2; // rax
  __int64 v24; // r8
  void *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-89h]
  __int64 v28; // [rsp+20h] [rbp-89h]
  __int64 v29; // [rsp+28h] [rbp-81h]
  __int64 v30; // [rsp+28h] [rbp-81h]
  int v31; // [rsp+68h] [rbp-41h] BYREF
  int v32; // [rsp+70h] [rbp-39h] BYREF
  int v33; // [rsp+78h] [rbp-31h] BYREF
  __int16 v34; // [rsp+7Ch] [rbp-2Dh]
  __int16 v35; // [rsp+7Eh] [rbp-2Bh]
  __int16 v36; // [rsp+80h] [rbp-29h]
  __int16 v37; // [rsp+82h] [rbp-27h]
  _WORD v38[2]; // [rsp+88h] [rbp-21h] BYREF
  int v39; // [rsp+8Ch] [rbp-1Dh]
  int v40; // [rsp+90h] [rbp-19h]
  __int128 v41; // [rsp+94h] [rbp-15h] BYREF
  __int64 v42; // [rsp+A4h] [rbp-5h]
  __int128 v43; // [rsp+B0h] [rbp+7h]

  v3 = 0LL;
  *(_DWORD *)(a2 + 544) = 0;
  *(_DWORD *)(a2 + 2408) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v6 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v6 = 1313817456;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = a2;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
    }
  }
  v32 = *(unsigned __int16 *)(a2 + 4);
  v41 = 0LL;
  v31 = 0;
  v43 = 0LL;
  v42 = 0LL;
  if ( dword_14006F690 )
  {
    v7 = FdoExt((__int64)a1);
    v8 = &v41;
    v9 = 5LL;
    v33 = v7[1298];
    v34 = *((_WORD *)v7 + 2598);
    v35 = v7[1300];
    v36 = *((_WORD *)v7 + 2614);
    v37 = *((_WORD *)v7 + 2615);
    v38[0] = *((_WORD *)v7 + 1274);
    v38[1] = *((_WORD *)v7 + 1275);
    v10 = (unsigned __int16 *)v7 + 2605;
    v39 = 0;
    v40 = *((unsigned __int16 *)v7 + 2604);
    v39 = *((_WORD *)v7 + 2604) != 0;
    do
    {
      v11 = *v10;
      *(_DWORD *)v8 = v11;
      if ( v11 )
        ++v39;
      v8 = (__int128 *)((char *)v8 + 4);
      ++v10;
      --v9;
    }
    while ( v9 );
    HIDWORD(v42) = v7[634];
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_ENUM_START, 0LL, &v33, 12LL, v38, 36LL, &v32, 4LL, &v31, 4LL, 0LL);
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 0);
  v12 = (_QWORD *)UsbhIncHubBusy((__int64)a1, a2 + 24, (__int64)a1, 1129345907, 1);
  Pdo = UsbhCreatePdo(a1, a2);
  if ( v12 )
    UsbhDecHubBusy((__int64)a1, v13, v12);
  if ( Pdo < 0 )
  {
    LODWORD(v29) = Pdo;
    LODWORD(v27) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE, v27, v29);
    UsbhException((__int64)a1, *(_WORD *)(a2 + 4), 2, 0LL, 0, Pdo, -1, usbfile_busfunc_c, 551, 0);
  }
  else
  {
    UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    v15 = 0LL;
    _InterlockedExchange((volatile __int32 *)(a2 + 404), 0);
    v16 = MEMORY[0xFFFFF78000000008];
    v17 = MEMORY[0xFFFFF78000000008];
    v18 = MEMORY[0xFFFFF78000000008];
    do
    {
      while ( 1 )
      {
        if ( (unsigned __int64)(v18 - v16) > 0x1E8480 && v3 > 1 )
        {
          UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
          LODWORD(v29) = -1073741823;
          LODWORD(v27) = *(unsigned __int16 *)(a2 + 4);
          UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_FAILURE, v27, v29);
          Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
          v24 = *(unsigned __int16 *)(a2 + 4);
          if ( (UsbhLogMask & 0x400) != 0 )
          {
            if ( a1 )
            {
              v25 = a1->DeviceExtension;
              if ( v25 )
              {
                v26 = *((_QWORD *)v25 + 111)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v25 + 220) & *((_DWORD *)v25 + 221));
                *(_DWORD *)v26 = 1869890116;
                *(_QWORD *)(v26 + 8) = 0LL;
                *(_QWORD *)(v26 + 16) = a2;
                *(_QWORD *)(v26 + 24) = v24;
              }
            }
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              15,
              (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
              *(_WORD *)(a2 + 4));
          }
          return 0LL;
        }
        if ( (UsbhLogMask & 8) != 0 && a1 )
        {
          v19 = a1->DeviceExtension;
          if ( v19 )
          {
            v20 = *((_QWORD *)v19 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v19 + 220) & *((_DWORD *)v19 + 221));
            *(_DWORD *)v20 = 1953063287;
            *(_QWORD *)(v20 + 8) = 0LL;
            *(_QWORD *)(v20 + 16) = 20LL;
            *(_QWORD *)(v20 + 24) = 0LL;
          }
        }
        UsbhRawWait(20LL);
        v18 = MEMORY[0xFFFFF78000000008];
        v21 = MEMORY[0xFFFFF78000000008] - v17;
        v17 = MEMORY[0xFFFFF78000000008];
        v15 += v21;
        if ( !_InterlockedExchange((volatile __int32 *)(a2 + 404), 0) )
          break;
        ++v3;
        v15 = 0LL;
      }
    }
    while ( v15 < 0xF4240 );
    LODWORD(v29) = 0;
    LODWORD(v27) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_COMPLETE, v27, v29);
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 20LL, 1112885333LL);
    if ( Pool2 )
    {
      *Pool2 = 1867468116;
      Pool2[4] = *(_DWORD *)(a2 + 400);
      UsbhResetPort((__int64)a1, a2, (__int64)Pool2);
      _InterlockedExchange((volatile __int32 *)(a2 + 428), 9);
      return 1LL;
    }
    Log((_DWORD)a1, 1024, 1635020577, a2, 0LL);
    UsbhDisablePort(a1, a2);
    UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
    Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
    LODWORD(v30) = -1073741670;
    LODWORD(v28) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE, v28, v30);
    UsbhException((__int64)a1, *(_WORD *)(a2 + 4), 2, 0LL, 0, -1073741670, -1, usbfile_busfunc_c, 650, 0);
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 3);
  return 0LL;
}
