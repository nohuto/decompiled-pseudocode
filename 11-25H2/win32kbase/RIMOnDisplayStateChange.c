/*
 * XREFs of RIMOnDisplayStateChange @ 0x14017F184
 * Callers:
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F88D8 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RIMGetQDCActivePathsData @ 0x14002B9C8 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x14002BC10 (RIMFreeQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x14002D684 (RIMSetDeviceOutputConfig.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E5C14 (rimFindMonitorForDigitizerWithQDCData.c)
 */

void __fastcall RIMOnDisplayStateChange(__int64 a1, __int64 a2)
{
  char *v2; // rsi
  unsigned int v3; // ebx
  char v4; // di
  bool v5; // bp
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  unsigned int *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  _QWORD *i; // rcx
  _QWORD *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  char *v21; // r14
  __int64 v22; // r15
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 j; // rbx
  char v28; // bl
  bool v29; // di
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v33; // rdx
  char v34; // bl
  bool v35; // di
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  __int128 v39; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0LL;
  v3 = 0;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v7) = v5;
    LOBYTE(v8) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v7,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      76,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v39 = 0LL;
  v9 = RIMGetQDCActivePathsData((unsigned int *)&v39);
  v12 = W32GetUserSessionState(v11, v10);
  RIMLockExclusive(v12 + 56);
  v15 = (_QWORD *)(W32GetUserSessionState(v14, v13) + 120);
  i = (_QWORD *)*v15;
  if ( (_QWORD *)*v15 != v15 )
  {
    do
    {
      if ( !*((_BYTE *)i + 65) && !*((_BYTE *)i + 64) )
        ++v3;
      i = (_QWORD *)*i;
    }
    while ( i != v15 );
    if ( v3 )
    {
      v2 = (char *)Win32AllocPoolZInitImpl(256LL, 8LL * v3, 0x6D707352u);
      v3 = 0;
      if ( v2 )
      {
        v16 = (_QWORD *)(W32GetUserSessionState(i, v16) + 120);
        for ( i = (_QWORD *)*v16; i != v16; i = (_QWORD *)*i )
        {
          v18 = i - 2;
          if ( !*((_BYTE *)i + 65) && !*((_BYTE *)v18 + 80) )
          {
            v19 = v3++;
            *(_QWORD *)&v2[8 * v19] = v18;
          }
        }
      }
    }
  }
  v20 = W32GetUserSessionState(i, v16);
  RIMUnlockExclusive(v20 + 56);
  if ( v3 )
  {
    v21 = v2;
    v22 = v3;
    do
    {
      if ( !v2 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2295LL);
      v23 = *(_QWORD *)v21;
      v24 = *(_QWORD *)v21 + 104LL;
      RIMLockExclusive(v24);
      if ( *(_BYTE *)(v23 + 81) )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v28 = 0;
        }
        v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v30 = W32GetUserSessionState(WPP_GLOBAL_Control, v25);
          LOBYTE(v31) = v29;
          LOBYTE(v32) = v28;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v32,
            v31,
            *(_QWORD *)(v30 + 19336),
            3,
            1,
            77,
            (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
        }
      }
      else
      {
        v26 = v23 + 760;
        RIMLockExclusive(v23 + 760);
        for ( j = *(_QWORD *)(v23 + 424); j; j = *(_QWORD *)(j + 40) )
        {
          if ( *(_DWORD *)(j + 48) == 2 )
          {
            if ( *(_DWORD *)(j + 1336) )
              rimFindMonitorForDigitizerWithQDCData(j, v9, 0LL);
            if ( (*(_DWORD *)(j + 184) & 0x80u) != 0 || *(_DWORD *)(j + 1336) )
              RIMSetDeviceOutputConfig(
                (struct RIMDEV *)j,
                *(struct tagHID_POINTER_DEVICE_INFO **)(j + 456),
                1u,
                (__int64)v9);
          }
        }
        RIMUnlockExclusive(v26);
      }
      RIMUnlockExclusive(v24);
      v21 += 8;
      --v22;
    }
    while ( v22 );
  }
  if ( v2 )
    GreDeleteFastMutex(v2);
  RIMFreeQDCActivePathsData((__int64)v9);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v34 = 0;
  }
  v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v36 = W32GetUserSessionState(WPP_GLOBAL_Control, v33);
    LOBYTE(v37) = v35;
    LOBYTE(v38) = v34;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v38,
      v37,
      *(_QWORD *)(v36 + 19336),
      4,
      1,
      78,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
}
