/*
 * XREFs of RIMGetPointerInputType @ 0x140074390
 * Callers:
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x140073F9C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1400779A8 (rimAbShouldButtonContactBeSuppressed.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x14007AAC0 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x14007ADBC (rimAbSuppressLowerRankActivityForFrame.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1400D3070 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     rimDoUpdateInputGlobalsWorkItem @ 0x1400D5320 (rimDoUpdateInputGlobalsWorkItem.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1400FA16C (rimProcessPointerDeviceButtonContact.c)
 *     RIMUpdatePrimaryDevice @ 0x14013B858 (RIMUpdatePrimaryDevice.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall RIMGetPointerInputType(__int64 a1, __int64 a2, int a3)
{
  int v3; // edx
  char v4; // si
  bool v6; // bl
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx

  v3 = *(_DWORD *)(a1 + 24);
  v4 = a1;
  if ( v3 == 1 || (unsigned int)(v3 - 2) <= 2 )
    return 2LL;
  if ( (unsigned int)(v3 - 5) <= 1 )
    return 3LL;
  if ( v3 == 7 )
    return 5LL;
  v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v3, a3);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 19368),
      3,
      1,
      10,
      (__int64)&WPP_676b52f56b8e3d8fcdefebb4d2dd90f3_Traceguids,
      v4);
  }
  return 1LL;
}
