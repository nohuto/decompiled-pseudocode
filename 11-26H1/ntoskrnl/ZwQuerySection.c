/*
 * XREFs of ZwQuerySection @ 0x140723E10
 * Callers:
 *     CmSiGetSectionLength @ 0x1404CFA74 (CmSiGetSectionLength.c)
 *     DifZwQuerySectionWrapper @ 0x1406B37A0 (DifZwQuerySectionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
