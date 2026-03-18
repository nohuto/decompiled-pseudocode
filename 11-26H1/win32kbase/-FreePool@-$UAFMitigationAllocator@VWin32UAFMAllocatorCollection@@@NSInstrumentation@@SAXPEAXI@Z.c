/*
 * XREFs of ?FreePool@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401EAFB8
 * Callers:
 *     Win32UAFMFreePagedLookasideList @ 0x1401EACF0 (Win32UAFMFreePagedLookasideList.c)
 *     Win32UAFMFreePool @ 0x1401EAD30 (Win32UAFMFreePool.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1400430A0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?FreeAssertPointerIsValid@?$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumentation@@SAXPEAXI@Z @ 0x1401EAF90 (-FreeAssertPointerIsValid@-$UAFMitigationAllocator@VWin32UAFMAllocatorCollection@@@NSInstrumenta.c)
 */

void __fastcall NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreePool(
        ULONG_PTR a1,
        unsigned int a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // rax

  NSInstrumentation::UAFMitigationAllocator<Win32UAFMAllocatorCollection>::FreeAssertPointerIsValid(a1, a2);
  *(_DWORD *)(a1 - 4) = 0;
  UserSessionState = W32GetUserSessionState(v4, v3, v5);
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)(UserSessionState + 72016),
    (_DWORD *)(a1 - 16));
}
