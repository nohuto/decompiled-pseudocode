/*
 * XREFs of Controller_Create @ 0x140074010
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x140078A10 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfA @ 0x14001EFE8 (RtlStringCchPrintfA.c)
 *     RtlStringCchCopyA @ 0x14003D07C (RtlStringCchCopyA.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x140040894 (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_QuerySupportedDSMs @ 0x140042B40 (Controller_QuerySupportedDSMs.c)
 *     Controller_ReferenceTrustletProcess @ 0x140042BBC (Controller_ReferenceTrustletProcess.c)
 *     Device_IsSecureDevice @ 0x1400448F8 (Device_IsSecureDevice.c)
 *     DynamicLock_Create @ 0x1400564F4 (DynamicLock_Create.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140059540 (memmove.c)
 *     memset @ 0x140059840 (memset.c)
 *     Controller_CreateSecureObject @ 0x140074EE0 (Controller_CreateSecureObject.c)
 *     Controller_GetDeviceEnumerator @ 0x140075D88 (Controller_GetDeviceEnumerator.c)
 *     Controller_PopulateDeviceFlags @ 0x140075F9C (Controller_PopulateDeviceFlags.c)
 *     Controller_RetrieveAcpiData @ 0x1400771D4 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrievePciData @ 0x140077430 (Controller_RetrievePciData.c)
 *     Controller_RetrieveUrsData @ 0x140077694 (Controller_RetrieveUrsData.c)
 *     Controller_SetLogIdentifier @ 0x140077F94 (Controller_SetLogIdentifier.c)
 */

__int64 __fastcall Controller_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 (__fastcall *v8)(PWDF_DRIVER_GLOBALS, __int64, void *); // rax
  __int64 v9; // rax
  bool IsSecureDevice; // r12
  int v11; // r15d
  __int64 v12; // rdx
  signed __int64 v13; // r8
  char *v14; // rcx
  char v15; // al
  char *v16; // rax
  int DeviceEnumerator; // eax
  int v18; // edx
  int AcpiData; // ebx
  int v20; // r9d
  int v21; // r11d
  unsigned int v22; // r10d
  unsigned int v23; // r10d
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rax
  bool v27; // zf
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  struct _DEVICE_OBJECT *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rcx
  int v33; // eax
  __int128 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v36; // [rsp+50h] [rbp-B0h]
  __int128 v37; // [rsp+60h] [rbp-A0h]
  void *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  __int128 v40; // [rsp+80h] [rbp-80h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  int v42; // [rsp+98h] [rbp-68h] BYREF
  ULONG RequiredSize; // [rsp+9Ch] [rbp-64h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C8h] [rbp-38h]
  ULONG Type; // [rsp+CCh] [rbp-34h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v50; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v51; // [rsp+E8h] [rbp-18h]
  __int128 v52; // [rsp+F8h] [rbp-8h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  _QWORD v54[32]; // [rsp+110h] [rbp+10h] BYREF
  char pszSrc[8]; // [rsp+210h] [rbp+110h] BYREF
  char v56[4]; // [rsp+218h] [rbp+118h] BYREF
  __int16 v57; // [rsp+21Ch] [rbp+11Ch]
  char v58; // [rsp+21Eh] [rbp+11Eh]
  __int128 v59; // [rsp+220h] [rbp+120h]
  __int128 v60; // [rsp+230h] [rbp+130h]
  char pszDest[16]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v62; // [rsp+250h] [rbp+150h]
  _BYTE Src[400]; // [rsp+260h] [rbp+160h] BYREF

  v49 = -1LL;
  DWORD1(v44) = 0;
  DWORD1(v40) = 0;
  v62 = 0LL;
  DWORD1(v35) = 0;
  *(_QWORD *)&v36 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v59 = 0LL;
  RequiredSize = 0;
  v60 = 0LL;
  Type = 0;
  *(_OWORD *)pszDest = 0LL;
  v8 = *(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616);
  v47 = a3;
  v42 = 0;
  v9 = v8(WdfDriverGlobals, a1, off_14006B240);
  IsSecureDevice = Device_IsSecureDevice(v9);
  *(_QWORD *)pszSrc = 0LL;
  *(_DWORD *)v56 = 0;
  v57 = 0;
  v58 = 0;
  v53 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  memset(Src, 0, sizeof(Src));
  pszDest[0] = 0;
  HIDWORD(v60) = 16;
  *(_QWORD *)&v60 = 0LL;
  BYTE8(v60) = 0;
  *(_QWORD *)&v59 = 56LL;
  v62 = 0x200000002LL;
  *((_QWORD *)&v59 + 1) = 512LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d RUNDOWN", a3);
  v37 = 0LL;
  DWORD1(v35) = 0;
  *(_QWORD *)&v36 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v35) = -1;
    else
      LODWORD(v35) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v35) = 56;
  }
  v38 = off_14006B290;
  v11 = 1;
  *((_QWORD *)&v36 + 1) = 0x100000001LL;
  *((_QWORD *)&v35 + 1) = Controller_WdfEvtCleanupCallback;
  memset(v54, 0, 0xF8uLL);
  v54[0] = -4294967048LL;
  *(_QWORD *)((char *)&v54[9] + 4) = 0x7FFFFFFF7FFFFFFFLL;
  v12 = 40LL;
  v13 = "USBXHCI" - ((char *)&v54[14] + 3);
  LODWORD(v54[9]) = 0;
  BYTE4(v54[12]) = 0;
  v14 = (char *)&v54[14] + 3;
  BYTE1(v54[13]) = 0;
  BYTE6(v54[13]) = 0;
  WORD2(v54[10]) = 0;
  v54[11] = 0LL;
  LODWORD(v54[12]) = 0;
  do
  {
    if ( v12 == -2147483606 )
      break;
    v15 = v14[v13];
    if ( !v15 )
      break;
    *v14++ = v15;
    --v12;
  }
  while ( v12 );
  v16 = v14 - 1;
  if ( v12 )
    v16 = v14;
  *v16 = 0;
  v54[4] = UsbDevice_UcxEvtDeviceAdd;
  v54[3] = Controller_UcxEvtGetCurrentFrameNumber;
  v54[5] = Controller_UcxEvtReset;
  v54[1] = Controller_UcxEvtQueryUsbCapability;
  v54[28] = Controller_UcxEvtStartTrackingForTimeSync;
  v54[29] = Controller_UcxEvtStopTrackingForTimeSync;
  v54[30] = Controller_UcxEvtGetFrameNumberAndQpcForTimeSync;
  if ( IsSecureDevice )
  {
    memset(&v54[6], 0, 24);
  }
  else
  {
    v54[7] = Crashdump_UcxEvtGetDumpData;
    v54[8] = Crashdump_UcxEvtFreeDumpData;
    v54[6] = Controller_UcxEvtEnableForwardProgress;
  }
  DeviceEnumerator = Controller_GetDeviceEnumerator(a1, a2, v13);
  if ( !DeviceEnumerator )
  {
    AcpiData = Controller_RetrievePciData(a1, a2, &v50, &v49);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v20 = 99;
LABEL_19:
        LOBYTE(v18) = 2;
LABEL_20:
        WPP_RECORDER_SF_d(a2, v18, 4, v20, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, AcpiData);
        return (unsigned int)AcpiData;
      }
      return (unsigned int)AcpiData;
    }
    v21 = 2;
    goto LABEL_31;
  }
  if ( DeviceEnumerator == 1 )
  {
    v11 = 2;
    AcpiData = Controller_RetrieveAcpiData(a1, a2, pszSrc);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v20 = 100;
      LOBYTE(v18) = 2;
      goto LABEL_20;
    }
  }
  else
  {
    AcpiData = Controller_RetrieveUrsData(
                 a1,
                 a2,
                 (unsigned int)&v42,
                 (unsigned int)pszSrc,
                 (__int64)&v50,
                 (__int64)&v49);
    if ( AcpiData < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)AcpiData;
      v20 = 101;
      goto LABEL_19;
    }
    v11 = v42;
    v21 = 2;
    if ( v42 != 2 )
    {
LABEL_31:
      *(_QWORD *)((char *)&v54[9] + 4) = v50;
      WORD2(v54[10]) = WORD4(v50);
      v54[11] = __PAIR64__(v51, HIDWORD(v50));
      LODWORD(v54[12]) = DWORD1(v51);
      LODWORD(v54[9]) = 1;
      goto LABEL_33;
    }
  }
  LODWORD(v54[9]) = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v54[12] + 4, 5uLL, pszSrc);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v54[13] + 1, v22, &pszSrc[5]);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v54[13] + 6, v23, &v56[2]);
LABEL_33:
  v24 = DWORD2(v36);
  if ( IsSecureDevice )
    v24 = v21;
  DWORD2(v36) = v24;
  AcpiData = ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int128 *, __int64 *))qword_14006BC08)(
               UcxDriverGlobals,
               a1,
               v54,
               &v35,
               &v39);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v20 = 102;
    goto LABEL_38;
  }
  v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          v39,
          off_14006B290);
  *(_QWORD *)(v25 + 32) = v25 + 24;
  *(_QWORD *)(v25 + 24) = v25 + 24;
  *(_QWORD *)v25 = a1;
  *(_QWORD *)(v25 + 8) = v39;
  *(_QWORD *)(v25 + 728) = v49;
  *(_DWORD *)(v25 + 176) = v47;
  *(_QWORD *)(v25 + 72) = a2;
  *(_DWORD *)(v25 + 644) = v11;
  *(_BYTE *)(v25 + 1001) = IsSecureDevice;
  v26 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          a1,
          off_14006B240);
  v27 = *(_DWORD *)(v25 + 644) == 1;
  *(_QWORD *)(v25 + 112) = *(_QWORD *)(v26 + 96);
  if ( v27 )
  {
    v28 = v51;
    *(_OWORD *)(v25 + 648) = v50;
    v29 = v52;
    *(_OWORD *)(v25 + 664) = v28;
    *(_QWORD *)&v28 = v53;
    *(_OWORD *)(v25 + 680) = v29;
    *(_QWORD *)(v25 + 696) = v28;
    *(_BYTE *)(v25 + 704) = 0;
    *(_BYTE *)(v25 + 709) = 0;
    *(_BYTE *)(v25 + 714) = 0;
  }
  else
  {
    *(_QWORD *)(v25 + 704) = *(_QWORD *)pszSrc;
    *(_DWORD *)(v25 + 712) = *(_DWORD *)v56;
    *(_WORD *)(v25 + 716) = v57;
    *(_BYTE *)(v25 + 718) = v58;
    *(_DWORD *)(v25 + 648) = 0x7FFFFFFF;
    *(_DWORD *)(v25 + 652) = 0x7FFFFFFF;
    *(_WORD *)(v25 + 656) = 0;
    *(_QWORD *)(v25 + 660) = 0LL;
    *(_DWORD *)(v25 + 668) = 0;
  }
  v30 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 264))(
                                   WdfDriverGlobals,
                                   a1);
  if ( IoGetDevicePropertyData(v30, &DEVPKEY_Device_InstanceId, 0, 0, 0x190u, Src, &RequiredSize, &Type) < 0 )
    *(_WORD *)(v25 + 244) = 0;
  else
    memmove((void *)(v25 + 244), Src, RequiredSize);
  Controller_SetLogIdentifier(v25);
  *a4 = v25;
  v38 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v35) = -1;
    else
      LODWORD(v35) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v35) = 56;
  }
  v38 = off_14006AE60;
  *((_QWORD *)&v36 + 1) = 0x100000001LL;
  v46 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( IsSecureDevice )
  {
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x37 )
        LODWORD(v44) = -1;
      else
        LODWORD(v44) = *(_DWORD *)(WdfStructures + 440);
    }
    else
    {
      LODWORD(v44) = 40;
    }
    LODWORD(v45) = 0;
    *((_QWORD *)&v44 + 1) = Controller_WdfEvtWatchdogTimerFunc;
    DWORD2(v36) = 2;
  }
  else
  {
    if ( WdfClientVersionHigherThanFramework )
    {
      if ( (unsigned int)WdfStructureCount <= 0x37 )
        LODWORD(v44) = -1;
      else
        LODWORD(v44) = *(_DWORD *)(WdfStructures + 440);
    }
    else
    {
      LODWORD(v44) = 40;
    }
    LODWORD(v45) = 5000;
    *((_QWORD *)&v44 + 1) = Controller_WdfEvtWatchdogTimerFunc;
  }
  *(_QWORD *)&v37 = v39;
  BYTE4(v45) = 1;
  DWORD2(v45) = 1000;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 2544))(
               WdfDriverGlobals,
               &v44,
               &v35,
               v25 + 760);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v20 = 103;
    goto LABEL_38;
  }
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
               WdfDriverGlobals,
               *(_QWORD *)(v25 + 760),
               off_14006AE60) = MEMORY[0xFFFFF78000000014];
  v38 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v35) = -1;
    else
      LODWORD(v35) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v35) = 56;
  }
  *(_QWORD *)&v37 = v39;
  *((_QWORD *)&v36 + 1) = 0x100000001LL;
  v41 = 0LL;
  v40 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x43 )
      LODWORD(v40) = -1;
    else
      LODWORD(v40) = *(_DWORD *)(WdfStructures + 536);
  }
  else
  {
    LODWORD(v40) = 24;
  }
  *((_QWORD *)&v40 + 1) = Controller_IdleTimeoutUpdateWorker;
  LOBYTE(v41) = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
               WdfDriverGlobals,
               &v40,
               &v35,
               v25 + 968);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v20 = 104;
    goto LABEL_38;
  }
  v38 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v35) = -1;
    else
      LODWORD(v35) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v35) = 56;
  }
  *(_QWORD *)&v37 = v39;
  *((_QWORD *)&v36 + 1) = 0x100000001LL;
  v41 = 0LL;
  v40 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x43 )
      LODWORD(v40) = -1;
    else
      LODWORD(v40) = *(_DWORD *)(WdfStructures + 536);
  }
  else
  {
    LODWORD(v40) = 24;
  }
  *((_QWORD *)&v40 + 1) = Controller_AudioOffloadWnfStateUpdateWorker;
  LOBYTE(v41) = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
               WdfDriverGlobals,
               &v40,
               &v35,
               v25 + 1232);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v20 = 105;
    goto LABEL_38;
  }
  v38 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v35) = -1;
    else
      LODWORD(v35) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v35) = 56;
  }
  v38 = off_14006AF20;
  *(_QWORD *)&v37 = v39;
  *((_QWORD *)&v36 + 1) = 0x100000001LL;
  v41 = 0LL;
  v40 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x43 )
      LODWORD(v40) = -1;
    else
      LODWORD(v40) = *(_DWORD *)(WdfStructures + 536);
  }
  else
  {
    LODWORD(v40) = 24;
  }
  *((_QWORD *)&v40 + 1) = Controller_TelemetryReportWorker;
  LOBYTE(v41) = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
               WdfDriverGlobals,
               &v40,
               &v35,
               v25 + 768);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v20 = 106;
    goto LABEL_38;
  }
  v31 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
          WdfDriverGlobals,
          *(_QWORD *)(v25 + 768),
          off_14006AF20);
  KeInitializeMutex((PRKMUTEX)(v31 + 24), 0);
  *(_QWORD *)(v31 + 8) = v31;
  *(_QWORD *)v31 = v31;
  KeInitializeSpinLock((PKSPIN_LOCK)(v31 + 16));
  AcpiData = DynamicLock_Create(v39, a2, IsSecureDevice, (__int64 *)(v25 + 1072));
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v20 = 107;
    goto LABEL_38;
  }
  v35 = 0LL;
  v38 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v35) = -1;
    else
      LODWORD(v35) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v35) = 56;
  }
  *(_QWORD *)&v37 = v39;
  *((_QWORD *)&v36 + 1) = 0x100000001LL;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01033 + 104))(
               WdfDriverGlobals,
               &v35,
               v25 + 1088);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v20 = 108;
    goto LABEL_38;
  }
  v38 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x26 )
      LODWORD(v35) = -1;
    else
      LODWORD(v35) = *(_DWORD *)(WdfStructures + 304);
  }
  else
  {
    LODWORD(v35) = 56;
  }
  v38 = off_14006AF20;
  *(_QWORD *)&v37 = v39;
  *((_QWORD *)&v36 + 1) = 0x100000001LL;
  v41 = 0LL;
  v40 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount <= 0x43 )
      LODWORD(v40) = -1;
    else
      LODWORD(v40) = *(_DWORD *)(WdfStructures + 536);
  }
  else
  {
    LODWORD(v40) = 24;
  }
  *((_QWORD *)&v40 + 1) = Controller_TimeSyncStartTrackingWorker;
  LOBYTE(v41) = 1;
  AcpiData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int128 *, __int64))(WdfFunctions_01033 + 3032))(
               WdfDriverGlobals,
               &v40,
               &v35,
               v25 + 1112);
  if ( AcpiData < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)AcpiData;
    v20 = 109;
    goto LABEL_38;
  }
  *(_QWORD *)(v25 + 1104) = v25 + 1096;
  *(_QWORD *)(v25 + 1096) = v25 + 1096;
  *(_BYTE *)(v25 + 1120) = 0;
  *(_BYTE *)(v25 + 1064) = 0;
  KeQueryPerformanceCounter((PLARGE_INTEGER)(v25 + 1184));
  *(_QWORD *)(v25 + 1192) = 0LL;
  *(_QWORD *)(v25 + 1200) = 0LL;
  *(_DWORD *)(v25 + 1208) = 0;
  *(_DWORD *)(v25 + 1080) = 0;
  Controller_QuerySupportedDSMs(v25);
  *(_OWORD *)(v25 + 736) = 0LL;
  Controller_PopulateDeviceFlags(v25);
  if ( (*(_BYTE *)(v25 + 736) & 0x10) != 0 )
  {
    AcpiData = -1073741637;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a2, 2, 4, 110, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids);
    return (unsigned int)AcpiData;
  }
  v32 = v25;
  if ( IsSecureDevice )
  {
    AcpiData = Controller_ReferenceTrustletProcess((_QWORD *)v25);
    if ( AcpiData < 0 )
      return (unsigned int)AcpiData;
    AcpiData = Controller_CreateSecureObject(v25);
    if ( AcpiData < 0 )
      return (unsigned int)AcpiData;
    v32 = v25;
    v33 = (*(_DWORD *)(v25 + 1012) != 1) + 1;
  }
  else
  {
    v33 = 0;
  }
  *(_DWORD *)(v32 + 1008) = v33;
  *(_QWORD *)(v25 + 1036) = 0LL;
  AcpiData = DynamicLock_Create(v39, a2, 0, (__int64 *)(v25 + 1048));
  if ( AcpiData >= 0 )
    return (unsigned int)Controller_AllocateIrqlTrackingArray(v25);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = 111;
LABEL_38:
    v18 = 2;
    goto LABEL_20;
  }
  return (unsigned int)AcpiData;
}
