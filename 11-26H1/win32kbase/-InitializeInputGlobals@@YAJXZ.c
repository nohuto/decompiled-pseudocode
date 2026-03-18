/*
 * XREFs of ?InitializeInputGlobals@@YAJXZ @ 0x1401BCD80
 * Callers:
 *     InputInitialize @ 0x140194D38 (InputInitialize.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     IsCurrentSessionHostServiceSession @ 0x140142338 (IsCurrentSessionHostServiceSession.c)
 *     ?InitializeMouseGlobals@@YAJXZ @ 0x14019CC00 (-InitializeMouseGlobals@@YAJXZ.c)
 *     ?InitializeInputSettingsGlobals@@YAJXZ @ 0x14024A8A8 (-InitializeInputSettingsGlobals@@YAJXZ.c)
 *     ?InitializeSensorGlobals@@YAJXZ @ 0x14024B008 (-InitializeSensorGlobals@@YAJXZ.c)
 *     ?InitializeKeyboardGlobals@@YAJXZ @ 0x14024B0E4 (-InitializeKeyboardGlobals@@YAJXZ.c)
 */

__int64 __fastcall InitializeInputGlobals(__int64 a1)
{
  unsigned __int128 v1; // rax
  unsigned __int64 v2; // rcx
  int v3; // r8d
  int v4; // ebx
  int v5; // r8d
  bool v6; // di
  bool v7; // si
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r9
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 UserSessionState; // rax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // r8d
  bool v28; // bl
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int16 v32; // [rsp+30h] [rbp-28h]
  char v33; // [rsp+40h] [rbp-18h]

  if ( (unsigned int)IsCurrentSessionHostServiceSession(a1) )
  {
    v1 = (unsigned __int64)(5000 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v2 = 5000 * gliQpcFreq.QuadPart / 0x3E8uLL;
    gqpcAgeLimit = v2;
  }
  *(_DWORD *)(W32GetUserSessionState(v2, DWORD2(v1), v3) + 3288) = 0;
  v4 = InitializeSensorGlobals();
  if ( v4 < 0 )
  {
    v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v4;
    v33 = v4;
    v10 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_GLOBAL_Control, (_DWORD)WPP_GLOBAL_Control, v5) + 69136);
    v32 = 11;
LABEL_12:
    LOBYTE(v9) = v7;
    LOBYTE(v8) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v8,
      v9,
      v10,
      2,
      14,
      v32,
      (__int64)&WPP_f2ed2c0ee40439138c1e74d7160f28b8_Traceguids,
      v33);
    return (unsigned int)v4;
  }
  v4 = InitializeKeyboardGlobals();
  if ( v4 < 0 )
  {
    v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v4;
    v33 = v4;
    v10 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_GLOBAL_Control, (_DWORD)WPP_GLOBAL_Control, v14) + 69136);
    v32 = 12;
    goto LABEL_12;
  }
  v4 = InitializeMouseGlobals(v13, v12, v14);
  if ( v4 < 0 )
  {
    v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v4;
    v33 = v4;
    v10 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_GLOBAL_Control, (_DWORD)WPP_GLOBAL_Control, v17) + 69136);
    v32 = 13;
    goto LABEL_12;
  }
  UserSessionState = W32GetUserSessionState(v16, v15, v17);
  v6 = 1;
  *(_WORD *)(UserSessionState + 17160) = 1;
  *(_DWORD *)(UserSessionState + 17164) = 1;
  *(_DWORD *)(W32GetUserSessionState(v20, v19, v21) + 17376) = 0;
  v4 = InitializeInputSettingsGlobals();
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v6 = 0;
    }
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v6 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v4;
    v33 = v4;
    v10 = *(_QWORD *)(W32GetUserSessionState((unsigned int)&WPP_GLOBAL_Control, (_DWORD)WPP_GLOBAL_Control, v24) + 69136);
    v32 = 17;
    goto LABEL_12;
  }
  v25 = W32GetUserSessionState(v23, v22, v24);
  v26 = Win32AllocPoolZInitImpl(256LL, 0x50uLL, 0x49637355u);
  *(_QWORD *)(v25 + 18952) = v26;
  if ( v26 )
    return 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
  {
    v6 = 0;
  }
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = W32GetUserSessionState((unsigned int)&WPP_GLOBAL_Control, (_DWORD)WPP_GLOBAL_Control, v27);
    LOBYTE(v30) = v28;
    LOBYTE(v31) = v6;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v30,
      *(_QWORD *)(v29 + 69136),
      2,
      14,
      18,
      (__int64)&WPP_f2ed2c0ee40439138c1e74d7160f28b8_Traceguids,
      23);
  }
  return 3221225495LL;
}
