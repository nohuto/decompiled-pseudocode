/*
 * XREFs of KiIsFlushEntire @ 0x140430D04
 * Callers:
 *     MiIssueFlushTbEntire @ 0x140250040 (MiIssueFlushTbEntire.c)
 *     KeFlushCurrentTbOnly @ 0x140250688 (KeFlushCurrentTbOnly.c)
 *     KeFlushTb @ 0x1402507D0 (KeFlushTb.c)
 *     KiPreprocessFlushTb @ 0x140430BB0 (KiPreprocessFlushTb.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIsFlushEntire(int a1)
{
  bool v1; // zf

  if ( !KiFlushPcid )
  {
    if ( KiKvaShadow )
    {
      v1 = a1 == 0;
    }
    else
    {
      if ( !a1 )
        return 1;
      v1 = a1 == 1;
    }
    if ( !v1 )
      return 1;
  }
  return 0;
}
