/*
 * XREFs of ZwRaiseException @ 0x14069DFC0
 * Callers:
 *     RtlUnwindEx @ 0x14025C330 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x1404FA8F0 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseException @ 0x1405DC840 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
