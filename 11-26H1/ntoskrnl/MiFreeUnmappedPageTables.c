/*
 * XREFs of MiFreeUnmappedPageTables @ 0x140364F70
 * Callers:
 *     MiDeleteSystemPageTableTail @ 0x140364E70 (MiDeleteSystemPageTableTail.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiBadShareCount @ 0x1402BE4D0 (MiBadShareCount.c)
 *     MiPfnShareCountIsZero @ 0x1402BE530 (MiPfnShareCountIsZero.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 */

__int64 __fastcall MiFreeUnmappedPageTables(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rsi
  __int64 i; // rbp
  __int64 v6; // rax
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = a3;
  v3 = *(_QWORD *)(a1 + 16);
  for ( i = a1; ; a1 = i )
  {
    result = MiUnlinkPageChainHead(a1);
    v8 = result;
    if ( !result )
      break;
    v9 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v9);
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
    *(_DWORD *)(v8 + 32) = *(_DWORD *)(v8 + 32) & 0xFFF8FFFF | 0x60000;
    if ( (*(_BYTE *)(v8 + 34) & 7) != 6 )
      MiBadShareCount(v8);
    v6 = *(_QWORD *)(v8 + 24);
    *(_QWORD *)(v8 + 24) = ((v6 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ (v6 ^ ((v6 & 0x3FFFFFFFFFFFFFFFLL) - 1)) & 0xC000000000000000uLL;
    if ( (v6 & 0x3FFFFFFFFFFFFFFFLL) == 1 && (unsigned int)MiPfnShareCountIsZero(v8, 0LL) == 3 )
      ++a2[1];
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  a2[3] += v3;
  *a2 += v3;
  return result;
}
