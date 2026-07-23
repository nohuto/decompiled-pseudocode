/*
 * XREFs of RtlpTpIoCallback @ 0x180086610
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlSetThreadSubProcessTag @ 0x18003E7A0 (RtlSetThreadSubProcessTag.c)
 *     RtlpTpETWCallbackStart @ 0x180087550 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1800877CC (RtlpTpETWCallbackStop.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpTpIoCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  void *v4; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  void *SubProcessTag; // rdx
  __int64 v11; // r8
  _DWORD *ThreadPoolData; // rcx
  int v13; // r9d
  __int64 v14; // r9
  _QWORD *v15; // r14
  bool v16; // zf
  __int64 *v17; // rdi

  v4 = *(void **)(a2 + 152);
  if ( v4 )
    RtlSetThreadSubProcessTag(v4);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 160);
  v8 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v9 = 2147353478LL;
  if ( *(_BYTE *)v9 )
    RtlpTpETWCallbackStart(*(_QWORD *)(a2 + 72), a2, *(_QWORD *)(a2 - 8), a3, *(_QWORD *)(a2 + 152));
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  v11 = *(_QWORD *)(a2 - 8);
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v13 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v14 = ((_BYTE)v13 - 1) & 1;
    ThreadPoolData[3] = v14;
    v14 *= 32LL;
    v15 = (_QWORD *)((char *)ThreadPoolData + v14 + 32);
    *(_QWORD *)((char *)ThreadPoolData + v14 + 40) = a3;
    *v15 = v11;
    *(_QWORD *)((char *)ThreadPoolData + v14 + 48) = SubProcessTag;
    *(_QWORD *)((char *)ThreadPoolData + v14 + 56) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  else
  {
    v15 = 0LL;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(a2 - 8))(*a4, *((_QWORD *)a4 + 1), a3);
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  v16 = *(_BYTE *)v8 == 0;
  v17 = (__int64 *)(a2 + 152);
  if ( !v16 )
    RtlpTpETWCallbackStop(*(_QWORD *)(a2 + 72), a2, *(_QWORD *)(a2 - 8), a3, *v17);
  if ( *v17 )
  {
    RtlSetThreadSubProcessTag(0LL);
    *v17 = 0LL;
  }
  TppCompleteThreadData((__int64)v15);
}
