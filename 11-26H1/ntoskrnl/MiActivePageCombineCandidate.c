/*
 * XREFs of MiActivePageCombineCandidate @ 0x1402954F0
 * Callers:
 *     MiCrcStillIntact @ 0x1402E96C8 (MiCrcStillIntact.c)
 *     MiShareValidPage @ 0x1407096FC (MiShareValidPage.c)
 * Callees:
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 */

__int64 __fastcall MiActivePageCombineCandidate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // r10
  __int64 result; // rax

  if ( a4 != (*(_QWORD *)(a3 + 8) | 0x8000000000000000uLL) )
    return 0LL;
  if ( *(__int64 *)(a3 + 40) < 0 )
    return 0LL;
  if ( (*(_QWORD *)(a3 + 40) & 0x10000000000LL) != 0 )
    return 0LL;
  if ( (*(_QWORD *)(a3 + 40) & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
    return 0LL;
  if ( (*(_DWORD *)(a3 + 32) & 0x8000000) != 0 )
    return 0LL;
  if ( (MiGetWsleContents(0x3FFFFFFFFELL, a4 << 25 >> 16) & 0xF) == 8 )
    return 0LL;
  result = 1LL;
  if ( v4 != 1 )
    return 0LL;
  return result;
}
