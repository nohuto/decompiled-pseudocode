/*
 * XREFs of RtlpTpWorkCallback @ 0x180066C90
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     TppCompleteThreadData @ 0x18002B100 (TppCompleteThreadData.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180041420 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180041FE0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlReleaseActivationContext @ 0x18004DE10 (RtlReleaseActivationContext.c)
 *     RtlSetThreadSubProcessTag @ 0x180054220 (RtlSetThreadSubProcessTag.c)
 *     TpCallbackMayRunLong @ 0x180054AA0 (TpCallbackMayRunLong.c)
 *     LdrUnloadDll @ 0x1800553B0 (LdrUnloadDll.c)
 *     RtlpTpWorkUnposted @ 0x180066FE0 (RtlpTpWorkUnposted.c)
 *     RtlpTpETWCallbackStart @ 0x180067100 (RtlpTpETWCallbackStart.c)
 *     RtlpTpImpersonate @ 0x1800671C8 (RtlpTpImpersonate.c)
 *     RtlTpETWCallbackDequeue @ 0x180067254 (RtlTpETWCallbackDequeue.c)
 *     TpDereferenceGlobalPool @ 0x180067320 (TpDereferenceGlobalPool.c)
 *     RtlpTpETWCallbackStop @ 0x18006737C (RtlpTpETWCallbackStop.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18006745C (TpPoolReferenceExistingGlobalPool.c)
 *     NtSetInformationThread @ 0x18015F0E0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall RtlpTpWorkCallback(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rax
  void (__fastcall *v9)(__int64); // r13
  volatile signed __int32 *v10; // rdi
  unsigned __int64 v11; // r14
  void *v12; // rsi
  __int64 v13; // rcx
  void *SubProcessTag; // r8
  _QWORD *ThreadPoolData; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned __int64 v20; // r9
  _QWORD v21[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v22; // [rsp+60h] [rbp-78h]
  __int128 v23; // [rsp+70h] [rbp-68h]
  __int128 v24; // [rsp+80h] [rbp-58h]
  __int64 v25; // [rsp+90h] [rbp-48h]
  __int64 v26; // [rsp+E8h] [rbp+10h]
  void (__fastcall **v27)(__int64); // [rsp+F0h] [rbp+18h]
  __int64 v28; // [rsp+F8h] [rbp+20h] BYREF

  v21[0] = 72LL;
  v21[1] = 1LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v4 = 0LL;
  v28 = 0LL;
  v6 = 2147353478LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
    RtlTpETWCallbackDequeue(v7, a2, *(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 96));
  if ( (*(_DWORD *)(a2 + 48) & 0xD0) == 0x10 )
  {
    v8 = *(_QWORD *)(a2 + 32);
    if ( !v8 )
    {
      v8 = TpPoolReferenceExistingGlobalPool(v7);
      v4 = v8;
      v28 = v8;
    }
    *(_QWORD *)(a1 + 128) = v8;
    TpCallbackMayRunLong(a1, v5);
  }
  if ( *(_QWORD *)(a2 + 40) )
    RtlpTpImpersonate();
  v9 = *(void (__fastcall **)(__int64))(a2 + 56);
  v26 = *(_QWORD *)(a2 + 64);
  v10 = *(volatile signed __int32 **)(a2 + 72);
  v11 = *(_QWORD *)(a2 + 80);
  v12 = *(void **)(a2 + 96);
  if ( v12 )
    RtlSetThreadSubProcessTag(v12);
  NtCurrentTeb()->ActivityId = *(_GUID *)(a2 + 104);
  if ( v10 != (volatile signed __int32 *)-1LL )
    *(_QWORD *)(a2 + 72) = -1LL;
  if ( v11 )
    *(_QWORD *)(a2 + 80) = 0LL;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 88), 0xFFFFFFFF) == 1 )
    RtlpTpWorkUnposted(a2, *(_QWORD *)(a2 + 32));
  if ( v10 != (volatile signed __int32 *)-1LL )
    RtlActivateActivationContextUnsafeFast((__int64)v21, (__int64)v10);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v13 = 2147353478LL;
  if ( *(_BYTE *)v13 )
    RtlpTpETWCallbackStart(0, a2, (_DWORD)v9, v26, (__int64)v12);
  SubProcessTag = NtCurrentTeb()->SubProcessTag;
  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    ++ThreadPoolData[2];
    v16 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
    v17 = v16;
    *((_DWORD *)ThreadPoolData + 3) = v16;
    v16 *= 32LL;
    v27 = (void (__fastcall **)(__int64))((char *)ThreadPoolData + v16 + 32);
    *v27 = v9;
    *(_QWORD *)((char *)ThreadPoolData + v16 + 40) = v26;
    *(_QWORD *)((char *)ThreadPoolData + v16 + 48) = SubProcessTag;
    ThreadPoolData[4 * v17 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
  }
  else
  {
    v27 = 0LL;
  }
  v9(v26);
  if ( v10 != (volatile signed __int32 *)-1LL )
  {
    RtlDeactivateActivationContextUnsafeFast((__int64)v21);
    RtlReleaseActivationContext(v10);
  }
  if ( v11 )
    LdrUnloadDll(v11, v18, v19, v20);
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v28 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v28, 8LL);
  }
  if ( v4 )
    TpDereferenceGlobalPool(v4);
  if ( v12 )
    RtlSetThreadSubProcessTag(0LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v6 )
    RtlpTpETWCallbackStop(0, a2, (_DWORD)v9, v26, (__int64)v12);
  TppCompleteThreadData((__int64)v27);
}
