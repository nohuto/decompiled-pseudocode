/*
 * XREFs of rimFindMonitorForDigitizerWithQDCData @ 0x14007C5BC
 * Callers:
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14007C0AC (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMOnDisplayStateChange @ 0x14007C1C0 (RIMOnDisplayStateChange.c)
 *     RIMEnableMonitorMappingForDevice @ 0x140200E20 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFindMonitorForDigitizer @ 0x140205A10 (RIMFindMonitorForDigitizer.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x140207AC4 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x1400D2FA0 (isChildPartition.c)
 *     RIMGetContainerId @ 0x1400EEEE8 (RIMGetContainerId.c)
 *     RIMGetPanelId @ 0x1400EF0E4 (RIMGetPanelId.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1400FB88C (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvDxgkGetMonitorDeviceObject @ 0x140185410 (DrvDxgkGetMonitorDeviceObject.c)
 *     UserLogError @ 0x140188BC0 (UserLogError.c)
 *     RIMGetDisplayMonitor @ 0x14018E0B4 (RIMGetDisplayMonitor.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _wcsnicmp @ 0x1401C7868 (_wcsnicmp.c)
 *     wcsnlen @ 0x1401C7938 (wcsnlen.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall rimFindMonitorForDigitizerWithQDCData(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _DWORD *v3; // r12
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // r11
  __int64 v8; // r10
  int v9; // esi
  unsigned int v10; // r15d
  _QWORD *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned __int16 *v17; // rax
  int v18; // ecx
  int v19; // edx
  unsigned __int16 *v20; // rax
  int v21; // ecx
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // esi
  int v26; // eax
  _DWORD *v27; // rdx
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  bool v31; // zf
  __int64 v32; // rcx
  __int64 result; // rax
  int v34; // edx
  __int64 v35; // rcx
  int v36; // r8d
  char v37; // di
  bool v38; // si
  __int64 UserSessionState; // rax
  int v40; // r8d
  int v41; // edx
  int v42; // [rsp+40h] [rbp-C0h]
  int v43; // [rsp+44h] [rbp-BCh]
  unsigned int v44; // [rsp+4Ch] [rbp-B4h]
  int v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-A8h]
  __int64 v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  _QWORD *v49; // [rsp+80h] [rbp-80h]
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int64 v51; // [rsp+90h] [rbp-70h]
  __int64 v52; // [rsp+98h] [rbp-68h]
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-50h]
  __int64 *v56; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v57; // [rsp+C0h] [rbp-40h]
  _DWORD v58[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-28h]
  int v60; // [rsp+E0h] [rbp-20h]
  _DWORD v61[3]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int128 v62; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v63[54]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t Src[64]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v3 = (_DWORD *)a3;
  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v56 = 0LL;
  if ( !*(_DWORD *)(a1 + 1328) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 829LL);
  if ( !v4 )
    goto LABEL_95;
  a2 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v7 = 0LL;
  v55 = 0LL;
  v8 = 0LL;
  v50 = 0LL;
  a3 = 0LL;
  v54 = 0LL;
  v9 = 0;
  v47 = 0LL;
  v10 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v42 = 0;
  v11 = (_QWORD *)(v4 + 8);
  v49 = (_QWORD *)(v4 + 8);
  v46 = 0LL;
  v57 = 0LL;
  while ( v10 < *(_DWORD *)v4 )
  {
    if ( (*(_DWORD *)(v5 + 168) & 0x40) != 0 )
    {
      if ( !(unsigned __int8)isChildPartition(a1, a2, a3) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 859LL);
        v49 = v11;
      }
      v12 = *v11;
      memset(v61, 0, sizeof(v61));
      v58[1] = 32;
      v13 = 216LL * v10;
      v59 = *(_QWORD *)(v13 + v12 + 16);
      v60 = *(_DWORD *)(v13 + v12 + 28);
      v58[0] = -24;
      if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v58, 0) >= 0
        && *(_DWORD *)(v5 + 1860) == v61[0]
        && __PAIR64__(*(_DWORD *)(v5 + 1872), *(_DWORD *)(v5 + 1864)) == *(_QWORD *)&v61[1] )
      {
        v8 = v47;
        a2 = v46;
        a3 = v44;
        v7 = v50;
        v6 = v13 + *v49;
        v9 = v42;
        break;
      }
    }
    v14 = *v11;
    v49 = v11;
    Object = 0LL;
    v48 = 0LL;
    v15 = 216LL * v10;
    v62 = 0LL;
    if ( (int)DrvDxgkGetMonitorDeviceObject(v15 + v14 + 16, *(unsigned int *)(v15 + v14 + 28), &Object, &v48) >= 0 )
    {
      if ( (int)RIMGetContainerId(v48, &v62, 0LL) < 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 903LL);
      RIMGetPanelId(v48, Src);
      ObfDereferenceObject(Object);
    }
    memset(v63, 0, 0x1A4uLL);
    v16 = *v11;
    v63[1] = *(_QWORD *)(v15 + *v11 + 16);
    LODWORD(v63[2]) = *(_DWORD *)(v15 + v16 + 28);
    v63[0] = 0x1A400000002LL;
    if ( (int)DrvDisplayConfigGetDeviceInfoInternal((struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)v63, 0) >= 0
      && WORD2(v63[20]) )
    {
      v17 = (unsigned __int16 *)&v63[20] + 2;
      do
      {
        v18 = *(unsigned __int16 *)((char *)v17 + v5 + 1604 - ((_QWORD)&v63[20] + 4));
        v19 = *v17 - v18;
        if ( v19 )
          break;
        ++v17;
      }
      while ( v18 );
      if ( !v19 )
      {
        if ( v51 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 935LL);
        v51 = v15 + *v11;
      }
      v20 = (unsigned __int16 *)&v63[20] + 2;
      do
      {
        v21 = *(unsigned __int16 *)((char *)v20 + v5 + 1348 - ((_QWORD)&v63[20] + 4));
        v22 = *v20 - v21;
        if ( v22 )
          break;
        ++v20;
      }
      while ( v21 );
      if ( !v22 )
      {
        if ( v52 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 941LL);
        v52 = v15 + *v11;
      }
    }
    v23 = *(_QWORD *)(v5 + 2112) - v62;
    if ( !v23 )
      v23 = *(_QWORD *)(v5 + 2120) - *((_QWORD *)&v62 + 1);
    if ( !v23 )
    {
      v24 = v57 - *(_QWORD *)(v5 + 2112);
      if ( (_QWORD)v57 == *(_QWORD *)(v5 + 2112) )
        v24 = *((_QWORD *)&v57 + 1) - *(_QWORD *)(v5 + 2120);
      if ( v24 )
      {
        ++v45;
        v54 = *(_QWORD *)(v4 + 8) + 216LL * v10;
      }
    }
    v25 = wcsnlen((const wchar_t *)(v5 + 2132), 0x39uLL);
    v26 = wcsnlen(Src, 0x39uLL);
    if ( !v25 || v25 != v26 )
    {
      v9 = v42;
LABEL_45:
      v8 = v47;
      goto LABEL_46;
    }
    v9 = v42;
    if ( wcsnicmp((const wchar_t *)(v5 + 2132), Src, 0x39uLL) )
      goto LABEL_45;
    v8 = *(_QWORD *)(v4 + 8) + 216LL * v10;
    v9 = v42 + 1;
    v47 = v8;
    ++v42;
LABEL_46:
    if ( *(_DWORD *)(v5 + 1344) == 6 )
    {
      v27 = (_DWORD *)(*(_QWORD *)(v4 + 8) + 216LL * v10);
      if ( *(_DWORD *)(v5 + 1860) == v27[4] && *(_DWORD *)(v5 + 1864) == v27[5] && *(_DWORD *)(v5 + 1868) == v27[6] )
        v6 = *(_QWORD *)(v4 + 8) + 216LL * v10;
    }
    v28 = *(_QWORD *)(v4 + 8);
    v29 = *(_DWORD *)(v28 + 216LL * v10 + 80);
    if ( v29 == 0x80000000 || v29 == 11 || (LOBYTE(a1) = 0, v29 == 13) )
      LOBYTE(a1) = 1;
    if ( (_BYTE)a1 )
    {
      ++v43;
      v7 = v50;
      v55 = v28 + 216LL * v10;
      a3 = v44;
    }
    else
    {
      v7 = v28 + 216LL * v10;
      v50 = v7;
      a3 = ++v44;
    }
    if ( v46 || (a1 = 216LL * v10, *(_DWORD *)(a1 + v28 + 116)) || (a1 = 216LL * v10, *(_DWORD *)(a1 + v28 + 120)) )
    {
      a2 = v46;
    }
    else
    {
      a2 = 216LL * v10 + v28;
      v46 = a2;
    }
    ++v10;
    v11 = (_QWORD *)(v4 + 8);
  }
  if ( v3 )
  {
    *v3 = 0;
    if ( (_DWORD)a3 )
      *v3 = 1;
  }
  if ( v6 )
    goto LABEL_90;
  if ( v51 )
  {
    v6 = v51;
    *(_DWORD *)(v5 + 1344) = 5;
    goto LABEL_90;
  }
  LODWORD(a1) = v52;
  if ( v52 )
  {
    v6 = v52;
    *(_DWORD *)(v5 + 1344) = 1;
    goto LABEL_90;
  }
  if ( v8 && v9 == 1 )
  {
    v6 = v8;
    goto LABEL_75;
  }
  if ( v54 && v45 == 1 )
  {
    v6 = v54;
    goto LABEL_75;
  }
  v30 = *(_DWORD *)(v5 + 2128);
  if ( !v30 )
  {
    v7 = v55;
    if ( v55 )
    {
      v31 = v43 == 1;
      goto LABEL_82;
    }
    goto LABEL_87;
  }
  if ( v30 != 1 || !v7 )
    goto LABEL_87;
  v31 = (_DWORD)a3 == 1;
LABEL_82:
  if ( v31 )
  {
    v6 = v7;
LABEL_75:
    *(_DWORD *)(v5 + 1344) = 2;
LABEL_90:
    if ( (unsigned int)RIMGetDisplayMonitor(v6, v4, &v56) )
    {
      if ( v56 )
        v32 = *v56;
      else
        v32 = 0LL;
      *(_QWORD *)(v5 + 1336) = v32;
      *(_QWORD *)(v5 + 1860) = *(_QWORD *)(v6 + 16);
      *(_DWORD *)(v5 + 1872) = *(_DWORD *)(v6 + 28);
      result = *(unsigned int *)(v6 + 24);
      *(_DWORD *)(v5 + 1868) = result;
      goto LABEL_107;
    }
  }
  else
  {
LABEL_87:
    if ( a2 )
    {
      *(_DWORD *)(v5 + 1344) = 3;
      v6 = a2;
      if ( v3 )
        UserLogError(2147483911LL, a2, a3);
      goto LABEL_90;
    }
  }
LABEL_95:
  if ( v3 )
    UserLogError(2147483911LL, a2, a3);
  v35 = *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 56968);
  if ( *(_QWORD *)(v35 + 96) )
    v32 = **(_QWORD **)(*(_QWORD *)(W32GetUserSessionState(v35, v34, v36) + 56968) + 96LL);
  else
    v32 = 0LL;
  *(_QWORD *)(v5 + 1336) = v32;
  *(_DWORD *)(v5 + 1344) = 4;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v37 = 0;
  }
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v32, (_DWORD)WPP_GLOBAL_Control, v36);
    LOBYTE(v40) = v38;
    LOBYTE(v41) = v37;
    result = WPP_RECORDER_AND_TRACE_SF_(
               *((_QWORD *)WPP_GLOBAL_Control + 3),
               v41,
               v40,
               *(_QWORD *)(UserSessionState + 19368),
               3,
               1,
               11,
               (__int64)&WPP_2aa4d20025f835b2fe1cb6898cbf8660_Traceguids);
    v32 = *(_QWORD *)(v5 + 1336);
  }
LABEL_107:
  if ( !v32 )
    return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1121LL);
  return result;
}
