/*
 * XREFs of KeSwapProcessOrStack @ 0x1405F7C80
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140204540 (KeSetPriorityThread.c)
 *     KiFastReadyThread @ 0x14022F1E8 (KiFastReadyThread.c)
 *     MmInPageKernelStack @ 0x14022F2B0 (MmInPageKernelStack.c)
 *     KeSwappablePageGetLockedAddress @ 0x14022F49C (KeSwappablePageGetLockedAddress.c)
 *     KeSwappablePageReference @ 0x14022F4B4 (KeSwappablePageReference.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KiOutSwapKernelStacks @ 0x1404102F4 (KiOutSwapKernelStacks.c)
 *     KiInSwapProcesses @ 0x14048C2D4 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x14049A3E4 (KiOutSwapProcesses.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned __int64 *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  ULONG_PTR v6; // rdi
  __int64 v7; // rcx
  __int64 LockedAddress; // rax

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  *(_QWORD *)&KeSwapProcessOrStackThread = KeGetCurrentThread();
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)&KiSupervisorXStateFeaturesLock.StackLimit, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks(v1);
    v3 = (unsigned __int64 *)_InterlockedExchange64(
                               (volatile __int64 *)&KiSupervisorXStateFeaturesLock.SListFaultAddress,
                               0LL);
    if ( v3 )
      KiOutSwapProcesses(v3, v0, v2);
    v4 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&KiSupervisorXStateFeaturesLock.AffinityVersion, 0LL);
    if ( v4 )
      KiInSwapProcesses(v4);
    v5 = (_QWORD *)_InterlockedExchange64(
                     (volatile __int64 *)&KiSupervisorXStateFeaturesLock.UserAffinityPrimaryGroup,
                     0LL);
    while ( v5 )
    {
      v6 = (ULONG_PTR)(v5 - 27);
      v7 = v5[114];
      if ( v7 )
      {
        KeSwappablePageReference(v7);
        LockedAddress = KeSwappablePageGetLockedAddress(*(_QWORD **)(v6 + 1128));
        if ( LockedAddress )
          *(_QWORD *)(v6 + 800) = LockedAddress + *(unsigned int *)(v6 + 1124);
      }
      v5 = (_QWORD *)*v5;
      MmInPageKernelStack(v6);
      _interlockedbittestandset((volatile signed __int32 *)(v6 + 120), 0x11u);
      KiFastReadyThread(v6);
    }
  }
}
