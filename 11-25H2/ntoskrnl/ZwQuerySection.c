/*
 * XREFs of ZwQuerySection @ 0x14069BB60
 * Callers:
 *     CmSiGetSectionLength @ 0x140492AD8 (CmSiGetSectionLength.c)
 *     DifZwQuerySectionWrapper @ 0x14063A410 (DifZwQuerySectionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
