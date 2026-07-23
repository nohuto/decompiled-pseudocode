/*
 * XREFs of PpmCancelExitLatencyTrace @ 0x140604108
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402F87D0 (PpmIdleExecuteTransition.c)
 *     KdPowerTransitionEx @ 0x140503C90 (KdPowerTransitionEx.c)
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
      result = LODWORD(stru_140E67200.Padding[1]);
      *(_DWORD *)(v1 + 20) = LODWORD(stru_140E67200.Padding[1]) != 0;
      *(_BYTE *)(v1 + 3) = 0;
    }
  }
  return result;
}
