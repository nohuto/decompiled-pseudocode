/*
 * XREFs of Win32AllocPagedLookasideList @ 0x1400294D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140029598 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

void *__fastcall Win32AllocPagedLookasideList(SIZE_T Size, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState();
  return NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
           (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
           Size,
           a2,
           a3,
           a4);
}
