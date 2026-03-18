/*
 * XREFs of UsbhPortConnect @ 0x14000BF90
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhResetPort @ 0x14000A2BC (UsbhResetPort.c)
 *     UsbhAcquireEnumBusLock @ 0x14000A5D8 (UsbhAcquireEnumBusLock.c)
 *     UsbhRawWait @ 0x14000C600 (UsbhRawWait.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhCreatePdo @ 0x14000C9F0 (UsbhCreatePdo.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     UsbhDisablePort @ 0x140024098 (UsbhDisablePort.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14002414C (UsbhReleaseEnumBusLockEx.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x140036870 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhPortConnect(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r15
  char *v7; // rdx
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int128 *v13; // r8
  __int64 v14; // r9
  unsigned __int16 *v15; // rcx
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rdx
  int Pdo; // esi
  __int64 v20; // r9
  __int64 v21; // r8
  unsigned __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rcx
  signed __int32 v27; // eax
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _DWORD *Pool2; // rax
  __int64 v32; // r9
  __int64 v34; // r8
  __int64 v35; // rcx
  signed __int32 v36; // eax
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // [rsp+48h] [rbp-51h]
  __int64 v41; // [rsp+50h] [rbp-49h]
  int v42; // [rsp+84h] [rbp-15h]
  __int128 v43; // [rsp+8Ch] [rbp-Dh] BYREF
  __int64 v44; // [rsp+9Ch] [rbp+3h]
  __int128 v45; // [rsp+A8h] [rbp+Fh]

  v5 = 0LL;
  *(_DWORD *)(a2 + 544) = 0;
  *(_DWORD *)(a2 + 2408) = 0;
  v7 = (char *)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids;
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
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 880), 0xFFFFFFFF);
        v10 = *(_DWORD *)(v8 + 884);
        v11 = *(_QWORD *)(v8 + 888);
        v7 = (char *)(32LL * ((v9 - 1) & v10));
        *(_DWORD *)&v7[v11] = 1313817456;
        *(_QWORD *)&v7[v11 + 8] = 0LL;
        *(_QWORD *)&v7[v11 + 16] = a2;
        *(_QWORD *)&v7[v11 + 24] = 0LL;
      }
    }
  }
  v43 = 0LL;
  v45 = 0LL;
  v44 = 0LL;
  if ( dword_1400706F0 )
  {
    v12 = FdoExt(a1, v7, a3, a4);
    v13 = &v43;
    v14 = 5LL;
    v15 = (unsigned __int16 *)(v12 + 5210);
    v42 = *(_WORD *)(v12 + 5208) != 0;
    do
    {
      v16 = *v15;
      *(_DWORD *)v13 = v16;
      if ( v16 )
        ++v42;
      v13 = (__int128 *)((char *)v13 + 4);
      ++v15;
      --v14;
    }
    while ( v14 );
    v41 = 0LL;
    v40 = 4LL;
    HIDWORD(v44) = *(_DWORD *)(v12 + 2536);
    UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_ENUM_START, 0LL);
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 0);
  v17 = UsbhIncHubBusy(a1, (int)a2 + 24, a1, 1129345907, 1);
  Pdo = UsbhCreatePdo(a1, a2);
  if ( v17 )
    UsbhDecHubBusy(a1, v18, v17);
  v21 = *(unsigned __int16 *)(a2 + 4);
  if ( Pdo < 0 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE, v21, Pdo);
    LOBYTE(v40) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 2, 0, 0, Pdo, -1, (__int64)usbfile_busfunc_c, 551, v40, v41);
  }
  else
  {
    UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), v21, v20);
    v22 = 0LL;
    _InterlockedExchange((volatile __int32 *)(a2 + 404), 0);
    v23 = MEMORY[0xFFFFF78000000008];
    v24 = MEMORY[0xFFFFF78000000008];
    v25 = MEMORY[0xFFFFF78000000008];
    do
    {
      while ( 1 )
      {
        if ( (unsigned __int64)(v25 - v23) > 0x1E8480 && v5 > 1 )
        {
          UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
          UsbhEtwLogHubIrpEvent(
            a1,
            0LL,
            0LL,
            &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_FAILURE,
            *(unsigned __int16 *)(a2 + 4),
            -1073741823);
          Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
          v34 = *(unsigned __int16 *)(a2 + 4);
          if ( (UsbhLogMask & 0x400) != 0 )
          {
            if ( a1 )
            {
              v35 = *(_QWORD *)(a1 + 64);
              if ( v35 )
              {
                v36 = _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 880), 0xFFFFFFFF);
                v37 = *(_DWORD *)(v35 + 884);
                v38 = *(_QWORD *)(v35 + 888);
                v39 = 32LL * ((v36 - 1) & v37);
                *(_DWORD *)(v39 + v38) = 1869890116;
                *(_QWORD *)(v39 + v38 + 8) = 0LL;
                *(_QWORD *)(v39 + v38 + 16) = a2;
                *(_QWORD *)(v39 + v38 + 24) = v34;
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
          v26 = *(_QWORD *)(a1 + 64);
          if ( v26 )
          {
            v27 = _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 880), 0xFFFFFFFF);
            v28 = *(_DWORD *)(v26 + 884);
            v29 = *(_QWORD *)(v26 + 888);
            v30 = 32LL * ((v27 - 1) & v28);
            *(_DWORD *)(v30 + v29) = 1953063287;
            *(_QWORD *)(v30 + v29 + 8) = 0LL;
            *(_QWORD *)(v30 + v29 + 16) = 20LL;
            *(_QWORD *)(v30 + v29 + 24) = 0LL;
          }
        }
        UsbhRawWait(20LL);
        v25 = MEMORY[0xFFFFF78000000008];
        v22 = MEMORY[0xFFFFF78000000008] + v22 - v24;
        v24 = MEMORY[0xFFFFF78000000008];
        if ( !_InterlockedExchange((volatile __int32 *)(a2 + 404), 0) )
          break;
        ++v5;
        v22 = 0LL;
      }
    }
    while ( v22 < 0xF4240 );
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 20LL, 1112885333LL);
    if ( Pool2 )
    {
      *Pool2 = 1867468116;
      Pool2[4] = *(_DWORD *)(a2 + 400);
      UsbhResetPort(a1, a2, (__int64)Pool2, v32);
      _InterlockedExchange((volatile __int32 *)(a2 + 428), 9);
      return 1LL;
    }
    Log(a1, 1024, 1635020577, a2, 0LL);
    UsbhDisablePort(a1, a2);
    UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
    Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE,
      *(unsigned __int16 *)(a2 + 4),
      -1073741670);
    LOBYTE(v40) = 0;
    UsbhException(
      a1,
      *(unsigned __int16 *)(a2 + 4),
      2,
      0,
      0,
      -1073741670,
      -1,
      (__int64)usbfile_busfunc_c,
      650,
      v40,
      v41);
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 3);
  return 0LL;
}
