/*
 * XREFs of SymCryptFdefIntGetBit @ 0x1405678DC
 * Callers:
 *     SymCryptIntGetBit @ 0x14055E78C (SymCryptIntGetBit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefIntGetBit(__int64 a1, unsigned int a2)
{
  return (*(_DWORD *)(a1 + 4 * ((unsigned __int64)a2 >> 5) + 32) >> (a2 & 0x1F)) & 1;
}
