/*
 * XREFs of GetWndSBDisableFlags @ 0x14026006C
 * Callers:
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x140184C84 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     xxxGetScrollBarInfo @ 0x14025E4F4 (xxxGetScrollBarInfo.c)
 *     ?DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x14025EF60 (-DrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1402E8138 (xxxDoScrollMenu.c)
 *     xxxDrawScrollBar @ 0x1402E847C (xxxDrawScrollBar.c)
 *     xxxSBTrackInit @ 0x1402E8980 (xxxSBTrackInit.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall GetWndSBDisableFlags(__int64 *a1, int a2)
{
  int *v3; // rcx
  bool v4; // di
  bool v5; // si
  __int64 v6; // rbx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  int v11; // ecx
  int v12; // eax

  v3 = (int *)a1[19];
  if ( v3 )
  {
    v11 = *v3;
    v12 = v11 >> 2;
    if ( !a2 )
      LOBYTE(v12) = v11;
    return v12 & 3;
  }
  else
  {
    v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 2u;
    v5 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v4 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v6 = *a1;
      UserSessionState = W32GetUserSessionState(0LL, *(_QWORD *)&WPP_GLOBAL_Control);
      LOBYTE(v8) = v5;
      LOBYTE(v9) = v4;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v9,
        v8,
        *(_QWORD *)(UserSessionState + 69160),
        2,
        9,
        14,
        (__int64)&WPP_cccf0f77aa2331519192f0f5d1ba828a_Traceguids,
        v6);
    }
    UserSetLastError(1447);
    return 0LL;
  }
}
