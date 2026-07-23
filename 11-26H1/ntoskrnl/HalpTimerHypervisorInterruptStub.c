/*
 * XREFs of HalpTimerHypervisorInterruptStub @ 0x140599780
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpTimerHypervisorInterruptStub()
{
  __int64 InternalData; // rax
  __int64 v1; // rdx

  InternalData = HalpTimerGetInternalData(HalpHypervisorHpet);
  guard_dispatch_icall_no_overrides(InternalData, v1);
  ++*(_DWORD *)(HalpHypervisorHpet + 64);
  return 1;
}
