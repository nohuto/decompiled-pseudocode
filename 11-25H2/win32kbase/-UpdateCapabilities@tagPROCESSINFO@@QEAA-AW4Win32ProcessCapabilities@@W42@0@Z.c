/*
 * XREFs of ?UpdateCapabilities@tagPROCESSINFO@@QEAA?AW4Win32ProcessCapabilities@@W42@0@Z @ 0x1401A9320
 * Callers:
 *     ?SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401A6B4C (-SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400B4C14 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dii @ 0x1401A9510 (WPP_RECORDER_AND_TRACE_SF_Dii.c)
 */

__int64 __fastcall tagPROCESSINFO::UpdateCapabilities(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  char v5; // si
  bool v6; // bp
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  BOOL v11; // r14d
  bool v12; // bp
  int v13; // ebx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // edx

  v3 = *(_QWORD *)(a1 + 1168);
  *(_QWORD *)(a1 + 1168) = a3 & a2 | v3 & ~a2;
  v5 = 1;
  v6 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_Dii(*((_QWORD *)WPP_GLOBAL_Control + 3), v10, v9, *(_QWORD *)(UserSessionState + 69144));
  }
  if ( *(_BYTE *)(a1 + 1176) != 1 )
    *(_QWORD *)(a1 + 808) |= 0x10000000000uLL;
  if ( (((unsigned int)v3 ^ *(_DWORD *)(a1 + 1168)) & 2) != 0 )
  {
    v11 = (*(_QWORD *)(a1 + 1168) & 2) != 0;
    _InterlockedExchange((volatile __int32 *)(a1 + 288), v11);
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v5 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = *(_DWORD *)(a1 + 56);
      v14 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_GLOBAL_Control);
      LOBYTE(v15) = v12;
      LOBYTE(v16) = v5;
      WPP_RECORDER_AND_TRACE_SF_dD(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(v14 + 69144),
        4,
        8,
        11,
        (__int64)&WPP_8510b3707f3a3974fab59b98bd0c8058_Traceguids,
        v13,
        v11);
    }
  }
  return v3;
}
