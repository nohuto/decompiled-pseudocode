/*
 * XREFs of ?AddPendingActivationResume@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18021E054
 * Callers:
 *     ?UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUIActivationRequestedEventArgs@WindowManagement@ApplicationModel@56@@Z @ 0x180068F74 (-UwpWindowActivationRequested@UwpWindowEventDispatcher@@AEAAJPEAUIUwpWindowContext@UwpWindowLife.c)
 * Callees:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180062DA0 (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UwpWindowEventDispatcher::AddPendingActivationResume(
        RTL_SRWLOCK *a1,
        volatile int *a2,
        unsigned int a3)
{
  RTL_SRWLOCK *v6; // rbp

  v6 = a1 + 61;
  AcquireSRWLockExclusive(a1 + 61);
  UwpWindowEventDispatcher::AddPendingActivationResumeWithLock((__int64)a1, a2, a3);
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
}
