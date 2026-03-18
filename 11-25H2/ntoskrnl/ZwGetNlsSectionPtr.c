/*
 * XREFs of ZwGetNlsSectionPtr @ 0x14069D180
 * Callers:
 *     RtlpGetNormalization @ 0x14077E2FC (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetNlsSectionPtr(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
