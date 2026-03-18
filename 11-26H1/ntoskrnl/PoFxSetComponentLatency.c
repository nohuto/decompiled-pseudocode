/*
 * XREFs of PoFxSetComponentLatency @ 0x1403B1590
 * Callers:
 *     DifPoFxSetComponentLatencyWrapper @ 0x140693A80 (DifPoFxSetComponentLatencyWrapper.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x140255F60 (EtwpLevelKeywordEnabled.c)
 *     PopPepComponentSetLatency @ 0x1403B1784 (PopPepComponentSetLatency.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  const GUID *ActivityId; // r10
  ULONG v8; // r11d
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v13; // rcx
  unsigned __int8 v14; // al
  unsigned int v15; // [rsp+40h] [rbp-19h] BYREF
  __int64 v16; // [rsp+50h] [rbp-9h] BYREF
  __int64 v17; // [rsp+58h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+7h] BYREF
  int *v19; // [rsp+70h] [rbp+17h]
  __int64 v20; // [rsp+78h] [rbp+1Fh]
  __int64 *v21; // [rsp+80h] [rbp+27h]
  __int64 v22; // [rsp+88h] [rbp+2Fh]

  v3 = *(_QWORD *)(a1 + 48);
  ActivityId = 0LL;
  v15 = a2;
  v17 = a3;
  v16 = v3;
  v8 = 1;
  if ( v3 )
  {
    v9 = *(_QWORD *)(v3 + 80);
    if ( v9 )
    {
      v10 = 3LL
          * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 896), 1u) % *(_DWORD *)(v9 + 880));
      v11 = *(_QWORD *)(v9 + 888);
      *(_QWORD *)(v11 + 8 * v10) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v11 + 8 * v10 + 8) = 9;
      *(_BYTE *)(v11 + 8 * v10 + 9) = a2;
      *(_WORD *)(v11 + 8 * v10 + 10) = KeGetCurrentPrcb()->Number;
      *(_WORD *)(v11 + 8 * v10 + 12) = KeGetCurrentThread()[1].CycleTime;
      *(_WORD *)(v11 + 8 * v10 + 14) = KeGetCurrentThread()[1].CurrentRunTime;
      *(_QWORD *)(v11 + 8 * v10 + 16) = a3;
    }
  }
  if ( byte_140E67628 && *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] )
  {
    if ( (v13 = *(_QWORD *)(*(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] + 32LL), *(_DWORD *)(v13 + 96))
      && ((v14 = *(_BYTE *)(v13 + 100), v14 >= 4u) || !v14)
      && (*(_DWORD *)(v13 + 112) & 0x100LL) != 0
      && (*(_QWORD *)(v13 + 120) & 0x100LL) == *(_QWORD *)(v13 + 120)
      || *(_WORD *)(*(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] + 102LL)
      && EtwpLevelKeywordEnabled(
           *(_QWORD *)(*(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[16] + 40LL) + 96LL,
           4u,
           256LL) )
    {
      UserData.Ptr = (ULONGLONG)&v16;
      *(_QWORD *)&UserData.Size = 8LL;
      v19 = (int *)&v15;
      v20 = 4LL;
      v21 = &v17;
      v22 = 8LL;
      EtwWriteEx(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_COMPONENT_LATENCY,
        0LL,
        v8,
        ActivityId,
        ActivityId,
        3u,
        &UserData);
    }
  }
  return PopPepComponentSetLatency(*(_QWORD *)(a1 + 56), a2, a3);
}
