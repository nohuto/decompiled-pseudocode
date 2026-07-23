/*
 * XREFs of MiPurgeSlabEntry @ 0x1404BB64C
 * Callers:
 *     MiPurgeSlabEntries @ 0x1404BB48C (MiPurgeSlabEntries.c)
 *     MiEstablishDefragSlabEntries @ 0x14070B794 (MiEstablishDefragSlabEntries.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUnlinkPageFromListEx @ 0x1402D92D0 (MiUnlinkPageFromListEx.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiDiscardTransitionPfnEx @ 0x14036BD80 (MiDiscardTransitionPfnEx.c)
 *     MiIsFreeSlabPage @ 0x1404BB78C (MiIsFreeSlabPage.c)
 */

__int64 __fastcall MiPurgeSlabEntry(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v6; // rsi
  unsigned __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rbx
  _QWORD *i; // r15
  __int64 v12; // r8
  int v13; // [rsp+50h] [rbp+8h] BYREF

  result = 6 * a1;
  v6 = a3;
  v8 = a1;
  v9 = 48 * a1 - 0x220000000000LL;
  if ( a3 )
  {
    v10 = v9 + 24;
    for ( i = (_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL); ; i += 6 )
    {
      if ( v8 > a2 )
        return result;
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v13);
        while ( *(__int64 *)v10 < 0 );
      }
      if ( v8 > qword_140E2D920 || ((*i >> 54) & 1) == 0 || (unsigned int)MiGetPfnSlabType(v9) == 9 )
        goto LABEL_18;
      if ( (*(_BYTE *)(v10 + 10) & 7) != 2
        || (unsigned __int16)*(_DWORD *)(v10 + 8)
        || (a4 & 2) == 0 && (*(_DWORD *)(v10 + 8) & 0x8000000) == 0 )
      {
        break;
      }
      MiUnlinkPageFromListEx(v9, 0);
      MiDiscardTransitionPfnEx(v9, 0LL, v12);
      --v6;
LABEL_19:
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
      v9 += 48LL;
      v10 += 48LL;
      ++v8;
      if ( !v6 )
        return result;
    }
    if ( (a4 & 1) != 0 || (unsigned int)MiIsFreeSlabPage(v9) )
      goto LABEL_19;
LABEL_18:
    v6 = 0LL;
    goto LABEL_19;
  }
  return result;
}
