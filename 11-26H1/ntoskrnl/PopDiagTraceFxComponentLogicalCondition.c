/*
 * XREFs of PopDiagTraceFxComponentLogicalCondition @ 0x140395C74
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140395604 (PopFxIdleWorkerTail.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceFxComponentLogicalCondition(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 v3; // rcx
  unsigned __int8 v4; // al
  __int64 v5; // rcx
  unsigned __int8 v6; // al
  int v7; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  int *v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]
  __int64 v13; // [rsp+90h] [rbp+10h] BYREF
  int v14; // [rsp+98h] [rbp+18h] BYREF

  v14 = a2;
  v13 = a1;
  if ( byte_140E67628 && *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] )
  {
    if ( (v3 = *(_QWORD *)(*(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] + 32LL), *(_DWORD *)(v3 + 96))
      && ((v4 = *(_BYTE *)(v3 + 100), v4 >= 4u) || !v4)
      && (*(_DWORD *)(v3 + 112) & 0x100LL) != 0
      && (*(_QWORD *)(v3 + 120) & 0x100LL) == *(_QWORD *)(v3 + 120)
      || *(_WORD *)(*(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] + 102LL)
      && (v5 = *(_QWORD *)(*(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] + 40LL), *(_DWORD *)(v5 + 96))
      && ((v6 = *(_BYTE *)(v5 + 100), v6 >= 4u) || !v6)
      && (*(_DWORD *)(v5 + 112) & 0x100LL) != 0
      && (*(_QWORD *)(v5 + 120) & 0x100LL) == *(_QWORD *)(v5 + 120) )
    {
      v7 = a3;
      UserData.Ptr = (ULONGLONG)&v13;
      v9 = &v14;
      v11 = &v7;
      *(_QWORD *)&UserData.Size = 8LL;
      v10 = 4LL;
      v12 = 4LL;
      EtwWriteEx(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_COMPONENT_CONDITION,
        0LL,
        1u,
        0LL,
        0LL,
        3u,
        &UserData);
    }
  }
}
