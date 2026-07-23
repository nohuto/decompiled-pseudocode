/*
 * XREFs of PpmContinueTimeAccumulation @ 0x140253F88
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1402545E8 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     PpmContinueActiveTimeAccumulation @ 0x1402F7C90 (PpmContinueActiveTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402F7CD0 (PpmUpdatePerformanceFeedback.c)
 *     PpmGetIdleGenerationCounter @ 0x140470210 (PpmGetIdleGenerationCounter.c)
 */

char __fastcall PpmContinueTimeAccumulation(struct _KPRCB *a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // r8d
  __int64 v5; // rdi

  if ( KeGetCurrentPrcb() == a1 )
  {
    PpmContinueActiveTimeAccumulation(a1, a2);
    LOBYTE(v3) = 1;
  }
  else
  {
    v3 = ((__int64 (*)(void))PpmGetIdleGenerationCounter)();
    v5 = v3;
    if ( v3 )
    {
      LOBYTE(v4) = 1;
      LOBYTE(v3) = PpmUpdatePerformanceFeedback((_DWORD)a1, 0, v4, 0, 0LL);
      if ( (_BYTE)v3 )
        LOBYTE(v3) = v5 == PpmGetIdleGenerationCounter(a1);
    }
  }
  return v3;
}
