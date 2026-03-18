/*
 * XREFs of AcpiNativeMethodEvalRequestCompletion @ 0x14004A0F0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x14004A10C (AMLIRestartContext.c)
 */

__int64 __fastcall AcpiNativeMethodEvalRequestCompletion(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 64) = a2;
  return AMLIRestartContext(*(_QWORD *)a1);
}
