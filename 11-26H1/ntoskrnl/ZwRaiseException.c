/*
 * XREFs of ZwRaiseException @ 0x140726290
 * Callers:
 *     RtlUnwindEx @ 0x1402E8510 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x140535190 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseException @ 0x140619230 (RtlRaiseException.c)
 *     DifZwRaiseExceptionWrapper @ 0x1406B5880 (DifZwRaiseExceptionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
