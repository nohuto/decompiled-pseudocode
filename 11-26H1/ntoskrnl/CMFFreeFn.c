/*
 * XREFs of CMFFreeFn @ 0x140B313F0
 * Callers:
 *     XpressDecodeClose @ 0x14072420C (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(__int64 a1, void *a2)
{
  ExFreePoolWithTag(a2, 0);
}
