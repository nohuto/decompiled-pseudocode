/*
 * XREFs of InitSmartObjectRefLookaside @ 0x140029530
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140029598 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 */

__int64 InitSmartObjectRefLookaside()
{
  __int64 UserSessionState; // rax
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState();
  result = (__int64)NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                      (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
                      0x10uLL,
                      0x616C7355u,
                      0x6C6F7355u,
                      0xFFFEu);
  if ( result )
  {
    *(_QWORD *)(W32GetUserSessionState() + 42584) = result;
    return 1LL;
  }
  return result;
}
