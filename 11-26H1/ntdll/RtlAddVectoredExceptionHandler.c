/*
 * XREFs of RtlAddVectoredExceptionHandler @ 0x180102DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlAddVectoredExceptionHandler(int a1, __int64 a2)
{
  return RtlpAddVectoredHandler(a1, a2, 0);
}
