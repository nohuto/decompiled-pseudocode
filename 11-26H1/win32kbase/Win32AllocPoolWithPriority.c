/*
 * XREFs of Win32AllocPoolWithPriority @ 0x1401EA9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z @ 0x1401FC760 (-AllocatePriority@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0IW4_EX_POOL_PRIORITY@@@Z.c)
 */

void *__fastcall Win32AllocPoolWithPriority(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        enum _EX_POOL_PRIORITY a4)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return NSInstrumentation::CLeakTrackingAllocator::AllocatePriority(
           (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
           a1,
           a2,
           a3,
           a4);
}
