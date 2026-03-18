/*
 * XREFs of ZwVdmControl @ 0x140727050
 * Callers:
 *     DifZwVdmControlWrapper @ 0x1406BEEA0 (DifZwVdmControlWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwVdmControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
