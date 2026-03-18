/*
 * XREFs of VfFillAllocatedMemory @ 0x140C29A38
 * Callers:
 *     VfHandlePoolAlloc @ 0x140C44300 (VfHandlePoolAlloc.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void *__fastcall VfFillAllocatedMemory(void *a1, size_t a2)
{
  unsigned __int8 LowPart; // al
  void *result; // rax

  LowPart = KeQueryPerformanceCounter(0LL).LowPart;
  if ( a2 >= 0x100 )
    a2 = 256LL;
  if ( a2 != 256 )
    return memset_0(a1, LowPart | 1u, a2);
  result = (void *)(LowPart | 1LL | ((LowPart | 1LL) << 8) | ((LowPart | 1LL | ((LowPart | 1LL) << 8)) << 16) | ((LowPart | 1LL | ((LowPart | 1LL) << 8) | ((LowPart | 1LL | ((LowPart | 1LL) << 8)) << 16)) << 32));
  memset64(a1, (unsigned __int64)result, 0x20uLL);
  return result;
}
