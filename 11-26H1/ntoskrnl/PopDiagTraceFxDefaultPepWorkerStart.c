/*
 * XREFs of PopDiagTraceFxDefaultPepWorkerStart @ 0x1403AE2C8
 * Callers:
 *     PopPepWork @ 0x1403AE7D0 (PopPepWork.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140255F60 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxDefaultPepWorkerStart(__int64 a1)
{
  const GUID *ActivityId; // r11
  __int64 v2; // r10
  __int64 v3; // rcx
  unsigned __int8 v4; // al
  const GUID *v5; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  ActivityId = 0LL;
  v2 = a1;
  if ( byte_140E67628 && *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] )
  {
    if ( (v3 = *(_QWORD *)(*(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] + 32LL), *(_DWORD *)(v3 + 96))
      && ((v4 = *(_BYTE *)(v3 + 100), v4 >= 4u) || !v4)
      && (*(_DWORD *)(v3 + 112) & 0x100LL) != 0
      && (*(_QWORD *)(v3 + 120) & 0x100LL) == *(_QWORD *)(v3 + 120)
      || *(_WORD *)(*(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] + 102LL)
      && EtwpLevelKeywordEnabled(
           *(_QWORD *)(*(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] + 40LL) + 96LL,
           4u,
           256LL) )
    {
      v5 = ActivityId;
      if ( v2 )
        v5 = *(const GUID **)(v2 + 48);
      UserData.Ptr = (ULONGLONG)&v5;
      *(_QWORD *)&UserData.Size = 8LL;
      EtwWriteEx(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_DEFAULT_PEP_WORKER_START,
        0LL,
        1u,
        ActivityId,
        ActivityId,
        1u,
        &UserData);
    }
  }
}
