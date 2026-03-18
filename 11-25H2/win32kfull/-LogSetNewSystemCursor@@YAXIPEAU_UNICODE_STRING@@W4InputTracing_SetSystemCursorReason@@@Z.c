/*
 * XREFs of ?LogSetNewSystemCursor@@YAXIPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140122044
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x140124AB0 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 * Callees:
 *     ?SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@PEAGI@Z @ 0x1401220D0 (-SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracin.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall LogSetNewSystemCursor(unsigned int a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  _BYTE v10[528]; // [rsp+30h] [rbp-238h] BYREF

  v4 = a1;
  memset_0(v10, 0, 0x208uLL);
  UserSessionState = W32GetUserSessionState(v7, v6);
  return InputTraceLogging::Cursor::SetSystemCursor(
           *(_QWORD *)(UserSessionState + 552 * v4 + 21880),
           (unsigned int)v4,
           a2,
           a3,
           v10);
}
