/*
 * XREFs of HalpBlkWdWorkerRoutine @ 0x1405A8050
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkWdFatalExceptionCheck @ 0x1405A7FC4 (HalpBlkWdFatalExceptionCheck.c)
 */

ULONG_PTR HalpBlkWdWorkerRoutine()
{
  unsigned int i; // edi
  ULONG_PTR result; // rax

  for ( i = 0; i < (unsigned int)HalpBlkNumberProcessors; ++i )
    result = HalpBlkWdFatalExceptionCheck(i);
  _InterlockedExchange(dword_140F87928, 0);
  return result;
}
