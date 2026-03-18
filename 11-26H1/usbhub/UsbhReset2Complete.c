/*
 * XREFs of UsbhReset2Complete @ 0x14000A840
 * Callers:
 *     UsbhReset1Complete @ 0x14000E460 (UsbhReset1Complete.c)
 * Callees:
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140006600 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhFreeID @ 0x1400081A4 (UsbhFreeID.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1400081E4 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhResetPort @ 0x14000A2BC (UsbhResetPort.c)
 *     UsbhAcquireEnumBusLock @ 0x14000A5D8 (UsbhAcquireEnumBusLock.c)
 *     UsbhWait @ 0x14000C584 (UsbhWait.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAllocateTimeoutObject @ 0x1400100D4 (UsbhAllocateTimeoutObject.c)
 *     UsbhAcquirePdoStateLock @ 0x140010E10 (UsbhAcquirePdoStateLock.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     Usbh_UsbdReadFrameCounter @ 0x14001FDB0 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhBusUnlatchPdo @ 0x140021BAC (UsbhBusUnlatchPdo.c)
 *     Usbh_Disconnect_PdoEvent @ 0x14002350C (Usbh_Disconnect_PdoEvent.c)
 *     UsbhCancelResetTimeout @ 0x140023BD8 (UsbhCancelResetTimeout.c)
 *     UsbhDisablePort @ 0x140024098 (UsbhDisablePort.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14002414C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhBusConnectPdo @ 0x140032B60 (UsbhBusConnectPdo.c)
 *     UsbhInitializeDevice @ 0x140038404 (UsbhInitializeDevice.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_Check @ 0x140043B80 (UsbhPCE_Check.c)
 *     UsbhBusIf_GetContainerIdForPort @ 0x1400578A0 (UsbhBusIf_GetContainerIdForPort.c)
 *     UsbhBusIf_SetContainerIdForPort @ 0x1400579B8 (UsbhBusIf_SetContainerIdForPort.c)
 *     UsbhSetEnumerationFailed @ 0x140059728 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildContainerID @ 0x140059F30 (UsbhBuildContainerID.c)
 *     UsbhInsertDeviceIntoGlobalList @ 0x14005CDFC (UsbhInsertDeviceIntoGlobalList.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhReset2Complete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v7; // r15d
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  _DWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  KSPIN_LOCK *v16; // rbx
  KIRQL v17; // al
  int FrameCounter; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  signed __int32 v21; // eax
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // r8
  __int64 v27; // rcx
  signed __int32 v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  unsigned int v34; // r13d
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r9
  int v41; // eax
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r14
  int inserted; // r13d
  KIRQL v46; // al
  __int64 v47; // rdx
  __int64 v48; // r9
  int v49; // r9d
  __int64 v51; // r8
  __int64 v52; // rcx
  signed __int32 v53; // eax
  unsigned int v54; // edx
  __int64 v55; // rcx
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // r8
  __int64 v59; // rbx
  __int64 v60; // rcx
  signed __int32 v61; // eax
  unsigned int v62; // edx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // r9
  __int64 v68; // r9
  int v69; // r9d
  __int64 v70; // r9
  __int64 v71; // rax
  int v72; // r9d
  __int64 v73; // r14
  int v74; // [rsp+30h] [rbp-39h]
  int v75; // [rsp+38h] [rbp-31h]
  unsigned int v76; // [rsp+50h] [rbp-19h]
  char v77; // [rsp+54h] [rbp-15h]
  KIRQL v78; // [rsp+55h] [rbp-14h]
  PVOID P; // [rsp+58h] [rbp-11h] BYREF
  int v80; // [rsp+60h] [rbp-9h]
  int v81; // [rsp+64h] [rbp-5h] BYREF
  unsigned int v82; // [rsp+68h] [rbp-1h] BYREF
  _DWORD v83[2]; // [rsp+70h] [rbp+7h] BYREF
  __int16 v84; // [rsp+78h] [rbp+Fh]
  __int16 v85; // [rsp+7Ah] [rbp+11h]

  v81 = 0;
  v5 = a2;
  v82 = 0;
  v85 = 0;
  v7 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      32,
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
        a2 = 32LL * ((v9 - 1) & v10);
        *(_DWORD *)(a2 + v11) = 1664242288;
        *(_QWORD *)(a2 + v11 + 8) = 0LL;
        *(_QWORD *)(a2 + v11 + 16) = v5;
        *(_QWORD *)(a2 + v11 + 24) = 0LL;
      }
    }
  }
  P = (PVOID)FdoExt(a1, a2, a3, a4);
  v12 = P;
  v16 = (KSPIN_LOCK *)(FdoExt(a1, v13, v14, v15) + 3064);
  v17 = KeAcquireSpinLockRaiseToDpc(v16);
  KeReleaseSpinLock(v16, v17);
  UsbhCancelResetTimeout(a1, v5, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET2_COMPLETE, *(unsigned __int16 *)(v5 + 4), 0);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v19 = *(unsigned int *)(v5 + 544);
  *(_DWORD *)(v5 + 852) = FrameCounter;
  v83[0] = FrameCounter - *(_DWORD *)(v5 + 848);
  v84 = *(_WORD *)(v5 + 4);
  v83[1] = v19;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v21 = _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 880), 0xFFFFFFFF);
        v22 = *(_DWORD *)(v20 + 884);
        v23 = *(_QWORD *)(v20 + 888);
        v24 = 32LL * ((v21 - 1) & v22);
        *(_DWORD *)(v24 + v23) = 825388645;
        *(_QWORD *)(v24 + v23 + 8) = 0LL;
        *(_QWORD *)(v24 + v23 + 16) = v5;
        *(_QWORD *)(v24 + v23 + 24) = v19;
      }
    }
  }
  UsbhWait(a1, *(_DWORD *)(v5 + 544) != 0 ? 100 : 15);
  v80 = 30;
  v25 = (int)UsbhInitializeDevice(a1, a3, v5);
  UsbhEtwLogHubIrpEvent(
    a1,
    0LL,
    0LL,
    &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_COMPLETE,
    *(unsigned __int16 *)(v5 + 4),
    0);
  v26 = *(unsigned __int16 *)(v5 + 4);
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 880), 0xFFFFFFFF);
        v29 = *(_DWORD *)(v27 + 884);
        v30 = *(_QWORD *)(v27 + 888);
        v31 = 32LL * ((v28 - 1) & v29);
        *(_DWORD *)(v31 + v30) = 842165861;
        *(_QWORD *)(v31 + v30 + 8) = 0LL;
        *(_QWORD *)(v31 + v30 + 16) = v26;
        *(_QWORD *)(v31 + v30 + 24) = v25;
      }
    }
  }
  if ( (int)v25 >= 0 )
  {
    v32 = *(unsigned __int16 *)(v5 + 4);
    v33 = *(_QWORD *)(v5 + 376);
    v34 = 0;
    v77 = 0;
    v80 = 32;
    UsbhReleaseEnumBusLockEx(a1, v33, v32);
    UsbhAcquirePdoStateLock(v35, *(_QWORD *)(v5 + 376), 12LL);
    if ( a3 && *(_DWORD *)(PdoExt(a3) + 1124) == 3 )
    {
      Log(a1, 1024, 1936999531, v5, *(unsigned __int16 *)(v5 + 4));
      v36 = *(_QWORD *)(v5 + 376);
      LODWORD(v25) = 0;
      v77 = 1;
      *(_DWORD *)(v36 + 136) = 0;
      qword_140070600 = 0LL;
      *(_DWORD *)(v36 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, *(_BYTE *)(v36 + 132));
    }
    else
    {
      v39 = *(_QWORD *)(v5 + 376);
      *(_DWORD *)(v39 + 136) = 0;
      qword_140070600 = 0LL;
      *(_DWORD *)(v39 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, *(_BYTE *)(v39 + 132));
      v41 = UsbhSetupDevice(a1, a3, &v81, v40);
      v25 = v41;
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_SETUP_DEVICE_COMPLETE,
        *(unsigned __int16 *)(v5 + 4),
        v41);
      Log(a1, 1024, 1701720627, *(unsigned __int16 *)(v5 + 4), v25);
    }
    while ( 1 )
    {
      if ( (int)v25 >= 0 )
      {
        v25 = (int)UsbhFdoCheckUpstreamConnectionState(a1, &v82, v37, v38);
        Log(a1, 1024, 1701720628, *(unsigned __int16 *)(v5 + 4), v25);
      }
      Log(a1, 1024, 1936999534, v5, *(unsigned __int16 *)(v5 + 4));
      v42 = (unsigned int)v25 & 0xC0000000;
      if ( (_DWORD)v42 == -1073741824 )
        break;
      v43 = PdoExt(a3);
      v44 = v43;
      if ( (*(_DWORD *)(v43 + 1420) & 0x200) == 0 || v77 == 1 )
        goto LABEL_41;
      v76 = v34 + 1;
      inserted = 4;
      v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v43 + 2808));
      v78 = v46;
      if ( !*(_DWORD *)(v44 + 2816) )
      {
        inserted = UsbhInsertDeviceIntoGlobalList(a1, a3);
        v46 = v78;
        if ( inserted == 1 )
          *(_DWORD *)(v44 + 2816) = 1;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v44 + 2808), v46);
      if ( inserted == 3 )
      {
        UsbhEtwLogHubIrpEvent(
          a1,
          0LL,
          0LL,
          &USBHUB_ETW_EVENT_HUB_ENUM_DUPE_SERIAL_NUMBER,
          *(unsigned __int16 *)(v5 + 4),
          -1073741823);
        UsbhException(
          a1,
          *(unsigned __int16 *)(v5 + 4),
          40,
          *(_QWORD *)(v44 + 2136),
          *(_DWORD *)(v44 + 2132),
          v25,
          0,
          (__int64)usbfile_busfunc_c,
          1932);
        UsbhFreeID(v44 + 2128);
        *(_DWORD *)(v44 + 1420) &= ~0x200u;
        goto LABEL_41;
      }
      if ( inserted != 2 )
      {
        if ( inserted == 4 )
        {
          LODWORD(v25) = -1073741823;
          goto LABEL_43;
        }
        goto LABEL_41;
      }
      if ( (unsigned int)UsbhPCE_Check(a1, v5, *(_QWORD *)(v5 + 376)) )
      {
        LODWORD(v25) = -1073741823;
        *(_DWORD *)(v5 + 544) = 3;
        goto LABEL_43;
      }
      UsbhWait(a1, (unsigned int)dword_1400705B0);
      v34 = v76;
      if ( v76 > dword_1400705B4 )
      {
        LODWORD(v25) = -1073741823;
        UsbhEtwLogHubIrpEvent(
          a1,
          0LL,
          0LL,
          &USBHUB_ETW_EVENT_HUB_ENUM_REPLICANT_TIMEOUT,
          *(unsigned __int16 *)(v5 + 4),
          -1073741823);
        UsbhException(a1, *(unsigned __int16 *)(v5 + 4), 70, 0, 0, -1073741823, 0, (__int64)usbfile_busfunc_c, 1987);
        *(_DWORD *)(PdoExt(a3) + 2820) = 1073807363;
        goto LABEL_43;
      }
    }
    if ( (unsigned __int8)Usb_Disconnected((unsigned int)v25, (int)v25, v42) )
    {
      Log(a1, 1024, 1701720644, v48, v47);
      UsbhBusUnlatchPdo(a1, a3, v5, v49, 0LL);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_HUB_DISCONNECT, *(unsigned __int16 *)(v5 + 4), v25);
      Usbh_Disconnect_PdoEvent(a1, a3, 3LL, *(_QWORD *)(v5 + 376));
      return 3LL;
    }
    Log(a1, 1024, 1701725522, v48, v47);
    UsbhDisablePort(a1, v5);
LABEL_41:
    v12 = P;
  }
  if ( (v25 & 0xC0000000) == 0xC0000000 )
  {
LABEL_43:
    v51 = *(unsigned __int16 *)(v5 + 4);
    P = 0LL;
    if ( _bittest(&UsbhLogMask, 0xAu) )
    {
      if ( a1 )
      {
        v52 = *(_QWORD *)(a1 + 64);
        if ( v52 )
        {
          v53 = _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 880), 0xFFFFFFFF);
          v54 = *(_DWORD *)(v52 + 884);
          v55 = *(_QWORD *)(v52 + 888);
          v56 = 32LL * ((v53 - 1) & v54);
          *(_DWORD *)(v56 + v55) = 828794227;
          *(_QWORD *)(v56 + v55 + 24) = (int)v25;
          *(_QWORD *)(v56 + v55 + 8) = 0LL;
          *(_QWORD *)(v56 + v55 + 16) = v51;
        }
      }
    }
    v57 = UsbhAllocateTimeoutObject(a1, v5, &P);
    v58 = *(unsigned int *)(v5 + 544);
    v59 = v57;
    if ( (unsigned int)v58 >= 3 || v57 < 0 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(v5 + 4), v59);
      UsbhSetEnumerationFailed(a1, v5, a3, v80, (__int64)v83, v59, v74, v75, 2065);
      return 0;
    }
    else
    {
      if ( _bittest(&UsbhLogMask, 0xAu) && a1 )
      {
        v60 = *(_QWORD *)(a1 + 64);
        if ( v60 )
        {
          v61 = _InterlockedExchangeAdd((volatile signed __int32 *)(v60 + 880), 0xFFFFFFFF);
          v62 = *(_DWORD *)(v60 + 884);
          v63 = *(_QWORD *)(v60 + 888);
          v64 = 32LL * ((v61 - 1) & v62);
          *(_DWORD *)(v64 + v63) = 845571443;
          *(_QWORD *)(v64 + v63 + 8) = 0LL;
          *(_QWORD *)(v64 + v63 + 16) = v58;
          *(_QWORD *)(v64 + v63 + 24) = v59;
        }
      }
      UsbhDisablePort(a1, v5);
      v65 = *(unsigned __int16 *)(v5 + 4);
      v66 = *(_QWORD *)(v5 + 376);
      ++*(_DWORD *)(v5 + 544);
      UsbhAcquireEnumBusLock(a1, v66, v65, v67);
      LOBYTE(v68) = 1;
      UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740897LL, v68);
      UsbhBusUnlatchPdo(a1, a3, v5, v69, 0LL);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(v5 + 4), v59);
      UsbhResetPort(a1, v5, (__int64)P, v70);
    }
  }
  else
  {
    v71 = PdoExt(a3);
    v73 = v71;
    if ( !*(_BYTE *)(v71 + 2732) && (*(_DWORD *)(v71 + 1420) & 0x200) != 0 && (*(_DWORD *)(v71 + 1180) & 0x10) == 0 )
      UsbhBuildContainerID(a1, a3);
    if ( !*(_BYTE *)(v73 + 2732) )
      goto LABEL_65;
    if ( (v12[640] & 1) != 0 )
      UsbhBusIf_SetContainerIdForPort(a1, *(unsigned __int16 *)(v73 + 1428), v73 + 2716);
    if ( !*(_BYTE *)(v73 + 2732) )
    {
LABEL_65:
      if ( (v12[640] & 1) != 0 )
      {
        if ( (int)UsbhBusIf_GetContainerIdForPort(a1, *(unsigned __int16 *)(v73 + 1428), v73 + 2716) >= 0 )
          *(_BYTE *)(v73 + 2732) = 1;
        LODWORD(v25) = 0;
      }
    }
    UsbhBusUnlatchPdo(a1, a3, v5, v72, 0LL);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(v5 + 4), v25);
    *(_DWORD *)(PdoExt(a3) + 2820) = 0;
    UsbhBusConnectPdo(a1, v5);
    return 0;
  }
  return v7;
}
