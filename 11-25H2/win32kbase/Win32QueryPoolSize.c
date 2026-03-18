/*
 * XREFs of Win32QueryPoolSize @ 0x1401C2AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z @ 0x1401D3CF8 (-QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z.c)
 */

unsigned __int64 __fastcall Win32QueryPoolSize(void *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 UserSessionState; // rax

  v2 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  return NSInstrumentation::CLeakTrackingAllocator::QueryPoolSize(
           (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
           a1,
           v2);
}
