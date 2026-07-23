/*
 * XREFs of RtlpTpTimerCallback @ 0x180086430
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     TppCompleteThreadData @ 0x180016200 (TppCompleteThreadData.c)
 *     RtlpTpETWCallbackStart @ 0x180087550 (RtlpTpETWCallbackStart.c)
 *     RtlpTpImpersonate @ 0x180087618 (RtlpTpImpersonate.c)
 *     RtlpTpETWCallbackStop @ 0x1800877CC (RtlpTpETWCallbackStop.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpTpTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  __int64 v4; // rcx
  struct _TEB *v5; // r14
  __int64 v6; // rdi
  __int64 v7; // rcx
  void *SubProcessTag; // rdx
  __int64 v9; // r9
  __int64 v10; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rsi
  __int64 ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_BYTE *)a2 + 88) || !_InterlockedExchange((volatile __int32 *)a2 + 23, 1) )
  {
    v4 = *((_QWORD *)a2 + 2);
    if ( v4 )
      RtlpTpImpersonate(v4, a2, a3);
    v5 = NtCurrentTeb();
    v6 = 2147353478LL;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v7 = 2147353478LL;
    if ( *(_BYTE *)v7 )
      RtlpTpETWCallbackStart(
        0,
        *((_QWORD *)a2 + 8),
        *((_QWORD *)a2 + 4),
        *((_QWORD *)a2 + 5),
        (__int64)v5->SubProcessTag);
    SubProcessTag = v5->SubProcessTag;
    v9 = *((_QWORD *)a2 + 5);
    v10 = *((_QWORD *)a2 + 4);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v12 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      v13 = v12;
      *((_DWORD *)ThreadPoolData + 3) = v12;
      v12 *= 32LL;
      v14 = (_QWORD *)((char *)ThreadPoolData + v12 + 32);
      *v14 = v10;
      *(_QWORD *)((char *)ThreadPoolData + v12 + 40) = v9;
      *(_QWORD *)((char *)ThreadPoolData + v12 + 48) = SubProcessTag;
      SubProcessTag = (void *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      ThreadPoolData[4 * v13 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v14 = 0LL;
    }
    LOBYTE(SubProcessTag) = 1;
    (*((void (__fastcall **)(_QWORD, void *))a2 + 4))(*((_QWORD *)a2 + 5), SubProcessTag);
    if ( NtCurrentTeb()->IsImpersonating )
    {
      ThreadInformation = 0LL;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v6 )
      RtlpTpETWCallbackStop(
        0,
        *((_QWORD *)a2 + 8),
        *((_QWORD *)a2 + 4),
        *((_QWORD *)a2 + 5),
        (__int64)v5->SubProcessTag);
    TppCompleteThreadData((__int64)v14);
  }
}
