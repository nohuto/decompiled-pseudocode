/*
 * XREFs of ?InitializeInputGlobals@@YAJXZ @ 0x140241168
 * Callers:
 *     InputInitialize @ 0x14021C368 (InputInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x1401014D8 (IsCurrentSessionHostServiceSession.c)
 *     ?InitializeMouseGlobals@@YAJXZ @ 0x14015C51C (-InitializeMouseGlobals@@YAJXZ.c)
 *     ?InitializeInputSettingsGlobals@@YAJXZ @ 0x140241504 (-InitializeInputSettingsGlobals@@YAJXZ.c)
 *     ?InitializeSensorGlobals@@YAJXZ @ 0x140241C14 (-InitializeSensorGlobals@@YAJXZ.c)
 *     ?InitializeKeyboardGlobals@@YAJXZ @ 0x140241D0C (-InitializeKeyboardGlobals@@YAJXZ.c)
 */

__int64 InitializeInputGlobals(void)
{
  unsigned __int128 v0; // rax
  unsigned __int64 v1; // rcx
  int v2; // ebx
  bool v3; // di
  bool v4; // si
  int v5; // edx
  int v6; // r8d
  __int64 v7; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  bool v20; // bl
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx
  __int16 v24; // [rsp+30h] [rbp-28h]
  char v25; // [rsp+40h] [rbp-18h]

  if ( (unsigned int)IsCurrentSessionHostServiceSession() )
  {
    v0 = (unsigned __int64)(5000 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v1 = 5000 * gliQpcFreq.QuadPart / 0x3E8uLL;
    gqpcAgeLimit = v1;
  }
  *(_DWORD *)(W32GetUserSessionState(v1, *((_QWORD *)&v0 + 1)) + 3288) = 0;
  v2 = InitializeSensorGlobals();
  if ( v2 < 0 )
  {
    v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v2;
    v25 = v2;
    v7 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69144);
    v24 = 11;
LABEL_12:
    LOBYTE(v6) = v4;
    LOBYTE(v5) = v3;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v5,
      v6,
      v7,
      2,
      14,
      v24,
      (__int64)&WPP_4e1cd29d10353cc60806a6e7b0473c7b_Traceguids,
      v25);
    return (unsigned int)v2;
  }
  v2 = InitializeKeyboardGlobals();
  if ( v2 < 0 )
  {
    v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v2;
    v25 = v2;
    v7 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69144);
    v24 = 12;
    goto LABEL_12;
  }
  v2 = InitializeMouseGlobals(v10, v9);
  if ( v2 < 0 )
  {
    v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v2;
    v25 = v2;
    v7 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69144);
    v24 = 13;
    goto LABEL_12;
  }
  UserSessionState = W32GetUserSessionState(v12, v11);
  v3 = 1;
  *(_WORD *)(UserSessionState + 17168) = 1;
  *(_DWORD *)(UserSessionState + 17172) = 1;
  *(_DWORD *)(W32GetUserSessionState(v15, v14) + 17384) = 0;
  v2 = InitializeInputSettingsGlobals();
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v3 = 0;
    }
    v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v3 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v2;
    v25 = v2;
    v7 = *(_QWORD *)(W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control) + 69144);
    v24 = 17;
    goto LABEL_12;
  }
  v18 = W32GetUserSessionState(v17, v16);
  v19 = Win32AllocPoolZInitImpl(256LL, 0x50uLL, 0x49637355u);
  *(_QWORD *)(v18 + 18912) = v19;
  if ( v19 )
    return 0LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v3 = 0;
  }
  v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = W32GetUserSessionState(&WPP_GLOBAL_Control, WPP_GLOBAL_Control);
    LOBYTE(v22) = v20;
    LOBYTE(v23) = v3;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v23,
      v22,
      *(_QWORD *)(v21 + 69144),
      2,
      14,
      18,
      (__int64)&WPP_4e1cd29d10353cc60806a6e7b0473c7b_Traceguids,
      23);
  }
  return 3221225495LL;
}
