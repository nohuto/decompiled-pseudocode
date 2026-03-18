/*
 * XREFs of HalpTimerClockInterruptStub @ 0x140596FB0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerClockInterruptStub()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx

  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  guard_dispatch_icall_no_overrides(InternalData, v1);
  ++*(_DWORD *)(HalpClockTimer + 64);
  return 1;
}
