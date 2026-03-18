/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x1401E5C14
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14002C2BC (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMOnDisplayStateChange @ 0x14017F184 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401DA730 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x1401E5030 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1401E8734 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x140060A90 (isChildPartition.c)
 *     UserLogError @ 0x1400B06D0 (UserLogError.c)
 *     RIMGetContainerId @ 0x1400B180C (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1400B1AA0 (RIMGetPanelId.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400F6DD8 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvDxgkGetMonitorDeviceObject @ 0x14014AB30 (DrvDxgkGetMonitorDeviceObject.c)
 *     RIMGetDisplayMonitor @ 0x14014FDC0 (RIMGetDisplayMonitor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _wcsnicmp @ 0x1401A334C (_wcsnicmp.c)
 *     wcsnlen @ 0x1401A3450 (wcsnlen.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // r15d
  __int64 v5; // r13
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  int v14; // r14d
  _QWORD *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  ULONG v20; // r8d
  __int64 v21; // rcx
  unsigned __int16 *v22; // rax
  int v23; // ecx
  int v24; // edx
  unsigned __int16 *v25; // rax
  int v26; // ecx
  int v27; // edx
  int v28; // esi
  int v29; // eax
  _DWORD *v30; // rdx
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  char v36; // di
  bool v37; // si
  __int64 UserSessionState; // rax
  int v39; // r8d
  int v40; // edx
  int v41; // [rsp+40h] [rbp-C0h]
  int v42; // [rsp+44h] [rbp-BCh]
  int v43; // [rsp+4Ch] [rbp-B4h]
  int v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h]
  struct _DEVICE_OBJECT *v49; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h]
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v55; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v56[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-40h]
  int v58; // [rsp+C8h] [rbp-38h]
  _DWORD v59[3]; // [rsp+CCh] [rbp-34h] BYREF
  __int128 v60; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v61; // [rsp+E8h] [rbp-18h]
  _DWORD v62[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v63; // [rsp+108h] [rbp+8h]
  int v64; // [rsp+110h] [rbp+10h]
  _WORD v65[206]; // [rsp+114h] [rbp+14h] BYREF
  wchar_t Src[64]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v3 = 0;
  v5 = a2;
  v6 = a1;
  v7 = 0LL;
  v55 = 0LL;
  if ( !*(_DWORD *)(a1 + 1336) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 829);
  if ( !v5 )
    goto LABEL_91;
  v8 = 0LL;
  a2 = 0LL;
  a1 = 0LL;
  v9 = 0LL;
  v47 = 0LL;
  v10 = 0LL;
  v48 = 0LL;
  v11 = 0LL;
  v45 = 0LL;
  v12 = 0LL;
  v51 = 0LL;
  v13 = 0;
  v52 = 0LL;
  v14 = 0;
  v53 = 0LL;
  v61 = 0LL;
  v46 = 0LL;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v41 = 0;
  if ( !*(_DWORD *)v5 )
    goto LABEL_60;
  v15 = (_QWORD *)(v5 + 8);
  v50 = (_QWORD *)(v5 + 8);
  while ( 1 )
  {
    if ( (*(_DWORD *)(v6 + 168) & 0x40) != 0 )
    {
      if ( !isChildPartition(a1, a2) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 859);
        v50 = v15;
      }
      v16 = *v15;
      memset(v59, 0, sizeof(v59));
      v56[1] = 32;
      v17 = 216LL * v3;
      v57 = *(_QWORD *)(v17 + v16 + 16);
      v58 = *(_DWORD *)(v17 + v16 + 28);
      v56[0] = -24;
      if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v56, 0) >= 0
        && *(_DWORD *)(v6 + 1868) == v59[0]
        && __PAIR64__(*(_DWORD *)(v6 + 1880), *(_DWORD *)(v6 + 1872)) == *(_QWORD *)&v59[1] )
      {
        break;
      }
    }
    v18 = *v15;
    Object = 0LL;
    v49 = 0LL;
    v19 = 216LL * v3;
    v60 = 0LL;
    v50 = v15;
    if ( (int)DrvDxgkGetMonitorDeviceObject(
                v19 + v18 + 16,
                *(_DWORD *)(v19 + v18 + 28),
                (__int64)&Object,
                (__int64)&v49) >= 0 )
    {
      if ( (int)RIMGetContainerId(v49, &v60, 0LL) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 903);
      RIMGetPanelId(v49, Src, v20);
      ObfDereferenceObject(Object);
    }
    memset(v65, 0, 0x190uLL);
    v21 = *v15;
    v63 = *(_QWORD *)(v19 + *v15 + 16);
    v64 = *(_DWORD *)(v19 + v21 + 28);
    v62[0] = 2;
    v62[1] = 420;
    if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v62, 0) >= 0 && v65[72] )
    {
      v22 = &v65[72];
      do
      {
        v23 = *(unsigned __int16 *)((char *)v22 + v6 + 1612 - (_QWORD)&v65[72]);
        v24 = *v22 - v23;
        if ( v24 )
          break;
        ++v22;
      }
      while ( v23 );
      if ( !v24 )
      {
        if ( v47 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 935);
        v47 = v19 + *v15;
      }
      v25 = &v65[72];
      do
      {
        v26 = *(unsigned __int16 *)((char *)v25 + v6 + 1356 - (_QWORD)&v65[72]);
        v27 = *v25 - v26;
        if ( v27 )
          break;
        ++v25;
      }
      while ( v26 );
      if ( !v27 )
      {
        if ( v48 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 941);
        v48 = v19 + *v15;
      }
    }
    if ( *(_OWORD *)(v6 + 2120) == v60 && v61 != *(_OWORD *)(v6 + 2120) )
    {
      ++v44;
      v53 = *(_QWORD *)(v5 + 8) + 216LL * v3;
    }
    v28 = wcsnlen((const wchar_t *)(v6 + 2140), 0x39uLL);
    v29 = wcsnlen(Src, 0x39uLL);
    if ( !v28 || v28 != v29 )
    {
      v14 = v41;
LABEL_41:
      v12 = v46;
      goto LABEL_42;
    }
    v14 = v41;
    if ( wcsnicmp((const wchar_t *)(v6 + 2140), Src, 0x39uLL) )
      goto LABEL_41;
    v12 = *(_QWORD *)(v5 + 8) + 216LL * v3;
    v14 = v41 + 1;
    v46 = v12;
    ++v41;
LABEL_42:
    if ( *(_DWORD *)(v6 + 1352) == 6 )
    {
      v30 = (_DWORD *)(*(_QWORD *)(v5 + 8) + 216LL * v3);
      if ( *(_DWORD *)(v6 + 1868) == v30[4] && *(_DWORD *)(v6 + 1872) == v30[5] && *(_DWORD *)(v6 + 1876) == v30[6] )
        v7 = *(_QWORD *)(v5 + 8) + 216LL * v3;
    }
    a2 = *(_QWORD *)(v5 + 8);
    v31 = *(_DWORD *)(a2 + 216LL * v3 + 80);
    if ( v31 == 0x80000000 || v31 == 11 || v31 == 13 )
    {
      ++v42;
      v9 = a2 + 216LL * v3;
      v13 = v43;
      v10 = v52;
      v51 = v9;
    }
    else
    {
      v10 = a2 + 216LL * v3;
      v9 = v51;
      v13 = ++v43;
      v52 = v10;
    }
    a1 = v45;
    if ( !v45 )
    {
      if ( *(_DWORD *)(216LL * v3 + a2 + 116) || *(_DWORD *)(216LL * v3 + a2 + 120) )
      {
        a1 = 0LL;
      }
      else
      {
        a1 = a2 + 216LL * v3;
        v45 = a1;
      }
    }
    if ( ++v3 >= *(_DWORD *)v5 )
      goto LABEL_59;
    v15 = (_QWORD *)(v5 + 8);
  }
  a1 = v45;
  v12 = v46;
  v13 = v43;
  v9 = v51;
  v7 = v17 + *v50;
  v10 = v52;
  v14 = v41;
LABEL_59:
  v11 = v53;
  a2 = v48;
  v8 = v47;
LABEL_60:
  if ( a3 )
  {
    *a3 = 0;
    if ( v13 )
      *a3 = 1;
  }
  if ( v7 )
  {
LABEL_86:
    if ( !(unsigned int)RIMGetDisplayMonitor(v7, (unsigned int *)v5, &v55) )
      goto LABEL_91;
    if ( v55 )
      v33 = *v55;
    else
      v33 = 0LL;
    *(_QWORD *)(v6 + 1344) = v33;
    *(_QWORD *)(v6 + 1868) = *(_QWORD *)(v7 + 16);
    *(_DWORD *)(v6 + 1880) = *(_DWORD *)(v7 + 28);
    *(_DWORD *)(v6 + 1876) = *(_DWORD *)(v7 + 24);
    goto LABEL_103;
  }
  if ( v8 )
  {
    v7 = v8;
    *(_DWORD *)(v6 + 1352) = 5;
    goto LABEL_86;
  }
  if ( a2 )
  {
    v7 = a2;
    *(_DWORD *)(v6 + 1352) = 1;
    goto LABEL_86;
  }
  if ( v12 && v14 == 1 )
  {
    v7 = v12;
    goto LABEL_71;
  }
  if ( v11 && v44 == 1 )
  {
    v7 = v11;
    goto LABEL_71;
  }
  v32 = *(_DWORD *)(v6 + 2136);
  if ( v32 )
  {
    if ( v32 != 1 || !v10 || v13 != 1 )
      goto LABEL_83;
    v7 = v10;
LABEL_71:
    *(_DWORD *)(v6 + 1352) = 2;
    goto LABEL_86;
  }
  if ( v9 && v42 == 1 )
  {
    v7 = v9;
    goto LABEL_71;
  }
LABEL_83:
  if ( a1 )
  {
    *(_DWORD *)(v6 + 1352) = 3;
    v7 = a1;
    if ( a3 )
      UserLogError(-2147483385);
    goto LABEL_86;
  }
LABEL_91:
  if ( a3 )
    UserLogError(-2147483385);
  v35 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968);
  if ( *(_QWORD *)(v35 + 104) )
    v33 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v35, v34) + 56968) + 104LL);
  else
    v33 = 0LL;
  *(_QWORD *)(v6 + 1344) = v33;
  *(_DWORD *)(v6 + 1352) = 4;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v36 = 0;
  }
  v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v33, WPP_GLOBAL_Control);
    LOBYTE(v39) = v37;
    LOBYTE(v40) = v36;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v40,
      v39,
      *(_QWORD *)(UserSessionState + 19336),
      3,
      1,
      11,
      (__int64)&WPP_2aa4d20025f835b2fe1cb6898cbf8660_Traceguids);
    v33 = *(_QWORD *)(v6 + 1344);
  }
LABEL_103:
  if ( !v33 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1121);
}
