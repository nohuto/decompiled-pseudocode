/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140C0AC74
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140C002A4 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140C013E8 (PopRequestRead.c)
 *     PopWriteHiberImage @ 0x140C02AD4 (PopWriteHiberImage.c)
 *     ConsumerBufferComplete @ 0x140C043E0 (ConsumerBufferComplete.c)
 *     ConsumerGetBuffer @ 0x140C04458 (ConsumerGetBuffer.c)
 *     ProducerBufferComplete @ 0x140C04568 (ProducerBufferComplete.c)
 *     ProducerConsumerBufferComplete @ 0x140C04604 (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140C047D0 (ProducerGetBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140C0AB1C (ConsumerPeekAndConsumeBuffer.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     KdCheckForDebugBreak @ 0x14048198C (KdCheckForDebugBreak.c)
 */

LARGE_INTEGER PopHiberCheckForDebugBreak()
{
  LARGE_INTEGER result; // rax

  result.QuadPart = (LONGLONG)KeGetCurrentPrcb();
  if ( !*(_DWORD *)(result.QuadPart + 36) )
  {
    result.QuadPart = (unsigned int)(dword_140E6770C + 1);
    dword_140E6770C = result.LowPart;
    if ( (result.LowPart & 0x3F) == 0 )
    {
      KdCheckForDebugBreak();
      return KeQueryPerformanceCounter(0LL);
    }
  }
  return result;
}
