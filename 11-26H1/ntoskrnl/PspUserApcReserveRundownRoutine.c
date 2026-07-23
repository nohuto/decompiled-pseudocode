/*
 * XREFs of PspUserApcReserveRundownRoutine @ 0x140AD36E0
 * Callers:
 *     PspUserApcReserveKernelRoutine @ 0x140AD36C0 (PspUserApcReserveKernelRoutine.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspUserApcReserveRundownRoutine(__int64 a1)
{
  _DWORD *v1; // rcx

  v1 = (_DWORD *)(a1 - 8);
  *v1 = 0;
  return ObfDereferenceObject(v1);
}
