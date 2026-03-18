/*
 * XREFs of RIMOnDisplayStateChange @ 0x14007C1C0
 * Callers:
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x14008E334 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RIMSetDeviceOutputConfig @ 0x14007B81C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x14007C5BC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMGetQDCActivePathsData @ 0x14007CE38 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x14007D080 (RIMFreeQDCActivePathsData.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMOnDisplayStateChange(__int64 a1, int a2, int a3)
{
  char *v3; // rsi
  unsigned int v4; // ebx
  char v5; // di
  bool v6; // bp
  __int64 v7; // r12
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // r8
  _QWORD *i; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // r14
  __int64 v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rbp
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rdi
  __int64 j; // rbx
  __int64 result; // rax
  int v32; // edx
  int v33; // r8d
  char v34; // bl
  bool v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  __int64 UserSessionState; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rax
  char v43; // bl
  bool v44; // di
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  __int128 v48; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0LL;
  v4 = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, a3);
    LOBYTE(v40) = v6;
    LOBYTE(v41) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v41,
      v40,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      75,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v48 = 0LL;
  v7 = RIMGetQDCActivePathsData(&v48);
  v11 = W32GetUserSessionState(v9, v8, v10);
  RIMLockExclusive(v11 + 56);
  v15 = (_QWORD *)(W32GetUserSessionState(v13, v12, v14) + 120);
  i = (_QWORD *)*v15;
  if ( (_QWORD *)*v15 != v15 )
  {
    do
    {
      if ( !*((_BYTE *)i + 65) && !*((_BYTE *)i + 64) )
        ++v4;
      i = (_QWORD *)*i;
    }
    while ( i != v15 );
    if ( v4 )
    {
      v3 = (char *)Win32AllocPoolZInitImpl(256LL, 8LL * v4, 0x6D707352u);
      v4 = 0;
      if ( v3 )
      {
        v17 = (_QWORD *)(W32GetUserSessionState((_DWORD)i, (_DWORD)v16, (_DWORD)v17) + 120);
        for ( i = (_QWORD *)*v17; i != v17; i = (_QWORD *)*i )
        {
          v16 = i - 2;
          if ( !*((_BYTE *)i + 65) && !*((_BYTE *)v16 + 80) )
          {
            v42 = v4++;
            *(_QWORD *)&v3[8 * v42] = v16;
          }
        }
      }
    }
  }
  v19 = W32GetUserSessionState((_DWORD)i, (_DWORD)v16, (_DWORD)v17);
  RIMUnlockExclusive(v19 + 56);
  if ( v4 )
  {
    v23 = v3;
    v24 = v4;
    do
    {
      if ( !v3 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2255LL);
      v25 = *(_QWORD *)v23;
      v26 = *(_QWORD *)v23 + 104LL;
      RIMLockExclusive(v26);
      if ( *(_BYTE *)(v25 + 81) )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v43 = 0;
        }
        v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v45 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v27, v28);
          LOBYTE(v46) = v44;
          LOBYTE(v47) = v43;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v47,
            v46,
            *(_QWORD *)(v45 + 19368),
            3,
            1,
            76,
            (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
        }
      }
      else
      {
        v29 = v25 + 760;
        RIMLockExclusive(v25 + 760);
        for ( j = *(_QWORD *)(v25 + 424); j; j = *(_QWORD *)(j + 40) )
        {
          if ( *(_DWORD *)(j + 48) == 2 )
          {
            if ( *(_DWORD *)(j + 1328) )
              rimFindMonitorForDigitizerWithQDCData(j, v7, 0LL);
            if ( (*(_DWORD *)(j + 184) & 0x80u) != 0 || *(_DWORD *)(j + 1328) )
              RIMSetDeviceOutputConfig((struct RIMDEV *)j, *(struct tagHID_POINTER_DEVICE_INFO **)(j + 456), 1u, v7);
          }
        }
        RIMUnlockExclusive(v29);
      }
      RIMUnlockExclusive(v26);
      v23 += 8;
      --v24;
    }
    while ( v24 );
  }
  if ( v3 )
    GreDeleteFastMutex(v3, v20, v21, v22);
  result = RIMFreeQDCActivePathsData(v7);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (result = *((unsigned int *)WPP_GLOBAL_Control + 11), (result & 1) == 0)
    || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v34 = 0;
  }
  v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v32, v33);
    LOBYTE(v37) = v35;
    LOBYTE(v38) = v34;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v38,
             v37,
             *(_QWORD *)(v36 + 19368),
             4,
             1,
             77,
             (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  return result;
}
