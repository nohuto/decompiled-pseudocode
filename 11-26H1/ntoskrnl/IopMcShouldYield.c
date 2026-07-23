/*
 * XREFs of IopMcShouldYield @ 0x1402EF3B8
 * Callers:
 *     IopMcAddMdlPagesToTable @ 0x1402EF218 (IopMcAddMdlPagesToTable.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x1402EF90C (IopMcRemoveMdlPagesFromTable.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402B6790 (KeShouldYieldProcessor.c)
 */

bool __fastcall IopMcShouldYield(int a1, unsigned __int8 a2)
{
  if ( !a1 || (a1 & 0xF) != 0 )
    return 0;
  if ( (dword_140F850E4 & 0x40000000) != 0 )
    return 1;
  if ( a2 >= 2u )
    return 0;
  return KeShouldYieldProcessor() != 0;
}
