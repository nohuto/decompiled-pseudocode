/*
 * XREFs of NtUserSetSystemContentRects @ 0x1401C0C90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z @ 0x1401A8B80 (-CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z.c)
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1401AC6E4 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall NtUserSetSystemContentRects(unsigned int a1, const unsigned __int16 *Src)
{
  __int64 v3; // r14
  __int64 v4; // rdx
  int v5; // ebx
  bool v6; // si
  bool v7; // r14
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rdx
  bool v13; // si
  bool v14; // r15
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  bool v18; // si
  bool v19; // r14
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  struct tagRECT v24[4]; // [rsp+70h] [rbp-68h] BYREF

  v3 = a1;
  v5 = 0;
  if ( (int)UIPrivilegeIsolation::CheckCapability(L"windowManagementSystem", Src) < 0 )
  {
    v6 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v4);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        2,
        137,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    v11 = 5;
    goto LABEL_36;
  }
  if ( (unsigned int)v3 > 4 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9651);
    v13 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v12);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 69144),
        2,
        2,
        138,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids,
        4,
        v3);
    }
    goto LABEL_35;
  }
  if ( !(_DWORD)v3 || !Src )
  {
    v18 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v4);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 69144),
        2,
        2,
        139,
        (__int64)&WPP_201817f94ca5306655f7928efae29406_Traceguids);
    }
    goto LABEL_35;
  }
  memset(v24, 0, sizeof(v24));
  if ( 16 * v3 && ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  RtlCopyVolatileMemory(v24, Src, 16 * v3);
  if ( !CContentRects::SetContentRects((unsigned int)v3, v24) )
  {
LABEL_35:
    v11 = 87;
LABEL_36:
    UserSetLastError(v11);
    return v5;
  }
  return 1;
}
