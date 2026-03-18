/*
 * XREFs of PpmCancelExitLatencyTrace @ 0x140601658
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1403EB78C (PpmIdleExecuteTransition.c)
 *     KdPowerTransitionEx @ 0x14050A220 (KdPowerTransitionEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmCancelExitLatencyTrace(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 34880);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 3) )
    {
      result = HIDWORD(stru_140E66FF0.SchedulerSharedSwappablePage);
      *(_DWORD *)(v1 + 20) = HIDWORD(stru_140E66FF0.SchedulerSharedSwappablePage) != 0;
      *(_BYTE *)(v1 + 3) = 0;
    }
  }
  return result;
}
