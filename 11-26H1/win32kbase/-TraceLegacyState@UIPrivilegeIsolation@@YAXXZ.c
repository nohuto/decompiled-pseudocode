/*
 * XREFs of ?TraceLegacyState@UIPrivilegeIsolation@@YAXXZ @ 0x1401CCA84
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     FastGetProfileDwordEx @ 0x1400E1800 (FastGetProfileDwordEx.c)
 */

void __fastcall UIPrivilegeIsolation::TraceLegacyState(UIPrivilegeIsolation *this)
{
  int v1; // edx
  int v2; // r8d
  char v3; // bl
  bool v4; // di
  bool v5; // si
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx
  int v9; // edx
  int v10; // r8d
  bool v11; // di
  bool v12; // si
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  bool v16; // di
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  int v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF

  v20 = 0;
  RtlQueryElevationFlags(&v20);
  v3 = 1;
  if ( (v20 & 1) == 0 )
  {
    v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v1, v2);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        8,
        10,
        (__int64)&WPP_ec066d86015636ff885a5a1cea9e544a_Traceguids);
    }
  }
  LODWORD(v21) = 0;
  FastGetProfileDwordEx(0LL, 49, L"EnableUIPI", 1, 0, &v21, 0LL);
  if ( (_DWORD)v21 )
  {
    if ( (v20 & 1) != 0 )
      return;
  }
  else
  {
    v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(v13 + 69136),
        4,
        8,
        11,
        (__int64)&WPP_ec066d86015636ff885a5a1cea9e544a_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
  {
    v3 = 0;
  }
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
    LOBYTE(v18) = v16;
    LOBYTE(v19) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v19,
      v18,
      *(_QWORD *)(v17 + 69136),
      3,
      8,
      12,
      (__int64)&WPP_ec066d86015636ff885a5a1cea9e544a_Traceguids);
  }
}
