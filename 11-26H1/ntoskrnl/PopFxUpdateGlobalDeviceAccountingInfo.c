/*
 * XREFs of PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404A915C
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x140421048 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1404A90E4 (PopFxSetGlobalDeviceAccountingEnabled.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall PopFxUpdateGlobalDeviceAccountingInfo(struct _LIST_ENTRY *a1, unsigned __int64 a2)
{
  struct _LIST_ENTRY *result; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  result = PopFxBlockingDeviceListLock.SavedApcState.ApcListHead[0].Blink;
  if ( PopFxBlockingDeviceListLock.SavedApcState.ApcListHead[0].Blink < a1 )
  {
    v3 = (char *)a1 - (char *)PopFxBlockingDeviceListLock.SavedApcState.ApcListHead[0].Blink;
    PopFxBlockingDeviceListLock.SavedApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)((char *)PopFxBlockingDeviceListLock.SavedApcState.ApcListHead[1].Flink
                                                                                          + v3);
    if ( v3 >= a2 )
    {
      LODWORD(v4) = 0;
      while ( (unsigned int)v4 < 5 )
      {
        v5 = (unsigned int)v4;
        v4 = (unsigned int)(v4 + 1);
        if ( v3 >= PopFxAccountingBucketLimits[v5] && v3 < PopFxAccountingBucketLimits[v4] )
        {
          ++*((_QWORD *)&PopFxBlockingDeviceListLock.SavedApcState.ApcListHead[2].Flink + v5);
          *((_QWORD *)&PopFxBlockingDeviceListLock.SchedulerApc.ApcListEntry.Blink + v5) += v3;
          return result;
        }
      }
    }
    else
    {
      PopFxBlockingDeviceListLock.SavedApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)((char *)PopFxBlockingDeviceListLock.SavedApcState.ApcListHead[1].Blink
                                                                                            + v3);
    }
  }
  return result;
}
