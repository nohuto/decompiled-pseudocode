/*
 * XREFs of NtUserDwmKernelShutdown @ 0x140295EA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastStatus @ 0x14009D6E8 (UserSetLastStatus.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019D61C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     xxxDwmStopRedirection @ 0x1402B5280 (xxxDwmStopRedirection.c)
 */

__int64 NtUserDwmKernelShutdown()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  NTSTATUS v8; // eax

  EnterCrit(0LL, 0LL);
  v3 = 0LL;
  if ( !(unsigned int)IsCurrentProcessDwm(v0) )
  {
    v4 = 5;
LABEL_10:
    UserSetLastError(v4);
    goto LABEL_11;
  }
  v5 = *((_QWORD *)PtiCurrent(v2, v1) + 62);
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 8)) == 0 )
  {
    v4 = 87;
    goto LABEL_10;
  }
  v7 = *(unsigned int *)(*(_QWORD *)v6 + 64LL);
  if ( (v7 & 1) != 0 && (v8 = xxxDwmStopRedirection(0LL), v8 < 0) )
    UserSetLastStatus(v8, 1);
  else
    v3 = 1LL;
LABEL_11:
  UserSessionSwitchLeaveCrit(v7);
  return v3;
}
