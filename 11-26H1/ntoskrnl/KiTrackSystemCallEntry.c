/*
 * XREFs of KiTrackSystemCallEntry @ 0x1407BE930
 * Callers:
 *     KiSystemCall64 @ 0x140740280 (KiSystemCall64.c)
 * Callees:
 *     KeIsTraceCallbackAllowed @ 0x1404A2AE4 (KeIsTraceCallbackAllowed.c)
 *     PerfInfoLogSysCallEntry @ 0x1404C5650 (PerfInfoLogSysCallEntry.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KiSystemServiceTraceTableCompareFunction @ 0x140781CE4 (KiSystemServiceTraceTableCompareFunction.c)
 */

__int64 __fastcall KiTrackSystemCallEntry(unsigned __int64 a1)
{
  __int64 v2; // rbx
  int v3; // edi
  int v4; // eax
  __int64 v5; // rax

  if ( (unsigned int)KeIsTraceCallbackAllowed(KeGetCurrentThread()->PreviousMode) )
  {
    v2 = **(_QWORD **)&PspSiloMonitorLock.PriorityFloorCounts[16];
    if ( (*(_BYTE *)(*(_QWORD *)&PspSiloMonitorLock.PriorityFloorCounts[16] + 8LL) & 1) != 0 && v2 )
      v2 ^= *(_QWORD *)&PspSiloMonitorLock.PriorityFloorCounts[16];
    v3 = *(_BYTE *)(*(_QWORD *)&PspSiloMonitorLock.PriorityFloorCounts[16] + 8LL) & 1;
    while ( v2 )
    {
      v4 = KiSystemServiceTraceTableCompareFunction(a1, v2);
      if ( v4 >= 0 )
      {
        if ( v4 <= 0 )
          break;
        v5 = *(_QWORD *)(v2 + 8);
      }
      else
      {
        v5 = *(_QWORD *)v2;
      }
      if ( v3 && v5 )
        v2 ^= v5;
      else
        v2 = v5;
    }
    if ( v2 && *(_BYTE *)(v2 + 40) && KiDynamicTraceEnabled )
    {
      _InterlockedIncrement(&KiSystemServiceTraceCallbacksActive);
      if ( *(_BYTE *)(v2 + 40) )
        guard_dispatch_icall_no_overrides(*(_QWORD *)(v2 + 24), *(_QWORD *)(v2 + 48));
      _InterlockedDecrement(&KiSystemServiceTraceCallbacksActive);
    }
  }
  else
  {
    v2 = 0LL;
  }
  if ( (BYTE8(PerfGlobalGroupMask) & 0x40) != 0 )
    PerfInfoLogSysCallEntry(a1);
  return v2;
}
