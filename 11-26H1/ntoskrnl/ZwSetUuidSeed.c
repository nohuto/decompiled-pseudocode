/*
 * XREFs of ZwSetUuidSeed @ 0x140726C70
 * Callers:
 *     DifZwSetUuidSeedWrapper @ 0x1406BC870 (DifZwSetUuidSeedWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetUuidSeed(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
