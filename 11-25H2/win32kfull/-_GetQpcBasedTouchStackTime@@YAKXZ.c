/*
 * XREFs of ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x14027AD6C
 * Callers:
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x140231DEC (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxInjectTouchInput @ 0x14023D0FC (xxxInjectTouchInput.c)
 * Callees:
 *     <none>
 */

__int64 _GetQpcBasedTouchStackTime(void)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( !gliQpcFreq )
    return 10 * (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return 10000 * (unsigned int)(PerformanceCounter.QuadPart / gliQpcFreq)
       + (unsigned int)((unsigned __int64)(10000 * (PerformanceCounter.QuadPart % gliQpcFreq)) / gliQpcFreq);
}
