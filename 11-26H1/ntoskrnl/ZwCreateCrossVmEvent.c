/*
 * XREFs of ZwCreateCrossVmEvent @ 0x1407294E0
 * Callers:
 *     DifZwCreateCrossVmEventWrapper @ 0x1406A1F90 (DifZwCreateCrossVmEventWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateCrossVmEvent(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
