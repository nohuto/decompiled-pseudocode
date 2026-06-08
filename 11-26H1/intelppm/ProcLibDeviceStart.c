/*
 * XREFs of ProcLibDeviceStart @ 0x140032614
 * Callers:
 *     EvtDevicePrepareHardware @ 0x14002CCF0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x14000318C (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x14000554C (WPP_RECORDER_SF_d.c)
 *     AcquireBiosPpmControl @ 0x140005EEC (AcquireBiosPpmControl.c)
 *     WPP_RECORDER_SF_DDDDDDDDDDD @ 0x14000B654 (WPP_RECORDER_SF_DDDDDDDDDDD.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     InitAcpiLegacyPcc @ 0x140027008 (InitAcpiLegacyPcc.c)
 *     InitAcpiPerfStates @ 0x140027624 (InitAcpiPerfStates.c)
 *     InitializeEnergyEstimation @ 0x140027BAC (InitializeEnergyEstimation.c)
 *     InitAcpiProcessorDomains @ 0x140029B60 (InitAcpiProcessorDomains.c)
 *     InitAcpiCpc @ 0x14002DDA0 (InitAcpiCpc.c)
 *     AcpiEval_PDC @ 0x14002EBD8 (AcpiEval_PDC.c)
 *     AcquireAcpiInterfaces @ 0x14003115C (AcquireAcpiInterfaces.c)
 *     RegisterXsdDomain @ 0x140033C40 (RegisterXsdDomain.c)
 *     ValidatePerfDomainSymmetry @ 0x140035978 (ValidatePerfDomainSymmetry.c)
 *     InitPepIdleStates @ 0x140039D3C (InitPepIdleStates.c)
 *     InitAcpiThrottleStates @ 0x14003B1EC (InitAcpiThrottleStates.c)
 *     EmiInit @ 0x14003BEF4 (EmiInit.c)
 *     PepAllocateRegisterWpsInterface @ 0x14003BFB8 (PepAllocateRegisterWpsInterface.c)
 *     PepQueryUpdateWpsTable @ 0x14003C200 (PepQueryUpdateWpsTable.c)
 *     InitPepPerfStates @ 0x14003C778 (InitPepPerfStates.c)
 *     InitPep @ 0x14003D440 (InitPep.c)
 *     QueryPepCapabilites @ 0x14003DA60 (QueryPepCapabilites.c)
 *     AcpiEval_OSC @ 0x140042F0C (AcpiEval_OSC.c)
 *     AcpiEval_TPC @ 0x140043094 (AcpiEval_TPC.c)
 *     AcpiEval_PPC @ 0x14004336C (AcpiEval_PPC.c)
 *     ProcLibCapChange @ 0x1400436DC (ProcLibCapChange.c)
 *     ProcLibTraceSummary2 @ 0x140043EAC (ProcLibTraceSummary2.c)
 *     EnumerateControlMethods @ 0x1400478AC (EnumerateControlMethods.c)
 *     InitAcpiCStates @ 0x140047B54 (InitAcpiCStates.c)
 *     InitAcpiLpiStates @ 0x140047F20 (InitAcpiLpiStates.c)
 */

__int64 __fastcall ProcLibDeviceStart(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // r13d
  int v4; // edx
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // ebx
  NTSTATUS v8; // eax
  __int64 v9; // rax
  int v10; // eax
  const wchar_t *v11; // rax
  PIO_WORKITEM WorkItem; // rax
  int v13; // edx
  __int64 v14; // r8
  int v15; // eax
  int v16; // edx
  int v17; // ebx
  int inited; // eax
  int v19; // eax
  int PepCapabilites; // eax
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  unsigned __int16 v34; // r9
  __int64 v35; // rcx
  void (__fastcall *v36)(_QWORD, _QWORD); // rax
  void (__fastcall *v37)(_QWORD); // rax
  int v38; // ebx
  int v39; // eax
  unsigned int v40; // edi
  int v41; // eax
  int v42; // edx
  int v43; // eax
  unsigned int v44; // ebx
  int v45; // eax
  int v46; // edx
  int v47; // esi
  char v48; // al
  __int64 v49; // rax
  void (__fastcall *v50)(__int64); // rax
  int RegisterWpsInterface; // eax
  unsigned __int16 v52; // r9
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  unsigned int v57; // ecx
  int Type; // [rsp+28h] [rbp-E0h]
  ULONG Size[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizea[2]; // [rsp+30h] [rbp-D8h]
  ULONG Sizeb[2]; // [rsp+30h] [rbp-D8h]
  int *v63; // [rsp+88h] [rbp-80h] BYREF
  int v64; // [rsp+90h] [rbp-78h] BYREF
  __int64 v65; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v66[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v67; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-48h]
  _QWORD v69[3]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v70; // [rsp+E0h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+F0h] [rbp-18h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+100h] [rbp-8h] BYREF
  _OWORD v73[3]; // [rsp+110h] [rbp+8h] BYREF
  int v74; // [rsp+140h] [rbp+38h]
  wchar_t v75; // [rsp+144h] [rbp+3Ch]

  v66[0] = 3538996LL;
  LODWORD(v68) = 0;
  v74 = *(_DWORD *)L"re";
  v75 = aRegistryMachin_0[26];
  v70 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  v66[1] = v73;
  v3 = 0;
  PreviousAffinity = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  Affinity = 0LL;
  v64 = 0;
  v69[0] = 1LL;
  v73[0] = *(_OWORD *)L"\\Registry\\Machine\\Software";
  v69[2] = 16LL;
  *(_QWORD *)(a1 + 264) = Globals[0];
  *(_QWORD *)(a1 + 280) = Globals[0];
  *(_QWORD *)(a1 + 272) = 0LL;
  v69[1] = &v70;
  v73[1] = *(_OWORD *)L"y\\Machine\\Software";
  v73[2] = *(_OWORD *)L"e\\Software";
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v2,
         0LL,
         2703744LL,
         0LL,
         v69,
         0LL,
         0LL) >= 0 )
  {
    if ( DWORD1(v70) )
    {
      *(_DWORD *)(a1 + 188) = DWORD1(v70);
      *(_BYTE *)(a1 + 185) = BYTE8(v70);
      *(_BYTE *)(a1 + 184) = 1;
      *(_WORD *)(a1 + 186) = 0x2000;
      *(_DWORD *)(a1 + 192) = 0;
    }
  }
  else
  {
    v70 = 0LL;
    HIDWORD(v70) = -1;
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
  *(_DWORD *)(a1 + 48) = HIDWORD(v70);
  *(_DWORD *)(a1 + 52) = v70;
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 56) = -1;
  v6 = ((__int64 (__fastcall *)(__int64))qword_140019728)(a1);
  v7 = v6;
  if ( v6 < 0 )
  {
    *(_QWORD *)(a1 + 280) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Size[0] = v6;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x21u,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        *(_QWORD *)Size);
    }
    goto LABEL_206;
  }
  if ( *v5 == -1 )
  {
    if ( _bittest64(Globals, 0x2Du) )
    {
      *(_DWORD *)(a1 + 80) = dword_140019AC8;
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFC7FFFFFFFFuLL;
    }
  }
  else
  {
    v8 = IoSetDevicePropertyData(
           *(PDEVICE_OBJECT *)(a1 + 8),
           &PROCESSOR_NUMBER_PKEY,
           0,
           (ULONG)0,
           (DEVPROPTYPE)7,
           (ULONG)4,
           (PVOID)(a1 + 56));
    if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizea[0] = v8;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4u,
        0x22u,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        *(_QWORD *)Sizea);
    }
    KeProcessorGroupAffinity(&Affinity, (unsigned int)*v5);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v3 = 1;
  }
  *((_QWORD *)&v67 + 1) = &DEVPKEY_Device_BiosDeviceName;
  v68 = 0LL;
  LODWORD(v67) = 24;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *, __int64, _QWORD, __int64 *, int *))(WdfFunctions_01015 + 3472))(
          WdfDriverGlobals,
          v9,
          &v67,
          512LL,
          0LL,
          &v65,
          &v64);
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v10;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x23u,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        *(_QWORD *)Sizeb);
    }
    v11 = L"Unknown";
  }
  else
  {
    v11 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v65,
                             0LL);
  }
  *(_QWORD *)(a1 + 64) = v11;
  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  *(_QWORD *)(a1 + 1160) = WorkItem;
  *(_BYTE *)(a1 + 1169) = 1;
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        4,
        36,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
    }
    v7 = -1073741670;
    goto LABEL_204;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1400191B0,
    0LL);
  v63 = 0LL;
  if ( qword_140019358 )
  {
    v15 = AcpiEval_OSC(a1, qword_140019358, v14, &v63);
    if ( v15 >= 0 )
    {
      v17 = *v63;
      if ( (*v63 & 0xE) != 0 )
      {
        if ( (v17 & 2) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            1,
            37,
            (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
        }
        if ( (v17 & 4) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDDDDDDDDD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int8 *)(qword_140019358 + 13),
            *(unsigned __int8 *)(qword_140019358 + 12),
            *(unsigned __int8 *)(qword_140019358 + 11),
            Type);
        if ( (v17 & 8) != 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = *(ULONG *)(qword_140019358 + 16);
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0x27u,
            (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
            *(_QWORD *)Sizeb);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 88) = v63;
      }
      goto LABEL_39;
    }
    if ( v15 == -1073741772 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          2,
          40,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v15;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x29u,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( qword_140019350 )
    AcpiEval_PDC(a1, (const void *)qword_140019350, word_140019360);
LABEL_39:
  EnumerateControlMethods(a1, a1 + 1104);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    Sizeb[0] = *(ULONG *)(a1 + 1104);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      3u,
      0x2Au,
      (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
      *(_QWORD *)Sizeb);
  }
  if ( (*(_QWORD *)(a1 + 280) & 0x8111200000E00LL) != 0 )
  {
    inited = InitPep(a1);
    if ( inited < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = inited;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Bu,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          *(_QWORD *)Sizeb);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFF7EEEDFFFFF1FFuLL;
    }
  }
  if ( byte_140019B90 )
    *(_QWORD *)(a1 + 280) &= ~0x400uLL;
  if ( (*(_QWORD *)(a1 + 280) & 0x20E0000000000LL) != 0 )
  {
    v19 = InitAcpiLpiStates(a1);
    if ( v19 >= 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFDFFF80D88uLL;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v19;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Cu,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  if ( (*(_QWORD *)(a1 + 280) & 0x8111200000E00LL) != 0 )
  {
    PepCapabilites = QueryPepCapabilites(a1);
    if ( PepCapabilites < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = PepCapabilites;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Du,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          *(_QWORD *)Sizeb);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFF7EEEDFFFFF1FFuLL;
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x7F077LL) != 0 )
  {
    v21 = InitAcpiCStates(a1);
    if ( v21 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      Sizeb[0] = v21;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x2Eu,
        (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
        *(_QWORD *)Sizeb);
    }
  }
  v22 = *(_QWORD *)(a1 + 280);
  if ( (v22 & 0x7F077) == 0 )
  {
    v22 &= ~0x200uLL;
    *(_QWORD *)(a1 + 280) = v22;
  }
  if ( (v22 & 0x200000200LL) != 0 )
  {
    v23 = InitPepIdleStates(a1);
    if ( v23 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v23;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x2Fu,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          *(_QWORD *)Sizeb);
      }
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFDFFFFFDFFuLL;
    }
  }
  v24 = *(_QWORD *)(a1 + 280);
  if ( (v24 & 0x1000000000LL) != 0 )
  {
    v25 = InitPepPerfStates(a1);
    v26 = *(_QWORD *)(a1 + 280);
    if ( v25 >= 0 )
    {
      v24 = v26 & 0xFFFFFFFF04CFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v24;
    }
    else
    {
      v24 = v26 & 0xFFFFFFEFFFFFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v24;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v25;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x30u,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          *(_QWORD *)Sizeb);
        v24 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v24 & 0x8000000) != 0 )
  {
    v27 = InitAcpiCpc(a1);
    v28 = *(_QWORD *)(a1 + 280);
    if ( v27 >= 0 )
    {
      v24 = v28 & 0xFFFFFFFF0CCFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v24;
    }
    else
    {
      v24 = v28 & 0xFFFFFFFFF7FFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v24;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v27;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x31u,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          *(_QWORD *)Sizeb);
        v24 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v24 & 0x80000000) != 0 )
  {
    v29 = InitAcpiLegacyPcc((_QWORD *)a1);
    v30 = *(_QWORD *)(a1 + 280);
    if ( v29 >= 0 )
    {
      v24 = v30 & 0xFFFFFFFF8CCFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v24;
    }
    else
    {
      v24 = v30 & 0xFFFFFFFF7FFFFFFFuLL;
      *(_QWORD *)(a1 + 280) = v24;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v29;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x32u,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          *(_QWORD *)Sizeb);
        v24 = *(_QWORD *)(a1 + 280);
      }
    }
  }
  if ( (v24 & 0x70000000) != 0 )
  {
    v31 = InitAcpiPerfStates(a1);
    if ( v31 < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFF8FFFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v31;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x33u,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 280) & 0x3300000) != 0 )
  {
    v32 = InitAcpiThrottleStates(a1);
    if ( v32 < 0 )
    {
      *(_QWORD *)(a1 + 280) &= 0xFFFFFFFFFCCFFFFFuLL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        Sizeb[0] = v32;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x34u,
          (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
          *(_QWORD *)Sizeb);
      }
    }
  }
  if ( !qword_140019368 || (v33 = qword_140019368(a1), v7 = v33, v33 >= 0) )
  {
    v35 = *(_QWORD *)(a1 + 280);
    if ( (v35 & 0x60000000) != 0 && *(_BYTE *)(a1 + 424) == 127 )
    {
      if ( (v35 & 0x20000000) != 0 )
      {
        *(_QWORD *)(a1 + 296) = qword_140019388;
        *(_QWORD *)(a1 + 328) = qword_1400193B0;
        *(_QWORD *)(a1 + 312) = qword_140019398;
      }
      if ( (v35 & 0x40000000) == 0 )
      {
LABEL_116:
        if ( (v35 & 0x4000000) != 0 )
          *(_QWORD *)(a1 + 336) = qword_1400193B8;
        if ( (v35 & 0xA8000000) != 0 )
        {
          *(_QWORD *)(a1 + 352) = qword_1400193C8;
          *(_QWORD *)(a1 + 360) = qword_1400193D0;
        }
        if ( (v35 & 0x2000000) != 0 && *(_BYTE *)(a1 + 480) == 127 )
        {
          *(_QWORD *)(a1 + 304) = qword_140019390;
          *(_QWORD *)(a1 + 320) = qword_1400193A0;
        }
        else if ( *(_BYTE *)(a1 + 480) == 1 && (v35 & 0x1100000) != 0 )
        {
          *(_QWORD *)(a1 + 304) = SetPerfStateIO;
          *(_QWORD *)(a1 + 320) = SetPerfStateIOHidden;
        }
        else
        {
          *(_QWORD *)(a1 + 280) = v35 & 0xFFFFFFFFFCCFFFFFuLL;
        }
        if ( qword_1400193C0 )
          *(_QWORD *)(a1 + 344) = qword_1400193C0;
        InitAcpiProcessorDomains(a1);
        if ( (*(_DWORD *)(a1 + 280) & 0x7B07F070) != 0 )
        {
          v7 = AcquireAcpiInterfaces(a1);
          if ( v7 < 0 )
          {
            v36 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 176);
            if ( v36 )
              v36(*(_QWORD *)(a1 + 8), AcpiNotifyCallback);
            v37 = *(void (__fastcall **)(_QWORD))(a1 + 120);
            if ( v37 )
              v37(*(_QWORD *)(a1 + 104));
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_203;
            v34 = 54;
            Sizeb[0] = v7;
            goto LABEL_104;
          }
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208),
          0LL);
        v38 = ((__int64 (__fastcall *)(__int64))qword_1400196F0)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 208));
        if ( v38 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          Sizeb[0] = v38;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x37u,
            (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
            *(_QWORD *)Sizeb);
        }
        if ( dword_140019830 == dword_1400191A4
          && _bittest64((const signed __int64 *)(a1 + 280), 0x30u)
          && qword_1400194A8 )
        {
          qword_1400194A8(a1);
        }
        v39 = *(_DWORD *)(a1 + 280);
        v40 = 0;
        LODWORD(v63) = 0;
        if ( (v39 & 0x70000000) != 0 )
        {
          v41 = AcpiEval_PPC(a1, &v63);
          if ( v41 >= 0 )
          {
            v40 = (unsigned int)v63;
          }
          else if ( v41 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v42) = 4;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v42,
                2,
                56,
                (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizeb[0] = v41;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x39u,
              (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v43 = *(_DWORD *)(a1 + 280);
        v44 = 0;
        LODWORD(v63) = 0;
        if ( (v43 & 0x3000000) != 0 )
        {
          v45 = AcpiEval_TPC(a1, &v63);
          if ( v45 >= 0 )
          {
            v44 = (unsigned int)v63;
          }
          else if ( v45 == -1073741772 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v46) = 4;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v46,
                2,
                58,
                (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids);
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            Sizeb[0] = v45;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              0x3Bu,
              (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
              *(_QWORD *)Sizeb);
          }
        }
        v47 = ((__int64 (__fastcall *)(__int64))qword_140019730)(a1);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1400191A8,
          0LL);
        ProcLibCapChange(a1, v40, v44, 100LL);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
          WdfDriverGlobals,
          qword_1400191A8);
        if ( (*(_QWORD *)(a1 + 280) & 0x10FF300000LL) == 0 )
        {
LABEL_176:
          if ( !_bittest64((const signed __int64 *)(a1 + 280), 0x33u) )
            goto LABEL_187;
          if ( !byte_140019B90 )
            goto LABEL_187;
          if ( ++dword_140019B88 != dword_1400191A4 )
            goto LABEL_187;
          RegisterWpsInterface = PepAllocateRegisterWpsInterface(a1);
          if ( RegisterWpsInterface >= 0 )
          {
            _InterlockedExchange(&dword_140019B8C, 1);
            RegisterWpsInterface = PepQueryUpdateWpsTable(a1);
            if ( RegisterWpsInterface >= 0 )
            {
LABEL_187:
              if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
              {
                if ( ++dword_140019AB0 == dword_1400191A4 )
                {
                  v53 = CmRegisterMachineHiveLoadedNotification(
                          HwDebugDiagnosticRegistryHandler,
                          0LL,
                          v66,
                          &HwDebugHiveCallbackRegistrationHandle);
                  if ( v53 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    Sizeb[0] = v53;
                    WPP_RECORDER_SF_d(
                      (__int64)WPP_GLOBAL_Control->DeviceExtension,
                      2u,
                      4u,
                      0x3Eu,
                      (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
                      *(_QWORD *)Sizeb);
                  }
                }
              }
              if ( _bittest64((const signed __int64 *)(a1 + 280), 0x25u) )
              {
                if ( ++dword_140019AAC == dword_1400191A4 )
                  InitializeEnergyEstimation();
              }
              if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) == 0 )
                goto LABEL_200;
              if ( ((__int64 (__fastcall *)(__int64))qword_140019458)(a1) != 0x800000000000LL )
                *(_QWORD *)(a1 + 280) &= ~0x800000000000uLL;
              if ( (*(_QWORD *)(a1 + 280) & 0x800000000000LL) != 0 )
              {
                EmiInit(a1);
              }
              else
              {
LABEL_200:
                if ( (Globals[0] & 0x800000000000LL) != 0 )
                {
                  v54 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(
                          WdfDriverGlobals,
                          a1);
                  v55 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 736))(
                          WdfDriverGlobals,
                          v54);
                  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3352))(
                    WdfDriverGlobals,
                    v55);
                }
              }
              AcquireBiosPpmControl(a1);
              v7 = 0;
              goto LABEL_203;
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v52 = 61;
              goto LABEL_182;
            }
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v52 = 60;
LABEL_182:
            Sizeb[0] = RegisterWpsInterface;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              3u,
              v52,
              (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
              *(_QWORD *)Sizeb);
          }
          *(_QWORD *)(a1 + 280) &= ~0x8000000000000uLL;
          byte_140019B90 = 0;
          goto LABEL_187;
        }
        if ( *(_QWORD *)(a1 + 552) )
        {
          v48 = RegisterXsdDomain(a1);
        }
        else
        {
          if ( !byte_140019740 )
          {
LABEL_166:
            if ( (int)ValidatePerfDomainSymmetry(a1) >= 0 )
            {
              v49 = *(_QWORD *)(a1 + 280);
              if ( (v49 & 0x1000000000LL) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_140019720)(a1);
              }
              else if ( (v49 & 0x8000000) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_140019718)(a1);
              }
              else if ( (v49 & 0x80000000) != 0 )
              {
                ((void (__fastcall *)(__int64))qword_140019710)(a1);
              }
              else
              {
                v50 = (void (__fastcall *)(__int64))qword_1400196F8;
                if ( (*(_QWORD *)(a1 + 280) & 0x73300000LL) == 0 )
                  v50 = (void (__fastcall *)(__int64))qword_140019708;
                v50(a1);
              }
            }
            goto LABEL_176;
          }
          v48 = v47 == 0;
        }
        if ( !v48 )
          goto LABEL_176;
        goto LABEL_166;
      }
      v35 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 296) = SetPerfStateFFH;
    }
    else if ( *(_BYTE *)(a1 + 424) == 1 && (v35 & 0x10000000) != 0 )
    {
      *(_QWORD *)(a1 + 296) = SetPerfStateIO;
      v35 &= ~0x400000uLL;
      *(_QWORD *)(a1 + 312) = SetPerfStateIOHidden;
    }
    else
    {
      v35 &= 0xFFFFFFFF8FFFFFFFuLL;
    }
    *(_QWORD *)(a1 + 280) = v35;
    goto LABEL_116;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v34 = 53;
    Sizeb[0] = v33;
LABEL_104:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v34,
      (__int64)&WPP_c6064094ced332a4201bf8f4f3337742_Traceguids,
      *(_QWORD *)Sizeb);
  }
LABEL_203:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400191B0);
LABEL_204:
  if ( v3 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
LABEL_206:
  if ( (*(_DWORD *)(a1 + 272) & 0x7F077 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x7F077) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_IDLE_STATES_ERROR, &PPM_ETW_IDLE_STATES_ERROR_HV, 0, 0LL);
  v56 = *(_QWORD *)(a1 + 280);
  v57 = *(_DWORD *)(a1 + 272) & 0x40000000;
  if ( (v56 & 0x40000000) == 0 )
    v57 = *(_DWORD *)(a1 + 272) & 0x70000000;
  if ( (v57 & (unsigned int)v56) != (unsigned __int64)v57 )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PERF_STATES_ERROR, &PPM_ETW_PERF_STATES_ERROR_HV, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x3300000 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x3300000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_THROTTLE_STATES_ERROR, &PPM_ETW_THROTTLE_STATES_ERROR_HV, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x80000000 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x80000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_PCC_ERROR, &PPM_ETW_PCC_ERROR_HV, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 272) & 0x8000000 & *(_QWORD *)(a1 + 280)) != (*(_DWORD *)(a1 + 272) & 0x8000000) )
    ProcLibTraceProcessorSpecificEvent(a1, &PPM_ETW_CPC_ERROR, &PPM_ETW_CPC_ERROR_HV, 0, 0LL);
  ProcLibTraceSummary2(a1, 0LL);
  return (unsigned int)v7;
}
