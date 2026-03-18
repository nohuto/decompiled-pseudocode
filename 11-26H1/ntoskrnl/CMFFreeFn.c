/*
 * XREFs of CMFFreeFn @ 0x140B2F610
 * Callers:
 *     XpressDecodeClose @ 0x14071F5EC (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0);
}
