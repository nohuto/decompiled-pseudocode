/*
 * XREFs of HalpInterruptLocalErrorService @ 0x1404E9F90
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char HalpInterruptLocalErrorService()
{
  __int64 v0; // rdx
  unsigned __int8 v1; // r14
  int v2; // ebp
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rsi

  v1 = HalpAcquireHighLevelLock(&HalpInterruptLocalUnitErrorLock);
  v2 = 0;
  v3 = HalpInterruptLocalUnitErrorCount++ & 0x7F;
  v4 = *(_QWORD *)(HalpInterruptController + 64);
  v5 = *(_QWORD *)(HalpInterruptController + 16);
  if ( *(_QWORD *)(HalpInterruptController + 56) )
    v2 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v0);
  if ( v4 )
    guard_dispatch_icall_no_overrides(v5, v0);
  HalpInterruptLocalUnitErrorLog[v3] = v2;
  HalpInterruptLocalUnitErrorLogProcessor[v3] = KeGetPcr()->Prcb.Number;
  HalpReleaseHighLevelLock(&HalpInterruptLocalUnitErrorLock, v1);
  return 1;
}
