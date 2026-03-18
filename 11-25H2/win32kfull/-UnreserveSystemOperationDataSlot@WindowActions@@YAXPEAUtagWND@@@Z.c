/*
 * XREFs of ?UnreserveSystemOperationDataSlot@WindowActions@@YAXPEAUtagWND@@@Z @ 0x1402CCE10
 * Callers:
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C2E94 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z @ 0x1402CA8E8 (--$GetProp@VCInterceptWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInterceptWindowProp@@@Z.c)
 */

void __fastcall WindowActions::UnreserveSystemOperationDataSlot(WindowActions *this, struct tagWND *a2)
{
  __int64 v3; // rdx
  bool v4; // di
  bool v5; // si
  __int64 v6; // rbx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0LL;
  if ( CWindowProp::GetProp<CInterceptWindowProp>((__int64)this, &v10) )
  {
    --*(_DWORD *)(v10 + 52);
    v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = *(_QWORD *)this;
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, v3);
      LOBYTE(v8) = v5;
      LOBYTE(v9) = v4;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69160),
        4,
        4,
        24,
        (__int64)&WPP_fade6bfb655b3fa6b02839cd02f2d6ee_Traceguids,
        v6);
    }
  }
}
