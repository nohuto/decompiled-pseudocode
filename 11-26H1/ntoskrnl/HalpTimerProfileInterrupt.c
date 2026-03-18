/*
 * XREFs of HalpTimerProfileInterrupt @ 0x140597050
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerGetInternalData @ 0x140426EC0 (HalpTimerGetInternalData.c)
 *     KeProfileInterruptWithSource @ 0x1404B7BF0 (KeProfileInterruptWithSource.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpTimerProfileInterrupt(__int64 a1)
{
  __int64 v1; // rbx
  __int64 InternalData; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 136);
  InternalData = HalpTimerGetInternalData(HalpProfileTimer);
  guard_dispatch_icall_no_overrides(InternalData, v3);
  if ( HalpTimerProfilingCallback )
    guard_dispatch_icall_no_overrides(v1, v4);
  else
    KeProfileInterruptWithSource(v1, 0LL);
  return 1;
}
