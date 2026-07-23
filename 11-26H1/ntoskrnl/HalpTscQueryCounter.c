/*
 * XREFs of HalpTscQueryCounter @ 0x14059BCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 HalpTscQueryCounter()
{
  if ( HIDWORD(IommuInterfaceStateChangeCallbackPushLock.Queue) == 1 )
  {
    _mm_lfence();
  }
  else if ( HIDWORD(IommuInterfaceStateChangeCallbackPushLock.Queue) == 2 )
  {
    _mm_mfence();
  }
  return __rdtsc();
}
