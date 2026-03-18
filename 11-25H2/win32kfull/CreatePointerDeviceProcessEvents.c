/*
 * XREFs of CreatePointerDeviceProcessEvents @ 0x140271544
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x1401FC904 (-CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z.c)
 */

_BOOL8 __fastcall CreatePointerDeviceProcessEvents(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  _BOOL8 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  result = CreatePointerDeviceProcessEvent(
             0x100000u,
             1,
             1u,
             L"{773F1B9A-35B9-4E95-83A0-A210F2DE3B37}-running",
             (void **)(UserSessionState + 16696));
  if ( result )
  {
    v6 = W32GetUserSessionState(v5, v4);
    return CreatePointerDeviceProcessEvent(
             2u,
             0,
             0,
             L"{773F1B9A-35B9-4E95-83A0-A210F2DE3B37}-request",
             (void **)(v6 + 16704));
  }
  return result;
}
