/*
 * XREFs of PopInitShutdownList @ 0x140CD133C
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 PopInitShutdownList()
{
  __int64 result; // rax

  stru_140F11D08.PriorityFloorCounts[2] = 6;
  *(_WORD *)stru_140F11D08.PriorityFloorCounts = 0;
  *(_QWORD *)&stru_140F11D08.PriorityFloorCounts[16] = &stru_140F11D08.PriorityFloorCounts[8];
  *(_QWORD *)&stru_140F11D08.PriorityFloorCounts[8] = &stru_140F11D08.PriorityFloorCounts[8];
  stru_140F11D08.WriteTransferCount = (__int64)&stru_140F11D08.ReadTransferCount;
  stru_140F11D08.ReadTransferCount = (__int64)&stru_140F11D08.ReadTransferCount;
  stru_140F11D08.ReadOperationCount = (__int64)&stru_140F11D08.GlobalForegroundListEntry.Blink;
  stru_140F11D08.InGlobalForegroundList = (unsigned __int64)&stru_140F11D08.InGlobalForegroundList;
  result = 0LL;
  *(_DWORD *)&stru_140F11D08.PriorityFloorCounts[4] = 0;
  stru_140F11D08.OtherOperationCount = 0LL;
  stru_140F11D08.PriorityFloorSummary = 1;
  *(_QWORD *)&stru_140F11D08.AbCompletedIoQoSBoostCount = 0LL;
  stru_140F11D08.ForegroundLossTime = 0;
  LOWORD(stru_140F11D08.GlobalForegroundListEntry.Flink) = 1;
  BYTE2(stru_140F11D08.ForegroundDpcStackListEntry.Next) = 6;
  HIDWORD(stru_140F11D08.ForegroundDpcStackListEntry.Next) = 0;
  BYTE2(stru_140E66FF0.Padding[1]) = 1;
  return result;
}
