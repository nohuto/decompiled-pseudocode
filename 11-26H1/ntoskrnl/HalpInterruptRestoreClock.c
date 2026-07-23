/*
 * XREFs of HalpInterruptRestoreClock @ 0x14057FDE8
 * Callers:
 *     HalpPostSleepMP @ 0x140BF2EF0 (HalpPostSleepMP.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x14032FC8C (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptApplyOverrides @ 0x140433248 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptFindLines @ 0x1404336FC (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 HalpInterruptRestoreClock()
{
  unsigned int v0; // edi
  __int64 v1; // rbx
  _QWORD *Lines; // rax
  ULONG_PTR *v3; // rax
  __int64 v4; // r9
  int v5; // eax
  __int64 InternalData; // rax
  __int64 v7; // rdx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v0 = HalpTimerCriticalClockSourceCount;
  v1 = 0LL;
  v9 = 0LL;
  while ( (unsigned int)v1 < v0 )
  {
    v9 = HalpTimerCriticalClockSource[v1];
    HalpInterruptApplyOverrides((int *)&v9, 0LL, 0LL);
    Lines = HalpInterruptFindLines((unsigned int *)&v9);
    if ( !Lines )
    {
      HalpInterruptSetProblemEx(0LL, 18, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x7A1u);
      goto LABEL_9;
    }
    v3 = HalpInterruptLookupController(*((_DWORD *)Lines + 4));
    if ( !v3 )
    {
      HalpInterruptSetProblemEx(0LL, 17, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x7AFu);
LABEL_9:
      v5 = -1073741810;
LABEL_10:
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 2uLL, v5);
    }
    v5 = HalpInterruptSetLineStateInternal((__int64)v3, (__int64)&v9, *(_QWORD *)(v4 + 40));
    if ( v5 < 0 )
      goto LABEL_10;
    v1 = (unsigned int)(v1 + 1);
  }
  InternalData = HalpTimerGetInternalData(HalpClockTimer);
  return guard_dispatch_icall_no_overrides(InternalData, v7);
}
