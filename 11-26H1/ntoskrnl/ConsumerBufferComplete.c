/*
 * XREFs of ConsumerBufferComplete @ 0x140BFE1D8
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140BFA2A4 (PopDecompressHiberBlocks.c)
 *     PopRequestWrite @ 0x140BFB804 (PopRequestWrite.c)
 * Callees:
 *     ProducerConsumerBufferComplete @ 0x140BFE3FC (ProducerConsumerBufferComplete.c)
 *     PopHiberCheckForDebugBreak @ 0x140C04A64 (PopHiberCheckForDebugBreak.c)
 */

__int64 __fastcall ConsumerBufferComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 1, 0) )
  {
    do
    {
      _mm_pause();
      PopHiberCheckForDebugBreak();
    }
    while ( *(_DWORD *)(a1 + 24) );
  }
  result = ProducerConsumerBufferComplete(a1, a1 + 48, a2, a3);
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
