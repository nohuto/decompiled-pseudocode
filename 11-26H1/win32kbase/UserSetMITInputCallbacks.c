/*
 * XREFs of UserSetMITInputCallbacks @ 0x14021D998
 * Callers:
 *     NtMITSetInputCallbacks @ 0x14018D750 (NtMITSetInputCallbacks.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x140181FFC (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x140217FF8 (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 */

__int64 __fastcall UserSetMITInputCallbacks(__int64 a1)
{
  int v2; // ecx
  char v3; // bl
  char v4; // dl
  char v5; // r8
  char v6; // dl
  int v7; // ecx
  char v8; // r8
  char v9; // dl
  int v10; // ecx
  _QWORD *v11; // rdi
  char v12; // r8
  __int64 UserSessionState; // rax
  __int64 v14; // rax
  char v15; // dl
  char v16; // r8
  unsigned int v17; // ebp
  char v18; // di
  bool v19; // si
  __int64 v20; // rax
  char v21; // dl

  v2 = (int)WPP_GLOBAL_Control;
  v3 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    v5 = 0;
  }
  if ( v4 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v4,
      v5,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      21,
      (__int64)&WPP_01d96f24aa1a341900b345b638deea72_Traceguids);
  if ( !*(_DWORD *)(W32GetUserSessionState(v2, v4, v5) + 19136) )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 183);
  v11 = *(_QWORD **)(W32GetUserSessionState(v7, v6, v8) + 16400);
  if ( *v11 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 45);
  *v11 = a1;
  if ( !v11[2] )
  {
    UserSessionState = W32GetUserSessionState(v10, v9, v12);
    InputExtensibilityCallout::CreateCoreMsgPort(*(InputExtensibilityCallout **)(UserSessionState + 16400));
    if ( !v11[2] )
      KeBugCheck(0x164u);
  }
  v14 = W32GetUserSessionState(v10, v9, v12);
  if ( CInputThreadBase::DeclareThreadAsInput(*(CInputThreadBase **)(v14 + 18800)) )
  {
    v17 = 1;
  }
  else
  {
    v17 = 0;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v18 = 0;
    }
    v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v19,
        *(_QWORD *)(v20 + 69136),
        2,
        2,
        22,
        (__int64)&WPP_01d96f24aa1a341900b345b638deea72_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    v21 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v3 = 0;
  if ( v21 || v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v21,
      v3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      2,
      23,
      (__int64)&WPP_01d96f24aa1a341900b345b638deea72_Traceguids);
  return v17;
}
