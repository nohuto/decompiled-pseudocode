/*
 * XREFs of TppExecuteWaitCallback @ 0x18002BEA0
 * Callers:
 *     TppWaitCompletion @ 0x18002BB30 (TppWaitCompletion.c)
 *     TppExecuteWaitTimerCallback @ 0x1800FBC00 (TppExecuteWaitTimerCallback.c)
 * Callees:
 *     TppCleanupGroupMemberCallbackProlog @ 0x18002B6D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppBarrierAdjust @ 0x18002D290 (TppBarrierAdjust.c)
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _PEB *__fastcall TppExecuteWaitCallback(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // r15
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
  struct _PEB *result; // rax
  _DWORD *v20; // rcx
  __int64 v21; // rcx
  _DWORD *v22; // rcx
  __int64 v23; // rcx
  int Count; // esi
  __int64 v25; // [rsp+30h] [rbp-99h] BYREF
  _BYTE v26[8]; // [rsp+38h] [rbp-91h] BYREF
  _DWORD v27[2]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v28; // [rsp+48h] [rbp-81h]
  __int128 v29; // [rsp+50h] [rbp-79h]
  __int64 v30; // [rsp+60h] [rbp-69h]
  __int64 v31; // [rsp+68h] [rbp-61h]
  __int64 v32; // [rsp+70h] [rbp-59h]
  __int64 v33; // [rsp+78h] [rbp-51h]
  __int64 v34; // [rsp+80h] [rbp-49h]
  _DWORD v35[2]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v36; // [rsp+98h] [rbp-31h]
  __int128 v37; // [rsp+A0h] [rbp-29h]
  __int64 v38; // [rsp+B0h] [rbp-19h]
  __int64 v39; // [rsp+B8h] [rbp-11h]
  __int64 v40; // [rsp+C0h] [rbp-9h]
  __int64 v41; // [rsp+C8h] [rbp-1h]
  __int64 v42; // [rsp+D0h] [rbp+7h]

  if ( a3 == 258 )
  {
    result = (struct _PEB *)TppWorkCallbackPrologRelease(a1, a2, 0LL);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a2 + 136);
  if ( !v6 )
  {
LABEL_3:
    TppCleanupGroupMemberCallbackProlog(a1, a2);
LABEL_4:
    v7 = 2147353478LL;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v9 = 2147353478LL;
    if ( *(_BYTE *)v9 )
    {
      v30 = *(_QWORD *)(a2 + 144);
      v31 = a2 + 392;
      v32 = *(_QWORD *)(a2 + 80);
      v33 = *(_QWORD *)(a2 + 88);
      v34 = *(_QWORD *)(a2 + 104);
      v27[0] = 0;
      v27[1] = 471990272;
      v28 = 0LL;
      v29 = 0LL;
      v10 = NtCurrentPeb()->SharedData;
      if ( v10 && *v10 )
        v11 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v11 = 2147353478LL;
      NtTraceEvent(*(unsigned __int8 *)v11, 1026LL, 40LL, v27);
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
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 88);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(a2 + 80))(a1, *(_QWORD *)(a2 + 88), a2, a3);
    result = NtCurrentPeb();
    v20 = result->SharedData;
    if ( v20 && *v20 )
    {
      result = NtCurrentPeb();
      v21 = (__int64)result->SharedData + 556;
    }
    else
    {
      v21 = 2147353478LL;
    }
    if ( *(_BYTE *)v21 )
    {
      v38 = *(_QWORD *)(a2 + 144);
      v39 = a2 + 392;
      v40 = *(_QWORD *)(a2 + 80);
      v41 = *(_QWORD *)(a2 + 88);
      v42 = *(_QWORD *)(a2 + 104);
      v35[0] = 0;
      v35[1] = 472055808;
      v36 = 0LL;
      v37 = 0LL;
      v22 = NtCurrentPeb()->SharedData;
      if ( v22 && *v22 )
        v7 = (__int64)NtCurrentPeb()->SharedData + 556;
      result = (struct _PEB *)NtTraceEvent(*(unsigned __int8 *)v7, 1027LL, 40LL, v35);
    }
    if ( v18 )
    {
      v23 = v18[3];
      result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v23 )
      {
        result = (struct _PEB *)((char *)result - v23);
        v18[3] = result;
      }
    }
    return result;
  }
  v25 = 0LL;
  if ( (int)LdrpFindLoadedDllByHandle(v6, &v25, v26) >= 0 )
  {
    Count = LdrpIncrementModuleLoadCount(v25);
    LdrpDereferenceModule(v25);
    if ( Count >= 0 )
    {
      *(_DWORD *)(a1 + 144) |= 0x100u;
      *(_QWORD *)(a1 + 168) = v6;
      goto LABEL_3;
    }
  }
  result = (struct _PEB *)TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
    return (struct _PEB *)(**(__int64 (__fastcall ***)(__int64))(a2 + 8))(a2);
  return result;
}
