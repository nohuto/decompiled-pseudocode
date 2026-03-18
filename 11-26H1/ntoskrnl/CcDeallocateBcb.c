/*
 * XREFs of CcDeallocateBcb @ 0x1404749E4
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402DF3C0 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x14039C204 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14039C3DC (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140474A20 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
