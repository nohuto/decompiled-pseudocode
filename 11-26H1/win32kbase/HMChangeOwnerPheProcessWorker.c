/*
 * XREFs of HMChangeOwnerPheProcessWorker @ 0x1400CFF28
 * Callers:
 *     HMChangeOwnerProcessWorker @ 0x1400CE880 (HMChangeOwnerProcessWorker.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1400D02B8 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     HMChangeOwnerPheProcess @ 0x1401DF3B0 (HMChangeOwnerPheProcess.c)
 * Callees:
 *     EtwTraceUserUpdateHandleOwner @ 0x140094E50 (EtwTraceUserUpdateHandleOwner.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x140095370 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     GreDecQuotaCount @ 0x1400CF5E0 (GreDecQuotaCount.c)
 *     GreIncQuotaCount @ 0x1400CF610 (GreIncQuotaCount.c)
 */

__int64 __fastcall HMChangeOwnerPheProcessWorker(__int64 a1, __int64 a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rsi
  int v10; // edx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rbx
  HANDLE ProcessId; // rax
  unsigned __int8 v15; // cl
  int EtwUserHandleType; // eax
  int v17; // r8d
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v6 = *(_QWORD *)(UserSessionState + 19864);
  v7 = (a1 - *(_QWORD *)(UserSessionState + 19920)) >> 5;
  v8 = 5LL * (unsigned int)v7;
  v9 = *(_QWORD *)(v6 + 40LL * (unsigned int)v7 + 8);
  v12 = W32GetUserSessionState(v11, v10, v7);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 19864) + 40LL * (unsigned int)((a1 - *(_QWORD *)(v12 + 19920)) >> 5));
  --*(_DWORD *)(v9 + 68);
  if ( *(_BYTE *)(a1 + 24) == 3 && (*(_DWORD *)(v13 + 80) & 8) == 0 && v9 != *(_QWORD *)(a2 + 456) )
  {
    if ( *(_QWORD *)(v13 + 88) )
    {
      GreDecQuotaCount(v9);
      GreIncQuotaCount(*(struct _W32PROCESS **)(a2 + 456));
    }
    if ( *(_QWORD *)(v13 + 96) )
    {
      GreDecQuotaCount(v9);
      GreIncQuotaCount(*(struct _W32PROCESS **)(a2 + 456));
    }
    if ( *(_QWORD *)(v13 + 128) )
    {
      GreDecQuotaCount(v9);
      GreIncQuotaCount(*(struct _W32PROCESS **)(a2 + 456));
    }
  }
  *(_QWORD *)(v13 + 16) = 0LL;
  if ( (*((_BYTE *)&unk_14025552C + 24 * *(unsigned __int8 *)(a1 + 24)) & 4) != 0 )
    *(_QWORD *)(v13 + 24) = *(_QWORD *)(a2 + 456);
  *(_QWORD *)(v6 + 8 * v8 + 8) = *(_QWORD *)(a2 + 456);
  ProcessId = PsGetProcessId(**(PEPROCESS **)(a2 + 456));
  v15 = *(_BYTE *)(a1 + 24);
  *(_QWORD *)(a1 + 8) = ProcessId;
  EtwUserHandleType = GetEtwUserHandleType(v15);
  EtwTraceUserUpdateHandleOwner(**(_QWORD **)(v6 + 8 * v8), EtwUserHandleType, v17);
  result = *(_QWORD *)(v6 + 8 * v8 + 8);
  ++*(_DWORD *)(result + 68);
  return result;
}
