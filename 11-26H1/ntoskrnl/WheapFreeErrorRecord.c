/*
 * XREFs of WheapFreeErrorRecord @ 0x1403E2E20
 * Callers:
 *     WheaReportHwError @ 0x1403E0F70 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x1403E2D50 (WheapProcessWorkQueueItem.c)
 *     WheapProcessWaitingETWEvents @ 0x14084F860 (WheapProcessWaitingETWEvents.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall WheapFreeErrorRecord(__int64 a1)
{
  int v1; // eax
  ULONG v2; // edx

  v1 = *(_DWORD *)(a1 + 24);
  if ( (v1 & 1) != 0 )
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 28), 0);
  }
  else
  {
    if ( (v1 & 2) != 0 )
      v2 = 1634035799;
    else
      v2 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL);
    ExFreePoolWithTag((PVOID)a1, v2);
  }
}
