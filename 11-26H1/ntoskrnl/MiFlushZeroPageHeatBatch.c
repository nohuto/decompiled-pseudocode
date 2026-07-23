/*
 * XREFs of MiFlushZeroPageHeatBatch @ 0x14048697C
 * Callers:
 *     MiZeroThreadStopZeroing @ 0x1404EF578 (MiZeroThreadStopZeroing.c)
 *     MiMarkZeroedPageCold @ 0x1407132E0 (MiMarkZeroedPageCold.c)
 * Callees:
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiSetZeroPageThreadPriority @ 0x1404769A4 (MiSetZeroPageThreadPriority.c)
 */

__int64 __fastcall MiFlushZeroPageHeatBatch(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdx

  result = *(_QWORD *)(a1 + 416);
  if ( result )
  {
    if ( *(_DWORD *)(result + 4) )
    {
      v3 = MiSetZeroPageThreadPriority(a1, 1u, 0LL);
      MiIssuePageHeatList(*(_DWORD **)(a1 + 416), v4);
      return MiSetZeroPageThreadPriority(a1, v3, 0LL);
    }
  }
  return result;
}
