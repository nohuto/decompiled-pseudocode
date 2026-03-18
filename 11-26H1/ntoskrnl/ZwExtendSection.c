/*
 * XREFs of ZwExtendSection @ 0x140725150
 * Callers:
 *     CmSiExtendSection @ 0x1404F1654 (CmSiExtendSection.c)
 *     DifZwExtendSectionWrapper @ 0x1406A5B00 (DifZwExtendSectionWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwExtendSection(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
