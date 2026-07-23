/*
 * XREFs of ProducerGetBuffer @ 0x140C047D0
 * Callers:
 *     PopCountDataAsProduced @ 0x140C00088 (PopCountDataAsProduced.c)
 *     PopRequestRead @ 0x140C013E8 (PopRequestRead.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x140C0AC74 (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ProducerGetBuffer(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 result; // rax

  v4 = a2;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)v4 <= (unsigned int)*(_QWORD *)(a1 + 56) + *(_DWORD *)(a1 + 8) - (_DWORD)v6 )
      break;
    if ( (a3 & 1) != 0 )
    {
      result = 0LL;
      goto LABEL_15;
    }
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak();
        v7 = *(_QWORD *)(a1 + 32);
        v8 = *(_QWORD *)(a1 + 56);
      }
      while ( v8 > v7 );
    }
    while ( (unsigned int)v4 > (int)v8 + *(_DWORD *)(a1 + 8) - (int)v7 );
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
  result = *(_QWORD *)a1 + v6 % *(unsigned int *)(a1 + 8);
  *(_QWORD *)(a1 + 32) = v6 + v4;
LABEL_15:
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
