/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x1800E872C
 * Callers:
 *     TppWorkerFindTask @ 0x1800278E0 (TppWorkerFindTask.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall TppETWWorkerNodeSwitch(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4, __int16 a5)
{
  __int64 v5; // rsi
  __int64 v7; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-78h] BYREF
  __int16 v13; // [rsp+26h] [rbp-72h]
  __int64 v14; // [rsp+40h] [rbp-58h]
  int v15; // [rsp+48h] [rbp-50h]
  int v16; // [rsp+4Ch] [rbp-4Ch]
  __int16 v17; // [rsp+50h] [rbp-48h]
  __int16 v18; // [rsp+52h] [rbp-46h]
  int v19; // [rsp+54h] [rbp-44h]
  int v20; // [rsp+58h] [rbp-40h]

  v5 = a2;
  v7 = a3;
  memset_thunk_772440563353939046(Fields, 0, 0x40uLL);
  v9 = *(_QWORD *)(a1 + 40);
  v13 = 7209;
  v18 = a5;
  v14 = a1;
  v15 = v5;
  v16 = v7;
  v17 = a4;
  v19 = *(_DWORD *)(v9 + 4 * v5);
  v20 = *(_DWORD *)(v9 + 4 * v7);
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v10 = 2147353478LL;
  return NtTraceEvent((HANDLE)*(unsigned __int8 *)v10, 0x402u, 0x1Cu, Fields);
}
