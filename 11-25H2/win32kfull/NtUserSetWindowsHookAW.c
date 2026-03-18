/*
 * XREFs of NtUserSetWindowsHookAW @ 0x1402A0E70
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z @ 0x14024116C (-zzzSetWindowsHookEx@@YAPEAUtagHOOK@@PEAXPEBGPEAUtagTHREADINFO@@HP6A_JXZW4tagHookFlags@@PEAH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetWindowsHookAW(int a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  struct tagTHREADINFO *v9; // rax
  __int64 *v10; // rcx
  int v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = a1;
  EnterSharedCrit(0LL, 1LL);
  v8 = 0LL;
  if ( a3 && (a3 & 0xFFFFFFBD) != 0 )
  {
    v12 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6692);
  }
  v12 = 0;
  v9 = PtiCurrent(v7, v6);
  v10 = (__int64 *)zzzSetWindowsHookEx(0LL, 0LL, (__int64)v9, v4, a2, a3, &v12);
  if ( v10 )
  {
    if ( !v12 || (dword_140355994[v4] & 8) != 0 )
    {
      v8 = (__int64)v10;
      if ( v10 != (__int64 *)-1LL )
        v8 = *v10;
    }
  }
  else
  {
    v8 = -1LL;
  }
  UserSessionSwitchLeaveCrit(v10);
  return v8;
}
