/*
 * XREFs of Win32QueryPoolSize @ 0x1401EB560
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z @ 0x1401FCF08 (-QueryPoolSize@CLeakTrackingAllocator@NSInstrumentation@@QEAA_KPEAXI@Z.c)
 */

unsigned __int64 __fastcall Win32QueryPoolSize(void *a1, unsigned int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  return NSInstrumentation::CLeakTrackingAllocator::QueryPoolSize(
           (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
           a1,
           a2);
}
