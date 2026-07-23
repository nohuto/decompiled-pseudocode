/*
 * XREFs of RtlpTpWaitCallback @ 0x1800BDBE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     TppCompleteThreadData @ 0x180016200 (TppCompleteThreadData.c)
 *     RtlpTpETWCallbackStart @ 0x180087550 (RtlpTpETWCallbackStart.c)
 *     RtlpTpImpersonate @ 0x180087618 (RtlpTpImpersonate.c)
 *     RtlpTpETWCallbackStop @ 0x1800877CC (RtlpTpETWCallbackStop.c)
 *     TppStartThreadData @ 0x1800BE040 (TppStartThreadData.c)
 *     RtlpTpWaitCheckReset @ 0x1800BE0F0 (RtlpTpWaitCheckReset.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpTpWaitCallback(PTP_CALLBACK_INSTANCE a1, __int64 *a2, PTP_WAIT a3, unsigned int a4)
{
  struct _TEB *v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 *ThreadInformation; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+78h] [rbp+20h]

  v13 = a4;
  ThreadInformation = a2;
  v11[0] = 0LL;
  if ( (a2[1] & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4, a3);
  if ( *a2 )
    RtlpTpImpersonate(*a2);
  if ( (a2[1] & 4) != 0 )
    *((_DWORD *)a2 + 22) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    RtlpTpETWCallbackStart(0LL, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  TppStartThreadData(v11, a2[4], a2[5], v6->SubProcessTag);
  LOBYTE(v9) = a4 == 258;
  ((void (__fastcall *)(__int64, __int64))a2[4])(a2[5], v9);
  if ( (a2[1] & 4) != 0 )
    *((_DWORD *)a2 + 22) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  if ( (a2[1] & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4, v10);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v7 )
    RtlpTpETWCallbackStop(0LL, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  TppCompleteThreadData(v11[0]);
}
