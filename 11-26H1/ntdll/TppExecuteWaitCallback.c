/*
 * XREFs of TppExecuteWaitCallback @ 0x180016FA0
 * Callers:
 *     TppWaitCompletion @ 0x180016C30 (TppWaitCompletion.c)
 *     TppExecuteWaitTimerCallback @ 0x1800FB350 (TppExecuteWaitTimerCallback.c)
 * Callees:
 *     TppCleanupGroupMemberCallbackProlog @ 0x1800167D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall TppExecuteWaitCallback(_TP_CALLBACK_INSTANCE *a1, __int64 a2, unsigned int a3)
{
  void *v6; // r15
  __int64 v7; // rdi
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD *v18; // rsi
  struct _PEB *v19; // rax
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  __int64 v23; // rcx
  int Count; // esi
  PVOID BaseAddress; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v27[8]; // [rsp+38h] [rbp-91h] BYREF
  _DWORD Fields[2]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v29; // [rsp+48h] [rbp-81h]
  __int128 v30; // [rsp+50h] [rbp-79h]
  __int64 v31; // [rsp+60h] [rbp-69h]
  __int64 v32; // [rsp+68h] [rbp-61h]
  __int64 v33; // [rsp+70h] [rbp-59h]
  __int64 v34; // [rsp+78h] [rbp-51h]
  __int64 v35; // [rsp+80h] [rbp-49h]
  _DWORD v36[2]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v37; // [rsp+98h] [rbp-31h]
  __int128 v38; // [rsp+A0h] [rbp-29h]
  __int64 v39; // [rsp+B0h] [rbp-19h]
  __int64 v40; // [rsp+B8h] [rbp-11h]
  __int64 v41; // [rsp+C0h] [rbp-9h]
  __int64 v42; // [rsp+C8h] [rbp-1h]
  __int64 v43; // [rsp+D0h] [rbp+7h]

  if ( a3 == 258 )
  {
    LODWORD(v19) = TppWorkCallbackPrologRelease(a1);
    if ( !(_DWORD)v19 )
      return (int)v19;
    goto LABEL_4;
  }
  v6 = *(void **)(a2 + 136);
  if ( !v6 )
  {
LABEL_3:
    TppCleanupGroupMemberCallbackProlog((__int64)a1, a2);
LABEL_4:
    v7 = 2147353478LL;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v9 = 2147353478LL;
    if ( *(_BYTE *)v9 )
    {
      v31 = *(_QWORD *)(a2 + 144);
      v32 = a2 + 392;
      v33 = *(_QWORD *)(a2 + 80);
      v34 = *(_QWORD *)(a2 + 88);
      v35 = *(_QWORD *)(a2 + 104);
      Fields[0] = 0;
      Fields[1] = 471990272;
      v29 = 0LL;
      v30 = 0LL;
      v10 = NtCurrentPeb()->SharedData;
      if ( v10 && *v10 )
        v11 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v11 = 2147353478LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v11, 0x402u, 0x28u, Fields);
    }
    v12 = *(_QWORD *)(a2 + 104);
    v13 = *(_QWORD *)(a2 + 88);
    v14 = *(_QWORD *)(a2 + 80);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v16 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      v17 = v16;
      *((_DWORD *)ThreadPoolData + 3) = v16;
      v16 *= 32LL;
      v18 = (_QWORD *)((char *)ThreadPoolData + v16 + 32);
      *(_QWORD *)((char *)ThreadPoolData + v16 + 40) = v13;
      *v18 = v14;
      *(_QWORD *)((char *)ThreadPoolData + v16 + 48) = v12;
      ThreadPoolData[4 * v17 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v18 = 0LL;
    }
    a1->Callback = *(void **)(a2 + 80);
    a1->Context = *(void **)(a2 + 88);
    (*(void (__fastcall **)(_TP_CALLBACK_INSTANCE *, _QWORD, __int64, _QWORD))(a2 + 80))(
      a1,
      *(_QWORD *)(a2 + 88),
      a2,
      a3);
    v19 = NtCurrentPeb();
    v20 = v19->SharedData;
    if ( v20 && *v20 )
    {
      v19 = NtCurrentPeb();
      v21 = (__int64)v19->SharedData + 556;
    }
    else
    {
      v21 = 2147353478LL;
    }
    if ( *(_BYTE *)v21 )
    {
      v39 = *(_QWORD *)(a2 + 144);
      v40 = a2 + 392;
      v41 = *(_QWORD *)(a2 + 80);
      v42 = *(_QWORD *)(a2 + 88);
      v43 = *(_QWORD *)(a2 + 104);
      v36[0] = 0;
      v36[1] = 472055808;
      v37 = 0LL;
      v38 = 0LL;
      v22 = NtCurrentPeb()->SharedData;
      if ( v22 && *v22 )
        v7 = (__int64)NtCurrentPeb()->SharedData + 556;
      LODWORD(v19) = NtTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x403u, 0x28u, v36);
    }
    if ( v18 )
    {
      v23 = v18[3];
      v19 = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v23 )
      {
        v19 = (struct _PEB *)((char *)v19 - v23);
        v18[3] = v19;
      }
    }
    return (int)v19;
  }
  BaseAddress = 0LL;
  if ( (int)LdrpFindLoadedDllByHandle(v6, &BaseAddress, v27) >= 0 )
  {
    Count = LdrpIncrementModuleLoadCount(BaseAddress);
    LdrpDereferenceModule(BaseAddress);
    if ( Count >= 0 )
    {
      a1->CallbackEpilogFlags |= 0x100u;
      a1->RaceDll = v6;
      goto LABEL_3;
    }
  }
  LODWORD(v19) = TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
    LODWORD(v19) = (**(__int64 (__fastcall ***)(__int64))(a2 + 8))(a2);
  return (int)v19;
}
