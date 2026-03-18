/*
 * XREFs of MiPfnIsActivePageTable @ 0x1403A77A8
 * Callers:
 *     MiTradePageMarkedActive @ 0x1402931C0 (MiTradePageMarkedActive.c)
 *     MiValidWriteFaultProcess @ 0x1403A76E0 (MiValidWriteFaultProcess.c)
 * Callees:
 *     MiPfnIsPageTable @ 0x1403A77E0 (MiPfnIsPageTable.c)
 */

__int64 __fastcall MiPfnIsActivePageTable(__int64 a1)
{
  __int64 v1; // r9

  if ( (unsigned int)MiPfnIsPageTable(a1) )
    return (*(_DWORD *)(v1 + 36) >> 26) & 1;
  else
    return 0LL;
}
