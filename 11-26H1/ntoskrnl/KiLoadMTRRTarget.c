/*
 * XREFs of KiLoadMTRRTarget @ 0x140BFB310
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140C0CF60 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(ULONG_PTR Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
