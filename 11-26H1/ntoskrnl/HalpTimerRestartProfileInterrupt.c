/*
 * XREFs of HalpTimerRestartProfileInterrupt @ 0x140586B0C
 * Callers:
 *     HalpTimerPowerChange @ 0x140585104 (HalpTimerPowerChange.c)
 *     DefaultRestartProfiling @ 0x140BF0DE0 (DefaultRestartProfiling.c)
 * Callees:
 *     HalpSetTimer @ 0x140208790 (HalpSetTimer.c)
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     HalpTimerSetProblemEx @ 0x1404F8144 (HalpTimerSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void HalpTimerRestartProfileInterrupt()
{
  __int64 v0; // rbx
  unsigned int Number; // edi
  __int64 InternalData; // rax
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v0 = HalpProfileTimer;
  if ( HalpProfileTimer )
  {
    Number = KeGetPcr()->Prcb.Number;
    if ( (*(_DWORD *)(HalpProfileTimer + 224) & 1) != 0 || !Number )
    {
      InternalData = HalpTimerGetInternalData(HalpProfileTimer);
      v4 = guard_dispatch_icall_no_overrides(InternalData, v3);
      if ( v4 >= 0 )
      {
        if ( HalpProfilingActive )
        {
          HalpSetTimer(v0, 2u, *(unsigned int *)(296LL * Number + HalpProfileData + 24), 1, &v7);
        }
        else
        {
          v5 = HalpTimerGetInternalData(v0);
          guard_dispatch_icall_no_overrides(v5, v6);
        }
      }
      else
      {
        HalpTimerSetProblemEx(v0, 15, v4, (__int64)"minkernel\\hals\\lib\\timers\\common\\timeprof.c", 0x210u);
      }
    }
  }
}
