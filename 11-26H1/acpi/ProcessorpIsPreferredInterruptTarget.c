/*
 * XREFs of ProcessorpIsPreferredInterruptTarget @ 0x1400BD620
 * Callers:
 *     ProcessorpIndexInstance @ 0x1400A9548 (ProcessorpIndexInstance.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpIsPreferredInterruptTarget(ULONG a1)
{
  unsigned int v1; // ebx
  unsigned __int16 i; // r8
  char *v4; // rcx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  ProcNumber = 0;
  if ( ProcessorpPreferredCpuSetActive && KeGetProcessorNumberFromIndex(a1, &ProcNumber) >= 0 )
  {
    for ( i = 0; i < (unsigned __int16)ProcessorpPreferredCpuSetGroupCount; ++i )
    {
      v4 = (char *)ProcessorpPreferredCpuSet + 16 * i;
      if ( ProcNumber.Group == *((_WORD *)v4 + 4) )
        return (unsigned int)KeCheckProcessorGroupAffinity(v4, a1);
    }
  }
  return v1;
}
