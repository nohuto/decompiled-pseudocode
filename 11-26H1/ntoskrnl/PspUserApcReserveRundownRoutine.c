/*
 * XREFs of PspUserApcReserveRundownRoutine @ 0x140AD69D0
 * Callers:
 *     PspUserApcReserveKernelRoutine @ 0x140AD69B0 (PspUserApcReserveKernelRoutine.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspUserApcReserveRundownRoutine(__int64 a1)
{
  _DWORD *v1; // rcx

  v1 = (_DWORD *)(a1 - 8);
  *v1 = 0;
  return ObfDereferenceObject(v1);
}
