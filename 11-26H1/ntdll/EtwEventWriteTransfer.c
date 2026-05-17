/*
 * XREFs of EtwEventWriteTransfer @ 0x18000F040
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DFF0 (RtlCapabilityCheck.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18006A8B0 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006D830 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 * Callees:
 *     EtwpWriteToPrivateBuffers @ 0x18000F710 (EtwpWriteToPrivateBuffers.c)
 *     RtlNtStatusToDosError @ 0x180056660 (RtlNtStatusToDosError.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall EtwEventWriteTransfer(__int64 a1, __int128 *a2, _GUID *a3, __int128 *a4, int a5, __int64 a6)
{
  unsigned int v6; // ebx
  int v9; // r12d
  ULONG v10; // r8d
  __int128 v11; // xmm0
  __int64 v12; // rdx
  __int64 v13; // r11
  unsigned __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int8 v18; // cl
  char v19; // si
  unsigned __int8 v20; // al
  _GUID ActivityId; // xmm0
  __int128 v22; // xmm0
  NTSTATUS v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  _OWORD v26[4]; // [rsp+58h] [rbp-A8h] BYREF
  _GUID v27; // [rsp+98h] [rbp-68h]
  __int128 v28; // [rsp+A8h] [rbp-58h]
  __int128 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int128 v31; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v32[7]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v33; // [rsp+150h] [rbp+50h]

  v6 = 0;
  v30 = 0LL;
  v33 = 0LL;
  v9 = (int)a2;
  v10 = 0;
  memset(v26, 0, sizeof(v26));
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  memset(v32, 0, sizeof(v32));
  if ( a2 )
  {
    v11 = *a2;
    v12 = ((unsigned int)a1 >> 1) & 7;
    *(_OWORD *)((char *)&v26[2] + 8) = v11;
    v13 = qword_1801C72A0[v12];
    if ( ((v13 != 0 && (unsigned int)a1 >> 4 < dword_180193038[v12]) & (unsigned __int8)a1) == 0 )
      return 6LL;
    v15 = (unsigned __int64)(unsigned int)a1 >> 4;
    v16 = 0LL;
    if ( (*(_QWORD *)(v13 + 8 * v15) & 1) == 0 )
      v16 = *(_QWORD *)(v13 + 8 * v15);
    if ( !v16 || WORD2(a1) != *(_WORD *)(v16 + 84) )
      return 6LL;
    v17 = *(_QWORD *)&v26[3];
    if ( *(_BYTE *)(v16 + 236)
      && ((v18 = *(_BYTE *)(v16 + 237), BYTE12(v26[2]) <= v18) || !v18)
      && ((*(_BYTE *)(v16 + 232) & 0x40) != 0 && !*(_QWORD *)&v26[3]
       || (*(_QWORD *)&v26[3] & *(_QWORD *)(v16 + 224)) != 0LL
       && (*(_QWORD *)&v26[3] & *(_QWORD *)(v16 + 216)) == *(_QWORD *)(v16 + 216)) )
    {
      v19 = 1;
      v10 = EtwpWriteToPrivateBuffers(v16, v9, 0, 0, 0, (__int64)a3, (__int64)a4, a5, a6, (__int64)&v31);
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
      v17 = *(_QWORD *)&v26[3];
    }
    else
    {
      v19 = 0;
    }
    if ( *(_BYTE *)(v16 + 116) )
    {
      v20 = *(_BYTE *)(v16 + 117);
      if ( (BYTE12(v26[2]) <= v20 || !v20)
        && ((*(_BYTE *)(v16 + 112) & 0x40) != 0 && !v17
         || (v17 & *(_QWORD *)(v16 + 104)) != 0 && (v17 & *(_QWORD *)(v16 + 96)) == *(_QWORD *)(v16 + 96)) )
      {
        *((_QWORD *)&v28 + 1) = a6;
        DWORD1(v26[0]) = 0;
        DWORD1(v28) = a5;
        if ( a3 )
          ActivityId = *a3;
        else
          ActivityId = NtCurrentTeb()->ActivityId;
        LOBYTE(v28) = 0;
        v27 = ActivityId;
        if ( a4 )
        {
          v22 = *a4;
          LOBYTE(v28) = 1;
          v29 = v22;
        }
        WORD1(v28) = 0;
        LODWORD(v30) = 0;
        v23 = NtTraceEvent(*(_QWORD *)(v16 + 88), 768LL, 120LL, v26);
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
  return 87LL;
}
