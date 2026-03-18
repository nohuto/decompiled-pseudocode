/*
 * XREFs of KeExpandKernelStackAndCalloutInternal @ 0x1402638C0
 * Callers:
 *     EtwpExpandStackAndWalkFrameChain @ 0x1402610A0 (EtwpExpandStackAndWalkFrameChain.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x140263890 (KeExpandKernelStackAndCalloutEx.c)
 *     KeExpandKernelStackAndCallout @ 0x140264800 (KeExpandKernelStackAndCallout.c)
 *     MiDoStackCopy @ 0x1403E4A60 (MiDoStackCopy.c)
 *     MiSwapStackPage @ 0x140415804 (MiSwapStackPage.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x14047A534 (EtwpGetStackExtendedHeaderItem.c)
 * Callees:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1402639D0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     KiFatalFilter @ 0x1405E50D0 (KiFatalFilter.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeExpandKernelStackAndCalloutInternal(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        int a4,
        __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int8 CurrentIrql; // di
  $48C7509F8C9AA81179F1072273671AF1 *v11; // rbx
  char v12; // r15
  unsigned __int8 v13; // al

  result = KiExpandKernelStackAndCalloutSwitchStack(BugCheckParameter2, BugCheckParameter3, a3, a4, a5);
  if ( (_DWORD)result == -1073740661 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v11 = &KeGetCurrentThread()->125;
    if ( (v11->SameThreadTransientFlags & 1) != 0 )
    {
      v12 = 1;
    }
    else
    {
      v11->SameThreadTransientFlags |= 1u;
      v12 = 0;
    }
    guard_dispatch_icall_no_overrides(BugCheckParameter3, v8, v9);
    if ( !v12 )
      v11->SameThreadTransientFlags &= ~1u;
    if ( KeGetCurrentIrql() != CurrentIrql )
    {
      v13 = KeGetCurrentIrql();
      KeBugCheckEx(
        0xC8u,
        ((CurrentIrql | ((unsigned __int64)v13 << 8)) << 8) | 2,
        BugCheckParameter2,
        BugCheckParameter3,
        0LL);
    }
    return 0LL;
  }
  return result;
}
