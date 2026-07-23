/*
 * XREFs of CcDeallocateBcb @ 0x14046E164
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402C11D0 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x14039DF64 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14039E13C (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x14046E1A0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
