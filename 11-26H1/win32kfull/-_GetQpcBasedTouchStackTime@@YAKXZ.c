/*
 * XREFs of ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1402612DC
 * Callers:
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x14026ED64 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxInjectTouchInput @ 0x14029E10C (xxxInjectTouchInput.c)
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
