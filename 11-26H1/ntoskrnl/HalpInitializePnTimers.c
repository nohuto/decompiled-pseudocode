/*
 * XREFs of HalpInitializePnTimers @ 0x140579104
 * Callers:
 *     HalpTimerInitSystem @ 0x140579A20 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpTimerSetProblemEx @ 0x1404F8144 (HalpTimerSetProblemEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpInitializePnTimers()
{
  ULONG_PTR *v0; // rdi
  int v1; // r8d
  ULONG_PTR v2; // rbx
  __int64 InternalData; // rax
  __int64 v4; // rdx

  v0 = (ULONG_PTR *)HalpRegisteredTimers;
  v1 = 0;
  v2 = 0LL;
  while ( v0 != &HalpRegisteredTimers )
  {
    v2 = (ULONG_PTR)v0;
    v0 = (ULONG_PTR *)*v0;
    if ( (*(_DWORD *)(v2 + 184) & 4) != 0 && (*(_DWORD *)(v2 + 224) & 1) != 0 )
    {
      InternalData = HalpTimerGetInternalData(v2);
      v1 = guard_dispatch_icall_no_overrides(InternalData, v4);
      if ( v1 < 0 )
      {
        HalpTimerSetProblemEx(v2, 15, v1, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0x704u);
        break;
      }
    }
  }
  HalpTimerLoaderBlock = 0LL;
  HalpTimerRegistrationAllowed = 0;
  if ( v1 < 0 )
    KeBugCheckEx(0x5Cu, 0x110uLL, v2, HalpTimerLastProblem, v1);
  return (unsigned int)v1;
}
