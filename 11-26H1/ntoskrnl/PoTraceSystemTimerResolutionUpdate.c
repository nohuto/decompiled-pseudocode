/*
 * XREFs of PoTraceSystemTimerResolutionUpdate @ 0x140255E78
 * Callers:
 *     ExpUpdateTimerResolution @ 0x14052E534 (ExpUpdateTimerResolution.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140255F60 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PoTraceSystemTimerResolutionUpdate(int a1)
{
  const GUID *ActivityId; // r9
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int8 v4; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF
  int v6; // [rsp+70h] [rbp+8h] BYREF

  v6 = a1;
  ActivityId = 0LL;
  if ( byte_140E67628 )
  {
    v2 = *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16];
    if ( *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] )
    {
      if ( (v3 = *(_QWORD *)(*(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] + 32LL), *(_DWORD *)(v3 + 96))
        && ((v4 = *(_BYTE *)(v3 + 100), v4 >= 4u) || !v4)
        && (*(_QWORD *)(v3 + 112) & 0x4000000000004004LL) != 0
        && (*(_QWORD *)(v3 + 120) & 0x4000000000004004LL) == *(_QWORD *)(v3 + 120)
        || *(_WORD *)(*(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] + 102LL)
        && (LOBYTE(v2) = 4,
            (unsigned __int8)EtwpLevelKeywordEnabled(
                               *(_QWORD *)(*(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] + 40LL) + 96LL,
                               v2,
                               0x4000000000004004LL,
                               0LL)) )
      {
        UserData.Ptr = (ULONGLONG)&v6;
        *(_QWORD *)&UserData.Size = 4LL;
        EtwWriteEx(
          *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
          &POP_ETW_EVENT_TIME_RESOLUTION_UPDATE,
          0LL,
          (ULONG)ActivityId,
          ActivityId,
          ActivityId,
          1u,
          &UserData);
      }
    }
  }
}
