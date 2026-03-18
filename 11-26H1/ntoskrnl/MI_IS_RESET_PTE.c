/*
 * XREFs of MI_IS_RESET_PTE @ 0x140367DF0
 * Callers:
 *     MiActOnValidPte @ 0x140297138 (MiActOnValidPte.c)
 *     MiActOnPte @ 0x1402D4420 (MiActOnPte.c)
 *     MiCombineCandidate @ 0x1402F3F80 (MiCombineCandidate.c)
 *     MiRestoreTransitionPte @ 0x1402F8F60 (MiRestoreTransitionPte.c)
 *     MiWsleFlush @ 0x14032A510 (MiWsleFlush.c)
 *     MiActOnTransitionPte @ 0x14033C8B0 (MiActOnTransitionPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403676AC (MiReservePageFileSpaceForPage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(__int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 8) != 0 || (a1 & 4) != 0 )
    return 0LL;
  if ( qword_140E2D740 )
  {
    if ( (a1 & 0x10) == 0 )
      HIDWORD(a1) &= HIDWORD(qword_140E2D748);
  }
  return HIDWORD(a1) == 1;
}
