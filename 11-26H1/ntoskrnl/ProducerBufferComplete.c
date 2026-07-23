/*
 * XREFs of ProducerBufferComplete @ 0x140C04568
 * Callers:
 *     PopCountDataAsProduced @ 0x140C00088 (PopCountDataAsProduced.c)
 *     PopRequestRead @ 0x140C013E8 (PopRequestRead.c)
 * Callees:
 *     ProducerConsumerBufferComplete @ 0x140C04604 (ProducerConsumerBufferComplete.c)
 *     PopHiberCheckForDebugBreak @ 0x140C0AC74 (PopHiberCheckForDebugBreak.c)
 */

__int64 __fastcall ProducerBufferComplete(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v9; // rcx

  v4 = a4;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  result = ProducerConsumerBufferComplete(a1, a1 + 32, a2, a3);
  v9 = *(_QWORD *)(a1 + 16) - v4;
  *(_QWORD *)(a1 + 16) = v9;
  if ( !v9 )
  {
    result = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 32) = result;
  }
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
