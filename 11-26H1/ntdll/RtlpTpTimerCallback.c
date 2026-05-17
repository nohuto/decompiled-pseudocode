/*
 * XREFs of RtlpTpTimerCallback @ 0x180065FE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     TppCompleteThreadData @ 0x18002B100 (TppCompleteThreadData.c)
 *     RtlpTpETWCallbackStart @ 0x180067100 (RtlpTpETWCallbackStart.c)
 *     RtlpTpImpersonate @ 0x1800671C8 (RtlpTpImpersonate.c)
 *     RtlpTpETWCallbackStop @ 0x18006737C (RtlpTpETWCallbackStop.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpTpTimerCallback(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rcx
  void *SubProcessTag; // rdx
  __int64 v7; // r9
  __int64 v8; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  _QWORD *v12; // rsi
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a2 + 88) || !_InterlockedExchange((volatile __int32 *)(a2 + 92), 1) )
  {
    if ( *(_QWORD *)(a2 + 16) )
      RtlpTpImpersonate();
    v3 = NtCurrentTeb();
    v4 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v5 = 2147353478LL;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStart(
        0,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v3->SubProcessTag);
    SubProcessTag = v3->SubProcessTag;
    v7 = *(_QWORD *)(a2 + 40);
    v8 = *(_QWORD *)(a2 + 32);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v10 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      v11 = v10;
      *((_DWORD *)ThreadPoolData + 3) = v10;
      v10 *= 32LL;
      v12 = (_QWORD *)((char *)ThreadPoolData + v10 + 32);
      *v12 = v8;
      *(_QWORD *)((char *)ThreadPoolData + v10 + 40) = v7;
      *(_QWORD *)((char *)ThreadPoolData + v10 + 48) = SubProcessTag;
      SubProcessTag = (void *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      ThreadPoolData[4 * v11 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v12 = 0LL;
    }
    LOBYTE(SubProcessTag) = 1;
    (*(void (__fastcall **)(_QWORD, void *))(a2 + 32))(*(_QWORD *)(a2 + 40), SubProcessTag);
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v13 = 0LL;
      NtSetInformationThread(-2LL, 5LL, &v13, 8LL);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v4 )
      RtlpTpETWCallbackStop(
        0,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v3->SubProcessTag);
    TppCompleteThreadData((__int64)v12);
  }
}
