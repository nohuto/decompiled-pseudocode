/*
 * XREFs of UsbhReset2Complete @ 0x14001BA40
 * Callers:
 *     UsbhReset1Complete @ 0x140012800 (UsbhReset1Complete.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     Usbh_UsbdReadFrameCounter @ 0x140005DFC (Usbh_UsbdReadFrameCounter.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x14000FB30 (UsbhUnlinkPdoDeviceHandle.c)
 *     Usbh_Disconnect_PdoEvent @ 0x140010548 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhCancelResetTimeout @ 0x140012034 (UsbhCancelResetTimeout.c)
 *     UsbhResetPort @ 0x140012B44 (UsbhResetPort.c)
 *     UsbhAcquireEnumBusLock @ 0x140012E54 (UsbhAcquireEnumBusLock.c)
 *     UsbhWait @ 0x140014114 (UsbhWait.c)
 *     UsbhFreeID @ 0x14001A68C (UsbhFreeID.c)
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14001B830 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhDisablePort @ 0x14001C650 (UsbhDisablePort.c)
 *     UsbhBusUnlatchPdo @ 0x14001CCB0 (UsbhBusUnlatchPdo.c)
 *     UsbhInitializeDevice @ 0x14001CFD4 (UsbhInitializeDevice.c)
 *     UsbhAllocateTimeoutObject @ 0x14001D1A8 (UsbhAllocateTimeoutObject.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140029630 (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhBusConnectPdo @ 0x14002DB28 (UsbhBusConnectPdo.c)
 *     UsbhAcquirePdoStateLock @ 0x14002E600 (UsbhAcquirePdoStateLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_Check @ 0x14004405C (UsbhPCE_Check.c)
 *     UsbhBusIf_GetContainerIdForPort @ 0x140057340 (UsbhBusIf_GetContainerIdForPort.c)
 *     UsbhBusIf_SetContainerIdForPort @ 0x140057458 (UsbhBusIf_SetContainerIdForPort.c)
 *     UsbhSetEnumerationFailed @ 0x1400591B8 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildContainerID @ 0x1400599B0 (UsbhBuildContainerID.c)
 *     UsbhInsertDeviceIntoGlobalList @ 0x14005C81C (UsbhInsertDeviceIntoGlobalList.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhReset2Complete(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r15d
  void *DeviceExtension; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // r13
  KSPIN_LOCK *v10; // rbx
  KIRQL v11; // al
  int FrameCounter; // eax
  __int64 v13; // r8
  void *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // r8
  void *v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r13d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // eax
  KSPIN_LOCK *v26; // rax
  KSPIN_LOCK *v27; // r14
  int inserted; // r13d
  KIRQL v29; // al
  __int64 v30; // rdx
  int v31; // r9d
  int v32; // r9d
  __int64 v34; // r8
  void *v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // r8
  int v39; // ebx
  void *v40; // rdx
  __int64 v41; // rcx
  unsigned __int16 v42; // r8
  __int64 v43; // rdx
  int v44; // r9d
  _DWORD *v45; // rax
  int v46; // r9d
  _DWORD *v47; // r14
  __int64 v48; // [rsp+20h] [rbp-49h]
  __int64 v49; // [rsp+20h] [rbp-49h]
  __int64 v50; // [rsp+20h] [rbp-49h]
  __int64 v51; // [rsp+20h] [rbp-49h]
  __int64 v52; // [rsp+20h] [rbp-49h]
  __int64 v53; // [rsp+20h] [rbp-49h]
  __int64 v54; // [rsp+28h] [rbp-41h]
  __int64 v55; // [rsp+28h] [rbp-41h]
  __int64 v56; // [rsp+28h] [rbp-41h]
  unsigned int v57; // [rsp+50h] [rbp-19h]
  char v58; // [rsp+54h] [rbp-15h]
  KIRQL v59; // [rsp+55h] [rbp-14h]
  int v60; // [rsp+58h] [rbp-11h]
  _DWORD *v61; // [rsp+60h] [rbp-9h]
  int v62; // [rsp+68h] [rbp-1h] BYREF
  int v63; // [rsp+6Ch] [rbp+3h] BYREF
  PVOID P; // [rsp+70h] [rbp+7h] BYREF
  _DWORD v65[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int16 v66; // [rsp+80h] [rbp+17h]
  __int16 v67; // [rsp+82h] [rbp+19h]

  v62 = 0;
  v63 = 0;
  v67 = 0;
  v6 = 1;
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
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v8 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v8 = 1664242288;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a2;
        *(_QWORD *)(v8 + 24) = 0LL;
      }
    }
  }
  v61 = FdoExt((__int64)a1);
  v9 = v61;
  v10 = (KSPIN_LOCK *)(FdoExt((__int64)a1) + 766);
  v11 = KeAcquireSpinLockRaiseToDpc(v10);
  KeReleaseSpinLock(v10, v11);
  UsbhCancelResetTimeout((__int64)a1, a2, 0);
  LODWORD(v54) = 0;
  LODWORD(v48) = *(unsigned __int16 *)(a2 + 4);
  UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET2_COMPLETE, v48, v54);
  FrameCounter = Usbh_UsbdReadFrameCounter((__int64)a1);
  v13 = *(unsigned int *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v65[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v66 = *(_WORD *)(a2 + 4);
  v65[1] = v13;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v14 = a1->DeviceExtension;
      if ( v14 )
      {
        v15 = *((_QWORD *)v14 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v14 + 220) & *((_DWORD *)v14 + 221));
        *(_DWORD *)v15 = 825388645;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = a2;
        *(_QWORD *)(v15 + 24) = v13;
      }
    }
  }
  UsbhWait((__int64)a1, *(_DWORD *)(a2 + 544) != 0 ? 100 : 15);
  v60 = 30;
  v16 = UsbhInitializeDevice(a1, a3, a2);
  LODWORD(v55) = 0;
  LODWORD(v49) = *(unsigned __int16 *)(a2 + 4);
  v17 = v16;
  UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_COMPLETE, v49, v55);
  v18 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v19 = a1->DeviceExtension;
      if ( v19 )
      {
        v20 = *((_QWORD *)v19 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v19 + 220) & *((_DWORD *)v19 + 221));
        *(_DWORD *)v20 = 842165861;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = v18;
        *(_QWORD *)(v20 + 24) = v17;
      }
    }
  }
  if ( (int)v17 >= 0 )
  {
    v21 = 0;
    v58 = 0;
    v60 = 32;
    UsbhReleaseEnumBusLockEx((__int64)a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    UsbhAcquirePdoStateLock(v22, *(_QWORD *)(a2 + 376), 12LL);
    if ( a3 && PdoExt(a3)[281] == 3 )
    {
      Log((_DWORD)a1, 1024, 1936999531, a2, *(unsigned __int16 *)(a2 + 4));
      v23 = *(_QWORD *)(a2 + 376);
      LODWORD(v17) = 0;
      v58 = 1;
      *(_DWORD *)(v23 + 136) = 0;
      qword_14006F5A0 = 0LL;
      *(_DWORD *)(v23 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, *(_BYTE *)(v23 + 132));
    }
    else
    {
      v24 = *(_QWORD *)(a2 + 376);
      *(_DWORD *)(v24 + 136) = 0;
      qword_14006F5A0 = 0LL;
      *(_DWORD *)(v24 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, *(_BYTE *)(v24 + 132));
      v25 = UsbhSetupDevice((__int64)a1, a3, &v62);
      v17 = v25;
      LODWORD(v56) = v25;
      LODWORD(v50) = *(unsigned __int16 *)(a2 + 4);
      UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_SETUP_DEVICE_COMPLETE, v50, v56);
      Log((_DWORD)a1, 1024, 1701720627, *(unsigned __int16 *)(a2 + 4), v17);
    }
    while ( 1 )
    {
      if ( (int)v17 >= 0 )
      {
        v17 = (int)UsbhFdoCheckUpstreamConnectionState(a1, &v63);
        Log((_DWORD)a1, 1024, 1701720628, *(unsigned __int16 *)(a2 + 4), v17);
      }
      Log((_DWORD)a1, 1024, 1936999534, a2, *(unsigned __int16 *)(a2 + 4));
      if ( (v17 & 0xC0000000) == 0xC0000000 )
        break;
      v26 = (KSPIN_LOCK *)PdoExt(a3);
      v27 = v26;
      if ( (*((_DWORD *)v26 + 355) & 0x200) == 0 || v58 == 1 )
        goto LABEL_41;
      v57 = v21 + 1;
      inserted = 4;
      v29 = KeAcquireSpinLockRaiseToDpc(v26 + 351);
      v59 = v29;
      if ( !*((_DWORD *)v27 + 704) )
      {
        inserted = UsbhInsertDeviceIntoGlobalList(a1, a3);
        v29 = v59;
        if ( inserted == 1 )
          *((_DWORD *)v27 + 704) = 1;
      }
      KeReleaseSpinLock(v27 + 351, v29);
      if ( inserted == 3 )
      {
        LODWORD(v56) = -1073741823;
        LODWORD(v50) = *(unsigned __int16 *)(a2 + 4);
        UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DUPE_SERIAL_NUMBER, v50, v56);
        UsbhException(
          (__int64)a1,
          *(_WORD *)(a2 + 4),
          40,
          (const void *)v27[267],
          *((_DWORD *)v27 + 533),
          v17,
          0,
          usbfile_busfunc_c,
          1932,
          0);
        UsbhFreeID((__int64)(v27 + 266));
        *((_DWORD *)v27 + 355) &= ~0x200u;
        goto LABEL_41;
      }
      if ( inserted != 2 )
      {
        if ( inserted == 4 )
        {
          LODWORD(v17) = -1073741823;
          goto LABEL_43;
        }
        goto LABEL_41;
      }
      if ( (unsigned int)UsbhPCE_Check(a1, a2, *(_QWORD *)(a2 + 376)) )
      {
        LODWORD(v17) = -1073741823;
        *(_DWORD *)(a2 + 544) = 3;
        goto LABEL_43;
      }
      UsbhWait((__int64)a1, dword_14006F550);
      v21 = v57;
      if ( v57 > dword_14006F554 )
      {
        LODWORD(v17) = -1073741823;
        LODWORD(v56) = -1073741823;
        LODWORD(v50) = *(unsigned __int16 *)(a2 + 4);
        UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_REPLICANT_TIMEOUT, v50, v56);
        UsbhException((__int64)a1, *(_WORD *)(a2 + 4), 70, 0LL, 0, -1073741823, 0, usbfile_busfunc_c, 1987, 0);
        PdoExt(a3)[705] = 1073807363;
        goto LABEL_43;
      }
    }
    if ( Usb_Disconnected(v17) )
    {
      Log((_DWORD)a1, 1024, 1701720644, v31, v30);
      UsbhBusUnlatchPdo((_DWORD)a1, a3, a2, v32, 0LL);
      LODWORD(v56) = v17;
      LODWORD(v51) = *(unsigned __int16 *)(a2 + 4);
      UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_HUB_DISCONNECT, v51, v56);
      Usbh_Disconnect_PdoEvent((__int64)a1, a3, 3, *(_QWORD *)(a2 + 376));
      return 3LL;
    }
    Log((_DWORD)a1, 1024, 1701725522, v31, v30);
    UsbhDisablePort(a1, a2);
LABEL_41:
    v9 = v61;
  }
  if ( (v17 & 0xC0000000) == 0xC0000000 )
  {
LABEL_43:
    v34 = *(unsigned __int16 *)(a2 + 4);
    P = 0LL;
    if ( _bittest(&UsbhLogMask, 0xAu) )
    {
      if ( a1 )
      {
        v35 = a1->DeviceExtension;
        if ( v35 )
        {
          v36 = *((_QWORD *)v35 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v35 + 220) & *((_DWORD *)v35 + 221));
          *(_DWORD *)v36 = 828794227;
          *(_QWORD *)(v36 + 24) = (int)v17;
          *(_QWORD *)(v36 + 8) = 0LL;
          *(_QWORD *)(v36 + 16) = v34;
        }
      }
    }
    v37 = UsbhAllocateTimeoutObject(a1, a2, &P);
    v38 = *(unsigned int *)(a2 + 544);
    v39 = v37;
    if ( (unsigned int)v38 >= 3 || v37 < 0 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      LODWORD(v56) = v39;
      LODWORD(v50) = *(unsigned __int16 *)(a2 + 4);
      UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, v50, v56);
      UsbhSetEnumerationFailed((_DWORD)a1, a2, a3, v60, (__int64)v65, v39);
      return 0;
    }
    else
    {
      if ( _bittest(&UsbhLogMask, 0xAu) && a1 )
      {
        v40 = a1->DeviceExtension;
        if ( v40 )
        {
          v41 = *((_QWORD *)v40 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v40 + 220) & *((_DWORD *)v40 + 221));
          *(_DWORD *)v41 = 845571443;
          *(_QWORD *)(v41 + 8) = 0LL;
          *(_QWORD *)(v41 + 16) = v38;
          *(_QWORD *)(v41 + 24) = v37;
        }
      }
      UsbhDisablePort(a1, a2);
      v42 = *(_WORD *)(a2 + 4);
      v43 = *(_QWORD *)(a2 + 376);
      ++*(_DWORD *)(a2 + 544);
      UsbhAcquireEnumBusLock(a1, v43, v42);
      UsbhUnlinkPdoDeviceHandle((__int64)a1, a3, 2017740897, 1);
      UsbhBusUnlatchPdo((_DWORD)a1, a3, a2, v44, 0LL);
      LODWORD(v56) = v39;
      LODWORD(v52) = *(unsigned __int16 *)(a2 + 4);
      UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, v52, v56);
      UsbhResetPort((__int64)a1, a2, (__int64)P);
    }
  }
  else
  {
    v45 = PdoExt(a3);
    v47 = v45;
    if ( !*((_BYTE *)v45 + 2732) && (v45[355] & 0x200) != 0 && (v45[295] & 0x10) == 0 )
      UsbhBuildContainerID(a1, a3);
    if ( !*((_BYTE *)v47 + 2732) )
      goto LABEL_65;
    if ( (v9[640] & 1) != 0 )
      UsbhBusIf_SetContainerIdForPort(a1, *((unsigned __int16 *)v47 + 714), v47 + 679);
    if ( !*((_BYTE *)v47 + 2732) )
    {
LABEL_65:
      if ( (v9[640] & 1) != 0 )
      {
        if ( (int)UsbhBusIf_GetContainerIdForPort(a1, *((unsigned __int16 *)v47 + 714), v47 + 679) >= 0 )
          *((_BYTE *)v47 + 2732) = 1;
        LODWORD(v17) = 0;
      }
    }
    UsbhBusUnlatchPdo((_DWORD)a1, a3, a2, v46, 0LL);
    LODWORD(v56) = v17;
    LODWORD(v53) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, v53, v56);
    PdoExt(a3)[705] = 0;
    UsbhBusConnectPdo(a1, a2);
    return 0;
  }
  return v6;
}
