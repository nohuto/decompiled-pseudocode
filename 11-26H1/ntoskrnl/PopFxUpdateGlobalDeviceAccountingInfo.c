/*
 * XREFs of PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404AFACC
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x14042C978 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1404AFA54 (PopFxSetGlobalDeviceAccountingEnabled.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall PopFxUpdateGlobalDeviceAccountingInfo(_BYTE *a1, unsigned __int64 a2)
{
  PVOID result; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  result = stru_140F12420.WaitBlock[0].SparePtr;
  if ( stru_140F12420.WaitBlock[0].SparePtr < a1 )
  {
    v3 = a1 - (char *)stru_140F12420.WaitBlock[0].SparePtr;
    stru_140F12420.WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)stru_140F12420.WaitBlock[1].WaitListEntry.Flink
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
          ++*(_QWORD *)&stru_140F12420.WaitBlockFill11[8 * v5 + 64];
          *((_QWORD *)&stru_140F12420.WaitBlock[2].WaitListEntry.Blink + v5) += v3;
          return result;
        }
      }
    }
    else
    {
      stru_140F12420.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)((char *)stru_140F12420.WaitBlock[1].WaitListEntry.Blink
                                                                             + v3);
    }
  }
  return result;
}
