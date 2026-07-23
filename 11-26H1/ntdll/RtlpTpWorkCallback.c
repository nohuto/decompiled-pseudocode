/*
 * XREFs of RtlpTpWorkCallback @ 0x1800870E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     TppCompleteThreadData @ 0x180016200 (TppCompleteThreadData.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18002B990 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18002C550 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlReleaseActivationContext @ 0x180038390 (RtlReleaseActivationContext.c)
 *     RtlSetThreadSubProcessTag @ 0x18003E7A0 (RtlSetThreadSubProcessTag.c)
 *     TpCallbackMayRunLong @ 0x18003F020 (TpCallbackMayRunLong.c)
 *     LdrUnloadDll @ 0x18003F930 (LdrUnloadDll.c)
 *     RtlpTpWorkUnposted @ 0x180087430 (RtlpTpWorkUnposted.c)
 *     RtlpTpETWCallbackStart @ 0x180087550 (RtlpTpETWCallbackStart.c)
 *     RtlpTpImpersonate @ 0x180087618 (RtlpTpImpersonate.c)
 *     RtlTpETWCallbackDequeue @ 0x1800876A4 (RtlTpETWCallbackDequeue.c)
 *     TpDereferenceGlobalPool @ 0x180087770 (TpDereferenceGlobalPool.c)
 *     RtlpTpETWCallbackStop @ 0x1800877CC (RtlpTpETWCallbackStop.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800878AC (TpPoolReferenceExistingGlobalPool.c)
 *     NtSetInformationThread @ 0x18015EFE0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpTpWorkCallback(PTP_CALLBACK_INSTANCE Instance, char *BaseAddress)
{
  _TP_POOL *v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r12
  __int64 v8; // rcx
  _TP_POOL *v9; // rax
  __int64 v10; // rcx
  void (__fastcall *v11)(__int64); // r13
  _ACTIVATION_CONTEXT *v12; // rdi
  void *v13; // r14
  void *v14; // rsi
  __int64 v15; // rcx
  void *SubProcessTag; // r8
  _QWORD *ThreadPoolData; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD v20[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v21; // [rsp+60h] [rbp-78h]
  __int128 v22; // [rsp+70h] [rbp-68h]
  __int128 v23; // [rsp+80h] [rbp-58h]
  __int64 v24; // [rsp+90h] [rbp-48h]
  __int64 v25; // [rsp+E8h] [rbp+10h]
  void (__fastcall **v26)(__int64); // [rsp+F0h] [rbp+18h]
  _TP_POOL *ThreadInformation; // [rsp+F8h] [rbp+20h] BYREF

  v20[0] = 72LL;
  v20[1] = 1LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v4 = 0LL;
  ThreadInformation = 0LL;
  v7 = 2147353478LL;
  if ( RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v8 = 2147353478LL;
  if ( *(_BYTE *)v8 )
    RtlTpETWCallbackDequeue(
      v8,
      (_DWORD)BaseAddress,
      *((_QWORD *)BaseAddress + 7),
      *((_QWORD *)BaseAddress + 8),
      *((_QWORD *)BaseAddress + 12));
  if ( (*((_DWORD *)BaseAddress + 12) & 0xD0) == 0x10 )
  {
    v9 = (_TP_POOL *)*((_QWORD *)BaseAddress + 4);
    if ( !v9 )
    {
      v9 = (_TP_POOL *)TpPoolReferenceExistingGlobalPool(v8);
      v4 = v9;
      ThreadInformation = v9;
    }
    Instance->Pool = v9;
    TpCallbackMayRunLong(Instance);
  }
  v10 = *((_QWORD *)BaseAddress + 5);
  if ( v10 )
    RtlpTpImpersonate(v10, v5, v6);
  v11 = (void (__fastcall *)(__int64))*((_QWORD *)BaseAddress + 7);
  v25 = *((_QWORD *)BaseAddress + 8);
  v12 = (_ACTIVATION_CONTEXT *)*((_QWORD *)BaseAddress + 9);
  v13 = (void *)*((_QWORD *)BaseAddress + 10);
  v14 = (void *)*((_QWORD *)BaseAddress + 12);
  if ( v14 )
    RtlSetThreadSubProcessTag(v14);
  NtCurrentTeb()->ActivityId = *(_GUID *)(BaseAddress + 104);
  if ( v12 != (_ACTIVATION_CONTEXT *)-1LL )
    *((_QWORD *)BaseAddress + 9) = -1LL;
  if ( v13 )
    *((_QWORD *)BaseAddress + 10) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)BaseAddress + 22, 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(BaseAddress);
  if ( v12 != (_ACTIVATION_CONTEXT *)-1LL )
    RtlActivateActivationContextUnsafeFast((__int64)v20, (__int64)v12);
  if ( RtlGetCurrentServiceSessionId() )
    v15 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v15 = 2147353478LL;
  if ( *(_BYTE *)v15 )
    RtlpTpETWCallbackStart(0, (_DWORD)BaseAddress, (_DWORD)v11, v25, (__int64)v14);
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    ++ThreadPoolData[2];
    v18 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
    v19 = v18;
    *((_DWORD *)ThreadPoolData + 3) = v18;
    v18 *= 32LL;
    v26 = (void (__fastcall **)(__int64))((char *)ThreadPoolData + v18 + 32);
    *v26 = v11;
    *(_QWORD *)((char *)ThreadPoolData + v18 + 40) = v25;
    *(_QWORD *)((char *)ThreadPoolData + v18 + 48) = SubProcessTag;
    ThreadPoolData[4 * v19 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  else
  {
    v26 = 0LL;
  }
  v11(v25);
  if ( v12 != (_ACTIVATION_CONTEXT *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)v20);
    RtlReleaseActivationContext(v12);
  }
  if ( v13 )
    LdrUnloadDll(v13);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  if ( v4 )
    TpDereferenceGlobalPool(v4);
  if ( v14 )
    RtlSetThreadSubProcessTag(0LL);
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v7 )
    RtlpTpETWCallbackStop(0, (_DWORD)BaseAddress, (_DWORD)v11, v25, (__int64)v14);
  TppCompleteThreadData((__int64)v26);
}
