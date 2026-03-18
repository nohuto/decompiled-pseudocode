/*
 * XREFs of ZwCreateCrossVmMutant @ 0x140724930
 * Callers:
 *     DifZwCreateCrossVmMutantWrapper @ 0x14069E560 (DifZwCreateCrossVmMutantWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateCrossVmMutant(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
