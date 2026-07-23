/*
 * XREFs of PiDevCfgQueryDriverConfiguration @ 0x140AEA1C8
 * Callers:
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1407AB950 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x1407ADE78 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407AF25C (PpDevCfgProcessDeviceExtensions.c)
 *     PiDevCfgConfigureDevice @ 0x140A43BF0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AEA96C (PiDevCfgQueryIncludedDriverConfigurations.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     _PnpGetObjectProperty @ 0x14095ED60 (_PnpGetObjectProperty.c)
 *     RtlStringFromGUIDEx @ 0x1409FA570 (RtlStringFromGUIDEx.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     PiDevCfgQueryObjectProperties @ 0x140AE9D80 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgVerifyService @ 0x140AEA7D8 (PiDevCfgVerifyService.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140AEA96C (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140AEACE8 (PiDevCfgBuildDriverConfigurationId.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall PiDevCfgQueryDriverConfiguration(__int64 a1)
{
  int v1; // eax
  const WCHAR *v3; // rbx
  int RegistryValues; // eax
  int ObjectProperties; // ebx
  const WCHAR *v6; // rcx
  const WCHAR *v8; // rsi
  const WCHAR *v9; // rsi
  char *v10; // r9
  __int64 v11; // rdx
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rax
  ULONG v15; // [rsp+28h] [rbp-E0h]
  __int16 v16; // [rsp+68h] [rbp-A0h] BYREF
  char v17; // [rsp+6Ah] [rbp-9Eh] BYREF
  int v18; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  int v21[2]; // [rsp+98h] [rbp-70h] BYREF
  int v22; // [rsp+A0h] [rbp-68h]
  const wchar_t *v23; // [rsp+A8h] [rbp-60h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  int v25; // [rsp+B8h] [rbp-50h]
  const int *v26; // [rsp+C0h] [rbp-48h]
  int v27; // [rsp+C8h] [rbp-40h]
  __int64 v28; // [rsp+D0h] [rbp-38h]
  int v29; // [rsp+D8h] [rbp-30h]
  int v30; // [rsp+DCh] [rbp-2Ch]
  const wchar_t *v31; // [rsp+E0h] [rbp-28h]
  __int64 *v32; // [rsp+E8h] [rbp-20h]
  int v33; // [rsp+F0h] [rbp-18h]
  __int16 *v34; // [rsp+F8h] [rbp-10h]
  int v35; // [rsp+100h] [rbp-8h]
  int v36; // [rsp+108h] [rbp+0h]
  __int64 *v37; // [rsp+110h] [rbp+8h]
  const wchar_t *v38; // [rsp+118h] [rbp+10h]
  UNICODE_STRING *p_DestinationString; // [rsp+120h] [rbp+18h]
  int v40; // [rsp+128h] [rbp+20h]
  int v41; // [rsp+12Ch] [rbp+24h]
  int v42; // [rsp+130h] [rbp+28h]
  int v43; // [rsp+148h] [rbp+40h]
  const wchar_t *v44; // [rsp+150h] [rbp+48h]
  __int64 v45; // [rsp+158h] [rbp+50h]
  int v46; // [rsp+160h] [rbp+58h]
  int v47; // [rsp+180h] [rbp+78h]
  const wchar_t *v48; // [rsp+188h] [rbp+80h]
  __int64 v49; // [rsp+190h] [rbp+88h]
  int v50; // [rsp+198h] [rbp+90h]
  int v51; // [rsp+1B8h] [rbp+B0h]
  const wchar_t *v52; // [rsp+1C0h] [rbp+B8h]
  __int64 v53; // [rsp+1C8h] [rbp+C0h]
  int v54; // [rsp+1D0h] [rbp+C8h]
  int v55; // [rsp+1F0h] [rbp+E8h]
  const wchar_t *v56; // [rsp+1F8h] [rbp+F0h]
  __int64 v57; // [rsp+200h] [rbp+F8h]
  int v58; // [rsp+208h] [rbp+100h]
  int v59; // [rsp+228h] [rbp+120h]
  const wchar_t *v60; // [rsp+230h] [rbp+128h]
  __int64 v61; // [rsp+238h] [rbp+130h]
  int v62; // [rsp+240h] [rbp+138h]
  int v63; // [rsp+260h] [rbp+158h]
  const wchar_t *v64; // [rsp+268h] [rbp+160h]
  __int64 v65; // [rsp+270h] [rbp+168h]
  int v66; // [rsp+278h] [rbp+170h]

  v1 = *(_DWORD *)(a1 + 184);
  v16 = 0;
  v17 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v18 = 1;
  LODWORD(v19) = 0;
  if ( (v1 & 0x20) != 0 )
  {
    v3 = *(const WCHAR **)(a1 + 32);
    if ( !v3 )
      return (unsigned int)-1073740653;
  }
  else
  {
    ObjectProperties = PiDevCfgBuildDriverConfigurationId(a1, a1 + 424);
    if ( ObjectProperties < 0 )
      goto LABEL_16;
    if ( !*(_QWORD *)(a1 + 24) || (v3 = *(const WCHAR **)(a1 + 32)) == 0LL )
    {
LABEL_15:
      ObjectProperties = -1073740653;
      goto LABEL_16;
    }
  }
  memset_0(v21, 0, 0x230uLL);
  v25 = 0x1000000;
  v33 = 117440512;
  v22 = 288;
  v40 = 117440512;
  v23 = L"Service";
  v46 = 117440512;
  v29 = 304;
  v24 = a1 + 288;
  LODWORD(v37) = 304;
  v31 = L"LowerFilters";
  v43 = 304;
  v38 = L"UpperFilters";
  v50 = 0x4000000;
  v44 = L"Win32Services";
  v54 = 117440512;
  v48 = L"ConfigFlags";
  v49 = a1 + 416;
  v52 = L"IncludedInfs";
  v56 = L"IncludedConfigs";
  v60 = L"Reboot";
  v61 = a1 + 420;
  v64 = L"ShimIds";
  v51 = 304;
  v58 = 117440512;
  v55 = 304;
  v62 = 0x4000000;
  v59 = 288;
  v66 = 117440512;
  v63 = 304;
  v65 = a1 + 400;
  v32 = (__int64 *)(a1 + 304);
  p_DestinationString = (UNICODE_STRING *)(a1 + 320);
  v45 = a1 + 336;
  v47 = 292;
  v53 = a1 + 352;
  v57 = a1 + 368;
  RegistryValues = RtlpQueryRegistryValues(3221225472LL, v3, (__int64)v21, 0LL, v15, 1);
  ObjectProperties = RegistryValues;
  if ( RegistryValues == -1073741772 )
    goto LABEL_15;
  if ( RegistryValues < 0 )
    goto LABEL_16;
  if ( *(_WORD *)(a1 + 304) <= 2u && *(_QWORD *)(a1 + 312) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
  if ( *(_WORD *)(a1 + 320) <= 2u && *(_QWORD *)(a1 + 328) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 320));
  if ( *(_WORD *)(a1 + 336) <= 2u && *(_QWORD *)(a1 + 344) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 336));
  if ( *(_WORD *)(a1 + 352) <= 2u && *(_QWORD *)(a1 + 360) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 352));
  if ( *(_WORD *)(a1 + 368) <= 2u && *(_QWORD *)(a1 + 376) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 368));
  if ( *(_WORD *)(a1 + 400) <= 2u && *(_QWORD *)(a1 + 408) )
    RtlFreeAnsiString((PUNICODE_STRING)(a1 + 400));
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 104) & 4) == 0 && *(_QWORD *)(a1 + 296) )
      RtlFreeAnsiString((PUNICODE_STRING)(a1 + 288));
    if ( (*(_DWORD *)(a1 + 104) & 2) == 0 )
    {
      if ( *(_QWORD *)(a1 + 312) )
        RtlFreeAnsiString((PUNICODE_STRING)(a1 + 304));
      if ( *(_QWORD *)(a1 + 328) )
        RtlFreeAnsiString((PUNICODE_STRING)(a1 + 320));
    }
  }
  v6 = *(const WCHAR **)(a1 + 296);
  if ( v6 )
  {
    if ( *(_WORD *)(a1 + 288) )
    {
      ObjectProperties = PiDevCfgVerifyService(v6);
      if ( ObjectProperties < 0 )
        goto LABEL_15;
    }
  }
  v8 = *(const WCHAR **)(a1 + 312);
  if ( v8 )
  {
    while ( *v8 )
    {
      ObjectProperties = PiDevCfgVerifyService(v8);
      if ( ObjectProperties < 0 )
        goto LABEL_15;
      v13 = -1LL;
      do
        ++v13;
      while ( v8[v13] );
      v8 += v13 + 1;
    }
    if ( ObjectProperties < 0 )
      goto LABEL_16;
  }
  v9 = *(const WCHAR **)(a1 + 328);
  if ( v9 )
  {
    while ( *v9 )
    {
      ObjectProperties = PiDevCfgVerifyService(v9);
      if ( ObjectProperties < 0 )
        goto LABEL_15;
      v14 = -1LL;
      do
        ++v14;
      while ( v9[v14] );
      v9 += v14 + 1;
    }
    if ( ObjectProperties < 0 )
      goto LABEL_16;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
    goto LABEL_35;
  memset_0(v21, 0, 0xA0uLL);
  v10 = *(char **)(a1 + 16);
  v11 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)v21 = DEVPKEY_DriverPackage_ClassGuid;
  v22 = 13;
  v26 = &DEVPKEY_DriverPackage_ProviderName;
  v32 = DEVPKEY_DriverPackage_NeedsReconfig;
  v34 = &v16;
  v23 = (const wchar_t *)(a1 + 240);
  v37 = DEVPKEY_DriverPackage_GroupIds;
  LODWORD(v24) = 16;
  p_DestinationString = &DestinationString;
  v27 = 18;
  v28 = a1 + 272;
  v30 = 6;
  v33 = 17;
  v35 = 1;
  LODWORD(v38) = 8210;
  v41 = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(6LL, v11, 8, v10, (__int64)v21, 4u);
  if ( ObjectProperties < 0 )
    goto LABEL_16;
  if ( v25 < 0 )
  {
    *(_OWORD *)(a1 + 240) = 0LL;
    goto LABEL_25;
  }
  ObjectProperties = RtlStringFromGUIDEx((PGUID)(a1 + 240), (PUNICODE_STRING)(a1 + 256), 1u);
  if ( ObjectProperties >= 0 )
  {
LABEL_25:
    if ( (int)v31 < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)(a1 + 272), 0LL);
    if ( v36 < 0 )
    {
      v12 = 0;
      LOBYTE(v16) = 0;
    }
    else
    {
      v12 = v16;
    }
    if ( v12 == -1 )
      *(_DWORD *)(a1 + 184) |= 0x40u;
    if ( v42 < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( DestinationString.Buffer )
    {
      if ( DestinationString.Length > 2u )
      {
        *(_DWORD *)(a1 + 184) |= 0x80u;
        if ( (int)PnpGetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(_QWORD *)(a1 + 64),
                    8,
                    *(char **)(a1 + 16),
                    0LL,
                    (__int64)DEVPKEY_DriverPackage_NoGroupUpdate,
                    &v18,
                    (__int64)&v17,
                    1u,
                    (__int64)&v19,
                    0) < 0
          || v18 != 17
          || (_DWORD)v19 != 1
          || !v17 )
        {
          *(_DWORD *)(a1 + 184) |= 0x100u;
        }
      }
    }
    ObjectProperties = PiDevCfgQueryIncludedDriverConfigurations(a1);
    if ( ObjectProperties < 0 )
      goto LABEL_16;
LABEL_35:
    *(_DWORD *)(a1 + 184) |= 1u;
  }
LABEL_16:
  if ( DestinationString.Buffer )
    ExFreePool(DestinationString.Buffer);
  return (unsigned int)ObjectProperties;
}
