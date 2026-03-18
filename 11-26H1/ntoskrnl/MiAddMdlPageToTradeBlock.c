/*
 * XREFs of MiAddMdlPageToTradeBlock @ 0x140472930
 * Callers:
 *     MiTradePageMarkedPoisoned @ 0x1405193C8 (MiTradePageMarkedPoisoned.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAddMdlPageToTradeBlock(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 56);
  if ( result )
  {
    *(_QWORD *)(result + 8 * ((unsigned __int64)*(unsigned int *)(result + 40) >> 12) + 48) = a2;
    *(_DWORD *)(result + 40) += 4096;
  }
  return result;
}
