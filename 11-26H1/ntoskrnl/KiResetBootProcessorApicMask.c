/*
 * XREFs of KiResetBootProcessorApicMask @ 0x1407BC928
 * Callers:
 *     KiCompleteBootProcessorContextInitialization @ 0x1405ED1CC (KiCompleteBootProcessorContextInitialization.c)
 * Callees:
 *     <none>
 */

__int64 KiResetBootProcessorApicMask()
{
  __int64 result; // rax

  result = (unsigned int)-(*(_DWORD *)(KiProcessorBlock[0] + 160) * *(_DWORD *)(KiProcessorBlock[0] + 164));
  *(_DWORD *)(KiProcessorBlock[0] + 220) = result;
  return result;
}
