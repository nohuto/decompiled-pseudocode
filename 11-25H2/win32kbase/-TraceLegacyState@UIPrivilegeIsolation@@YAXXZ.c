/*
 * XREFs of ?TraceLegacyState@UIPrivilegeIsolation@@YAXXZ @ 0x1401A8C5C
 * Callers:
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     FastGetProfileDwordEx @ 0x1400A97B0 (FastGetProfileDwordEx.c)
 */

void __fastcall UIPrivilegeIsolation::TraceLegacyState(UIPrivilegeIsolation *this)
{
  __int64 v1; // rdx
  char v2; // bl
  bool v3; // di
  bool v4; // si
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rdx
  bool v9; // di
  bool v10; // si
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+68h] [rbp+10h] BYREF

  v18 = 0;
  RtlQueryElevationFlags(&v18);
  v2 = 1;
  if ( (v18 & 1) == 0 )
  {
    v3 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v1);
      LOBYTE(v6) = v4;
      LOBYTE(v7) = v3;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v7,
        v6,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        8,
        10,
        (__int64)&WPP_ec066d86015636ff885a5a1cea9e544a_Traceguids);
    }
  }
  LODWORD(v19) = 0;
  FastGetProfileDwordEx(0LL, 49LL, L"EnableUIPI", 1, 0, &v19, 0LL);
  if ( (_DWORD)v19 )
  {
    if ( (v18 & 1) != 0 )
      return;
  }
  else
  {
    v9 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
      LOBYTE(v12) = v10;
      LOBYTE(v13) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(v11 + 69144),
        4,
        8,
        11,
        (__int64)&WPP_ec066d86015636ff885a5a1cea9e544a_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
  {
    v2 = 0;
  }
  v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
    LOBYTE(v16) = v14;
    LOBYTE(v17) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v17,
      v16,
      *(_QWORD *)(v15 + 69144),
      3,
      8,
      12,
      (__int64)&WPP_ec066d86015636ff885a5a1cea9e544a_Traceguids);
  }
}
