/*
 * XREFs of MiTransformValidPteUsingAccessedBit @ 0x140344608
 * Callers:
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 *     MiTradeBootImagePage @ 0x140D071EC (MiTradeBootImagePage.c)
 * Callees:
 *     MiFlushValidPteFromTb @ 0x140345918 (MiFlushValidPteFromTb.c)
 */

__int64 __fastcall MiTransformValidPteUsingAccessedBit(
        volatile signed __int64 *a1,
        unsigned __int64 a2,
        signed __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  int v5; // r15d
  signed __int64 v10; // rdx
  int v11; // ebp
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rbx
  signed __int64 v14; // rax
  signed __int64 v16; // rax

  v5 = MiFlags;
  if ( (MiFlags & 0x8000000) != 0 )
    _mm_lfence();
  v10 = *a1;
  v11 = 0;
  while ( 1 )
  {
    if ( v10 == a3 )
      return 1LL;
    v12 = v5 & 0x30000000;
    if ( v12 <= 0x10000000
      && ((v5 & 0x30000000) == 0 || a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL && (v10 & 0x80u) == 0LL) )
    {
      return 0LL;
    }
    while ( (v10 & 0x20) != 0 )
    {
      if ( ++v11 == 16 )
        return 0LL;
      v13 = v10 & 0xFFFFFFFFFFFFFFDFuLL;
      if ( _bittest64(&MiFlags, 0x1Bu) )
        _mm_lfence();
      v14 = _InterlockedCompareExchange64(a1, v13, v10);
      if ( v10 == v14 )
      {
        MiFlushValidPteFromTb(a2, v10, a4, a5);
        v10 = v13;
        break;
      }
      v10 = v14;
      if ( v12 == 0x10000000 && a2 >= 0xFFFFF6FB40000000uLL && a2 <= 0xFFFFF6FB7FFFFFFFuLL && (v14 & 0x80u) == 0LL )
        return 0LL;
    }
    if ( _bittest64(&MiFlags, 0x1Bu) )
      _mm_lfence();
    v16 = _InterlockedCompareExchange64(a1, a3, v10);
    if ( v10 == v16 )
      return 1LL;
    v10 = v16;
  }
}
