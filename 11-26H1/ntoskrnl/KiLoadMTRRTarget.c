/*
 * XREFs of KiLoadMTRRTarget @ 0x140BF5310
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x140C06D50 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(ULONG_PTR Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
