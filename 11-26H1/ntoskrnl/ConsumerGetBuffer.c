/*
 * XREFs of ConsumerGetBuffer @ 0x140C04458
 * Callers:
 *     PopRequestWrite @ 0x140C01804 (PopRequestWrite.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x140C0AC74 (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ConsumerGetBuffer(__int64 a1, unsigned int *a2, char a3)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rsi
  char v9; // al
  unsigned int v10; // esi
  unsigned __int64 v11; // rcx
  unsigned __int64 result; // rax

  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  v6 = *(_QWORD *)(a1 + 16);
  while ( 1 )
  {
    v7 = *(_QWORD *)(a1 + 48);
    v8 = v7 + *a2;
    if ( !v6 && v8 >= *(_QWORD *)(a1 + 32) )
      v8 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(a1 + 40) >= v8 )
      break;
    v9 = 0;
    if ( (a3 & 1) != 0 )
      goto LABEL_19;
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
      if ( v6 )
      {
        v6 = *(_QWORD *)(a1 + 16);
        if ( !v6 )
          break;
      }
    }
    while ( *(_QWORD *)(a1 + 40) < v8 );
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
  v9 = 1;
LABEL_19:
  v10 = v8 - v7;
  *a2 = v10;
  if ( v9 && v10 )
  {
    v11 = *(_QWORD *)a1 + v7 % *(unsigned int *)(a1 + 8);
    *(_QWORD *)(a1 + 48) = v7 + v10;
  }
  else
  {
    v11 = 0LL;
  }
  result = v11;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
