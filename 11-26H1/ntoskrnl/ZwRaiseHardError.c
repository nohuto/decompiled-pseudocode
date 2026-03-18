/*
 * XREFs of ZwRaiseHardError @ 0x1407262B0
 * Callers:
 *     DifZwRaiseHardErrorWrapper @ 0x1406B5A00 (DifZwRaiseHardErrorWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseHardError(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
