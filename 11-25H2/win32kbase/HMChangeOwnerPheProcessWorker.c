/*
 * XREFs of HMChangeOwnerPheProcessWorker @ 0x14003ACDC
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140039BA4 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     HMChangeOwnerProcessWorker @ 0x14003B380 (HMChangeOwnerProcessWorker.c)
 *     HMChangeOwnerPheProcess @ 0x1401A5410 (HMChangeOwnerPheProcess.c)
 * Callees:
 *     EtwTraceUserUpdateHandleOwner @ 0x14003AE50 (EtwTraceUserUpdateHandleOwner.c)
 *     ?GetEtwUserHandleType@@YA?AW4EtwUserHandleType@@E@Z @ 0x14003AEB0 (-GetEtwUserHandleType@@YA-AW4EtwUserHandleType@@E@Z.c)
 *     GreIncQuotaCount @ 0x14003B400 (GreIncQuotaCount.c)
 *     GreDecQuotaCount @ 0x14003B500 (GreDecQuotaCount.c)
 */

__int64 __fastcall HMChangeOwnerPheProcessWorker(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  HANDLE ProcessId; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int EtwUserHandleType; // eax
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_QWORD *)(UserSessionState + 19832);
  v6 = (a1 - *(_QWORD *)(UserSessionState + 19888)) >> 5;
  v7 = 5LL * (unsigned int)v6;
  v8 = *(_QWORD *)(v5 + 40LL * (unsigned int)v6 + 8);
  v11 = W32GetUserSessionState(v10, v9);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 19832) + 40LL * (unsigned int)((a1 - *(_QWORD *)(v11 + 19888)) >> 5));
  --*(_DWORD *)(v8 + 68);
  if ( *(_BYTE *)(a1 + 24) == 3 && (*(_DWORD *)(v12 + 80) & 8) == 0 && v8 != *(_QWORD *)(a2 + 464) )
  {
    if ( *(_QWORD *)(v12 + 88) )
    {
      GreDecQuotaCount(v8);
      GreIncQuotaCount(*(struct _W32PROCESS **)(a2 + 464));
    }
    if ( *(_QWORD *)(v12 + 96) )
    {
      GreDecQuotaCount(v8);
      GreIncQuotaCount(*(struct _W32PROCESS **)(a2 + 464));
    }
    if ( *(_QWORD *)(v12 + 128) )
    {
      GreDecQuotaCount(v8);
      GreIncQuotaCount(*(struct _W32PROCESS **)(a2 + 464));
    }
  }
  *(_QWORD *)(v12 + 16) = 0LL;
  if ( (*((_BYTE *)&unk_14024703C + 24 * *(unsigned __int8 *)(a1 + 24)) & 4) != 0 )
    *(_QWORD *)(v12 + 24) = *(_QWORD *)(a2 + 464);
  *(_QWORD *)(v5 + 8 * v7 + 8) = *(_QWORD *)(a2 + 464);
  ProcessId = PsGetProcessId(**(PEPROCESS **)(a2 + 464));
  LOBYTE(v14) = *(_BYTE *)(a1 + 24);
  *(_QWORD *)(a1 + 8) = ProcessId;
  EtwUserHandleType = GetEtwUserHandleType(v14, v15, (unsigned int)ProcessId & 0xFFFFFFFC);
  EtwTraceUserUpdateHandleOwner(**(_QWORD **)(v5 + 8 * v7), EtwUserHandleType);
  result = *(_QWORD *)(v5 + 8 * v7 + 8);
  ++*(_DWORD *)(result + 68);
  return result;
}
