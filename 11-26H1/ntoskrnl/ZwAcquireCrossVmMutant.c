/*
 * XREFs of ZwAcquireCrossVmMutant @ 0x140728CA0
 * Callers:
 *     DifZwAcquireCrossVmMutantWrapper @ 0x14069BE40 (DifZwAcquireCrossVmMutantWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAcquireCrossVmMutant(__int64 a1)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1);
}
