/*
 * XREFs of ConsumerPeekAndConsumeBuffer @ 0x140C0AB1C
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140C002A4 (PopDecompressHiberBlocks.c)
 * Callees:
 *     PopHiberPeekRangeTable @ 0x140C00D38 (PopHiberPeekRangeTable.c)
 *     PopHiberCheckForDebugBreak @ 0x140C0AC74 (PopHiberCheckForDebugBreak.c)
 */

__int64 __fastcall ConsumerPeekAndConsumeBuffer(__int64 a1, unsigned int *a2, char a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rbp
  __int64 v12; // r9
  unsigned __int64 v13; // rsi
  char v14; // al
  unsigned int v15; // esi
  __int64 result; // rax

  v5 = 0LL;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  v9 = *(_QWORD *)(a1 + 16);
  while ( 1 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    v11 = *(_QWORD *)(a1 + 48);
    v12 = *a2;
    v13 = v12 + v11;
    if ( !v9 && v11 == *(_QWORD *)(a1 + 32) )
    {
      v14 = 0;
      goto LABEL_16;
    }
    if ( v10 >= v13 )
    {
      v5 = *(_QWORD *)a1 + v11 % *(unsigned int *)(a1 + 8);
      v13 = v11 + (unsigned int)PopHiberPeekRangeTable(v5, (unsigned int)v12, a5);
      if ( v10 >= v13 )
        break;
    }
    v14 = 0;
    if ( (a3 & 1) != 0 )
      goto LABEL_16;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
      if ( v9 )
      {
        v9 = *(_QWORD *)(a1 + 16);
        if ( !v9 )
          break;
      }
    }
    while ( *(_QWORD *)(a1 + 48) == v11 && *(_QWORD *)(a1 + 40) < v13 );
    while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak();
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  v14 = 1;
LABEL_16:
  v15 = v13 - v11;
  *a2 = v15;
  if ( v14 && v15 )
    *(_QWORD *)(a1 + 48) = v11 + v15;
  else
    v5 = 0LL;
  result = v5;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
