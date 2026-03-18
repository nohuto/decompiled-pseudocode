/*
 * XREFs of UserSetMITInputCallbacks @ 0x140218AC8
 * Callers:
 *     NtMITSetInputCallbacks @ 0x1401BB3A0 (NtMITSetInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x14019F080 (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x14020E648 (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 */

__int64 __fastcall UserSetMITInputCallbacks(__int64 a1, __int64 a2)
{
  void *v3; // rcx
  char v4; // bl
  char v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 UserSessionState; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // ebp
  char v15; // di
  bool v16; // si
  __int64 v17; // rax
  int v18; // edx

  v3 = WPP_GLOBAL_Control;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      21,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  if ( !*(_DWORD *)(W32GetUserSessionState(v3, a2) + 19096) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 183);
  v10 = *(_QWORD **)(W32GetUserSessionState(v7, v6) + 16408);
  if ( *v10 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 45);
  *v10 = a1;
  if ( !v10[2] )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    InputExtensibilityCallout::CreateCoreMsgPort(*(InputExtensibilityCallout **)(UserSessionState + 16408));
    if ( !v10[2] )
      KeBugCheck(0x164u);
  }
  v12 = W32GetUserSessionState(v9, v8);
  if ( CInputThreadBase::DeclareThreadAsInput(*(CInputThreadBase **)(v12 + 18752)) )
  {
    v14 = 1;
  }
  else
  {
    v14 = 0;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v15 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = W32GetUserSessionState(WPP_GLOBAL_Control, v13);
      LOBYTE(v18) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v16,
        *(_QWORD *)(v17 + 69144),
        2,
        2,
        22,
        (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v13) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v4 = 0;
  if ( (_BYTE)v13 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v4,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      23,
      (__int64)&WPP_4c37d3b938813951dcfe59f4edab31d1_Traceguids);
  return v14;
}
