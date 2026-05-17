/*
 * XREFs of RtlpTpWaitCallback @ 0x1800C0450
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     TppCompleteThreadData @ 0x18002B100 (TppCompleteThreadData.c)
 *     RtlpTpETWCallbackStart @ 0x180067100 (RtlpTpETWCallbackStart.c)
 *     RtlpTpImpersonate @ 0x1800671C8 (RtlpTpImpersonate.c)
 *     RtlpTpETWCallbackStop @ 0x18006737C (RtlpTpETWCallbackStop.c)
 *     TppStartThreadData @ 0x1800C08B0 (TppStartThreadData.c)
 *     RtlpTpWaitCheckReset @ 0x1800C0960 (RtlpTpWaitCheckReset.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpTpWaitCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _TEB *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h]

  v12 = a4;
  v11 = a2;
  v10[0] = 0LL;
  if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( *(_QWORD *)a2 )
    RtlpTpImpersonate(*(_QWORD *)a2);
  if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
    *(_DWORD *)(a2 + 88) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  v7 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStart(
      0LL,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v6->SubProcessTag);
  TppStartThreadData(v10, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v6->SubProcessTag);
  LOBYTE(v9) = a4 == 258;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v9);
  if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
    *(_DWORD *)(a2 + 88) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v11 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v11, 8LL);
  }
  if ( (*(_DWORD *)(a2 + 8) & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v7 )
    RtlpTpETWCallbackStop(
      0LL,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v6->SubProcessTag);
  TppCompleteThreadData(v10[0]);
}
