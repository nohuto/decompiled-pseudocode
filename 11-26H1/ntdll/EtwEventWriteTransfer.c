/*
 * XREFs of EtwEventWriteTransfer @ 0x18005A770
 * Callers:
 *     RtlCapabilityCheck @ 0x180059720 (RtlCapabilityCheck.c)
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008AD00 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18008DC80 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180040BE0 (RtlNtStatusToDosError.c)
 *     EtwpWriteToPrivateBuffers @ 0x18005AE40 (EtwpWriteToPrivateBuffers.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

ULONG __cdecl EtwEventWriteTransfer(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        LPCGUID RelatedActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned int v6; // ebx
  int v9; // r12d
  ULONG v10; // r8d
  EVENT_DESCRIPTOR v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // r11
  unsigned __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int8 v18; // cl
  char v19; // si
  unsigned __int8 v20; // al
  _GUID v21; // xmm0
  GUID v22; // xmm0
  NTSTATUS v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  _OWORD Fields[4]; // [rsp+58h] [rbp-A8h] BYREF
  _GUID v27; // [rsp+98h] [rbp-68h]
  __int128 v28; // [rsp+A8h] [rbp-58h]
  GUID v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int128 v31; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v32[7]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v33; // [rsp+150h] [rbp+50h]

  v6 = 0;
  v30 = 0LL;
  v33 = 0LL;
  v9 = (int)EventDescriptor;
  v10 = 0;
  memset(Fields, 0, sizeof(Fields));
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  memset(v32, 0, sizeof(v32));
  if ( EventDescriptor )
  {
    v11 = *EventDescriptor;
    v12 = ((unsigned int)RegHandle >> 1) & 7;
    *(EVENT_DESCRIPTOR *)((char *)&Fields[2] + 8) = v11;
    v13 = qword_1801C62A0[v12];
    if ( ((v13 != 0 && (unsigned int)RegHandle >> 4 < dword_180192040[v12]) & (unsigned __int8)RegHandle) == 0 )
      return 6;
    v15 = (unsigned __int64)(unsigned int)RegHandle >> 4;
    v16 = 0LL;
    if ( (*(_QWORD *)(v13 + 8 * v15) & 1) == 0 )
      v16 = *(_QWORD *)(v13 + 8 * v15);
    if ( !v16 || WORD2(RegHandle) != *(_WORD *)(v16 + 84) )
      return 6;
    v17 = *(_QWORD *)&Fields[3];
    if ( *(_BYTE *)(v16 + 236)
      && ((v18 = *(_BYTE *)(v16 + 237), BYTE12(Fields[2]) <= v18) || !v18)
      && ((*(_BYTE *)(v16 + 232) & 0x40) != 0 && !*(_QWORD *)&Fields[3]
       || (*(_QWORD *)&Fields[3] & *(_QWORD *)(v16 + 224)) != 0LL
       && (*(_QWORD *)&Fields[3] & *(_QWORD *)(v16 + 216)) == *(_QWORD *)(v16 + 216)) )
    {
      v19 = 1;
      v10 = EtwpWriteToPrivateBuffers(
              v16,
              v9,
              0,
              0,
              0,
              (__int64)ActivityId,
              (__int64)RelatedActivityId,
              UserDataCount,
              (__int64)UserData,
              (__int64)&v31);
      if ( v10 )
      {
LABEL_28:
        if ( (_DWORD)v33 )
        {
          do
          {
            v24 = 2LL * v6;
            v25 = *(_QWORD *)&v32[v24 - 1];
            if ( v10 )
              *(_WORD *)(*((_QWORD *)&v31 + 4 * v6 + 1) + 2LL) = -16371;
            ++v6;
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)&v32[v24] + 12LL));
            _InterlockedDecrement((volatile signed __int32 *)(16LL * *(unsigned int *)(v25 + 20) + EtwpLoggerArray + 8));
          }
          while ( v6 < (unsigned int)v33 );
        }
        return v10;
      }
      v17 = *(_QWORD *)&Fields[3];
    }
    else
    {
      v19 = 0;
    }
    if ( *(_BYTE *)(v16 + 116) )
    {
      v20 = *(_BYTE *)(v16 + 117);
      if ( (BYTE12(Fields[2]) <= v20 || !v20)
        && ((*(_BYTE *)(v16 + 112) & 0x40) != 0 && !v17
         || (v17 & *(_QWORD *)(v16 + 104)) != 0 && (v17 & *(_QWORD *)(v16 + 96)) == *(_QWORD *)(v16 + 96)) )
      {
        *((_QWORD *)&v28 + 1) = UserData;
        DWORD1(Fields[0]) = 0;
        DWORD1(v28) = UserDataCount;
        if ( ActivityId )
          v21 = *ActivityId;
        else
          v21 = NtCurrentTeb()->ActivityId;
        LOBYTE(v28) = 0;
        v27 = v21;
        if ( RelatedActivityId )
        {
          v22 = *RelatedActivityId;
          LOBYTE(v28) = 1;
          v29 = v22;
        }
        WORD1(v28) = 0;
        LODWORD(v30) = 0;
        v23 = NtTraceEvent(*(HANDLE *)(v16 + 88), 0x300u, 0x78u, Fields);
        if ( v23 )
          v10 = RtlNtStatusToDosError(v23);
        else
          v10 = 0;
      }
    }
    if ( !v19 )
      return v10;
    goto LABEL_28;
  }
  return 87;
}
