/*
 * XREFs of RIMCreatePointerDeviceDeadzone @ 0x140203450
 * Callers:
 *     <none>
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z @ 0x14020C184 (-Initialize@RIMDeadzone@@QEAAJPEBUtagRIMDEADZONE@@@Z.c)
 */

__int64 __fastcall RIMCreatePointerDeviceDeadzone(__int64 a1, const struct tagRIMDEADZONE *a2, _QWORD *a3)
{
  char v6; // di
  _UNKNOWN **v7; // rdx
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  RIMDeadzone *v12; // rax
  char *v13; // rsi
  int v14; // edi
  __int64 v15; // r9
  unsigned int i; // ecx
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

  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = &WPP_RECORDER_INITIALIZED;
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(
                         (_DWORD)WPP_GLOBAL_Control,
                         (unsigned int)&WPP_RECORDER_INITIALIZED,
                         (_DWORD)a3);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      32,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
    v7 = &WPP_RECORDER_INITIALIZED;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) == 0 || *(_DWORD *)(a1 + 432) >= 5u )
  {
    v14 = -1073741811;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v22 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, (_DWORD)a3);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v22;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(v24 + 19368),
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
      v14 = RIMDeadzone::Initialize(v12, a2);
      if ( v14 < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v17 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v17 = 0;
        }
        v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v19 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v7, (_DWORD)a3);
          LOBYTE(v20) = v18;
          LOBYTE(v21) = v17;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v21,
            v20,
            *(_QWORD *)(v19 + 19368),
            3,
            1,
            33,
            (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids);
        }
        GreDeleteFastMutex(v13, (__int64)v7, (__int64)a3, v15);
      }
      else
      {
        for ( i = 0; i < 5; ++i )
        {
          if ( !*(_QWORD *)(a1 + 8LL * i + 392) )
          {
            *(_QWORD *)(a1 + 8LL * i + 392) = v13;
            ++*(_DWORD *)(a1 + 432);
            *a3 = i;
            goto LABEL_34;
          }
        }
        MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 1147);
      }
    }
    else
    {
      v14 = -1073741801;
    }
  }
LABEL_34:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v27 = 0;
  }
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v7, (_DWORD)a3);
    LOBYTE(v30) = v28;
    LOBYTE(v31) = v27;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v30,
      *(_QWORD *)(v29 + 19368),
      4,
      1,
      35,
      (__int64)&WPP_d0136f6132203aac44a878359d3f87a2_Traceguids,
      v14);
  }
  return (unsigned int)v14;
}
