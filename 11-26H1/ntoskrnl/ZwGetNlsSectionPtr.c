/*
 * XREFs of ZwGetNlsSectionPtr @ 0x140725430
 * Callers:
 *     DifZwGetNlsSectionPtrWrapper @ 0x1406A7E20 (DifZwGetNlsSectionPtrWrapper.c)
 *     RtlpGetNormalization @ 0x14080F254 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetNlsSectionPtr(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
