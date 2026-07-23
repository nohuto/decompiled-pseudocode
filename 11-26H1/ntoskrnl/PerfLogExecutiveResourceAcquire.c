/*
 * XREFs of PerfLogExecutiveResourceAcquire @ 0x14048FAF8
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1402C3C28 (ExpAcquireSharedStarveExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1402FEE28 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14042D7E0 (ExAcquireSharedWaitForExclusive.c)
 *     ExpTryToAcquireResourceExclusiveLite @ 0x1406D2A04 (ExpTryToAcquireResourceExclusiveLite.c)
 * Callees:
 *     EtwpGetTrackingLockSlotForThread @ 0x14048FC20 (EtwpGetTrackingLockSlotForThread.c)
 */

__int64 __fastcall PerfLogExecutiveResourceAcquire(int a1, __int64 a2, unsigned int a3, int a4)
{
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int64 v8; // rdi
  __int16 Group; // r15
  unsigned __int8 GroupIndex; // r12
  __int64 result; // rax
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v8 = __rdtsc();
  Group = CurrentPrcb->Group;
  GroupIndex = CurrentPrcb->GroupIndex;
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  LOWORD(v14) = Group;
  HIWORD(v14) = GroupIndex;
  result = EtwpGetTrackingLockSlotForThread(a2, a1 & 0xFFFF0000);
  v12 = result;
  if ( result )
  {
    ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
    result = 4294967263LL;
    if ( ((a1 - 65569) & 0xFFFFFFDF) != 0 )
    {
      if ( ((a1 - 65585) & 0xFFFFFFDF) != 0 )
        return result;
      if ( *(_DWORD *)(v12 + 32) )
      {
        if ( *(_DWORD *)(v12 + 36) >= a3 )
          goto LABEL_10;
        goto LABEL_9;
      }
      *(_QWORD *)(v12 + 8) = 2LL;
    }
    else
    {
      v13 = *(_DWORD *)(v12 + 32);
      *(_QWORD *)(v12 + 8) = v8;
      if ( v13 != 4 )
      {
        *(_QWORD *)v12 = 0LL;
        goto LABEL_8;
      }
      if ( *(_WORD *)(v12 + 24) == Group && *(_BYTE *)(v12 + 26) == GroupIndex )
      {
        *(_QWORD *)v12 = v8 - *(_QWORD *)v12;
LABEL_8:
        result = v14;
        *(_DWORD *)(v12 + 24) = v14;
        *(_DWORD *)(v12 + 44) = a4;
LABEL_9:
        *(_DWORD *)(v12 + 36) = a3;
LABEL_10:
        *(_DWORD *)(v12 + 32) = 1;
        return result;
      }
    }
    *(_QWORD *)v12 = 1LL;
    goto LABEL_8;
  }
  return result;
}
