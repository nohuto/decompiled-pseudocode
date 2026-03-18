/*
 * XREFs of DpiAddDevice @ 0x14023C1E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x140056288 (DxgkDiagCalcDuration1us.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x14006AAF4 (McTemplateK0ppq_EtwWriteTransfer.c)
 *     wcsncmp_0 @ 0x14006E467 (wcsncmp_0.c)
 *     DpiGetDeviceRegistryPaths @ 0x140087478 (DpiGetDeviceRegistryPaths.c)
 *     DpiDxgkDdiLinkDevice @ 0x140094418 (DpiDxgkDdiLinkDevice.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DpiDxgkDdiExchangePreStartInfo @ 0x140192874 (DpiDxgkDdiExchangePreStartInfo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x140194A18 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1401B4074 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401B4170 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1401B43B8 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     DpiFdoInitializeFdo @ 0x140243960 (DpiFdoInitializeFdo.c)
 *     DpiFdoDetectVgaDeviceInCapabilities @ 0x14024B5F8 (DpiFdoDetectVgaDeviceInCapabilities.c)
 *     DpiGetAgpStatus @ 0x14024BA4C (DpiGetAgpStatus.c)
 *     DpiSetDeviceUsageType @ 0x14024C19C (DpiSetDeviceUsageType.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1402537D8 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1402549DC (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x140254F00 (DpiLdaUnLinkDeviceFromChain.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x14031B9EC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1403914A0 (DpiReadPnpRegistryValue.c)
 *     DpEvalAcpiMethod @ 0x1403B1CC0 (DpEvalAcpiMethod.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1403EF980 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     DpiFdoDetectPostDevice @ 0x1404023B8 (DpiFdoDetectPostDevice.c)
 *     DpiGetDevicePropertyString @ 0x14041357C (DpiGetDevicePropertyString.c)
 *     DpiDxgkDdiRemoveDevice @ 0x14041A7F0 (DpiDxgkDdiRemoveDevice.c)
 *     DxgkGetDeviceFamily @ 0x14041CFB4 (DxgkGetDeviceFamily.c)
 *     DpiQueryBusInterface @ 0x140423E24 (DpiQueryBusInterface.c)
 *     DpiFdoResetFdo @ 0x140424504 (DpiFdoResetFdo.c)
 *     DpiDxgkDdiAddDevice @ 0x140430C64 (DpiDxgkDdiAddDevice.c)
 */

__int64 __fastcall DpiAddDevice(struct _DRIVER_OBJECT *ClientIdentificationAddress, struct _DEVICE_OBJECT *a2)
{
  int v2; // r12d
  char *DeviceExtension; // rbx
  char *v5; // r14
  char v6; // r15
  char v7; // si
  _DWORD *DriverObjectExtension; // rax
  __int64 v9; // r8
  __int64 v10; // r13
  UNICODE_STRING *p_DriverName; // r15
  wchar_t *Buffer; // rdi
  wchar_t *v13; // rdi
  struct _DEVICE_OBJECT *started; // rsi
  void *v15; // rdi
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  _DWORD *v18; // rcx
  void (__fastcall *v19)(_QWORD); // rax
  void (__fastcall *v20)(_QWORD); // rax
  void (__fastcall *v21)(_QWORD); // rax
  void (__fastcall *v22)(_QWORD); // rax
  void *v23; // rcx
  struct _ERESOURCE *v24; // rcx
  _DWORD *v25; // rcx
  struct _DEVICE_OBJECT *v26; // rcx
  int v27; // eax
  ULONG v28; // edi
  __int64 v29; // rdx
  int v30; // eax
  char v31; // al
  struct _DEVICE_OBJECT *v32; // rdi
  PDEVICE_OBJECT v33; // rax
  int v34; // eax
  struct _DEVICE_OBJECT *v35; // rcx
  int DeviceRegistryPaths; // eax
  char *v37; // rdi
  bool v38; // al
  struct _DEVICE_OBJECT *v39; // rcx
  int v40; // eax
  int v41; // ecx
  _DWORD *v42; // rdi
  GUID *v43; // rdi
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  struct _DEVICE_OBJECT *v45; // rsi
  __int64 Pool2; // rax
  unsigned __int16 *v47; // rcx
  int v48; // edx
  int v49; // edi
  bool v50; // al
  __int64 v51; // rdi
  int v52; // eax
  unsigned __int8 v53; // dl
  _BYTE *v54; // rcx
  char v55; // r12
  struct _DEVICE_OBJECT *v56; // rdi
  char v57; // al
  unsigned int v58; // edx
  char **v59; // r9
  __int16 v60; // cx
  char *v61; // rax
  signed __int64 v62; // r8
  const wchar_t **v63; // r9
  __int16 v64; // cx
  const wchar_t *v65; // rax
  __int64 v66; // r8
  _DWORD *v67; // rdx
  unsigned __int64 v68; // r8
  bool v69; // zf
  char **v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  bool v75; // cl
  int v76; // edi
  int v77; // r15d
  int v78; // eax
  _QWORD *v79; // rdx
  PVOID *v80; // rax
  __int64 DiagnosticInfoArgs; // rax
  __int64 v82; // rdi
  unsigned int v83; // ebx
  struct _DEVICE_OBJECT *v84; // r14
  int v85; // eax
  __int64 v86; // rcx
  __int64 v87; // r8
  BOOLEAN Exclusive[8]; // [rsp+28h] [rbp-D8h]
  char v90; // [rsp+50h] [rbp-B0h]
  char v91; // [rsp+51h] [rbp-AFh]
  char v92; // [rsp+52h] [rbp-AEh]
  char v93; // [rsp+53h] [rbp-ADh]
  char v94; // [rsp+54h] [rbp-ACh]
  char v95; // [rsp+55h] [rbp-ABh]
  char v96; // [rsp+56h] [rbp-AAh]
  char v97; // [rsp+57h] [rbp-A9h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-A8h] BYREF
  int v99; // [rsp+60h] [rbp-A0h]
  char v100; // [rsp+64h] [rbp-9Ch]
  char v101; // [rsp+65h] [rbp-9Bh]
  bool v102; // [rsp+66h] [rbp-9Ah]
  char v103; // [rsp+67h] [rbp-99h]
  int v104; // [rsp+68h] [rbp-98h]
  char v105; // [rsp+6Ch] [rbp-94h]
  char v106; // [rsp+6Dh] [rbp-93h]
  char v107; // [rsp+6Eh] [rbp-92h] BYREF
  char v108; // [rsp+6Fh] [rbp-91h]
  ULONG ResultLength; // [rsp+70h] [rbp-90h] BYREF
  PDEVICE_OBJECT TargetDevice; // [rsp+78h] [rbp-88h]
  void *Source1; // [rsp+80h] [rbp-80h] BYREF
  __int64 v112; // [rsp+88h] [rbp-78h] BYREF
  PDRIVER_OBJECT DriverObject; // [rsp+90h] [rbp-70h]
  ULONG Type; // [rsp+98h] [rbp-68h] BYREF
  int v115; // [rsp+A0h] [rbp-60h]
  int v116; // [rsp+A4h] [rbp-5Ch]
  const wchar_t *v117; // [rsp+A8h] [rbp-58h] BYREF
  int v118; // [rsp+B0h] [rbp-50h]
  _QWORD v119[2]; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING String1; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING v121; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING v122; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v123; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v124[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v125; // [rsp+118h] [rbp+18h] BYREF
  __int64 v126; // [rsp+120h] [rbp+20h]
  __int64 v127; // [rsp+128h] [rbp+28h]
  _QWORD v128[10]; // [rsp+130h] [rbp+30h] BYREF
  int v129; // [rsp+180h] [rbp+80h]
  int v130; // [rsp+184h] [rbp+84h]
  int v131; // [rsp+188h] [rbp+88h]
  int v132; // [rsp+18Ch] [rbp+8Ch]
  const wchar_t *v133; // [rsp+190h] [rbp+90h]
  _QWORD v134[14]; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+210h] [rbp+110h] BYREF
  __int64 v136; // [rsp+220h] [rbp+120h]
  __int64 v137; // [rsp+228h] [rbp+128h] BYREF
  int v138; // [rsp+230h] [rbp+130h]
  _DWORD v139[2]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v140; // [rsp+248h] [rbp+148h]
  __int128 v141; // [rsp+250h] [rbp+150h]
  __int64 v142; // [rsp+260h] [rbp+160h]
  int v143; // [rsp+268h] [rbp+168h]
  int v144; // [rsp+26Ch] [rbp+16Ch]
  int v145; // [rsp+270h] [rbp+170h]
  int v146; // [rsp+274h] [rbp+174h]
  int v147; // [rsp+278h] [rbp+178h]
  int v148; // [rsp+27Ch] [rbp+17Ch]
  _DWORD VersionInformation[72]; // [rsp+280h] [rbp+180h] BYREF
  __int128 v150; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int128 v151; // [rsp+3B0h] [rbp+2B0h]
  int v152; // [rsp+3C0h] [rbp+2C0h]
  __int128 v153; // [rsp+3C8h] [rbp+2C8h] BYREF
  __int64 v154; // [rsp+3D8h] [rbp+2D8h]
  wchar_t v155; // [rsp+3E0h] [rbp+2E0h]
  wchar_t Str1[20]; // [rsp+3E8h] [rbp+2E8h] BYREF
  _OWORD v157[2]; // [rsp+410h] [rbp+310h] BYREF
  __int64 v158; // [rsp+430h] [rbp+330h]
  wchar_t v159; // [rsp+438h] [rbp+338h]
  _OWORD v160[2]; // [rsp+440h] [rbp+340h] BYREF
  wchar_t v161; // [rsp+460h] [rbp+360h]
  _OWORD v162[2]; // [rsp+468h] [rbp+368h] BYREF
  __int64 v163; // [rsp+488h] [rbp+388h]
  int v164; // [rsp+490h] [rbp+390h]
  _OWORD v165[2]; // [rsp+498h] [rbp+398h] BYREF
  __int64 v166; // [rsp+4B8h] [rbp+3B8h]
  _OWORD v167[4]; // [rsp+4C0h] [rbp+3C0h] BYREF
  int v168; // [rsp+500h] [rbp+400h]
  WCHAR Data[20]; // [rsp+510h] [rbp+410h] BYREF

  TargetDevice = a2;
  DriverObject = ClientIdentificationAddress;
  v112 = 0LL;
  v153 = *(_OWORD *)L"\\Driver\\VGPU";
  LOBYTE(v2) = 0;
  v137 = 0LL;
  v138 = 0;
  DeviceExtension = 0LL;
  v154 = *(_QWORD *)L"VGPU";
  v5 = 0LL;
  v155 = aDriverVgpu[12];
  v6 = 1;
  v95 = 0;
  v160[0] = *(_OWORD *)L"\\Driver\\WddmWarp";
  v123.Buffer = (wchar_t *)&v153;
  v7 = 0;
  v161 = aDriverWddmwarp[16];
  v165[0] = *(_OWORD *)L"\\Driver\\BasicRender";
  String1.Buffer = (wchar_t *)v160;
  v166 = *(_QWORD *)L"der";
  v119[1] = v165;
  v160[1] = *(_OWORD *)L"WddmWarp";
  v159 = aDriverBasicdis[20];
  v124[1] = v157;
  v157[0] = *(_OWORD *)L"\\Driver\\BasicDisplay";
  DeviceObject = 0LL;
  v165[1] = *(_OWORD *)L"BasicRender";
  ResultLength = 0;
  v90 = 1;
  v158 = *(_QWORD *)L"play";
  v99 = v2;
  v157[1] = *(_OWORD *)L"BasicDisplay";
  v93 = 0;
  v97 = 0;
  v162[0] = *(_OWORD *)L"\\Driver\\VirtualRender";
  v108 = 0;
  v163 = *(_QWORD *)L"ender";
  v94 = 0;
  v92 = 0;
  v103 = 0;
  v105 = 0;
  v101 = 0;
  v106 = 0;
  v91 = 0;
  v107 = 0;
  v96 = 0;
  v102 = 0;
  v100 = 0;
  v104 = 3;
  *(_QWORD *)&v123.Length = 1703960LL;
  *(_QWORD *)&String1.Length = 2228256LL;
  v119[0] = 2621478LL;
  v124[0] = 2752552LL;
  v162[1] = *(_OWORD *)L"VirtualRender";
  v164 = *(_DWORD *)L"r";
  v121.Buffer = (wchar_t *)v162;
  v168 = *(_DWORD *)L"r";
  v167[0] = *(_OWORD *)L"\\Driver\\VirtualComputeAccelerator";
  v167[1] = *(_OWORD *)L"VirtualComputeAccelerator";
  v122.Buffer = (wchar_t *)v167;
  *(_QWORD *)&v121.Length = 2883626LL;
  v167[2] = *(_OWORD *)L"omputeAccelerator";
  v167[3] = *(_OWORD *)L"celerator";
  *(_QWORD *)&v122.Length = 4456514LL;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0ppq_EtwWriteTransfer(
      (__int64)ClientIdentificationAddress,
      &EventEnterDpiAddDevice,
      1LL,
      ClientIdentificationAddress,
      a2,
      0);
  v125 = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  v10 = (__int64)DriverObjectExtension;
  if ( !DriverObjectExtension || DriverObjectExtension[4] != 1953656900 || DriverObjectExtension[5] != 1 )
  {
    LODWORD(started) = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    WdLogGlobalForLineNumber = 330;
LABEL_35:
    if ( DeviceObject )
    {
      if ( v93 == 1 )
        DpiFdoResetFdo();
      if ( v5 )
      {
        v17 = (_DWORD *)*((_QWORD *)v5 + 185);
        if ( v17 && v17[2] == 1 )
        {
          ExFreePoolWithTag(v17, 0);
          *((_QWORD *)v5 + 185) = 0LL;
        }
        v18 = (_DWORD *)*((_QWORD *)v5 + 186);
        if ( v18 && v18[2] == 1 )
        {
          ExFreePoolWithTag(v18, 0);
          *((_QWORD *)v5 + 186) = 0LL;
        }
        if ( (_BYTE)v2 == 1 )
          DpiAcpiUnregisterAcpiCallbacks((__int64)DeviceObject);
        v19 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 73);
        if ( v19 )
        {
          v19(*((_QWORD *)v5 + 71));
          memset(v5 + 560, 0, 0x40uLL);
        }
        v20 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 81);
        if ( v20 )
        {
          v20(*((_QWORD *)v5 + 79));
          *((_OWORD *)v5 + 39) = 0LL;
          *((_OWORD *)v5 + 40) = 0LL;
          *((_OWORD *)v5 + 41) = 0LL;
        }
        v21 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 87);
        if ( v21 )
        {
          v21(*((_QWORD *)v5 + 85));
          memset(v5 + 672, 0, 0xB8uLL);
        }
        v22 = (void (__fastcall *)(_QWORD))*((_QWORD *)v5 + 110);
        if ( v22 )
        {
          v22(*((_QWORD *)v5 + 108));
          memset(v5 + 856, 0, 0x58uLL);
        }
        RtlFreeUnicodeString((PUNICODE_STRING)v5 + 32);
        RtlFreeUnicodeString((PUNICODE_STRING)v5 + 33);
        v23 = (void *)*((_QWORD *)v5 + 139);
        if ( v23 )
        {
          ExFreePoolWithTag(v23, 0);
          *((_QWORD *)v5 + 139) = 0LL;
        }
      }
      if ( DeviceExtension )
      {
        v24 = (struct _ERESOURCE *)*((_QWORD *)DeviceExtension + 21);
        if ( v24 )
        {
          if ( v94 == 1 )
            ExDeleteResourceLite(v24);
          v25 = (_DWORD *)*((_QWORD *)DeviceExtension + 21);
          if ( v25[26] == 1 && v25 )
          {
            ExFreePoolWithTag(v25, 0);
            *((_QWORD *)DeviceExtension + 21) = 0LL;
          }
        }
        v26 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 20);
        if ( v26 )
          IoDetachDevice(v26);
      }
      IoDeleteDevice(DeviceObject);
      DeviceObject = 0LL;
    }
    if ( v95 == 1 )
    {
      DpiDxgkDdiRemoveDevice(v10, v112);
    }
    else
    {
      if ( !v6 )
        goto LABEL_309;
      if ( !*(_QWORD *)(v10 + 1344)
        || (DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(1), (v82 = DiagnosticInfoArgs) == 0) )
      {
LABEL_307:
        if ( (_DWORD)started != -1071774664 )
          DxgCreateLiveDumpWithWdLogs(403LL, 2049LL);
        goto LABEL_309;
      }
      v83 = *(_DWORD *)(DiagnosticInfoArgs + 216);
      v84 = TargetDevice;
      *(_QWORD *)DiagnosticInfoArgs = v112;
      if ( (*(int (__fastcall **)(struct _DEVICE_OBJECT *, __int64))(v10 + 1344))(v84, DiagnosticInfoArgs) >= 0 )
      {
        if ( *(_DWORD *)(v82 + 220) > v83 )
          *(_DWORD *)(v82 + 220) = 0;
        DxgCreateLiveDumpWithDriverBlob(
          v84,
          0x1B0u,
          *(int *)(v82 + 8),
          (int)started,
          0LL,
          0LL,
          (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v82);
        v6 = 0;
      }
      DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v82);
    }
    if ( v6 )
      goto LABEL_307;
LABEL_309:
    v76 = v104;
    goto LABEL_310;
  }
  p_DriverName = &DriverObject->DriverName;
  LOBYTE(v9) = 1;
  Buffer = DriverObject->DriverName.Buffer;
  if ( (wchar_t *)RtlFindUnicodeSubstring(&DriverObject->DriverName, v119, v9) == Buffer )
  {
    v7 = 1;
    v92 = 1;
    v105 = 1;
    v101 = 1;
  }
  else if ( RtlCompareUnicodeString(&String1, p_DriverName, 1u) )
  {
    if ( RtlCompareUnicodeString(&v121, p_DriverName, 1u) && RtlCompareUnicodeString(&v122, p_DriverName, 1u) )
    {
      if ( RtlCompareUnicodeString(&v123, p_DriverName, 1u) )
      {
        v13 = DriverObject->DriverName.Buffer;
        if ( (wchar_t *)RtlFindUnicodeSubstring(p_DriverName, v124, 1LL) != v13 )
        {
          *(_DWORD *)&DestinationString.Length = 0;
          v102 = (unsigned int)DxgkGetDeviceFamily(&DestinationString) == 5
              && ((*(_DWORD *)&DestinationString.Length - 192) & 0xFFFFFFFD) == 0;
          v96 = *(_BYTE *)(v10 + 134);
          *(_DWORD *)&DestinationString.Length = 0;
          memset(v134, 0, sizeof(v134));
          v16 = *(_QWORD *)(v10 + 48);
          v134[2] = L"Start";
          LODWORD(v134[1]) = 292;
          v134[3] = &DestinationString;
          LODWORD(v134[4]) = 67108868;
          LODWORD(v134[6]) = 4;
          LODWORD(started) = RtlQueryRegistryValuesEx(0LL, v16, v134, 0LL, 0LL);
          if ( (int)started >= 0 )
          {
            if ( *(_DWORD *)&DestinationString.Length == 3 )
            {
              v7 = 0;
              goto LABEL_70;
            }
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 466;
            LODWORD(started) = -1073741637;
          }
          else
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 455;
          }
LABEL_33:
          LOBYTE(v2) = v99;
LABEL_34:
          v6 = v90;
          goto LABEL_35;
        }
        Source1 = 0LL;
        v103 = 1;
        LODWORD(started) = DpiGetDevicePropertyString(TargetDevice, DevicePropertyHardwareID, (__int64)&ResultLength);
        if ( (int)started < 0 )
        {
          WdLogSingleEntry1(2LL);
          LOBYTE(v2) = v99;
          v6 = 1;
          WdLogGlobalForLineNumber = 383;
          goto LABEL_35;
        }
        v15 = Source1;
        if ( ResultLength >= 0x24 && RtlCompareMemory(Source1, L"ROOT\\BasicDisplay", 0x24uLL) == 36 )
        {
          v92 = 1;
          if ( byte_140168DD2 )
          {
            v90 = 0;
            LODWORD(started) = -1073741637;
            WdLogSingleEntry1(4LL);
            WdLogGlobalForLineNumber = 408;
          }
        }
        if ( v15 )
          ExFreePoolWithTag(v15, 0);
        if ( (int)started < 0 )
          goto LABEL_33;
        v7 = v92;
      }
      else
      {
        v106 = 1;
      }
    }
    else
    {
      v100 = 1;
    }
  }
  else
  {
    v101 = 1;
  }
LABEL_70:
  if ( byte_140169450 && !v7 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 476;
    LODWORD(started) = -1073741637;
    goto LABEL_33;
  }
  v27 = DpiDxgkDdiAddDevice(v10, TargetDevice, &v112);
  LODWORD(started) = v27;
  if ( v27 < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v10 + 144), v27);
    WdLogGlobalForLineNumber = 502;
    goto LABEL_33;
  }
  v95 = 1;
  if ( v112 )
  {
    v29 = *(_QWORD *)(v10 + 616);
    v28 = 6520;
    *(_DWORD *)&DestinationString.Length = 2;
    v104 = 0;
    if ( v29 )
    {
      if ( v92 )
      {
        LODWORD(started) = -1073741637;
        WdLogSingleEntry2(2LL, v29, -1073741637LL);
        WdLogGlobalForLineNumber = 565;
        goto LABEL_33;
      }
      v30 = DpiDxgkDdiLinkDevice(v10, (__int64)TargetDevice, v112, (int *)&v137);
      LODWORD(started) = v30;
      if ( v30 < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v10 + 616), v30);
        WdLogGlobalForLineNumber = 579;
        goto LABEL_33;
      }
      if ( HIDWORD(v137) > 0x100 )
      {
        LODWORD(started) = -1073741756;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 595;
        goto LABEL_33;
      }
      if ( HIDWORD(v137) && !(_BYTE)v138 )
      {
        v28 = 2848;
        *(_DWORD *)&DestinationString.Length = 3;
        v104 = 1;
      }
    }
  }
  else
  {
    v28 = 496;
    *(_DWORD *)&DestinationString.Length = 4;
    v104 = 2;
    if ( v92 )
    {
      LODWORD(started) = -1073741637;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 532;
      goto LABEL_33;
    }
  }
  LODWORD(started) = IoCreateDevice(DriverObject, v28, 0LL, 0x23u, v96 == 0 ? 0x100 : 0, 0, &DeviceObject);
  if ( (int)started < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 635;
    goto LABEL_33;
  }
  v104 |= (unsigned int)DeviceObject & 0xFFFF00;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  *((_DWORD *)DeviceExtension + 5) = *(_DWORD *)&DestinationString.Length;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_QWORD *)DeviceExtension + 3) = DeviceObject;
  *((_QWORD *)DeviceExtension + 4) = DeviceObject;
  *((_QWORD *)DeviceExtension + 5) = v10;
  *((_QWORD *)DeviceExtension + 6) = v112;
  DeviceExtension[480] = v92;
  v31 = v100;
  DeviceExtension[56] = 1;
  DeviceExtension[481] = v31;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  v32 = TargetDevice;
  *((_QWORD *)DeviceExtension + 19) = TargetDevice;
  v33 = IoAttachDeviceToDeviceStack(DeviceObject, v32);
  *((_QWORD *)DeviceExtension + 20) = v33;
  if ( !v33 )
  {
    LODWORD(started) = -1073741810;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 677;
    goto LABEL_33;
  }
  *((_DWORD *)DeviceExtension + 71) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  *((_QWORD *)DeviceExtension + 38) = DpiFdoHandleRemoveDevice;
  if ( !DeviceExtension
    || *((_DWORD *)DeviceExtension + 4) != 1953656900
    || (v34 = *((_DWORD *)DeviceExtension + 5), v34 != 2) && v34 != 3 )
  {
    v55 = 0;
    v37 = 0LL;
    goto LABEL_233;
  }
  v35 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
  v5 = DeviceExtension;
  LODWORD(Source1) = 0;
  wcscpy(Str1, L"ComputeAccelerator");
  Type = 0;
  if ( IoGetDevicePropertyData(v35, &DEVPKEY_Device_Class, 0, 0, 0x28u, Data, (PULONG)&Source1, &Type) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, Data);
    if ( DestinationString.Length >= 0x13u && !wcsncmp_0(Str1, DestinationString.Buffer, 0x12uLL) )
      DeviceExtension[2722] = 1;
  }
  DeviceExtension[2717] = v101;
  DeviceExtension[1153] = v103;
  DeviceExtension[1154] = v105;
  DeviceExtension[1158] = v96;
  DeviceExtension[2718] = v106;
  DeviceExtension[2719] = v102;
  *((_DWORD *)DeviceExtension + 688) = 1;
  *((_DWORD *)DeviceExtension + 686) = 0;
  *((_QWORD *)DeviceExtension + 36) = DpiFdoHandleStartDevice;
  *((_QWORD *)DeviceExtension + 59) = &DpiFdoHandleSurpriseRemoval;
  *((_QWORD *)DeviceExtension + 49) = &DpiFdoHandleFilterResources;
  if ( !byte_140168DD1 && !DeviceExtension[480] )
    *((_QWORD *)DeviceExtension + 40) = &DpiFdoHandleStopDevice;
  *(_QWORD *)(DeviceExtension + 500) = v137;
  *((_DWORD *)DeviceExtension + 127) = v138;
  DeviceRegistryPaths = DpiGetDeviceRegistryPaths((__int64)DeviceObject, v32, v10);
  v37 = 0LL;
  LODWORD(started) = DeviceRegistryPaths;
  if ( DeviceRegistryPaths >= 0 )
  {
    *(_DWORD *)&DestinationString.Length = 0;
    v38 = (int)DpiReadPnpRegistryValue(DeviceObject, L"SoftGPUAdapter", &DestinationString, 4LL, 2) >= 0
       && *(_DWORD *)&DestinationString.Length;
    v39 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 20);
    DeviceExtension[2716] = v38;
    if ( (int)DpiQueryBusInterface(v39, (__int64)(DeviceExtension + 856)) >= 0 )
    {
      if ( *(_QWORD *)(v10 + 232) )
      {
        v40 = DpiAcpiRegisterAcpiCallbacks(DeviceObject);
        v41 = (unsigned __int8)v99;
        if ( v40 >= 0 )
          v41 = 1;
        v99 = v41;
      }
      DeviceExtension[1156] = 1;
    }
    started = TargetDevice;
    if ( IoGetDeviceProperty(TargetDevice, DevicePropertyBusNumber, 4u, DeviceExtension + 1144, &ResultLength) < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 851;
      *((_DWORD *)DeviceExtension + 286) = -1;
    }
    v42 = DeviceExtension + 1148;
    if ( IoGetDeviceProperty(started, DevicePropertyAddress, 4u, DeviceExtension + 1148, &ResultLength) < 0
      || *v42 == -1 )
    {
      if ( !DeviceExtension[2716] )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 879;
      }
      *v42 = -1;
    }
    v43 = (GUID *)(DeviceExtension + 544);
    LODWORD(started) = IoGetDeviceProperty(
                         started,
                         DevicePropertyBusTypeGuid,
                         0x10u,
                         DeviceExtension + 544,
                         &ResultLength);
    if ( (int)started < 0 || ResultLength < 0x10 )
    {
      WdLogSingleEntry1(4LL);
      WdLogGlobalForLineNumber = 899;
      *v43 = GUID_BUS_TYPE_INVALID;
    }
    if ( !v92 )
    {
      LODWORD(started) = DpiFdoDetectPostDevice(DeviceObject, &v107);
      if ( (int)started < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 922;
LABEL_128:
        v37 = 0LL;
        goto LABEL_279;
      }
      v91 = v107;
      if ( v107 )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 937;
        DeviceExtension[1152] = 1;
        byte_1401691E8 = 1;
        if ( byte_140168DD1 == 1 )
        {
          AttachedDeviceReference = IoGetAttachedDeviceReference(TargetDevice);
          DpiSetDeviceUsageType(AttachedDeviceReference);
          ObfDereferenceObject(AttachedDeviceReference);
          v43 = (GUID *)(DeviceExtension + 544);
        }
      }
    }
    if ( DeviceExtension[1158] )
    {
      v37 = 0LL;
      *((_DWORD *)DeviceExtension + 281) = 5140;
      *((_QWORD *)DeviceExtension + 142) = 0LL;
      *((_DWORD *)DeviceExtension + 280) = 0;
      *((_QWORD *)DeviceExtension + 141) = 139LL;
    }
    else
    {
      if ( RtlCompareMemory(v43, &GUID_BUS_TYPE_PCI, 0x10uLL) == 16 )
      {
        WdLogSingleEntry1(4LL);
        v45 = TargetDevice;
        WdLogGlobalForLineNumber = 992;
        DpiQueryBusInterface(TargetDevice, (__int64)(DeviceExtension + 560));
        v37 = 0LL;
        if ( !*((_QWORD *)DeviceExtension + 77) )
        {
          LODWORD(started) = -1073741127;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1017;
          goto LABEL_279;
        }
        Pool2 = ExAllocatePool2(256LL, 256LL, 1953656900LL);
        *((_QWORD *)DeviceExtension + 139) = Pool2;
        if ( !Pool2 )
        {
          LODWORD(started) = -1073741801;
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 1037;
          goto LABEL_279;
        }
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int))DeviceExtension + 77))(
          *((_QWORD *)DeviceExtension + 71),
          0LL,
          Pool2,
          0LL,
          256);
        v47 = (unsigned __int16 *)*((_QWORD *)DeviceExtension + 139);
        *((_DWORD *)DeviceExtension + 280) = 1;
        v48 = *v47;
        *((_DWORD *)DeviceExtension + 281) = v48;
        v49 = v47[1];
        *((_DWORD *)DeviceExtension + 282) = v49;
        *((_DWORD *)DeviceExtension + 285) = *((unsigned __int8 *)v47 + 8);
        if ( (v47[7] & 0x7F) == 0 )
        {
          *((_DWORD *)DeviceExtension + 283) = v47[22];
          *((_DWORD *)DeviceExtension + 284) = v47[23];
        }
        v50 = v48 == 22611 && v49 == 4097;
        DeviceExtension[2720] = v50;
        DpiQueryBusInterface(v45, (__int64)(DeviceExtension + 624));
        DpiQueryBusInterface(*((PDEVICE_OBJECT *)DeviceExtension + 20), (__int64)(DeviceExtension + 672));
        if ( (int)DpiGetAgpStatus(DeviceObject) >= 0 && !*((_QWORD *)DeviceExtension + 85) )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1105;
        }
        v51 = *((_QWORD *)DeviceObject->DeviceExtension + 139);
        v52 = DpiFdoDetectVgaDeviceInCapabilities();
        if ( v52 < 0 )
        {
          LODWORD(started) = v52;
          v37 = 0LL;
        }
        else
        {
          v53 = *(_BYTE *)(v51 + 11);
          v54 = (_BYTE *)(v51 + 10);
          v37 = 0LL;
          if ( __PAIR16__(v53, *v54) == 1 || v53 == 3 && !*v54 )
          {
            v55 = v91;
            LODWORD(started) = v52;
            if ( !v91 )
            {
              if ( byte_1401691E8 )
                goto LABEL_218;
              WdLogSingleEntry1(3LL);
              WdLogGlobalForLineNumber = 1131;
              v55 = 1;
              byte_1401691E9 = 1;
            }
            if ( byte_140168DD6 )
              DeviceExtension[1155] = 1;
            goto LABEL_218;
          }
          LODWORD(started) = -1073741823;
        }
        v55 = v91;
        if ( v91 )
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 1161;
        }
        goto LABEL_218;
      }
      if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16 )
      {
        v37 = 0LL;
        v136 = 0LL;
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 1181;
        if ( !DeviceExtension[1156] )
        {
          LODWORD(started) = -1073741637;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1189;
          goto LABEL_279;
        }
        *((_DWORD *)DeviceExtension + 280) = 2;
        v152 = 0;
        strcpy((char *)&DestinationString, "AeiC_HID");
        BYTE1(DestinationString.Buffer) = 0;
        WORD1(DestinationString.Buffer) = 0;
        HIDWORD(DestinationString.Buffer) = 0;
        v150 = 0LL;
        v151 = 0LL;
        if ( (int)DpEvalAcpiMethod((int)DeviceObject, &v150, 0x24u) >= 0 )
        {
          *(_QWORD *)(DeviceExtension + 1124) = v151;
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1225;
        }
        v152 = 0;
        strcpy((char *)&DestinationString, "AeiC_SUB");
        BYTE1(DestinationString.Buffer) = 0;
        WORD1(DestinationString.Buffer) = 0;
        HIDWORD(DestinationString.Buffer) = 0;
        v150 = 0LL;
        v151 = 0LL;
        if ( (int)DpEvalAcpiMethod((int)DeviceObject, &v150, 0x24u) >= 0 )
        {
          *(_QWORD *)(DeviceExtension + 1132) = v151;
        }
        else
        {
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 1259;
        }
        v152 = 0;
        strcpy((char *)&DestinationString, "AeiC_HRV");
        BYTE1(DestinationString.Buffer) = 0;
        WORD1(DestinationString.Buffer) = 0;
        HIDWORD(DestinationString.Buffer) = 0;
        v150 = 0LL;
        v151 = 0LL;
        LODWORD(started) = DpEvalAcpiMethod((int)DeviceObject, &v150, 0x24u);
        if ( (int)started >= 0 )
        {
          *((_DWORD *)DeviceExtension + 285) = (unsigned __int16)v151;
        }
        else
        {
          WdLogSingleEntry1(4LL);
          WdLogGlobalForLineNumber = 1293;
          LODWORD(started) = 0;
        }
        v55 = v91;
        if ( v91 )
        {
          v56 = IoGetAttachedDeviceReference(TargetDevice);
          LODWORD(started) = DpiSetDeviceUsageType(v56);
          ObfDereferenceObject(v56);
          v37 = 0LL;
          if ( (int)started < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1321;
            LODWORD(started) = 0;
          }
        }
        goto LABEL_218;
      }
      if ( RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_VMBUS, 0x10uLL) == 16 )
      {
        WdLogSingleEntry1(4LL);
        v37 = 0LL;
        WdLogGlobalForLineNumber = 1340;
        if ( DeviceExtension[2718] )
        {
          *((_DWORD *)DeviceExtension + 281) = 5140;
          *((_QWORD *)DeviceExtension + 141) = 705LL;
          *((_DWORD *)DeviceExtension + 284) = 0;
          *((_DWORD *)DeviceExtension + 285) = 1;
        }
        *((_DWORD *)DeviceExtension + 280) = 4;
      }
      else
      {
        RtlCompareMemory(DeviceExtension + 544, &GUID_BUS_TYPE_DISPLAY, 0x10uLL);
        v37 = 0LL;
        if ( DeviceExtension[480] )
        {
          *((_DWORD *)DeviceExtension + 280) = 3;
          *((_DWORD *)DeviceExtension + 281) = 5140;
          if ( DeviceExtension[1153] )
          {
            *((_DWORD *)DeviceExtension + 282) = 141;
          }
          else if ( DeviceExtension[2717] )
          {
            *((_DWORD *)DeviceExtension + 282) = 140;
          }
        }
        else
        {
          v57 = DeviceExtension[2719];
          if ( !v57 && !g_OSTestSigningEnabled )
          {
            LODWORD(started) = -1073741637;
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 1599;
            goto LABEL_279;
          }
          *((_DWORD *)DeviceExtension + 280) = 3;
          if ( v57 )
          {
            *((_DWORD *)DeviceExtension + 281) = 5140;
            *((_DWORD *)DeviceExtension + 282) = 53248;
            *(_QWORD *)(DeviceExtension + 1132) = 4098LL;
            *((_DWORD *)DeviceExtension + 285) = 0;
          }
          else
          {
            *(_QWORD *)&DestinationString.Length = 0LL;
            LODWORD(started) = DpiGetDevicePropertyString(
                                 TargetDevice,
                                 DevicePropertyCompatibleIDs,
                                 (__int64)&ResultLength);
            if ( (int)started >= 0 && (v37 = *(char **)&DestinationString.Length) != 0LL )
            {
              v58 = 0;
              if ( DeviceExtension[2716] )
              {
                *((_DWORD *)DeviceExtension + 281) = 5140;
                v128[0] = L"SoftGPU_Full_D3D12";
                v59 = (char **)v128;
                v126 = 135LL;
                v128[3] = L"SoftGPU_Full_D3D9L";
                v128[6] = L"SoftGPU_Rod";
                v128[9] = L"SoftGPU_Dod";
                v133 = L"SoftGPU_MCDM";
                v127 = 0LL;
                v128[1] = 128LL;
                v128[2] = 0LL;
                v128[4] = 136LL;
                v128[5] = 0LL;
                v128[7] = 137LL;
                v128[8] = 0LL;
                v129 = 134;
                v130 = 4660;
                v131 = 22136;
                v132 = 39612;
                while ( v58 < 5 )
                {
                  v60 = *(_WORD *)v37;
                  v61 = *v59;
                  if ( *(_WORD *)v37 )
                  {
                    v62 = v37 - v61;
                    do
                    {
                      if ( !*(_WORD *)v61 )
                        break;
                      if ( v60 != *(_WORD *)v61 )
                        break;
                      v61 += 2;
                      v60 = *(_WORD *)&v61[v62];
                    }
                    while ( v60 );
                  }
                  if ( !*(_WORD *)v61 )
                  {
                    *((_DWORD *)DeviceExtension + 282) = *((_DWORD *)&v126 + 6 * (int)v58);
                    *((_DWORD *)DeviceExtension + 284) = *((_DWORD *)&v126 + 6 * (int)v58 + 1);
                    *((_DWORD *)DeviceExtension + 283) = v128[3 * (int)v58 - 1];
                    *((_DWORD *)DeviceExtension + 285) = *((_DWORD *)&v127 + 6 * (int)v58 + 1);
                    break;
                  }
                  ++v58;
                  v59 += 3;
                }
              }
              else
              {
                v115 = 5140;
                v117 = L"MCDMTestDevice";
                v63 = &v117;
                v116 = 256;
                v118 = 2721;
                while ( !v58 )
                {
                  v64 = **(_WORD **)&DestinationString.Length;
                  v65 = *v63;
                  if ( **(_WORD **)&DestinationString.Length )
                  {
                    v66 = *(_QWORD *)&DestinationString.Length - (_QWORD)v65;
                    do
                    {
                      if ( !*v65 )
                        break;
                      if ( v64 != *v65 )
                        break;
                      v64 = *(const wchar_t *)((char *)++v65 + v66);
                    }
                    while ( v64 );
                  }
                  if ( !*v65 )
                  {
                    *((_DWORD *)DeviceExtension + 281) = v115;
                    *((_DWORD *)DeviceExtension + 282) = v116;
                    DeviceExtension[v118] = 1;
                    break;
                  }
                  v58 = 1;
                  v63 += 3;
                }
                if ( !*((_DWORD *)DeviceExtension + 282) )
                {
                  ExFreePoolWithTag(v37, 0);
                  LODWORD(started) = -1073741637;
                  WdLogSingleEntry1(2LL);
                  WdLogGlobalForLineNumber = 1573;
                  goto LABEL_128;
                }
              }
              ExFreePoolWithTag(v37, 0);
              v37 = 0LL;
            }
            else
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 1585;
            }
          }
        }
      }
    }
    v55 = v91;
LABEL_218:
    if ( DeviceExtension[2716] != (_BYTE)v37 && DeviceExtension[2717] != (_BYTE)v37 )
    {
      LODWORD(started) = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1612;
      goto LABEL_279;
    }
    KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 184);
    v67 = DeviceExtension + 1336;
    *((_WORD *)DeviceExtension + 660) = 64;
    v68 = 7LL;
    if ( (((_BYTE)DeviceExtension + 56) & 4) != 0 )
    {
      *v67 = 1;
      v68 = 6LL;
      v67 = DeviceExtension + 1340;
    }
    memset64(v67, 0x100000001uLL, v68 >> 1);
    if ( (v68 & 1) != 0 )
      v67[v68 - 1] = 1;
    KeInitializeDpc((PRKDPC)DeviceExtension + 22, (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr, DeviceObject);
    KeInitializeMutex((PRKMUTEX)(DeviceExtension + 2544), 0);
    KeInitializeMutex((PRKMUTEX)(DeviceExtension + 2624), 0);
    *((_QWORD *)DeviceExtension + 317) = DeviceExtension + 2528;
    *((_QWORD *)DeviceExtension + 316) = DeviceExtension + 2528;
    *((_QWORD *)DeviceExtension + 327) = DeviceExtension + 2608;
    *((_QWORD *)DeviceExtension + 326) = DeviceExtension + 2608;
    *((_QWORD *)DeviceExtension + 342) = DeviceExtension + 2728;
    *((_QWORD *)DeviceExtension + 341) = DeviceExtension + 2728;
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 1240), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 1264), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 1288), NotificationEvent, 0);
    v37 = 0LL;
    *((_QWORD *)DeviceExtension + 153) = 0LL;
    *((_QWORD *)DeviceExtension + 147) = 0LL;
    *((_DWORD *)DeviceExtension + 296) = 0;
    *((_DWORD *)DeviceExtension + 292) = 1;
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 1192), SynchronizationEvent, 0);
    v69 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
    *((_DWORD *)DeviceExtension + 687) = 69640;
    if ( v69 )
    {
      if ( *((_DWORD *)DeviceExtension + 5) == 2 )
      {
        LODWORD(started) = DpiFdoInitializeFdo(DeviceObject);
        if ( (int)started < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1672;
          goto LABEL_279;
        }
        v93 = 1;
      }
      else if ( *((_DWORD *)DeviceExtension + 5) == 3 )
      {
        LODWORD(started) = 0;
        *((_QWORD *)DeviceObject->DeviceExtension + 43) = &DpiLdaHandleQueryDeviceRelations;
      }
    }
LABEL_233:
    DeviceExtension[57] = v96;
    KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
    v97 = 1;
    if ( v5 )
    {
      if ( *((_DWORD *)v5 + 126) )
      {
        LODWORD(started) = DpiLdaLinkDeviceToChain(DeviceObject);
        if ( (int)started < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1727;
          goto LABEL_279;
        }
      }
    }
    v70 = *(char ***)(v10 + 64);
    if ( *v70 != (char *)(v10 + 56) )
      goto LABEL_293;
    *(_QWORD *)DeviceExtension = v10 + 56;
    *((_QWORD *)DeviceExtension + 1) = v70;
    *v70 = DeviceExtension;
    *(_QWORD *)(v10 + 64) = DeviceExtension;
    ++*(_DWORD *)(v10 + 128);
    v108 = 1;
    if ( !*((_QWORD *)DeviceExtension + 21) )
    {
      v71 = ExAllocatePool2(64LL, 112LL, 1953656900LL);
      *((_QWORD *)DeviceExtension + 21) = v71;
      if ( !v71 )
      {
        LODWORD(started) = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 1762;
        goto LABEL_278;
      }
      *(_DWORD *)(v71 + 104) = 1;
      *(_BYTE *)(*((_QWORD *)DeviceExtension + 21) + 108LL) = 0;
      LODWORD(started) = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      if ( (int)started < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1776;
        goto LABEL_278;
      }
      v94 = 1;
    }
    KeInitializeMutex((PRKMUTEX)(DeviceExtension + 176), 0);
    if ( v5 )
    {
      if ( !*((_QWORD *)v5 + 185) )
      {
        v72 = ExAllocatePool2(64LL, 16LL, 1953656900LL);
        *((_QWORD *)v5 + 185) = v72;
        if ( !v72 )
        {
          LODWORD(started) = -1073741801;
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 1804;
          goto LABEL_279;
        }
        *(_DWORD *)(v72 + 8) = 1;
        KeInitializeSpinLock(*((PKSPIN_LOCK *)v5 + 185));
      }
      if ( !*((_QWORD *)v5 + 186) )
      {
        v73 = ExAllocatePool2(64LL, 16LL, 1953656900LL);
        *((_QWORD *)v5 + 186) = v73;
        if ( !v73 )
        {
          LODWORD(started) = -1073741801;
          WdLogSingleEntry1(6LL);
          WdLogGlobalForLineNumber = 1826;
          goto LABEL_279;
        }
        *(_DWORD *)(v73 + 8) = 1;
        KeInitializeSpinLock(*((PKSPIN_LOCK *)v5 + 186));
      }
      *((_DWORD *)v5 + 374) = 0;
      memset(v5 + 1504, 0, 0x400uLL);
    }
    KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
    v97 = 0;
    *((_QWORD *)DeviceExtension + 16) = DpiFdoDispatchPnp;
    if ( v5 )
      *((_QWORD *)v5 + 17) = DpiFdoDispatchPower;
    if ( v55 )
    {
      *(_BYTE *)(*((_QWORD *)v5 + 21) + 108LL) = 1;
      AcquireMiniportListMutex();
      if ( qword_140169080 )
      {
        if ( v5[1152] )
        {
          qword_140169080 = (__int64)DeviceObject;
          WdLogSingleEntry2(2LL, DeviceObject, (int)started);
          WdLogGlobalForLineNumber = 1884;
        }
      }
      else
      {
        qword_140169080 = (__int64)DeviceObject;
      }
      v74 = *((_QWORD *)v5 + 6);
      Source1 = 0LL;
      started = (struct _DEVICE_OBJECT *)(int)DpiDxgkDdiExchangePreStartInfo(v10, v74, (unsigned int *)&Source1);
      ReleaseMiniportListMutex();
      if ( (int)started < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v10 + 1144), started);
        WdLogGlobalForLineNumber = 1908;
        goto LABEL_278;
      }
      if ( *((_DWORD *)v5 + 4) == 1953656900 && *((_DWORD *)v5 + 5) == 2 )
      {
        v75 = (BYTE4(Source1) & 2) != 0;
        v5[2845] = BYTE4(Source1) & 1;
        v5[2846] = v75;
      }
    }
    if ( v92 && v103 )
    {
      if ( (qword_140169078 = (__int64)DeviceObject,
            memset(&VersionInformation[1], 0, 0x118uLL),
            VersionInformation[0] = 284,
            RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation) >= 0)
        && (*(_DWORD *)&DestinationString.Length = 0,
            RtlGetProductInfo(
              VersionInformation[1],
              VersionInformation[2],
              LOWORD(VersionInformation[69]),
              HIWORD(VersionInformation[69]),
              (PULONG)&DestinationString.Length))
        && *(_DWORD *)&DestinationString.Length == 187
        || (unsigned int)ExGetFirmwareType() == 2
        || byte_140168DD3 )
      {
        *(_WORD *)(v5 + 2845) = 257;
      }
    }
    if ( DeviceExtension[57] )
    {
      DeviceObject->Flags |= *(_DWORD *)(*((_QWORD *)DeviceExtension + 20) + 48LL) & 0x2014;
    }
    else
    {
      DeviceObject->Flags |= 4u;
      DeviceObject->Flags |= 0x2000u;
    }
    DeviceObject->Flags &= ~0x4000u;
    DeviceObject->Flags &= ~0x80u;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 2004;
LABEL_278:
    if ( !v5 )
      goto LABEL_282;
    goto LABEL_279;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 765;
LABEL_279:
  if ( *((_DWORD *)v5 + 4) == 1953656900 && *((_DWORD *)v5 + 5) == 2 )
    DxgkLogInternalTriageEvent(
      *((_QWORD *)v5 + 504),
      131077,
      -1,
      (__int64)L"Adapter AddDevice has completed with status %1",
      (int)started,
      (__int64)v37,
      (__int64)v37,
      (__int64)v37,
      (__int64)v37);
LABEL_282:
  v76 = v104;
  v77 = v104;
  LOBYTE(v2) = v99;
  v78 = (int)started;
  LODWORD(Source1) = (_DWORD)started;
  if ( (int)started < 0 )
  {
    LOBYTE(v78) = v99;
    v99 = v78;
    if ( v108 != 1 )
    {
      LOBYTE(v2) = v99;
LABEL_291:
      if ( v97 == 1 )
        KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
      goto LABEL_34;
    }
    KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
    v79 = *(_QWORD **)DeviceExtension;
    if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v80 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v80 == DeviceExtension )
      {
        *v80 = v79;
        v79[1] = v80;
        --*(_DWORD *)(v10 + 128);
        if ( v5 && *((_DWORD *)v5 + 126) )
          DpiLdaUnLinkDeviceFromChain(DeviceObject);
        KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
        LODWORD(started) = (_DWORD)Source1;
        v104 = v77;
        goto LABEL_291;
      }
    }
LABEL_293:
    __fastfail(3u);
  }
LABEL_310:
  v140 = 0LL;
  v141 = 0LL;
  v144 = 0;
  v85 = DxgkDiagCalcDuration1us(&v125);
  v139[0] = 6;
  v139[1] = 64;
  v143 = 0;
  v140 = 0LL;
  v142 = 0LL;
  v141 = 0LL;
  v145 = 34;
  v146 = v76;
  v147 = v85;
  v148 = (int)started;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v139, 0x100000000uLL);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    *(_DWORD *)Exclusive = (_DWORD)started;
    McTemplateK0ppq_EtwWriteTransfer(v86, &EventExitDpiAddDevice, v87, DriverObject, TargetDevice, *(_QWORD *)Exclusive);
  }
  return (unsigned int)started;
}
