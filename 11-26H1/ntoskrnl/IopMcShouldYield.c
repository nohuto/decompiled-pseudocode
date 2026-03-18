/*
 * XREFs of IopMcShouldYield @ 0x14030D338
 * Callers:
 *     IopMcAddMdlPagesToTable @ 0x14030D198 (IopMcAddMdlPagesToTable.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x14030D88C (IopMcRemoveMdlPagesFromTable.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402D49D0 (KeShouldYieldProcessor.c)
 */

bool __fastcall IopMcShouldYield(int a1, unsigned __int8 a2)
{
  if ( !a1 || (a1 & 0xF) != 0 )
    return 0;
  if ( (dword_140F84D44 & 0x40000000) != 0 )
    return 1;
  if ( a2 >= 2u )
    return 0;
  return KeShouldYieldProcessor() != 0;
}
