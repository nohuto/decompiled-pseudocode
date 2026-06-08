/*
 * XREFs of ProcLibDeviceStart @ 0x14002E514
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1400252A0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x140002914 (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     AcquireBiosPpmControl @ 0x140008B04 (AcquireBiosPpmControl.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x140008CC0 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     InitAcpiCStates @ 0x1400267CC (InitAcpiCStates.c)
 *     InitAcpiCpc @ 0x140026F98 (InitAcpiCpc.c)
 *     AcpiEval_OSC @ 0x140028B28 (AcpiEval_OSC.c)
 *     AcpiEval_PDC @ 0x1400290A8 (AcpiEval_PDC.c)
 *     AcpiEval_TPC @ 0x140029878 (AcpiEval_TPC.c)
 *     AcquireAcpiInterfaces @ 0x14002BB2C (AcquireAcpiInterfaces.c)
 *     EnumerateControlMethods @ 0x14002D664 (EnumerateControlMethods.c)
 *     ValidatePerfDomainSymmetry @ 0x140031908 (ValidatePerfDomainSymmetry.c)
 *     InitAcpiProcessorDomains @ 0x140037850 (InitAcpiProcessorDomains.c)
 *     RegisterXsdDomain @ 0x140037AA4 (RegisterXsdDomain.c)
 *     InitPepIdleStates @ 0x140037C68 (InitPepIdleStates.c)
 *     InitAcpiPerfStates @ 0x14003943C (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1400397C8 (InitAcpiThrottleStates.c)
 *     EmiInit @ 0x14003AC30 (EmiInit.c)
 *     PepAllocateRegisterWpsInterface @ 0x14003ACF4 (PepAllocateRegisterWpsInterface.c)
 *     PepQueryUpdateWpsTable @ 0x14003AF3C (PepQueryUpdateWpsTable.c)
 *     InitializeEnergyEstimation @ 0x14003B60C (InitializeEnergyEstimation.c)
 *     InitPepPerfStates @ 0x14003BB34 (InitPepPerfStates.c)
 *     InitPep @ 0x14003C830 (InitPep.c)
 *     QueryPepCapabilites @ 0x14003CE50 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x14003E42C (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x14003E698 (InitAcpiLpiStates.c)
 *     ProcLibTraceSummary2 @ 0x14003F9E0 (ProcLibTraceSummary2.c)
 *     ProcLibCapChange @ 0x14004061C (ProcLibCapChange.c)
 *     AcpiEval_PPC @ 0x14004071C (AcpiEval_PPC.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // r13d
  int v4; // edx
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // edx
  int v8; // ebx
  NTSTATUS v9; // eax
  int v10; // edx
  __int64 v11; // rax
  int v12; // eax
  int v13; // edx
  const wchar_t *v14; // rax
  PIO_WORKITEM WorkItem; // rax
  int v16; // edx
  __int64 v17; // r8
  int v18; // eax
  int v19; // edx
  int v20; // ebx
  int v21; // edx
  int inited; // eax
  int v23; // edx
  int v24; // eax
  int v25; // edx
  int PepCapabilites; // eax
  int v27; // edx
  int v28; // eax
  int v29; // edx
  __int64 v30; // rax
  int v31; // eax
  int v32; // edx
  unsigned __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  int v36; // edx
  int v37; // edx
  int v38; // ecx
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // rax
  int v42; // edx
  int v43; // eax
  int v44; // edx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  int v48; // edx
  int v49; // r9d
  __int64 v50; // rcx
  void (__fastcall *v51)(_QWORD, _QWORD); // rax
  void (__fastcall *v52)(_QWORD); // rax
  int v53; // ebx
  int v54; // edx
  int v55; // eax
  unsigned int v56; // edi
  int v57; // eax
  int v58; // edx
  int v59; // eax
  unsigned int v60; // ebx
  int v61; // eax
  int v62; // edx
  int v63; // esi
  char v64; // al
  __int64 v65; // rax
  void (__fastcall *v66)(__int64); // rax
  int RegisterWpsInterface; // eax
  int v68; // edx
  int v69; // r9d
  int v70; // eax
  int v71; // edx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // r8
  unsigned int v75; // ecx
  int Type; // [rsp+28h] [rbp-E0h]
  char Size; // [rsp+30h] [rbp-D8h]
  int *v79; // [rsp+88h] [rbp-80h] BYREF
  int v80; // [rsp+90h] [rbp-78h] BYREF
  __int64 v81; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v82[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v83; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v84; // [rsp+C0h] [rbp-48h]
  _QWORD v85[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v86; // [rsp+E0h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+F0h] [rbp-18h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+100h] [rbp-8h] BYREF
  _OWORD v89[3]; // [rsp+110h] [rbp+8h] BYREF
  int v90; // [rsp+140h] [rbp+38h]
  wchar_t v91; // [rsp+144h] [rbp+3Ch]

  v82[0] = 3538996LL;
  LODWORD(v84) = 0;
  v90 = *(_DWORD *)L"re";
  v91 = aRegistryMachin[26];
  v86 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  v82[1] = v89;
  v3 = 0;
  PreviousAffinity = 0LL;
  v83 = 0LL;
  v81 = 0LL;
  Affinity = 0LL;
  v80 = 0;
  v85[0] = 1LL;
  v89[0] = *(_OWORD *)L"\\Registry\\Machine\\Software";
  v85[2] = 16LL;
  *(_QWORD *)(a1 + 264) = Globals;
  *(_QWORD *)(a1 + 280) = Globals;
  *(_QWORD *)(a1 + 272) = 0LL;
  v85[1] = &v86;
  v89[1] = *(_OWORD *)L"y\\Machine\\Software";
  v89[2] = *(_OWORD *)L"e\\Software";
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v2,
         0LL,
         2703744LL,
         0LL,
         v85,
         0LL,
         0LL) >= 0 )
  {
    if ( DWORD1(v86) )
    {
      *(_DWORD *)(a1 + 188) = DWORD1(v86);
      *(_BYTE *)(a1 + 185) = BYTE8(v86);
      *(_BYTE *)(a1 + 184) = 1;
      *(_WORD *)(a1 + 186) = 0x2000;
      *(_DWORD *)(a1 + 192) = 0;
    }
  }
  else
  {
    v86 = 0LL;
    HIDWORD(v86) = -1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        3,
        32,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
    }
    *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFFCFFFF9uLL;
  }
  v5 = (_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 48) = HIDWORD(v86);
  *(_DWORD *)(a1 + 52) = v86;
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 56) = -1;
  v6 = ((__int64 (__fastcall *)(__int64))qword_140015B58)(a1);
  v8 = v6;
  if ( v6 < 0 )
  {
    *(_QWORD *)(a1 + 280) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        3,
        33,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        v6);
    }
    goto LABEL_206;
  }
  if ( *v5 == -1 )
  {
    if ( _bittest64(&Globals, 0x2Du) )
    {
      *(_DWORD *)(a1 + 80) = dword_140015EF8;
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFC7FFFFFFFFuLL;
    }
  }
  else
  {
    v9 = IoSetDevicePropertyData(
           *(PDEVICE_OBJECT *)(a1 + 8),
           &PROCESSOR_NUMBER_PKEY,
           0,
           (ULONG)0,
           (DEVPROPTYPE)7,
           (ULONG)4,
           (PVOID)(a1 + 56));
    if ( v9 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        4,
        34,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        v9);
    }
    KeProcessorGroupAffinity(&Affinity, (unsigned int)*v5);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v3 = 1;
  }
  *((_QWORD *)&v83 + 1) = &DEVPKEY_Device_BiosDeviceName;
  v84 = 0LL;
  LODWORD(v83) = 24;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64, _QWORD, __int64 *, int *))(WdfFunctions_01015 + 3472))(
          WdfDriverGlobals,
          v11,
          &v83,
          512LL,
          0LL,
          &v81,
          &v80);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        3,
        35,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        v12);
    }
    v14 = L"Unknown";
  }
  else
  {
    v14 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v81,
                             0LL);
  }
  *(_QWORD *)(a1 + 64) = v14;
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1160) = WorkItem;
  *(_BYTE *)(a1 + 1169) = 1;
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        4,
        36,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
    }
    v8 = -1073741670;
    goto LABEL_204;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400155E0,
    0LL);
  v79 = 0LL;
  if ( qword_140015788 )
  {
    v18 = AcpiEval_OSC(a1, (_DWORD *)qword_140015788, v17, &v79);
    if ( v18 >= 0 )
    {
      v20 = *v79;
      if ( (*v79 & 0xE) != 0 )
      {
        if ( (v20 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            1,
            37,
            (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
        }
        if ( (v20 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDDDDDDDDD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int8 *)(qword_140015788 + 13),
            *(unsigned __int8 *)(qword_140015788 + 12),
            *(unsigned __int8 *)(qword_140015788 + 11),
            Type);
        if ( (v20 & 8) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v19) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v19,
            1,
            39,
            (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
            *(_DWORD *)(qword_140015788 + 16));
        }
      }
      else
      {
        *(_QWORD *)(a1 + 88) = v79;
      }
      goto LABEL_39;
    }
    if ( v18 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          2,
          40,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v19,
        3,
        41,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        v18);
    }
  }
  if ( qword_140015780 )
    AcpiEval_PDC(a1, (const void *)qword_140015780, word_140015790);
LABEL_39:
  EnumerateControlMethods(a1, (_DWORD *)(a1 + 1104));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v21) = 5;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v21,
      3,
      42,
      (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
      *(_DWORD *)(a1 + 1104));
  }
  if ( (*(_QWORD *)(a1 + 280) & 0x8111200000E00LL) != 0 )
  {
    inited = InitPep(a1);
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v23) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v23,
          3,
          43,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          inited);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFF7EEEDFFFFF1FFuLL;
    }
  }
  if ( byte_140015FC0 )
    *(_QWORD *)(a1 + 280) &= ~0x400uLL;
  if ( (*(_QWORD *)(a1 + 280) & 0x20E0000000000LL) != 0 )
  {
    v24 = InitAcpiLpiStates(a1);
    if ( v24 >= 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFDFFF80D88uLL;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v25) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v25,
        3,
        44,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        v24);
    }
  }
  if ( (*(_QWORD *)(a1 + 280) & 0x8111200000E00LL) != 0 )
  {
    PepCapabilites = QueryPepCapabilites(a1);
    if ( PepCapabilites < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v27,
          3,
          45,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          PepCapabilites);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFF7EEEDFFFFF1FFuLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x7F077) != 0 )
  {
    v28 = InitAcpiCStates((_QWORD *)a1);
    if ( v28 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v29) = 3;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v29,
        3,
        46,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        v28);
    }
  }
  v30 = *(_QWORD *)(a1 + 280);
  if ( (v30 & 0x7F077) == 0 )
  {
    v30 &= ~0x200uLL;
    *(_QWORD *)(a1 + 280) = v30;
  }
  if ( (v30 & 0x200000200LL) != 0 )
  {
    v31 = InitPepIdleStates(a1);
    if ( v31 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v32) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v32,
          3,
          47,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          v31);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFDFFFFFDFFuLL;
    }
  }
  v33 = *(_QWORD *)(a1 + 280);
  if ( (v33 & 0x1000000000LL) != 0 )
  {
    v34 = InitPepPerfStates(a1);
    v35 = *(_QWORD *)(a1 + 280);
    if ( v34 >= 0 )
    {
      v33 = v35 & 0xFFFFFFFF04CFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v33;
    }
    else
    {
      v36 = -1;
      v33 = v35 & 0xFFFFFFEFFFFFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v33;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v36,
          3,
          48,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          v34);
        v33 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v33 & 0x8000000) != 0 )
  {
    v38 = InitAcpiCpc(a1);
    v39 = *(_QWORD *)(a1 + 280);
    if ( v38 >= 0 )
    {
      v33 = v39 & 0xFFFFFFFF0CCFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v33;
    }
    else
    {
      v33 = v39 & 0xFFFFFFFFF7FFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v33;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v37) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v37,
          3,
          49,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          v38);
        v33 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v33 & 0x80000000) != 0 )
  {
    v40 = InitAcpiLegacyPcc(a1);
    v41 = *(_QWORD *)(a1 + 280);
    if ( v40 >= 0 )
    {
      v33 = v41 & 0xFFFFFFFF8CCFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v33;
    }
    else
    {
      v42 = 0x7FFFFFFF;
      v33 = v41 & 0xFFFFFFFF7FFFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v33;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v42) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v42,
          3,
          50,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          v40);
        v33 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v33 & 0x70000000) != 0 )
  {
    v43 = InitAcpiPerfStates(a1);
    if ( v43 < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFF8FFFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v44) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v44,
          3,
          51,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          v43);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x3300000) != 0 )
  {
    v45 = InitAcpiThrottleStates(a1);
    if ( v45 < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCCFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v46) = 3;
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          v46,
          3,
          52,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          v45);
      }
    }
  }
  if ( !qword_140015798 || (v47 = qword_140015798(a1), v8 = v47, v47 >= 0) )
  {
    v50 = *(_QWORD *)(a1 + 280);
    if ( (v50 & 0x60000000) != 0 && *(_BYTE *)(a1 + 424) == 127 )
    {
      if ( (v50 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 296) = qword_1400157B8;
        *(_QWORD *)(a1 + 328) = qword_1400157E0;
        *(_QWORD *)(a1 + 312) = qword_1400157C8;
      }
      if ( (v50 & 0x40000000) == 0 )
      {
LABEL_116:
        if ( (v50 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 336) = qword_1400157E8;
        if ( (v50 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 352) = qword_1400157F8;
          *(_QWORD *)(a1 + 360) = qword_140015800;
        }
        if ( (v50 & 0x2000000) != 0 && *(_BYTE *)(a1 + 480) == 127 )
        {
          *(_QWORD *)(a1 + 304) = qword_1400157C0;
          *(_QWORD *)(a1 + 320) = qword_1400157D0;
        }
        else if ( *(_BYTE *)(a1 + 480) == 1 && (v50 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 304) = SetPerfStateIO;
          *(_QWORD *)(a1 + 320) = SetPerfStateIOHidden;
        }
        else
        {
          *(_QWORD *)(a1 + 280) = v50 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1400157F0 )
          *(_QWORD *)(a1 + 344) = qword_1400157F0;
        InitAcpiProcessorDomains(a1, SetPerfStateIO, SetPerfStateIOHidden);
        if ( (*(_DWORD *)(a1 + 280) & 0x7B07F070) != 0 )
        {
          v8 = AcquireAcpiInterfaces(a1);
          if ( v8 < 0 )
          {
            v51 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 176);
            if ( v51 )
              v51(*(_QWORD *)(a1 + 8), AcpiNotifyCallback);
            v52 = *(void (__fastcall **)(_QWORD))(a1 + 120);
            if ( v52 )
              v52(*(_QWORD *)(a1 + 104));
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_203;
            v49 = 54;
            Size = v8;
            goto LABEL_104;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208),
          0LL);
        v53 = ((__int64 (__fastcall *)(__int64))qword_140015B20)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208));
        if ( v53 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v54) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v54,
            3,
            55,
            (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
            v53);
        }
        if ( dword_140015C60 == dword_1400155D4
          && _bittest64((const signed __int64 *)(a1 + 280), 0x30u)
          && qword_1400158D8 )
        {
          qword_1400158D8(a1);
        }
        v55 = *(_DWORD *)(a1 + 280);
        v56 = 0;
        LODWORD(v79) = 0;
        if ( (v55 & 0x70000000) != 0 )
        {
          v57 = AcpiEval_PPC(a1, &v79);
          if ( v57 >= 0 )
          {
            v56 = (unsigned int)v79;
          }
          else if ( v57 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v58) = 4;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v58,
                2,
                56,
                (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v58) = 3;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v58,
              3,
              57,
              (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
              v57);
          }
        }
        v59 = *(_DWORD *)(a1 + 280);
        v60 = 0;
        LODWORD(v79) = 0;
        if ( (v59 & 0x3000000) != 0 )
        {
          v61 = AcpiEval_TPC(a1, (unsigned int *)&v79);
          if ( v61 >= 0 )
          {
            v60 = (unsigned int)v79;
          }
          else if ( v61 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v62) = 4;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v62,
                2,
                58,
                (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v62) = 3;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v62,
              3,
              59,
              (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
              v61);
          }
        }
        v63 = ((__int64 (__fastcall *)(__int64))qword_140015B60)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1400155D8,
          0LL);
        ProcLibCapChange(a1, v56, v60, 100LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1400155D8);
        if ( (*(_QWORD *)(a1 + 280) & 0x10FF300000LL) == 0 )
        {
LABEL_176:
          if ( !_bittest64((const signed __int64 *)(a1 + 280), 0x33u) )
            goto LABEL_187;
          if ( !byte_140015FC0 )
            goto LABEL_187;
          if ( ++dword_140015FB8 != dword_1400155D4 )
            goto LABEL_187;
          RegisterWpsInterface = PepAllocateRegisterWpsInterface(a1);
          if ( RegisterWpsInterface >= 0 )
          {
            _InterlockedExchange(&dword_140015FBC, 1);
            RegisterWpsInterface = PepQueryUpdateWpsTable(a1);
            if ( RegisterWpsInterface >= 0 )
            {
LABEL_187:
              if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
              {
                if ( ++dword_140015EE0 == dword_1400155D4 )
                {
                  v70 = CmRegisterMachineHiveLoadedNotification(
                          HwDebugDiagnosticRegistryHandler,
                          0LL,
                          v82,
                          &WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
                  if ( v70 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v71) = 2;
                    WPP_RECORDER_SF_d(
                      WPP_GLOBAL_Control->DeviceExtension,
                      v71,
                      4,
                      62,
                      (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
                      v70);
                  }
                }
              }
              if ( _bittest64((const signed __int64 *)(a1 + 280), 0x25u) )
              {
                if ( ++dword_140015EDC == dword_1400155D4 )
                  InitializeEnergyEstimation();
              }
              if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) == 0 )
                goto LABEL_200;
              if ( ((__int64 (__fastcall *)(__int64))qword_140015888)(a1) != 0x800000000000LL )
                *(_QWORD *)(a1 + 280) &= ~0x800000000000uLL;
              if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) != 0 )
              {
                EmiInit(a1);
              }
              else
              {
LABEL_200:
                if ( (Globals & 0x800000000000LL) != 0 )
                {
                  v72 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          a1);
                  v73 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                          WdfDriverGlobals,
                          v72);
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3352))(
                    WdfDriverGlobals,
                    v73);
                }
              }
              AcquireBiosPpmControl(a1);
              v8 = 0;
              goto LABEL_203;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v69 = 61;
              goto LABEL_182;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v69 = 60;
LABEL_182:
            LOBYTE(v68) = 3;
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              v68,
              3,
              v69,
              (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
              RegisterWpsInterface);
          }
          *(_QWORD *)(a1 + 280) &= ~0x8000000000000uLL;
          byte_140015FC0 = 0;
          goto LABEL_187;
        }
        if ( *(_QWORD *)(a1 + 552) )
        {
          v64 = RegisterXsdDomain(a1);
        }
        else
        {
          if ( !byte_140015B70 )
          {
LABEL_166:
            if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
            {
              v65 = *(_QWORD *)(a1 + 280);
              if ( (v65 & 0x1000000000LL) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_140015B50)(a1);
              }
              else if ( (v65 & 0x8000000) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_140015B48)(a1);
              }
              else if ( (v65 & 0x80000000) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_140015B40)(a1);
              }
              else
              {
                v66 = (void (__fastcall *)(__int64))qword_140015B28;
                if ( (*(_QWORD *)(a1 + 280) & 0x73300000LL) == 0 )
                  v66 = (void (__fastcall *)(__int64))qword_140015B38;
                v66(a1);
              }
            }
            goto LABEL_176;
          }
          v64 = v63 == 0;
        }
        if ( !v64 )
          goto LABEL_176;
        goto LABEL_166;
      }
      v50 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 296) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 424) == 1 && (v50 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 296) = SetPerfStateIO;
      v50 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 312) = SetPerfStateIOHidden;
    }
    else
    {
      v50 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 280) = v50;
    goto LABEL_116;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v49 = 53;
    Size = v47;
LABEL_104:
    LOBYTE(v48) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v48,
      3,
      v49,
      (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
      Size);
  }
LABEL_203:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400155E0);
LABEL_204:
  if ( v3 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_206:
  if ( (*(_DWORD *)(a1 + 272) & 0x7F077 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, (int)&PPM_ETW_IDLE_STATES_ERROR, (int)&PPM_ETW_IDLE_STATES_ERROR_HV, 0, 0LL);
  v74 = *(_QWORD *)(a1 + 280);
  v75 = *(_DWORD *)(a1 + 272) & 0x40000000;
  if ( (v74 & 0x40000000) == 0 )
    v75 = *(_DWORD *)(a1 + 272) & 0x70000000;
  if ( (v75 & (unsigned int)v74) != (unsigned __int64)v75 )
    ProcLibTraceProcessorSpecificEvent(a1, (int)&PPM_ETW_PERF_STATES_ERROR, (int)&PPM_ETW_PERF_STATES_ERROR_HV, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x3300000 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(
      a1,
      (int)&PPM_ETW_THROTTLE_STATES_ERROR,
      (int)&PPM_ETW_THROTTLE_STATES_ERROR_HV,
      0,
      0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x80000000 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, (int)&PPM_ETW_PCC_ERROR, (int)&PPM_ETW_PCC_ERROR_HV, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x8000000 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, (int)&PPM_ETW_CPC_ERROR, (int)&PPM_ETW_CPC_ERROR_HV, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v8;
}
