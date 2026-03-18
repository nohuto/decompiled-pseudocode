/*
 * XREFs of NVMeLunCompleteAllIORequests @ 0x140018738
 * Callers:
 *     NVMeHwUnitControl @ 0x140010210 (NVMeHwUnitControl.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x14001679C (NVMeCompleteSubmissionQueueRequests.c)
 */

_UNKNOWN **__fastcall NVMeLunCompleteAllIORequests(__int64 a1, int a2)
{
  unsigned int v4; // edi
  _UNKNOWN **result; // rax

  v4 = 0;
  if ( *(_WORD *)(a1 + 330) )
  {
    do
    {
      NVMeCompleteSubmissionQueueRequests(
        a1,
        *(_QWORD *)(a1 + 936) + 208LL * v4,
        *(unsigned __int16 *)(a1 + 328),
        a2,
        0,
        0,
        8);
      result = (_UNKNOWN **)*(unsigned __int16 *)(a1 + 330);
      ++v4;
    }
    while ( v4 < (unsigned int)result );
  }
  if ( *(_QWORD *)(a1 + 368) )
    return NVMeCompleteSubmissionQueueRequests(a1, a1 + 336, *(unsigned __int16 *)(a1 + 324), a2, 0, 1, 8);
  return result;
}
