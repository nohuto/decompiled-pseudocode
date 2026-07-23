/*
 * XREFs of ZwCreateCrossVmMutant @ 0x140729500
 * Callers:
 *     DifZwCreateCrossVmMutantWrapper @ 0x1406A2140 (DifZwCreateCrossVmMutantWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateCrossVmMutant(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
