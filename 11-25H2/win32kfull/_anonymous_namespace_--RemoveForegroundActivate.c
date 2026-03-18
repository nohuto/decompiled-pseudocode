/*
 * XREFs of _anonymous_namespace_::RemoveForegroundActivate @ 0x14027847C
 * Callers:
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x14023B7E4 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x140277D84 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x140279134 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14005F670 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14018EC58 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ @ 0x14021A0DC (-OnFirstActivationAttempted@CForegroundLaunch@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::RemoveForegroundActivate(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // r12
  unsigned int *v3; // rdx
  char v4; // bp
  __int64 v5; // rsi
  __int64 v6; // rcx
  char v7; // di
  bool v8; // r14
  int v9; // ebx
  __int64 UserSessionState; // rax
  int v11; // r8d
  int v12; // edx
  __int64 v13; // rax
  char v14; // r14
  bool v15; // r15
  unsigned __int8 ThreadId; // al
  int v17; // edi
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r8d
  int v23; // edx

  v2 = PtiCurrent(a1, a2);
  v3 = &WPP_RECORDER_INITIALIZED;
  v4 = 1;
  v5 = *((_QWORD *)v2 + 58);
  if ( (*(_DWORD *)(v5 + 12) & 0x40) != 0 )
  {
    v6 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
      || (v7 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
    {
      v7 = 0;
    }
    v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v9 = *(_DWORD *)(v5 + 56);
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v11) = v8;
      LOBYTE(v12) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v12,
        v11,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        2,
        10,
        (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
        v9);
    }
    v13 = W32GetUserSessionState(v6, v3);
    CForegroundLaunch::OnFirstActivationAttempted(*(CForegroundLaunch **)(v13 + 18872));
    if ( (*(_DWORD *)(v5 + 12) & 0x40) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 110);
  }
  if ( !tagTHREADINFO::ComputeAndTestForegroundActivate(v2) && (*(_DWORD *)(v5 + 12) & 0x100) == 0 )
    return 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
    || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 2) == 0
    || (v14 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u) )
  {
    v14 = 0;
  }
  v15 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v14 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    ThreadId = (unsigned __int8)PsGetThreadId(*(PETHREAD *)v2);
    v17 = *(_DWORD *)(v5 + 56);
    v18 = ThreadId;
    v21 = W32GetUserSessionState(v20, v19);
    LOBYTE(v22) = v15;
    LOBYTE(v23) = v14;
    WPP_RECORDER_AND_TRACE_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v23,
      v22,
      *(_QWORD *)(v21 + 69160),
      4,
      2,
      11,
      (__int64)&WPP_be19ed9113b73192a82b1f539fdae1d8_Traceguids,
      v17,
      v18);
  }
  tagTHREADINFO::ClearForegroundActivate(v2, 127LL);
  *(_DWORD *)(v5 + 12) &= ~0x100u;
  return v4;
}
