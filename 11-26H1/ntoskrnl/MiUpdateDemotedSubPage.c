/*
 * XREFs of MiUpdateDemotedSubPage @ 0x140434C10
 * Callers:
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiDemotePfnListChain @ 0x1407117C4 (MiDemotePfnListChain.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiAnyPagesRemovalPending @ 0x140434D64 (MiAnyPagesRemovalPending.c)
 */

__int64 __fastcall MiUpdateDemotedSubPage(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 == 3 )
  {
    if ( (*(_QWORD *)(a2 + 40) & 0x20000000000LL) != 0 )
      *(_QWORD *)(a2 + 40) &= ~0x20000000000uLL;
    *(_QWORD *)(a2 + 40) &= ~0x10000000000uLL;
  }
  *(_DWORD *)(a2 + 36) = ((unsigned __int8)~(_BYTE)a3 << 27) ^ (*(_DWORD *)(a2 + 36) ^ ((unsigned __int8)~(_BYTE)a3 << 27)) & 0xE7FFFFFF;
  if ( a3 != 3 )
  {
    if ( a2 != a1 )
    {
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v8);
        while ( *(__int64 *)(a1 + 24) < 0 );
      }
    }
    if ( (*(_QWORD *)(a1 + 40) & 0x20000000000LL) != 0 )
    {
      if ( !(unsigned int)MiAnyPagesRemovalPending((a2 + 0x220000000000LL) / 48, a3) )
      {
        if ( a2 == a1 )
        {
          *(_QWORD *)(a2 + 40) &= ~0x20000000000uLL;
          return v3;
        }
        goto LABEL_12;
      }
      v3 = 1;
      *(_QWORD *)(a2 + 40) |= 0x20000000000uLL;
    }
    if ( a2 == a1 )
      return v3;
LABEL_12:
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return v3;
}
