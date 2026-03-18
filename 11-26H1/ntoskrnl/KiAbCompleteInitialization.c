/*
 * XREFs of KiAbCompleteInitialization @ 0x1405F74CC
 * Callers:
 *     KiCompleteKernelInit @ 0x140BF36A8 (KiCompleteKernelInit.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x140498FD0 (ExInitializeLookasideListExInternal.c)
 */

__int64 KiAbCompleteInitialization()
{
  __int64 result; // rax

  result = KiAbpGlobalState;
  if ( (KiAbpGlobalState & 1) != 0 )
    return ExInitializeLookasideListExInternal(&SListHead, 0LL, 0LL, 512, 0, 0x50uLL, 1699242561, 1024, 0);
  return result;
}
