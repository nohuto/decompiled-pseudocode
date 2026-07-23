/*
 * XREFs of ProducerConsumerBufferComplete @ 0x140C04604
 * Callers:
 *     ConsumerBufferComplete @ 0x140C043E0 (ConsumerBufferComplete.c)
 *     ProducerBufferComplete @ 0x140C04568 (ProducerBufferComplete.c)
 * Callees:
 *     PopHiberCheckForDebugBreak @ 0x140C0AC74 (PopHiberCheckForDebugBreak.c)
 */

unsigned __int64 __fastcall ProducerConsumerBufferComplete(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned __int64 v4; // r11
  unsigned int v6; // r8d
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned int v9; // edi
  __int64 v10; // rbp
  __int64 v12; // rdi

  v4 = *(_QWORD *)(a2 + 8);
  v6 = a3 - *(_DWORD *)a1;
  result = v4 / *(unsigned int *)(a1 + 8);
  v8 = v4 % *(unsigned int *)(a1 + 8);
  v9 = *(_DWORD *)(a1 + 8) + v6;
  v10 = a4;
  if ( (unsigned int)v8 <= v6 )
    v9 = v6;
  v12 = v4 + v9 - (unsigned int)v8;
  if ( v12 != v4 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( v12 != *(_QWORD *)(a2 + 8) );
    while ( 1 )
    {
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0);
      if ( !(_DWORD)result )
        break;
      do
      {
        _mm_pause();
        PopHiberCheckForDebugBreak();
      }
      while ( *(_DWORD *)(a1 + 24) );
    }
  }
  *(_QWORD *)(a2 + 8) = v12 + v10;
  return result;
}
