/*
 * XREFs of RIMCreatePointerDeviceDeadzone @ 0x1401DD750
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x1401EDAE8 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 */

__int64 __fastcall RIMCreatePointerDeviceDeadzone(__int64 a1, const struct tagRIMDEADZONE *a2, _QWORD *a3)
{
  char v6; // di
  _QWORD *v7; // rdx
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  RIMDeadzone *v12; // rax
  char *v13; // rsi
  __int64 v14; // rdx
  int v15; // edi
  unsigned int v16; // ecx
  char v17; // bl
  bool v18; // bp
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  char v22; // bl
  bool v23; // si
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  char v27; // bl
  bool v28; // si
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx

  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = &WPP_RECORDER_INITIALIZED;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      32,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    v7 = &WPP_RECORDER_INITIALIZED;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) == 0 || *(_DWORD *)(a1 + 432) >= 5u )
  {
    v15 = -1073741811;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v22 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(v24 + 19336),
        3,
        1,
        34,
        (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    }
  }
  else
  {
    v12 = (RIMDeadzone *)Win32AllocPoolZInitImpl(256LL, 0x40uLL, 0x6E7A4452u);
    v13 = (char *)v12;
    if ( v12 )
    {
      v15 = RIMDeadzone::Initialize(v12, a2);
      if ( v15 < 0 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v17 = 0;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v17;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(v19 + 19336),
            3,
            1,
            33,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        GreDeleteFastMutex(v13);
      }
      else
      {
        v16 = 0;
        v7 = (_QWORD *)(a1 + 392);
        while ( *v7 )
        {
          ++v16;
          ++v7;
          if ( v16 >= 5 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1147);
            goto LABEL_33;
          }
        }
        *(_QWORD *)(a1 + 8LL * v16 + 392) = v13;
        ++*(_DWORD *)(a1 + 432);
        *a3 = v16;
      }
    }
    else
    {
      v15 = -1073741801;
    }
  }
LABEL_33:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v27 = 0;
  }
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v7);
    LOBYTE(v30) = v28;
    LOBYTE(v31) = v27;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v30,
      *(_QWORD *)(v29 + 19336),
      4,
      1,
      35,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
      v15);
  }
  return (unsigned int)v15;
}
