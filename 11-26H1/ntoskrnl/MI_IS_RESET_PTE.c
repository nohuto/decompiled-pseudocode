/*
 * XREFs of MI_IS_RESET_PTE @ 0x140369B90
 * Callers:
 *     MiActOnValidPte @ 0x140296698 (MiActOnValidPte.c)
 *     MiActOnPte @ 0x1402B61E0 (MiActOnPte.c)
 *     MiCombineCandidate @ 0x1402D6000 (MiCombineCandidate.c)
 *     MiRestoreTransitionPte @ 0x1402DAFE0 (MiRestoreTransitionPte.c)
 *     MiWsleFlush @ 0x14032C540 (MiWsleFlush.c)
 *     MiActOnTransitionPte @ 0x14033E930 (MiActOnTransitionPte.c)
 *     MiReservePageFileSpaceForPage @ 0x14036944C (MiReservePageFileSpaceForPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(__int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 8) != 0 || (a1 & 4) != 0 )
    return 0LL;
  if ( qword_140E2D8C0 )
  {
    if ( (a1 & 0x10) == 0 )
      HIDWORD(a1) &= HIDWORD(qword_140E2D8C8);
  }
  return HIDWORD(a1) == 1;
}
