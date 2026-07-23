/*
 * XREFs of ExStartRecordingIRTimerExpiries @ 0x140B3FDE4
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140421FC8 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     ExpGetIRTimerDesc @ 0x1404E6C90 (ExpGetIRTimerDesc.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void ExStartRecordingIRTimerExpiries()
{
  unsigned int i; // edx
  int v1; // edx
  __int64 Pool2; // rax
  void *v3; // rcx

  for ( i = 0; i < 0x14; i = v1 + 1 )
    ExpGetIRTimerDesc(i);
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v3 = (void *)_InterlockedExchange64(
                   (volatile __int64 *)&ExSaPageGroupDescriptorArrayLock.KernelShadowStackInitial,
                   Pool2);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x69547845u);
  }
}
