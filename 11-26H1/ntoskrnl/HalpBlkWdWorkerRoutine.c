/*
 * XREFs of HalpBlkWdWorkerRoutine @ 0x1405A5840
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkWdFatalExceptionCheck @ 0x1405A57B4 (HalpBlkWdFatalExceptionCheck.c)
 */

ULONG_PTR HalpBlkWdWorkerRoutine()
{
  unsigned int i; // edi
  ULONG_PTR result; // rax

  for ( i = 0; i < (unsigned int)HalpBlkNumberProcessors; ++i )
    result = HalpBlkWdFatalExceptionCheck(i);
  _InterlockedExchange(dword_140F87580, 0);
  return result;
}
