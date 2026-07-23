/*
 * XREFs of KiIsFlushEntire @ 0x14041DD34
 * Callers:
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     KeFlushCurrentTbOnly @ 0x140251FE8 (KeFlushCurrentTbOnly.c)
 *     KeFlushTb @ 0x140252130 (KeFlushTb.c)
 *     KiPreprocessFlushTb @ 0x14041DBE0 (KiPreprocessFlushTb.c)
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
