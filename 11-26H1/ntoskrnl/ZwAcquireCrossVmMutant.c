/*
 * XREFs of ZwAcquireCrossVmMutant @ 0x1407240D0
 * Callers:
 *     DifZwAcquireCrossVmMutantWrapper @ 0x140698260 (DifZwAcquireCrossVmMutantWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAcquireCrossVmMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
