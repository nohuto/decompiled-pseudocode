/*
 * XREFs of PspInitializeProcessExecutionState @ 0x1404E1A20
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140959638 (PspRemoveProcessFromJobChain.c)
 *     PspComputeExecutionState @ 0x140A8FE0C (PspComputeExecutionState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspInitializeProcessExecutionState(_BYTE *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0;
  return result;
}
