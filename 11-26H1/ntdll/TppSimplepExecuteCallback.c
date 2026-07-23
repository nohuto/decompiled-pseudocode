/*
 * XREFs of TppSimplepExecuteCallback @ 0x1800149B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     TppETWCallbackDequeue @ 0x180015328 (TppETWCallbackDequeue.c)
 *     TppCompleteThreadData @ 0x180016200 (TppCompleteThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     RtlpTpETWCallbackStart @ 0x180087550 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1800877CC (RtlpTpETWCallbackStop.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppSimplepExecuteCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  int v2; // edi
  _QWORD *v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // r14

  v2 = a2;
  v3 = (_QWORD *)(a2 - 200);
  v5 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    TppETWCallbackDequeue(v3[18], v2, v3[10], v3[11], v3[13]);
  result = TppWorkCallbackPrologRelease(Instance);
  if ( (_DWORD)result )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      RtlpTpETWCallbackStart(v3[18], v2, v3[10], v3[11], v3[13]);
    v9 = v3[13];
    v10 = v3[11];
    v11 = v3[10];
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v13 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      v14 = v13;
      *((_DWORD *)ThreadPoolData + 3) = v13;
      v13 *= 32LL;
      v15 = (_QWORD *)((char *)ThreadPoolData + v13 + 32);
      *(_QWORD *)((char *)ThreadPoolData + v13 + 40) = v10;
      *v15 = v11;
      *(_QWORD *)((char *)ThreadPoolData + v13 + 48) = v9;
      ThreadPoolData[4 * v14 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v15 = 0LL;
    }
    ((void (__fastcall *)(PTP_CALLBACK_INSTANCE, _QWORD))v3[10])(Instance, v3[11]);
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStop(v3[18], v2, v3[10], v3[11], v3[13]);
    return TppCompleteThreadData(v15);
  }
  return result;
}
