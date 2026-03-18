/*
 * XREFs of ZwTraceControl @ 0x140726ED0
 * Callers:
 *     DifZwTraceControlWrapper @ 0x1406BD950 (DifZwTraceControlWrapper.c)
 *     EtwWriteStartScenario @ 0x140B456A0 (EtwWriteStartScenario.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTraceControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
