/*
 * XREFs of Win32UAFMFreeToPagedLookasideList @ 0x1401C2170
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x140010A90 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401C24B0 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall Win32UAFMFreeToPagedLookasideList(char **a1, __int64 a2, unsigned int a3)
{
  char *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a2, a3);
  *(_DWORD *)(a2 - 4) = 0;
  v5 = *a1;
  UserSessionState = W32GetUserSessionState(v7, v6);
  NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(
    (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72032),
    v5,
    (char *)(a2 - 16));
}
