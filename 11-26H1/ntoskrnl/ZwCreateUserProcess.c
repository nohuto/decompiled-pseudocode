/*
 * XREFs of ZwCreateUserProcess @ 0x140724E10
 * Callers:
 *     DifZwCreateUserProcessWrapper @ 0x1406A31C0 (DifZwCreateUserProcessWrapper.c)
 *     RtlpCreateUserProcess @ 0x140CD9DAC (RtlpCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateUserProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
