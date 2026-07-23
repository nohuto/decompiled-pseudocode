/*
 * XREFs of PiDevCfgConfigureDevice @ 0x140A43BF0
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140AE7A3C (PiDevCfgProcessDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 *     PnpDuplicateUnicodeString @ 0x1404EF504 (PnpDuplicateUnicodeString.c)
 *     PipIsDevNodeDNStarted @ 0x140516374 (PipIsDevNodeDNStarted.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiDevCfgAppendMultiSz @ 0x1407AB6AC (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgGetDeviceClassDriverConfigurable @ 0x1407AC524 (PiDevCfgGetDeviceClassDriverConfigurable.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407ACBF0 (PiDevCfgMakeServiceBootStart.c)
 *     RtlCompareUnicodeStrings @ 0x140943110 (RtlCompareUnicodeStrings.c)
 *     PnpIsNullGuid @ 0x140950904 (PnpIsNullGuid.c)
 *     _PnpOpenObjectRegKey @ 0x14095EB70 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     _CmDeleteDeviceRegKey @ 0x1409B7554 (_CmDeleteDeviceRegKey.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     PiPnpRtlSetObjectProperty @ 0x140A18C74 (PiPnpRtlSetObjectProperty.c)
 *     _PnpCtxRegDeleteTree @ 0x140A3F304 (_PnpCtxRegDeleteTree.c)
 *     PipHardwareConfigActivateService @ 0x140A3F950 (PipHardwareConfigActivateService.c)
 *     PiDevCfgBuildIndirectString @ 0x140A42AB8 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140A42DFC (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140A4321C (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgBuildDriverNodeStrongName @ 0x140A43690 (PiDevCfgBuildDriverNodeStrongName.c)
 *     PiDevCfgMigrateDevice @ 0x140A45858 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x140A46258 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x140A46978 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x140A47AD0 (PiDevCfgConfigureDeviceDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140AEA1C8 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgSetObjectProperty @ 0x140B0F6C0 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140B1D234 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140B34F1C (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140B3B5D0 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x140B3CD40 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PnpDeleteDeviceInterfaces @ 0x140B4C2E4 (PnpDeleteDeviceInterfaces.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgConfigureDevice(__int64 a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  __int64 v6; // r12
  __int64 v8; // r14
  char *v9; // r15
  int v10; // r13d
  char v11; // bl
  int v12; // r9d
  int v13; // r8d
  int v14; // eax
  int v15; // r8d
  int DriverConfiguration; // ebx
  int v17; // edx
  __int64 *v18; // r12
  const WCHAR *v19; // rdx
  int v20; // ebx
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  int v23; // ecx
  void *v24; // r13
  const WCHAR *v26; // rdx
  __int64 v27; // r10
  int *v28; // r13
  _DWORD *v29; // r12
  char v30; // r9
  __int128 v31; // xmm0
  int v32; // eax
  int v33; // eax
  const wchar_t *v34; // r8
  const wchar_t *v35; // r8
  __int16 v36; // r12
  wchar_t *k; // rdi
  int *v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r12
  int v41; // r13d
  int v42; // eax
  void *v43; // rcx
  int v44; // eax
  _DWORD *v45; // rcx
  __int64 *i; // r12
  int v47; // eax
  wchar_t *j; // rdi
  _BYTE *v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // rdx
  int v52; // ecx
  _QWORD *v53; // rbx
  __int64 v54; // rcx
  __int64 v55; // rdx
  int v56; // ecx
  __int64 v57; // r8
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rax
  ULONG CaseInSensitive; // [rsp+20h] [rbp-E0h]
  BOOLEAN CaseInSensitivea[8]; // [rsp+20h] [rbp-E0h]
  int CaseInSensitiveb; // [rsp+20h] [rbp-E0h]
  char v64[8]; // [rsp+28h] [rbp-D8h]
  int v65; // [rsp+48h] [rbp-B8h]
  char v66; // [rsp+60h] [rbp-A0h] BYREF
  char v67; // [rsp+61h] [rbp-9Fh] BYREF
  char v68; // [rsp+62h] [rbp-9Eh]
  char v69; // [rsp+63h] [rbp-9Dh] BYREF
  int v70; // [rsp+64h] [rbp-9Ch] BYREF
  int v71; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v72[5]; // [rsp+6Ch] [rbp-94h] BYREF
  int v73; // [rsp+80h] [rbp-80h]
  int v74; // [rsp+84h] [rbp-7Ch] BYREF
  int v75; // [rsp+88h] [rbp-78h]
  int v76; // [rsp+8Ch] [rbp-74h] BYREF
  int v77; // [rsp+90h] [rbp-70h] BYREF
  __int64 v78; // [rsp+98h] [rbp-68h]
  unsigned int v79; // [rsp+A0h] [rbp-60h]
  PVOID v80[2]; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  PVOID P[2]; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v83; // [rsp+D0h] [rbp-30h]
  __int128 v84; // [rsp+D8h] [rbp-28h] BYREF
  int *v85; // [rsp+E8h] [rbp-18h]
  PVOID v86[2]; // [rsp+F0h] [rbp-10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  int v88; // [rsp+110h] [rbp+10h] BYREF
  int v89; // [rsp+114h] [rbp+14h] BYREF
  int v90[2]; // [rsp+118h] [rbp+18h]
  _DWORD *v91; // [rsp+120h] [rbp+20h]
  PVOID v92[2]; // [rsp+128h] [rbp+28h] BYREF
  __int64 v93; // [rsp+138h] [rbp+38h] BYREF
  PVOID v94; // [rsp+140h] [rbp+40h]
  HANDLE KeyHandle; // [rsp+148h] [rbp+48h] BYREF
  PVOID v96; // [rsp+150h] [rbp+50h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v98; // [rsp+168h] [rbp+68h] BYREF
  PVOID v99[2]; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v100; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v101; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v102; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v103; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v104; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING v105; // [rsp+1D8h] [rbp+D8h] BYREF
  UNICODE_STRING v106; // [rsp+1E8h] [rbp+E8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1F8h] [rbp+F8h] BYREF
  __int128 Source2; // [rsp+228h] [rbp+128h] BYREF
  int v109[2]; // [rsp+240h] [rbp+140h] BYREF
  int v110; // [rsp+248h] [rbp+148h]
  PVOID *p_Source2; // [rsp+250h] [rbp+150h]
  PVOID *v112; // [rsp+258h] [rbp+158h]
  int v113; // [rsp+260h] [rbp+160h]
  __int64 *v114; // [rsp+268h] [rbp+168h]
  int v115; // [rsp+270h] [rbp+170h]
  char *v116; // [rsp+278h] [rbp+178h]
  int v117; // [rsp+280h] [rbp+180h]
  const wchar_t *v118; // [rsp+288h] [rbp+188h]
  __int64 *v119; // [rsp+290h] [rbp+190h]
  int v120; // [rsp+298h] [rbp+198h]
  void *p_DestinationString; // [rsp+2A0h] [rbp+1A0h]
  int v122; // [rsp+2ACh] [rbp+1ACh]
  int v123; // [rsp+2B0h] [rbp+1B0h]
  __int64 *v124; // [rsp+2B8h] [rbp+1B8h]
  int v125; // [rsp+2C0h] [rbp+1C0h]
  PVOID *v126; // [rsp+2C8h] [rbp+1C8h]
  unsigned int v127; // [rsp+2D0h] [rbp+1D0h]
  int v128; // [rsp+2D4h] [rbp+1D4h]
  int v129; // [rsp+2D8h] [rbp+1D8h]

  v78 = a1;
  v6 = a1;
  Handle = 0LL;
  KeyHandle = 0LL;
  v93 = 0LL;
  *a4 = 1024;
  *a5 = 0;
  v8 = a1 + 40;
  v9 = *(char **)(a2 + 16);
  v94 = 0LL;
  v10 = 1024;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v98.Length = 0LL;
  v98.Buffer = 0LL;
  *(_QWORD *)&v100.Length = 0LL;
  v100.Buffer = 0LL;
  *(_QWORD *)&v101.Length = 0LL;
  v101.Buffer = 0LL;
  *(_QWORD *)&v102.Length = 0LL;
  v102.Buffer = 0LL;
  *(_QWORD *)&v104.Length = 0LL;
  v104.Buffer = 0LL;
  *(_OWORD *)&v72[1] = 0uLL;
  *(_QWORD *)&v103.Length = 0LL;
  v103.Buffer = 0LL;
  v73 = 0;
  v75 = 0;
  v71 = 0;
  v76 = 0;
  v77 = 0;
  *(_QWORD *)v90 = 0LL;
  v92[0] = 0LL;
  v92[1] = 0LL;
  v80[0] = 0LL;
  v80[1] = 0LL;
  v86[0] = 0LL;
  v86[1] = 0LL;
  v84 = 0uLL;
  v83 = 0LL;
  *(_QWORD *)&v106.Length = 0LL;
  v106.Buffer = 0LL;
  v99[0] = 0LL;
  v99[1] = 0LL;
  v66 = 0;
  LOWORD(v72[0]) = 0;
  v67 = 0;
  v69 = 0;
  v96 = 0LL;
  v79 = 0;
  v74 = 0;
  v68 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  BYTE2(v72[0]) = 0;
  v88 = 0;
  v89 = 0;
  *(_DWORD *)(&v105.MaximumLength + 1) = 0;
  v70 = 1024;
  v85 = a4;
  v91 = a5;
  *(_OWORD *)P = 0LL;
  *(_DWORD *)&v105.Length = 68157440;
  Source2 = 0LL;
  v105.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( !v105.Buffer )
    goto LABEL_69;
  if ( !a3 )
    goto LABEL_3;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a3);
  if ( DriverConfiguration < 0 )
    goto LABEL_118;
  if ( (*(_QWORD *)v90 = *(_QWORD *)(a3 + 264), *(_QWORD *)(a3 + 296))
    && !PnpDuplicateUnicodeString((__int64)&v93, a3 + 288)
    || *(_QWORD *)(a3 + 312) && !PnpDuplicateUnicodeString((__int64)&UnicodeString, a3 + 304)
    || *(_QWORD *)(a3 + 328) && !PnpDuplicateUnicodeString((__int64)&v98, a3 + 320)
    || *(_QWORD *)(a3 + 344) && !PnpDuplicateUnicodeString((__int64)&v100, a3 + 336)
    || *(_QWORD *)(a3 + 360) && !PnpDuplicateUnicodeString((__int64)&v101, a3 + 352)
    || *(_QWORD *)(a3 + 376) && !PnpDuplicateUnicodeString((__int64)&v102, a3 + 368)
    || *(_QWORD *)(a3 + 408) && !PnpDuplicateUnicodeString((__int64)&v103, a3 + 400) )
  {
LABEL_69:
    DriverConfiguration = -1073741670;
    goto LABEL_118;
  }
  v10 = *(_DWORD *)(a3 + 416);
  v17 = *(_DWORD *)(a3 + 184);
  v73 = *(_DWORD *)(a3 + 420);
  v18 = *(__int64 **)(a3 + 208);
  v70 = v10;
  v75 = v17;
  if ( v18 != (__int64 *)(a3 + 208) )
  {
    do
    {
      v47 = PiDevCfgQueryDriverConfiguration(v18);
      DriverConfiguration = v47;
      if ( v47 >= 0 )
      {
        if ( v18[37] )
        {
          *((_DWORD *)v18 + 46) &= ~1u;
        }
        else
        {
          if ( v18[39] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&UnicodeString, 0LL, (const void **)v18 + 38, 0);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
          }
          if ( v18[41] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v98, 0LL, (const void **)v18 + 40, 0);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
          }
          if ( v18[43] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v100, 0LL, (const void **)v18 + 42, 0);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
          }
          if ( v18[45] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v101, 0LL, (const void **)v18 + 44, 0);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
          }
          if ( v18[47] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v102, 0LL, (const void **)v18 + 46, 0);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
          }
          v10 |= *((_DWORD *)v18 + 104);
          v73 |= *((_DWORD *)v18 + 105);
          v75 |= *((_DWORD *)v18 + 46);
          v70 = v10;
          DriverConfiguration = PiDevCfgAppendMultiSz(&v104, (const void **)v18 + 5, 0LL, 0);
          if ( DriverConfiguration < 0 )
            goto LABEL_118;
          DriverConfiguration = PiDevCfgAppendMultiSz((PUNICODE_STRING)&v72[1], (const void **)v18 + 53, 0LL, 0);
          if ( DriverConfiguration < 0 )
            goto LABEL_118;
          if ( v18[51] )
          {
            DriverConfiguration = PiDevCfgAppendMultiSz(&v103, (const void **)v18 + 50, 0LL, 0);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
          }
        }
      }
      else
      {
        if ( v47 != -1073740653 || !PnpBootMode || (PiDevCfgFlags & 2) == 0 )
          goto LABEL_118;
        v10 |= 0x400u;
        DriverConfiguration = 0;
        v70 = v10;
      }
      v18 = (__int64 *)*v18;
    }
    while ( v18 != (__int64 *)(a3 + 208) );
    LOBYTE(v17) = v75;
    if ( DriverConfiguration < 0 )
      goto LABEL_118;
  }
  if ( (PiDevCfgFlags & 2) != 0 )
  {
    if ( (v10 & 0x400) != 0
      && (*(_BYTE *)(a3 + 440) & 2) == 0
      && (PiDevCfgOptions & 1) == 0
      && !InitIsWinPEMode
      && !PnpBootMode )
    {
      goto LABEL_323;
    }
    if ( (v17 & 0x40) != 0 )
    {
      if ( !PnpBootMode )
        goto LABEL_323;
      v10 |= 0x400u;
      v70 = v10;
    }
  }
  memset_0(v109, 0, 0xA8uLL);
  v110 = 288;
  v113 = 0x1000000;
  p_Source2 = (PVOID *)L"Description";
  v120 = 0x1000000;
  v19 = *(const WCHAR **)(a3 + 24);
  v112 = v80;
  v118 = L"Manufacturer";
  v117 = 288;
  v119 = (__int64 *)v86;
  DriverConfiguration = RtlpQueryRegistryValues(3221225472LL, v19, (__int64)v109, 0LL, CaseInSensitive, 1);
  if ( DriverConfiguration >= 0 )
  {
    if ( !v80[1] && !v86[1] && *(_QWORD *)(a3 + 168) && (PiDevCfgFlags & 2) != 0 && !InitIsWinPEMode )
    {
      if ( !PnpBootMode )
      {
        v24 = *(void **)&v72[3];
        DriverConfiguration = -1073740651;
        goto LABEL_123;
      }
      v10 |= 0x400u;
      v70 = v10;
    }
    if ( !LOWORD(v80[0]) && v80[1] )
      RtlFreeAnsiString((PUNICODE_STRING)v80);
    if ( !LOWORD(v86[0]) && v86[1] )
      RtlFreeAnsiString((PUNICODE_STRING)v86);
    v20 = v90[0];
    if ( *(_QWORD *)v90
      && (int)PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, *(__int64 *)v90, 2, 131097, 0, (__int64)&Handle) >= 0 )
    {
      memset_0(v109, 0, 0xA0uLL);
      *(_QWORD *)v109 = &DEVPKEY_DeviceClass_Configurable;
      v110 = 17;
      p_Source2 = (PVOID *)&v66;
      v115 = 17;
      v114 = DEVPKEY_DeviceClass_PolicyExempt;
      v116 = &v67;
      LODWORD(v112) = 1;
      v119 = (__int64 *)&DEVPKEY_DeviceClass_DefaultService;
      p_DestinationString = v92;
      v124 = DEVPKEY_DeviceClass_CompatibleFeatureScores;
      v126 = &v96;
      v117 = 1;
      v120 = 18;
      v122 = 6;
      v125 = 4099;
      v128 = 2;
      DriverConfiguration = PiDevCfgQueryObjectProperties(2, v20, 2, (_DWORD)Handle, (__int64)v109, 4);
      if ( DriverConfiguration < 0 )
        goto LABEL_118;
      if ( v113 < 0 )
        v66 = 0;
      if ( (int)v118 < 0 )
        v67 = 0;
      if ( v123 < 0 )
        RtlInitUnicodeString((PUNICODE_STRING)v92, 0LL);
      if ( v129 >= 0 )
        v79 = v127;
      else
        v96 = 0LL;
      if ( v66 )
        goto LABEL_339;
      if ( (int)PiDevCfgGetDeviceClassDriverConfigurable(
                  v90[0],
                  (int)Handle,
                  *(_QWORD *)(v8 + 8),
                  (int)v9,
                  *(wchar_t **)(a3 + 64),
                  *(_QWORD *)(a3 + 16),
                  v72) >= 0
        && LOBYTE(v72[0]) )
      {
        v66 = -1;
      }
    }
    if ( v66 || (PiDevCfgOptions & 1) != 0 || (PiDevCfgFlags & 2) == 0 )
    {
LABEL_339:
      v49 = v96;
      if ( v96 )
      {
        v50 = 0;
        if ( !v79 )
        {
LABEL_343:
          DriverConfiguration = -1073740764;
          goto LABEL_118;
        }
        while ( *v49 != *(_BYTE *)(a3 + 110) )
        {
          ++v50;
          ++v49;
          if ( v50 >= v79 )
            goto LABEL_343;
        }
      }
      v6 = v78;
LABEL_3:
      if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        memset_0(v109, 0, 0xA0uLL);
        v22 = *(_QWORD *)(v8 + 8);
        *(_QWORD *)v109 = &DEVPKEY_Device_ClassGuid;
        p_Source2 = (PVOID *)&Source2;
        v110 = 13;
        v114 = DEVPKEY_Device_InstallFlags;
        v116 = (char *)&v74;
        v119 = DEVPKEY_Device_DriverNodeStrongName;
        p_DestinationString = &DestinationString;
        LODWORD(v112) = 16;
        v115 = 7;
        v117 = 4;
        v120 = 18;
        v122 = 6;
        DriverConfiguration = PiDevCfgQueryObjectProperties(v23, v22, 1, (_DWORD)v9, (__int64)v109, 3);
        if ( DriverConfiguration < 0 )
          goto LABEL_118;
        if ( v113 >= 0 )
          v68 = 1;
        else
          Source2 = 0LL;
        if ( (int)v118 < 0 )
          v74 = 0;
        if ( v123 < 0 )
          RtlInitUnicodeString(&DestinationString, 0LL);
      }
      if ( !v67 )
      {
        if ( (v74 & 4) == 0 )
          goto LABEL_354;
        if ( !a3 )
          goto LABEL_352;
        memset_0(v109, 0, 0xA0uLL);
        v51 = *(_QWORD *)(v8 + 8);
        *(_QWORD *)v109 = &DEVPKEY_Device_DriverInfPath;
        p_Source2 = v99;
        v110 = 18;
        HIDWORD(v112) = 6;
        DriverConfiguration = PiDevCfgQueryObjectProperties(v52, v51, 1, (_DWORD)v9, (__int64)v109, 1);
        if ( DriverConfiguration < 0 )
          goto LABEL_118;
        if ( v113 < 0 )
          RtlInitUnicodeString((PUNICODE_STRING)v99, 0LL);
        if ( v99[1] && RtlEqualUnicodeString((PCUNICODE_STRING)v99, (PCUNICODE_STRING)(a3 + 40), 1u) )
LABEL_352:
          v67 = -1;
        if ( !v67 )
        {
LABEL_354:
          DriverConfiguration = PiDevCfgEnforceDevicePolicy(v6, a2, *(_QWORD *)v90);
          if ( DriverConfiguration < 0 )
            goto LABEL_118;
        }
      }
      if ( Handle )
      {
        ObjectAttributes.RootDirectory = Handle;
        P[1] = L"Configuration";
        LODWORD(P[0]) = 1835034;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v21 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        DriverConfiguration = v21;
        if ( v21 != -1073741772 )
        {
          if ( v21 < 0 )
            goto LABEL_118;
          DriverConfiguration = PiDevCfgVerifyDeviceAllowed(v6, KeyHandle);
          if ( DriverConfiguration < 0 )
            goto LABEL_118;
        }
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 8LL) + 16LL) & 4) != 0
        && ((int)PnpGetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   *(_QWORD *)(v8 + 8),
                   1,
                   v9,
                   0LL,
                   (__int64)&DEVPKEY_Device_Reported,
                   &v88,
                   (__int64)&v69,
                   1u,
                   (__int64)&v89,
                   0) < 0
         || v88 != 17
         || v89 != 1) )
      {
        v69 = 0;
      }
      if ( a3 && !v94 && !v92[1] && !v69 && (*(_DWORD *)(v6 + 560) & 0x100) == 0 )
      {
        DriverConfiguration = -1073740652;
        goto LABEL_118;
      }
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        if ( a3 )
        {
LABEL_10:
          v11 = v68;
          v12 = a3 + 40;
          v13 = a3 + 256;
          goto LABEL_11;
        }
        v11 = v68;
      }
      else
      {
        if ( a3 )
        {
          if ( !PnpIsNullGuid(&Source2) )
          {
            v53 = (_QWORD *)(a3 + 240);
            if ( !PnpIsNullGuid((void *)(a3 + 240)) )
            {
              v54 = Source2 - *v53;
              if ( (_QWORD)Source2 == *v53 )
                v54 = *((_QWORD *)&Source2 + 1) - *(_QWORD *)(a3 + 248);
              if ( v54 )
                CmDeleteDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 18, 0);
            }
          }
          goto LABEL_10;
        }
        v11 = v68;
        if ( !v68 || (*(_DWORD *)(v6 + 560) & 0x100) == 0 )
          CmDeleteDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 17, 0);
        CmDeleteDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v8 + 8), 18, 0);
      }
      v12 = 0;
      v13 = 0;
LABEL_11:
      v14 = PiDevCfgMigrateDevice(v6, a2, v13, v12, (__int64)&v76, (__int64)&v77);
      v15 = 0;
      if ( v14 >= 0 )
      {
        v10 |= v76;
        v70 = v10;
        v71 = v77;
      }
      if ( (*(_DWORD *)a2 & 1) == 0 )
      {
        if ( a3 )
          v15 = a3 + 240;
        PiDevCfgResetDeviceDriverSettings(
          v6,
          a2,
          v15,
          (int)Handle,
          (PGUID)((unsigned __int64)&Source2 & -(__int64)(v11 != 0)));
        PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v9, (__int64)L"Devices");
        PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, (__int64)v9, (__int64)L"Filters");
      }
      if ( !a3 || PnpIsNullGuid((void *)(a3 + 240)) )
      {
        if ( (*(_DWORD *)a2 & 1) == 0 )
          PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
      }
      else
      {
        DriverConfiguration = PiPnpRtlSetObjectProperty(
                                *(__int64 *)&PiPnpRtlCtx,
                                *(const WCHAR **)(v8 + 8),
                                1,
                                v9,
                                0LL,
                                &DEVPKEY_Device_ClassGuid,
                                13,
                                (STRSAFE_PCNZWCH)(a3 + 240),
                                0x10u,
                                (*(_DWORD *)a2 & 1u) << 17);
        if ( DriverConfiguration < 0 )
          goto LABEL_118;
      }
      if ( v94 )
      {
        if ( (_WORD)v93 )
          goto LABEL_365;
      }
      else if ( v92[1] && LOWORD(v92[0]) )
      {
LABEL_365:
        DriverConfiguration = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
        if ( DriverConfiguration < 0 )
          goto LABEL_118;
LABEL_73:
        if ( UnicodeString.Buffer )
        {
          DriverConfiguration = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
          if ( DriverConfiguration < 0 )
            goto LABEL_118;
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
        }
        if ( v98.Buffer )
        {
          DriverConfiguration = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
          if ( DriverConfiguration < 0 )
            goto LABEL_118;
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
        }
        if ( v100.Buffer )
        {
          DriverConfiguration = PiPnpRtlSetObjectProperty(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  *(const WCHAR **)(v8 + 8),
                                  1,
                                  v9,
                                  0LL,
                                  DEVPKEY_Device_Win32Services,
                                  8210,
                                  v100.Buffer,
                                  v100.Length,
                                  (*(_DWORD *)a2 & 1u) << 17);
          if ( DriverConfiguration < 0 )
            goto LABEL_118;
        }
        else if ( (*(_DWORD *)a2 & 1) == 0 )
        {
          PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
        }
        if ( a3 && v80[1] )
        {
          DriverConfiguration = PiDevCfgBuildIndirectString(a3, (unsigned __int16 *)v80, (__int64)&v84, &v106);
          if ( DriverConfiguration < 0 )
            goto LABEL_287;
          v83 = (PVOID)*((_QWORD *)&v84 + 1);
          if ( (v10 & 0x400) == 0 || (PiDevCfgOptions & 1) != 0 )
          {
            DriverConfiguration = PiPnpRtlSetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    *(const WCHAR **)(v8 + 8),
                                    1,
                                    v9,
                                    0LL,
                                    &DEVPKEY_Device_DeviceDesc,
                                    18,
                                    *((STRSAFE_PCNZWCH *)&v84 + 1),
                                    (unsigned int)(unsigned __int16)v84 + 2,
                                    (*(_DWORD *)a2 & 1u) << 17);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
          }
          if ( v106.Buffer )
          {
            DriverConfiguration = PiPnpRtlSetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    *(const WCHAR **)(v8 + 8),
                                    1,
                                    v9,
                                    0LL,
                                    &DEVPKEY_Device_DriverDesc,
                                    18,
                                    v106.Buffer,
                                    (unsigned int)v106.Length + 2,
                                    (*(_DWORD *)a2 & 1u) << 17);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
          }
          else if ( (*(_DWORD *)a2 & 1) == 0 )
          {
            PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
          }
          if ( v83 )
          {
            ExFreePool(v83);
            v84 = 0LL;
            v83 = (PVOID)_mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
          }
        }
        else if ( (*(_DWORD *)a2 & 1) != 0 )
        {
          if ( !a3 )
            goto LABEL_84;
        }
        else
        {
          PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
          if ( !a3 )
          {
            memset_0(v109, 0, 0xA0uLL);
            v55 = *(_QWORD *)(v8 + 8);
            *(_QWORD *)v109 = &DEVPKEY_Device_BusReportedDeviceDesc;
            p_Source2 = v80;
            v110 = 18;
            HIDWORD(v112) = 6;
            if ( (int)PiDevCfgQueryObjectProperties(v56, v55, 1, (_DWORD)v9, (__int64)v109, 1) >= 0
              && v113 >= 0
              && v80[1] )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
              if ( DriverConfiguration < 0 )
                goto LABEL_118;
            }
            else
            {
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
            }
            goto LABEL_84;
          }
        }
        if ( v86[1] )
        {
          DriverConfiguration = PiDevCfgBuildIndirectString(a3, (unsigned __int16 *)v86, (__int64)&v84, 0LL);
          if ( DriverConfiguration >= 0 )
          {
            v26 = *(const WCHAR **)(v8 + 8);
            v65 = (*(_DWORD *)a2 & 1) << 17;
            v83 = (PVOID)*((_QWORD *)&v84 + 1);
            DriverConfiguration = PiPnpRtlSetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    v26,
                                    1,
                                    v9,
                                    0LL,
                                    &DEVPKEY_Device_Manufacturer,
                                    18,
                                    *((STRSAFE_PCNZWCH *)&v84 + 1),
                                    (unsigned int)(unsigned __int16)v84 + 2,
                                    v65);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
LABEL_86:
            if ( a3 && (v35 = *(const wchar_t **)(a3 + 280)) != 0LL )
            {
              DriverConfiguration = PiPnpRtlSetObjectProperty(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      *(const WCHAR **)(v8 + 8),
                                      1,
                                      v9,
                                      0LL,
                                      &DEVPKEY_Device_DriverProvider,
                                      18,
                                      v35,
                                      (unsigned int)*(unsigned __int16 *)(a3 + 272) + 2,
                                      (*(_DWORD *)a2 & 1u) << 17);
              if ( DriverConfiguration < 0 )
                goto LABEL_118;
            }
            else
            {
              if ( (*(_DWORD *)a2 & 1) == 0 )
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
              if ( !a3 )
              {
                if ( (*(_DWORD *)a2 & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
                  PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
                  PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
                  PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
                  PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
                }
                goto LABEL_100;
              }
            }
            DriverConfiguration = PiPnpRtlSetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    *(const WCHAR **)(v8 + 8),
                                    1,
                                    v9,
                                    0LL,
                                    &DEVPKEY_Device_DriverDate,
                                    16,
                                    (STRSAFE_PCNZWCH)(a3 + 112),
                                    8u,
                                    (*(_DWORD *)a2 & 1u) << 17);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
            *(_DWORD *)v64 = *(unsigned __int16 *)(a3 + 120);
            *(_DWORD *)CaseInSensitivea = *(unsigned __int16 *)(a3 + 122);
            DriverConfiguration = RtlUnicodeStringPrintf(
                                    &v105,
                                    L"%u.%u.%u.%u",
                                    (unsigned __int16)HIWORD(*(_DWORD *)(a3 + 124)),
                                    *(unsigned __int16 *)(a3 + 124),
                                    *(_QWORD *)CaseInSensitivea,
                                    *(_QWORD *)v64);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
            DriverConfiguration = PiPnpRtlSetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    *(const WCHAR **)(v8 + 8),
                                    1,
                                    v9,
                                    0LL,
                                    &DEVPKEY_Device_DriverVersion,
                                    18,
                                    v105.Buffer,
                                    (unsigned int)v105.Length + 2,
                                    (*(_DWORD *)a2 & 1u) << 17);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
            DriverConfiguration = PiPnpRtlSetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    *(const WCHAR **)(v8 + 8),
                                    1,
                                    v9,
                                    0LL,
                                    &DEVPKEY_Device_DriverInfPath,
                                    18,
                                    *(STRSAFE_PCNZWCH *)(a3 + 48),
                                    (unsigned int)*(unsigned __int16 *)(a3 + 40) + 2,
                                    (*(_DWORD *)a2 & 1u) << 17);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
            DriverConfiguration = PiPnpRtlSetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    *(const WCHAR **)(v8 + 8),
                                    1,
                                    v9,
                                    0LL,
                                    &DEVPKEY_Device_DriverInfSection,
                                    18,
                                    *(STRSAFE_PCNZWCH *)(a3 + 96),
                                    (unsigned int)*(unsigned __int16 *)(a3 + 88) + 2,
                                    (*(_DWORD *)a2 & 1u) << 17);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
            DriverConfiguration = PiDevCfgBuildDriverNodeStrongName(
                                    a3,
                                    (const UNICODE_STRING *)v86,
                                    (const UNICODE_STRING *)v80,
                                    (UNICODE_STRING *)P);
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
            if ( DestinationString.Buffer
              && !RtlCompareUnicodeStrings(
                    DestinationString.Buffer,
                    (unsigned __int64)DestinationString.Length >> 1,
                    (PCWCH)P[1],
                    (unsigned __int64)LOWORD(P[0]) >> 1,
                    1u) )
            {
              RtlFreeAnsiString(&DestinationString);
            }
            DriverConfiguration = PiPnpRtlSetObjectProperty(
                                    *(__int64 *)&PiPnpRtlCtx,
                                    *(const WCHAR **)(v8 + 8),
                                    1,
                                    v9,
                                    0LL,
                                    DEVPKEY_Device_DriverNodeStrongName,
                                    18,
                                    (STRSAFE_PCNZWCH)P[1],
                                    (unsigned int)LOWORD(P[0]) + 2,
                                    (*(_DWORD *)a2 & 1u) << 17);
            if ( P[1] )
            {
              ExFreePool(P[1]);
              *(_OWORD *)P = 0LL;
            }
            if ( DriverConfiguration < 0 )
              goto LABEL_118;
LABEL_100:
            if ( !DestinationString.Buffer || (v74 & 8) != 0 || (*(_DWORD *)(v6 + 396) & 0x6000) != 0 )
            {
              if ( (*(_DWORD *)a2 & 1) == 0 )
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
            }
            else
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
              if ( DriverConfiguration < 0 )
                goto LABEL_118;
            }
            if ( v101.Buffer )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
              if ( DriverConfiguration < 0 )
                goto LABEL_118;
            }
            else if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
            }
            if ( v102.Buffer )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
              if ( DriverConfiguration < 0 )
                goto LABEL_118;
            }
            else if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
            }
            if ( v103.Buffer )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
              if ( DriverConfiguration < 0 )
                goto LABEL_118;
            }
            else if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
            }
            if ( v104.Buffer )
            {
              DriverConfiguration = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
              if ( DriverConfiguration < 0 )
                goto LABEL_118;
            }
            else if ( (*(_DWORD *)a2 & 1) == 0 )
            {
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
            }
            if ( !a3 || *(_DWORD *)(a3 + 108) == -1 )
            {
              if ( (*(_DWORD *)a2 & 1) == 0 )
              {
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
                PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
              }
            }
            else
            {
              DriverConfiguration = PiPnpRtlSetObjectProperty(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      *(const WCHAR **)(v8 + 8),
                                      1,
                                      v9,
                                      0LL,
                                      &DEVPKEY_Device_MatchingDeviceId,
                                      18,
                                      *(STRSAFE_PCNZWCH *)(a3 + 80),
                                      (unsigned int)*(unsigned __int16 *)(a3 + 72) + 2,
                                      (*(_DWORD *)a2 & 1u) << 17);
              if ( DriverConfiguration < 0 )
                goto LABEL_118;
              DriverConfiguration = PiPnpRtlSetObjectProperty(
                                      *(__int64 *)&PiPnpRtlCtx,
                                      *(const WCHAR **)(v8 + 8),
                                      1,
                                      v9,
                                      0LL,
                                      &DEVPKEY_Device_DriverRank,
                                      7,
                                      (STRSAFE_PCNZWCH)(a3 + 108),
                                      4u,
                                      (*(_DWORD *)a2 & 1u) << 17);
              if ( DriverConfiguration < 0 )
                goto LABEL_118;
            }
            if ( v74 )
              PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
            if ( a3 )
            {
              v38 = v85;
              *v85 = v10;
              if ( (*(_DWORD *)(a3 + 184) & 8) != 0 && (PiDevCfgFlags & 2) != 0 )
                *v38 = v10 | 0x400;
              v39 = *(_QWORD *)(a3 + 32);
              v77 = 0;
              v76 = 0;
              DriverConfiguration = PiDevCfgConfigureDeviceDriverConfiguration(
                                      v78,
                                      a2,
                                      v39,
                                      -1,
                                      0LL,
                                      0LL,
                                      (__int64)&v70,
                                      (__int64)&v71);
              if ( DriverConfiguration < 0 || (v40 = *(_QWORD *)(a3 + 384), v40 == a3 + 384) )
              {
                v41 = v70;
              }
              else
              {
                v41 = v70;
                while ( 1 )
                {
                  v42 = *(_DWORD *)(v40 + 104);
                  v43 = *(void **)(v40 + 32);
                  *(_QWORD *)&v84 = v43;
                  v79 = v42;
                  if ( (v42 & 1) != 0 )
                  {
                    DriverConfiguration = PiDevCfgCopyObjectProperties(
                                            PiPnpRtlCtx,
                                            0,
                                            0,
                                            (_DWORD)v43,
                                            CaseInSensitiveb,
                                            *(_QWORD *)(v78 + 48),
                                            1,
                                            *(_QWORD *)(a2 + 16),
                                            (__int64)PiDevCfgConfigurePropertyMatchCallback,
                                            v40,
                                            (*(_DWORD *)a2 & 1u) << 17);
                    if ( DriverConfiguration < 0 )
                      break;
                    v42 = v79;
                    v43 = (void *)v84;
                  }
                  DriverConfiguration = PiDevCfgConfigureDeviceKeys(v78, a2, v43, v42, &v77, &v76);
                  if ( DriverConfiguration < 0 )
                    break;
                  v44 = v76 | v71;
                  v41 |= v77;
                  v40 = *(_QWORD *)v40;
                  v70 = v41;
                  v71 |= v76;
                  if ( v40 == a3 + 384 )
                    goto LABEL_228;
                }
              }
              v44 = v71;
LABEL_228:
              if ( DriverConfiguration < 0 )
                goto LABEL_118;
              v45 = v91;
              *v85 |= v41;
              *v45 |= v44;
              for ( i = *(__int64 **)(a3 + 208); i != (__int64 *)(a3 + 208); i = (__int64 *)*i )
              {
                if ( (i[23] & 1) != 0 )
                {
                  DriverConfiguration = PiDevCfgConfigureDeviceDriver(
                                          v78,
                                          a2,
                                          (_DWORD)i,
                                          (unsigned int)&v70,
                                          (__int64)&v71);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_118;
                  *v85 |= v70;
                  *v91 |= v71;
                }
              }
              DriverConfiguration = PiDevCfgConfigureDeviceLocation(v78, a2, &v70, &v71);
              if ( DriverConfiguration < 0 )
                goto LABEL_118;
              v28 = v85;
              v29 = v91;
              *v85 |= v70;
              *v29 |= v71;
            }
            else
            {
              v27 = v78;
              v28 = v85;
              if ( (*(_DWORD *)(v78 + 560) & 0x100) != 0 )
              {
                *v85 = 0;
                v29 = v91;
LABEL_180:
                v30 = 0;
                if ( v73 && !InitIsWinPEMode && (unsigned int)PipIsDevNodeDNStarted(v27) )
                  *v29 |= 0x10u;
                if ( (v74 & 2) != 0 )
                  *v29 |= 0x20u;
                if ( v68 != v30 )
                  *v29 |= 1u;
                if ( KeyHandle )
                {
                  DriverConfiguration = PiDevCfgConfigureDeviceKeys(v27, a2, KeyHandle, -1, &v70, &v71);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_118;
                  *v28 |= v70;
                  *v29 |= v71;
                }
                if ( (*v29 & 2) == 0 && v66 == -1 && *(_QWORD *)v90 && Handle )
                {
                  DriverConfiguration = PiDevCfgGetDeviceClassConfigFlags(*(_QWORD *)v90, Handle, &v70);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_118;
                  *v28 |= v70;
                }
                if ( a3 )
                  v31 = *(_OWORD *)(a3 + 424);
                else
                  v31 = *(_OWORD *)&PiDevCfgEmptyString;
                v32 = *(_DWORD *)a2 & 1;
                *(_OWORD *)P = v31;
                v33 = PiPnpRtlSetObjectProperty(
                        *(__int64 *)&PiPnpRtlCtx,
                        *(const WCHAR **)(v8 + 8),
                        1,
                        v9,
                        0LL,
                        &DEVPKEY_Device_ConfigurationId,
                        18,
                        *((STRSAFE_PCNZWCH *)&v31 + 1),
                        (unsigned int)(unsigned __int16)v31 + 2,
                        v32 << 17);
                v24 = *(void **)&v72[3];
                DriverConfiguration = v33;
                if ( v33 < 0 )
                  goto LABEL_119;
                if ( *(_QWORD *)&v72[3] )
                {
                  DriverConfiguration = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_119;
                }
                else if ( (*(_DWORD *)a2 & 1) == 0 )
                {
                  PiPnpRtlSetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(const WCHAR **)(v8 + 8),
                    v72[3] + 1,
                    v9,
                    0LL,
                    &DEVPKEY_Device_ExtendedConfigurationIds,
                    0,
                    0LL,
                    0,
                    0);
                }
                if ( a3 && (v34 = *(const wchar_t **)(a3 + 136)) != 0LL )
                {
                  DriverConfiguration = PiPnpRtlSetObjectProperty(
                                          *(__int64 *)&PiPnpRtlCtx,
                                          *(const WCHAR **)(v8 + 8),
                                          1,
                                          v9,
                                          0LL,
                                          DEVPKEY_Device_MatchingTargetComputerId,
                                          18,
                                          v34,
                                          (unsigned int)*(unsigned __int16 *)(a3 + 128) + 2,
                                          (*(_DWORD *)a2 & 1u) << 17);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_119;
                }
                else if ( (*(_DWORD *)a2 & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
                }
                v36 = v75;
                if ( (v75 & 0x80u) != 0 )
                {
                  v57 = *(_QWORD *)(v8 + 8);
                  BYTE1(v72[0]) = -1;
                  DriverConfiguration = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, v57, 1, (__int64)v9);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_119;
                }
                else if ( (*(_DWORD *)a2 & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
                }
                if ( (v36 & 0x100) != 0 )
                {
                  v58 = *(_QWORD *)(v8 + 8);
                  BYTE2(v72[0]) = -1;
                  DriverConfiguration = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, v58, 1, (__int64)v9);
                  if ( DriverConfiguration < 0 )
                    goto LABEL_119;
                }
                else if ( (*(_DWORD *)a2 & 1) == 0 )
                {
                  PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
                }
                if ( v94 && (_WORD)v93 )
                  PipHardwareConfigActivateService((PCWSTR)v94);
                if ( UnicodeString.Buffer )
                {
                  for ( j = UnicodeString.Buffer; *j; j += v59 + 1 )
                  {
                    PipHardwareConfigActivateService(j);
                    if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
                      PiDevCfgMakeServiceBootStart(j);
                    v59 = -1LL;
                    do
                      ++v59;
                    while ( j[v59] );
                  }
                }
                if ( v98.Buffer )
                {
                  for ( k = v98.Buffer; *k; k += v60 + 1 )
                  {
                    PipHardwareConfigActivateService(k);
                    if ( !PnpBootMode && (*(_DWORD *)(a3 + 184) & 0x10) != 0 )
                      PiDevCfgMakeServiceBootStart(k);
                    v60 = -1LL;
                    do
                      ++v60;
                    while ( k[v60] );
                  }
                }
                goto LABEL_119;
              }
              *v85 = 64;
              PnpDeleteDeviceInterfaces(v8);
              v29 = v91;
            }
            v27 = v78;
            goto LABEL_180;
          }
LABEL_287:
          v83 = (PVOID)*((_QWORD *)&v84 + 1);
          goto LABEL_118;
        }
LABEL_84:
        if ( (*(_DWORD *)a2 & 1) == 0 )
          PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
        goto LABEL_86;
      }
      if ( (*(_DWORD *)a2 & 1) == 0 && (v94 && v92[1] || !v69) )
        PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(v8 + 8), 1, (__int64)v9);
      goto LABEL_73;
    }
    if ( PnpBootMode )
    {
      v10 |= 0x400u;
      v70 = v10;
      goto LABEL_339;
    }
LABEL_323:
    DriverConfiguration = -1073740651;
  }
LABEL_118:
  v24 = *(void **)&v72[3];
LABEL_119:
  if ( v80[1] )
  {
    ExFreePool(v80[1]);
    *(_OWORD *)v80 = 0LL;
  }
  if ( v86[1] )
  {
    ExFreePool(v86[1]);
    *(_OWORD *)v86 = 0LL;
  }
LABEL_123:
  if ( v92[1] )
  {
    ExFreePool(v92[1]);
    *(_OWORD *)v92 = 0LL;
  }
  if ( v94 )
    ExFreePool(v94);
  if ( UnicodeString.Buffer )
    ExFreePool(UnicodeString.Buffer);
  if ( v98.Buffer )
    ExFreePool(v98.Buffer);
  if ( v100.Buffer )
    ExFreePool(v100.Buffer);
  if ( v101.Buffer )
    ExFreePool(v101.Buffer);
  if ( v102.Buffer )
    ExFreePool(v102.Buffer);
  if ( v104.Buffer )
    ExFreePool(v104.Buffer);
  if ( v24 )
    ExFreePool(v24);
  if ( v103.Buffer )
    ExFreePool(v103.Buffer);
  if ( v83 )
    ExFreePool(v83);
  if ( v99[1] )
  {
    ExFreePool(v99[1]);
    *(_OWORD *)v99 = 0LL;
  }
  if ( DestinationString.Buffer )
  {
    ExFreePool(DestinationString.Buffer);
    DestinationString = 0LL;
  }
  if ( v105.Buffer )
    ExFreePoolWithTag(v105.Buffer, 0);
  if ( v96 )
    ExFreePoolWithTag(v96, 0);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DriverConfiguration;
}
