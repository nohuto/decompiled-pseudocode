/*
 * XREFs of ?SetRailsEnabled@CInteractionProcessor@@QEAAX_NW4RailsAxis@@@Z @ 0x1801B0A7C
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1801917E8 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180208768 (ModuleFailFastForHRESULT.c)
 */

char __fastcall CInteractionProcessor::SetRailsEnabled(_BYTE *a1, char a2, int a3)
{
  char v3; // r10
  char v4; // r8
  char result; // al
  char v6; // dl
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    if ( a3 != 1 )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v3 = -33;
    if ( ((a1[148] & 0x20) != 0) != a2 )
      a1[148] = (32 * a2) | a1[148] & 0xDF | 1;
    if ( ((a1[308] & 0x20) != 0) != a2 )
      a1[308] = (32 * a2) | a1[308] & 0xDF | 1;
    if ( ((a1[468] & 0x20) != 0) != a2 )
      a1[468] = (32 * a2) | a1[468] & 0xDF | 1;
    v4 = a1[628];
    result = (v4 & 0x20) != 0;
    if ( result != a2 )
    {
      v6 = 32 * a2;
      goto LABEL_10;
    }
  }
  else
  {
    v3 = -17;
    if ( ((a1[148] & 0x10) != 0) != a2 )
      a1[148] = (16 * a2) | a1[148] & 0xEF | 1;
    if ( ((a1[308] & 0x10) != 0) != a2 )
      a1[308] = (16 * a2) | a1[308] & 0xEF | 1;
    if ( ((a1[468] & 0x10) != 0) != a2 )
      a1[468] = (16 * a2) | a1[468] & 0xEF | 1;
    v4 = a1[628];
    result = (v4 & 0x10) != 0;
    if ( result != a2 )
    {
      v6 = 16 * a2;
LABEL_10:
      a1[628] = v6 | v3 & v4 | 1;
    }
  }
  return result;
}
