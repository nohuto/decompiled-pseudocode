/*
 * XREFs of NtUserSetCoreWindow @ 0x14029E790
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1401ADB3C (SetWindowSubtreeCoreWindowStatus.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401CC8EC (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, int a2)
{
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rcx
  struct tagWND *v7; // rcx
  struct tagWND *v9; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 0LL);
  v4 = 0LL;
  v9 = 0LL;
  LOBYTE(v5) = ValidateHWNDND(a1, &v9);
  if ( v5 )
  {
    if ( a2 )
    {
      v7 = v9;
      *((_DWORD *)v9 + 95) |= 0x1000u;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 27122);
      v7 = v9;
      *((_DWORD *)v9 + 95) &= ~0x1000u;
    }
    SetWindowSubtreeCoreWindowStatus((__int64)v7, a2);
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
