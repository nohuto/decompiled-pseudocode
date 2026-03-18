/*
 * XREFs of rimFindHoldingFrame @ 0x14002EF30
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x14002ED58 (RIMAbandonPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x14002EEF0 (rimFindAndReclaimHoldingFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x140030008 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x14003034C (RIMStoreRawDataInPointerDeviceFrame.c)
 *     RIMRemoveHoldingFrame @ 0x1401562A4 (RIMRemoveHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x140182330 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x140182660 (rimStorePointersInHoldingFrame.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall rimFindHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax
  __int64 v4; // rdx

  v2 = (_QWORD *)(a1 + 728);
  result = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  while ( result[3] != v4 )
  {
    result = (_QWORD *)*result;
    if ( result == v2 )
      return 0LL;
  }
  return result;
}
