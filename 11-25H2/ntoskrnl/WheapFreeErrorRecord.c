/*
 * XREFs of WheapFreeErrorRecord @ 0x1404782CC
 * Callers:
 *     WheaReportHwError @ 0x140353D30 (WheaReportHwError.c)
 *     WheapProcessWorkQueueItem @ 0x1404781D0 (WheapProcessWorkQueueItem.c)
 *     WheapProcessWaitingETWEvents @ 0x1407B8EC0 (WheapProcessWaitingETWEvents.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
