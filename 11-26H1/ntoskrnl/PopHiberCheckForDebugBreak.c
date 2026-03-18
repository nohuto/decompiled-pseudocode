/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140C04A64
 * Callers:
 *     PopDecompressHiberBlocks @ 0x140BFA2A4 (PopDecompressHiberBlocks.c)
 *     PopRequestRead @ 0x140BFB3E8 (PopRequestRead.c)
 *     PopWriteHiberImage @ 0x140BFCAD4 (PopWriteHiberImage.c)
 *     ConsumerBufferComplete @ 0x140BFE1D8 (ConsumerBufferComplete.c)
 *     ConsumerGetBuffer @ 0x140BFE250 (ConsumerGetBuffer.c)
 *     ProducerBufferComplete @ 0x140BFE360 (ProducerBufferComplete.c)
 *     ProducerConsumerBufferComplete @ 0x140BFE3FC (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140BFE5C8 (ProducerGetBuffer.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x140C0490C (ConsumerPeekAndConsumeBuffer.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     KdCheckForDebugBreak @ 0x140487E4C (KdCheckForDebugBreak.c)
 */

LARGE_INTEGER PopHiberCheckForDebugBreak()
{
  LARGE_INTEGER result; // rax

  result.QuadPart = (LONGLONG)KeGetCurrentPrcb();
  if ( !*(_DWORD *)(result.QuadPart + 36) )
  {
    result.QuadPart = (unsigned int)(dword_140E674B4 + 1);
    dword_140E674B4 = result.LowPart;
    if ( (result.LowPart & 0x3F) == 0 )
    {
      KdCheckForDebugBreak();
      return KeQueryPerformanceCounter(0LL);
    }
  }
  return result;
}
