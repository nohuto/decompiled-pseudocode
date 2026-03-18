/*
 * XREFs of UsbhCreatePdo @ 0x14000C9F0
 * Callers:
 *     UsbhPortConnect @ 0x14000BF90 (UsbhPortConnect.c)
 * Callees:
 *     UsbhDisableTimerObject @ 0x140007330 (UsbhDisableTimerObject.c)
 *     UsbhSshPortsBusy @ 0x140008B80 (UsbhSshPortsBusy.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhBuildDeviceID @ 0x14000D9A8 (UsbhBuildDeviceID.c)
 *     UsbhBuildHardwareID @ 0x14000DCB8 (UsbhBuildHardwareID.c)
 *     UsbhBuildCompatibleID @ 0x14000E768 (UsbhBuildCompatibleID.c)
 *     UsbhSetPortData @ 0x14000E8D4 (UsbhSetPortData.c)
 *     UsbhIncPdoIoCount @ 0x14000EA40 (UsbhIncPdoIoCount.c)
 *     UsbhConnectPdoToHub @ 0x14000EB98 (UsbhConnectPdoToHub.c)
 *     UsbhGetLocationIdString @ 0x14000EC40 (UsbhGetLocationIdString.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x140036870 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 __fastcall UsbhCreatePdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  ULONG v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rdx
  __int64 v11; // r12
  __int64 Pool2; // rax
  void *v13; // rsi
  __int128 v14; // xmm1
  NTSTATUS appended; // ebx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rdx
  PDEVICE_OBJECT v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  char *DeviceExtension; // rbx
  struct _UNICODE_STRING v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rdx
  const WCHAR *v29; // rax
  WCHAR *v30; // rsi
  ULONG v31; // ecx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  _QWORD *v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rdx
  _QWORD *v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rdx
  __m128i si128; // xmm0
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r8
  PDEVICE_OBJECT v48; // r9
  __int64 v49; // r8
  unsigned __int16 v50; // ax
  unsigned __int16 v51; // si
  __int64 v52; // rbx
  _BOOL8 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  __int64 v60; // rdx
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-81h] BYREF
  struct _UNICODE_STRING String; // [rsp+50h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  struct _UNICODE_STRING v65; // [rsp+70h] [rbp-59h] BYREF
  __int128 v66; // [rsp+80h] [rbp-49h]
  __int128 v67; // [rsp+90h] [rbp-39h]
  WCHAR SourceString[32]; // [rsp+A0h] [rbp-29h] BYREF

  v4 = 0LL;
  DeviceObject = 0LL;
  v7 = 0;
  DestinationString = 0LL;
  v65 = 0LL;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1329877091;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  v10 = &WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
  v11 = FdoExt(a1, v10, v4, a4);
  while ( 1 )
  {
    v66 = *(_OWORD *)L"\\Device\\USBPDO-";
    v67 = *(_OWORD *)L"USBPDO-";
    String = 0LL;
    memset(SourceString, 0, sizeof(SourceString));
    Pool2 = ExAllocatePool2(64LL, 96LL, 1112885333LL);
    v13 = (void *)Pool2;
    if ( !Pool2 )
      break;
    v14 = v67;
    *(_OWORD *)Pool2 = v66;
    *(_OWORD *)(Pool2 + 16) = v14;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
    DestinationString.MaximumLength = 96;
    RtlInitUnicodeString(&String, SourceString);
    String.MaximumLength = 64;
    appended = RtlIntegerToUnicodeString(v7, 0xAu, &String);
    if ( appended >= 0 )
      appended = RtlAppendUnicodeStringToString(&DestinationString, &String);
    if ( (appended & 0xC0000000) == 0xC0000000 )
      ExFreePoolWithTag(v13, 0);
    if ( appended >= 0 )
    {
      appended = IoCreateDevice(
                   (PDRIVER_OBJECT)WPP_MAIN_CB.Queue.ListEntry.Blink,
                   0xBF8u,
                   &DestinationString,
                   0x22u,
                   0,
                   0,
                   &DeviceObject);
      if ( appended >= 0 )
        goto LABEL_18;
      RtlFreeUnicodeString(&DestinationString);
    }
    ++v7;
    if ( appended != -1073741771 )
    {
LABEL_18:
      LODWORD(v16) = -1073741670;
      goto LABEL_20;
    }
  }
  LODWORD(v16) = -1073741670;
  appended = -1073741670;
LABEL_20:
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884))
            + *(_QWORD *)(v17 + 888);
        *(_DWORD *)v18 = 828665955;
        *(_QWORD *)(v18 + 24) = appended;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = a2;
      }
    }
  }
  if ( !DeviceObject )
    return (unsigned int)-1073741670;
  if ( appended < 0 )
    return (unsigned int)appended;
  DeviceObject->StackSize = *(_BYTE *)(*(_QWORD *)(v11 + 1208) + 76LL) + 1;
  DeviceObject->Flags |= 0x2000u;
  v19 = DeviceObject;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v21 = 826560611;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = a2;
        *(_QWORD *)(v21 + 24) = v19;
        v19 = DeviceObject;
      }
    }
  }
  DeviceExtension = (char *)v19->DeviceExtension;
  *(_DWORD *)DeviceExtension = 1329877064;
  v23 = DestinationString;
  *((_QWORD *)DeviceExtension + 145) = 0xFEFEFEFEFEFEFEFEuLL;
  *((_DWORD *)DeviceExtension + 288) = 0;
  *((struct _UNICODE_STRING *)DeviceExtension + 167) = v23;
  *((_DWORD *)DeviceExtension + 588) = -1;
  *((_DWORD *)DeviceExtension + 295) = *(_DWORD *)(*(_QWORD *)(v11 + 3016) + 4LL * *(unsigned __int16 *)(a2 + 4));
  *((_DWORD *)DeviceExtension + 196) = 1;
  *((_DWORD *)DeviceExtension + 596) = 1;
  *((_DWORD *)DeviceExtension + 742) = 1000;
  v24 = PdoExt(DeviceObject);
  v25 = ((unsigned __int8)*(_DWORD *)(v24 + 4) + 1) & 7;
  *(_DWORD *)(v24 + 4) = v25;
  v25 *= 32LL;
  *(_DWORD *)(v25 + v24 + 16) = 7;
  *(_DWORD *)(v25 + v24 + 20) = *(_DWORD *)(v24 + 1124);
  *(_DWORD *)(v25 + v24 + 24) = 1;
  *(_DWORD *)(v24 + 1124) = 1;
  *((_QWORD *)DeviceExtension + 120) = DeviceObject;
  *((_DWORD *)DeviceExtension + 236) = 2017613128;
  *((_DWORD *)DeviceExtension + 237) = 1;
  *((_QWORD *)DeviceExtension + 119) = a1;
  *((_DWORD *)DeviceExtension + 264) = 1734964085;
  *((_DWORD *)DeviceExtension + 252) = 1734964085;
  *((_DWORD *)DeviceExtension + 248) = 1734964085;
  *((_DWORD *)DeviceExtension + 244) = 1734964085;
  *((_DWORD *)DeviceExtension + 255) = 1734964085;
  *((_DWORD *)DeviceExtension + 258) = 1734964085;
  *((_DWORD *)DeviceExtension + 261) = 1734964085;
  *((_DWORD *)DeviceExtension + 266) = 1734964085;
  *((_QWORD *)DeviceExtension + 120) = DeviceObject;
  *((_QWORD *)DeviceExtension + 317) = MEMORY[0xFFFFF78000000014];
  *((_BYTE *)&String.MaximumLength + 2) = 0;
  *(_DWORD *)&String.Length = 0;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2360), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2920), NotificationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 1240), NotificationEvent, 0);
  *((_QWORD *)DeviceExtension + 154) = DeviceExtension + 1224;
  *((_QWORD *)DeviceExtension + 153) = DeviceExtension + 1224;
  KeInitializeEvent((PRKEVENT)DeviceExtension + 54, NotificationEvent, 1u);
  *((_QWORD *)DeviceExtension + 160) = DeviceExtension + 1272;
  *((_QWORD *)DeviceExtension + 159) = DeviceExtension + 1272;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2056), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2944), SynchronizationEvent, 1u);
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2896), SynchronizationEvent, 1u);
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 351);
  KeInitializeEvent((PRKEVENT)DeviceExtension + 115, SynchronizationEvent, 0);
  v26 = DeviceExtension + 1704;
  if ( (UsbhLogMask & 0x2000) != 0 )
  {
    if ( a1 )
    {
      v27 = *(_QWORD *)(a1 + 64);
      if ( v27 )
      {
        v28 = 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884))
            + *(_QWORD *)(v27 + 888);
        *(_DWORD *)v28 = 1416195689;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_QWORD *)(v28 + 16) = v26;
        *(_QWORD *)(v28 + 24) = UsbhDriverNotFoundTimer;
      }
    }
  }
  *v26 = 1332899156LL;
  *((_QWORD *)DeviceExtension + 219) = UsbhDriverNotFoundTimer;
  *((_DWORD *)DeviceExtension + 428) = 0;
  *((_DWORD *)DeviceExtension + 444) = 1145980532;
  v29 = (const WCHAR *)ExAllocatePool2(64LL, 16LL, 1112885333LL);
  v30 = (WCHAR *)v29;
  if ( !v29 )
    goto LABEL_78;
  RtlInitUnicodeString(&v65, v29);
  v31 = *(unsigned __int16 *)(a2 + 4);
  v65.MaximumLength = 16;
  LODWORD(v16) = RtlIntegerToUnicodeString(v31, 0xAu, &v65);
  if ( (v16 & 0xC0000000) == 0xC0000000 )
  {
    ExFreePoolWithTag(v30, 0);
  }
  else
  {
    *((_QWORD *)DeviceExtension + 269) = v30;
    *((_DWORD *)DeviceExtension + 537) = v65.MaximumLength;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v32 = *(_QWORD *)(a1 + 64);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
          *(_DWORD *)v33 = 845443171;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = a2;
          *(_QWORD *)(v33 + 24) = v30;
        }
      }
    }
    v34 = UsbhBuildDeviceID(a1, 0LL, DeviceExtension + 2080);
    LODWORD(v16) = v34;
    if ( (v34 & 0xC0000000) == 0xC0000000 )
    {
      Log(a1, 256, 1668302129, (__int64)DeviceObject, v34);
    }
    else
    {
      v35 = UsbhBuildHardwareID(a1, 0LL, DeviceExtension + 2096);
      LODWORD(v16) = v35;
      if ( (v35 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 256, 1668302130, (__int64)DeviceObject, v35);
      }
      else
      {
        v36 = UsbhBuildCompatibleID(a1, 0LL, DeviceExtension + 2112);
        LODWORD(v16) = v36;
        if ( (v36 & 0xC0000000) == 0xC0000000 )
        {
          Log(a1, 256, 1668302131, (__int64)DeviceObject, v36);
        }
        else
        {
          v37 = UsbhConnectPdoToHub(DeviceObject, a1);
          LODWORD(v16) = v37;
          if ( (v37 & 0xC0000000) == 0xC0000000 )
          {
            Log(a1, 256, 1668302132, (__int64)DeviceObject, v37);
          }
          else
          {
            KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 152);
            KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 293);
            *((_QWORD *)DeviceExtension + 284) = DeviceExtension + 2264;
            *((_QWORD *)DeviceExtension + 283) = DeviceExtension + 2264;
            IoCsqInitialize(
              (PIO_CSQ)(DeviceExtension + 2280),
              UsbhInsertPdoWakeIrp,
              UsbhRemovePdoWakeIrp,
              UsbhPeekNextPdoWakeIrp,
              UsbhAcquirePdoWakeIrpLock,
              UsbhReleasePdoWakeIrpLock,
              UsbhCompleteCanceledPdoWakeIrp);
            KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 191);
            KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 256);
            *((_QWORD *)DeviceExtension + 182) = DeviceExtension + 1448;
            *((_QWORD *)DeviceExtension + 181) = DeviceExtension + 1448;
            IoCsqInitialize(
              (PIO_CSQ)(DeviceExtension + 1464),
              UsbhInsertPdoIdleIrp,
              UsbhRemovePdoIdleIrp,
              UsbhPeekNextPdoIdleIrp,
              UsbhAcquirePdoIdleIrpLock,
              UsbhReleasePdoIdleIrpLock,
              UsbhCompleteCanceledPdoIdleIrp);
            v38 = DeviceExtension + 1544;
            if ( (UsbhLogMask & 0x2000) != 0 )
            {
              if ( a1 )
              {
                v39 = *(_QWORD *)(a1 + 64);
                if ( v39 )
                {
                  v40 = 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884))
                      + *(_QWORD *)(v39 + 888);
                  *(_DWORD *)v40 = 1416195689;
                  *(_QWORD *)(v40 + 8) = 0LL;
                  *(_QWORD *)(v40 + 16) = v38;
                  *(_QWORD *)(v40 + 24) = UsbhIdleIrpRetryTimer;
                }
              }
            }
            *((_QWORD *)DeviceExtension + 199) = UsbhIdleIrpRetryTimer;
            *v38 = 1332899156LL;
            *((_DWORD *)DeviceExtension + 388) = 0;
            *((_DWORD *)DeviceExtension + 404) = 1231318117;
            v41 = DeviceExtension + 1624;
            if ( (UsbhLogMask & 0x2000) != 0 )
            {
              if ( a1 )
              {
                v42 = *(_QWORD *)(a1 + 64);
                if ( v42 )
                {
                  v43 = 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884))
                      + *(_QWORD *)(v42 + 888);
                  *(_DWORD *)v43 = 1416195689;
                  *(_QWORD *)(v43 + 8) = 0LL;
                  *(_QWORD *)(v43 + 16) = v41;
                  *(_QWORD *)(v43 + 24) = UsbhSS_WakeIrpRetryTimer;
                }
              }
            }
            *v41 = 1332899156LL;
            *((_QWORD *)DeviceExtension + 209) = UsbhSS_WakeIrpRetryTimer;
            *((_DWORD *)DeviceExtension + 408) = 0;
            *((_DWORD *)DeviceExtension + 424) = 1144018785;
            KeInitializeSemaphore((PRKSEMAPHORE)(DeviceExtension + 2568), 1, 1);
            si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
            *((__m128i *)DeviceExtension + 57) = si128;
            *(__m128i *)(DeviceExtension + 892) = si128;
            v45 = UsbhIncPdoIoCount(DeviceObject, DeviceObject, 1162637161LL, 0LL);
            v16 = v45;
            if ( (v45 & 0xC0000000) != 0xC0000000 )
            {
              *((_DWORD *)DeviceExtension + 356) |= 1u;
              *((_QWORD *)DeviceExtension + 105) = DeviceObject;
              *((_WORD *)DeviceExtension + 714) = *(_WORD *)(a2 + 4);
              *((_QWORD *)DeviceExtension + 382) = *(_QWORD *)(a2 + 2920);
              *((_DWORD *)DeviceExtension + 298) = *(_DWORD *)(v11 + 5036);
              *((_DWORD *)DeviceExtension + 282) = 1;
              *((_DWORD *)DeviceExtension + 197) = 1;
              *((_DWORD *)DeviceExtension + 198) = 1;
              *((_DWORD *)DeviceExtension + 684) = 0;
              DeviceExtension[2740] = 0;
              LOBYTE(String.Length) = KeAcquireSpinLockRaiseToDpc(&HubG);
              *(_DWORD *)(&String.MaximumLength + 1) = 1;
              qword_140070600 = (__int64)&dword_140070608;
              UsbhSetPortData(a1, DeviceObject, &String);
              UsbhGetLocationIdString(a1, DeviceObject, v49, DeviceExtension + 2224);
              *(_DWORD *)(&String.MaximumLength + 1) = 0;
              qword_140070600 = 0LL;
              KeReleaseSpinLock(&HubG, String.Length);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_q(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v46,
                  1,
                  27,
                  (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
                  (char)DeviceObject);
              }
              v48 = DeviceObject;
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                if ( a1 )
                {
                  v46 = *(_QWORD *)(a1 + 64);
                  if ( v46 )
                  {
                    v47 = *(_QWORD *)(v46 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
                    *(_DWORD *)v47 = 1666139216;
                    *(_QWORD *)(v47 + 8) = 0LL;
                    *(_QWORD *)(v47 + 16) = v48;
                    *(_QWORD *)(v47 + 24) = v16;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (v16 & 0xC0000000) == 0xC0000000 )
  {
LABEL_78:
    Log(a1, 256, 1346653985, (__int64)DeviceObject, (int)v16);
    Usbh_ErrorDisconnect_PdoEvent(a1, DeviceObject, a2 + 24);
  }
  else
  {
    DeviceObject->Flags &= ~0x80u;
    v50 = *(_WORD *)(a2 + 4);
    v51 = v50;
    if ( v50 && v50 <= 0x7Fu )
    {
      v52 = FdoExt(a1, v46, v47, v48);
      KeWaitForSingleObject((PVOID)(v52 + 3160), Executive, 0, 0, 0LL);
      v53 = *(_DWORD *)(v52 + 3320) || *(_DWORD *)(v52 + 3324) || *(_DWORD *)(v52 + 3328) || *(_DWORD *)(v52 + 3332);
      v54 = v52 + 4 * ((unsigned __int64)v51 >> 5);
      *(_DWORD *)(v54 + 3320) |= 1 << (v51 & 0x1F);
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        if ( a1 )
        {
          v54 = *(_QWORD *)(a1 + 64);
          if ( v54 )
          {
            v54 = 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v54 + 880)) & *(_DWORD *)(v54 + 884))
                + *(_QWORD *)(v54 + 888);
            *(_DWORD *)v54 = 1112568659;
            *(_QWORD *)(v54 + 16) = v53;
            *(_QWORD *)(v54 + 8) = 0LL;
            *(_QWORD *)(v54 + 24) = v51;
          }
        }
      }
      if ( !v53 )
      {
        v55 = FdoExt(a1, v54, v53, v51);
        UsbhSshPortsBusy(a1, v55 + 1912, 1LL, v56);
        UsbhDisableTimerObject(a1, v52 + 3200, v57, v58);
      }
      KeReleaseSemaphore((PRKSEMAPHORE)(v52 + 3160), 16, 1, 0);
    }
    v59 = PdoExt(DeviceObject);
    v60 = ((unsigned __int8)*(_DWORD *)(v59 + 12) + 1) & 7;
    *(_DWORD *)(v59 + 12) = v60;
    v60 *= 32LL;
    *(_DWORD *)(v60 + v59 + 528) = 6;
    *(_DWORD *)(v60 + v59 + 532) = *(_DWORD *)(v59 + 1120);
    *(_DWORD *)(v60 + v59 + 536) = 100;
    *(_DWORD *)(v59 + 1120) = 100;
  }
  return (unsigned int)v16;
}
