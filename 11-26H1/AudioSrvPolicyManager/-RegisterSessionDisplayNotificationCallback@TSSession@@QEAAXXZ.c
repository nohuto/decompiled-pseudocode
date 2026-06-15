/*
 * XREFs of ?RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x180043EC8
 * Callers:
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x180044790 (-TsSessionIdLogon@@YAJK@Z.c)
 * Callees:
 *     ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18003D680 (-_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

void __fastcall TSSession::RegisterSessionDisplayNotificationCallback(TSSession *this)
{
  __int64 v2; // rdx
  unsigned int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_DWORD *)this != (unsigned int)RtlGetCurrentServiceSessionId()
    && !*((_QWORD *)this + 128)
    && !*((_QWORD *)this + 129) )
  {
    v2 = *(unsigned int *)this;
    v6[0] = TsSessionIdDisplayNotificationCallback;
    v6[1] = *(unsigned int *)this;
    v3 = PowerSettingRegisterNotificationEx(&GUID_SESSION_DISPLAY_STATUS, v2, 2LL, v6, (char *)this + 1024);
    if ( v3 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        216LL,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v3);
    v4 = *(unsigned int *)this;
    v7[0] = TsSessionConsoleLockedNotificationCallback;
    v7[1] = v4;
    v5 = PowerSettingRegisterNotificationEx(&GUID_CONSOLE_LOCKED, v4, 2LL, v7, (char *)this + 1032);
    if ( v5 )
      wil::details::in1diag3::_Log_Win32(
        retaddr,
        229LL,
        (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v5);
  }
}
