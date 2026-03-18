/*
 * XREFs of WmipIsNumber @ 0x140AF7E54
 * Callers:
 *     WmipFindISinGEbyName @ 0x140A0B3A0 (WmipFindISinGEbyName.c)
 *     WmipPrepareWnodeSI @ 0x140A0F5E4 (WmipPrepareWnodeSI.c)
 * Callees:
 *     <none>
 */

char __fastcall WmipIsNumber(_WORD *a1)
{
  while ( 1 )
  {
    if ( !*a1 )
      return 1;
    if ( (unsigned __int16)(*a1 - 48) > 9u )
      break;
    ++a1;
  }
  return 0;
}
