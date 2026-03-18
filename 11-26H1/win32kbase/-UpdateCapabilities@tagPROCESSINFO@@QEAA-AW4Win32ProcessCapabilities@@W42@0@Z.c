/*
 * XREFs of ?UpdateCapabilities@tagPROCESSINFO@@QEAA?AW4Win32ProcessCapabilities@@W42@0@Z @ 0x1401A1A60
 * Callers:
 *     ?SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1401C9F34 (-SetProcessInitialCapabilities@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dii @ 0x1401CD050 (WPP_RECORDER_AND_TRACE_SF_Dii.c)
 */

__int64 __fastcall tagPROCESSINFO::UpdateCapabilities(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r15
  __int64 v5; // rdx
  char v7; // bp
  bool v8; // si
  bool v9; // r14
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  BOOL v13; // esi
  bool v14; // r14
  int v15; // ebx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx

  v3 = *(_QWORD *)(a1 + 1192);
  v4 = ~a2;
  v5 = a3 & a2;
  *(_QWORD *)(a1 + 1192) = v5 | v3 & v4;
  v7 = 1;
  v8 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, (unsigned int)&WPP_GLOBAL_Control);
    LOBYTE(v11) = v9;
    LOBYTE(v12) = v8;
    WPP_RECORDER_AND_TRACE_SF_Dii(*((_QWORD *)WPP_GLOBAL_Control + 3), v12, v11, *(_QWORD *)(UserSessionState + 69136));
  }
  if ( *(_BYTE *)(a1 + 1200) != 1 )
    *(_QWORD *)(a1 + 808) |= 0x10000000000uLL;
  LOBYTE(v5) = 2;
  if ( (((unsigned __int8)v3 ^ *(_BYTE *)(a1 + 1192)) & 2) != 0 )
  {
    v13 = (*(_QWORD *)(a1 + 1192) & 2) != 0;
    _InterlockedExchange((volatile __int32 *)(a1 + 288), v13);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v7 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = *(_DWORD *)(a1 + 56);
      v16 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v5, (unsigned int)&WPP_GLOBAL_Control);
      LOBYTE(v17) = v14;
      LOBYTE(v18) = v7;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 69136),
        4,
        8,
        11,
        (__int64)&WPP_8510b3707f3a3974fab59b98bd0c8058_Traceguids,
        v15,
        v13);
    }
  }
  return v3;
}
