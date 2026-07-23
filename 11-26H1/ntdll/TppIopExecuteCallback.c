/*
 * XREFs of TppIopExecuteCallback @ 0x180015CD0
 * Callers:
 *     <none>
 * Callees:
 *     LdrUnlockLoaderLock @ 0x180016140 (LdrUnlockLoaderLock.c)
 *     TppCompleteThreadData @ 0x180016200 (TppCompleteThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x1800167D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     LdrpFindLoadedDllByHandle @ 0x18003F140 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x18003F2D0 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x18003F390 (LdrpDereferenceModule.c)
 *     LdrLockLoaderLock @ 0x1800E49F0 (LdrLockLoaderLock.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppIopExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // r14d
  int v10; // esi
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  _DWORD *SharedData; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  _DWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // rsi
  _DWORD *v25; // rcx
  __int64 v26; // rcx
  _DWORD *v27; // rcx
  __int64 result; // rax
  int Count; // [rsp+30h] [rbp-128h] BYREF
  int v30; // [rsp+34h] [rbp-124h]
  int v31; // [rsp+38h] [rbp-120h]
  PVOID Cookie; // [rsp+40h] [rbp-118h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-110h] BYREF
  __int64 v34; // [rsp+50h] [rbp-108h]
  __int64 v35; // [rsp+58h] [rbp-100h]
  __int64 v36; // [rsp+60h] [rbp-F8h]
  _DWORD Fields[2]; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v38; // [rsp+78h] [rbp-E0h]
  __int128 v39; // [rsp+80h] [rbp-D8h]
  __int64 v40; // [rsp+90h] [rbp-C8h]
  __int64 v41; // [rsp+98h] [rbp-C0h]
  __int64 v42; // [rsp+A0h] [rbp-B8h]
  __int64 v43; // [rsp+A8h] [rbp-B0h]
  __int64 v44; // [rsp+B0h] [rbp-A8h]
  _DWORD v45[2]; // [rsp+C0h] [rbp-98h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-90h]
  __int128 v47; // [rsp+D0h] [rbp-88h]
  __int64 v48; // [rsp+E0h] [rbp-78h]
  __int64 v49; // [rsp+E8h] [rbp-70h]
  __int64 v50; // [rsp+F0h] [rbp-68h]
  __int64 v51; // [rsp+F8h] [rbp-60h]
  __int64 v52; // [rsp+100h] [rbp-58h]

  v35 = a4;
  v36 = a3;
  v6 = 0LL;
  Cookie = 0LL;
  v7 = a2 - 200;
  v8 = *(_QWORD *)(a2 - 200 + 136);
  v34 = v8;
  v9 = 1;
  if ( v8 )
  {
    v10 = 1;
    v30 = 1;
    LdrLockLoaderLock(0, 0LL, &Cookie);
    v6 = Cookie;
  }
  else
  {
    v10 = 0;
    v30 = 0;
  }
  _m_prefetchw((const void *)(v7 + 280));
  v11 = *(_DWORD *)(v7 + 280);
  while ( v11 > 0 )
  {
    v12 = v11;
    v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 280), v11 - 1, v11);
    if ( v12 == v11 )
      goto LABEL_6;
  }
  v9 = 0;
LABEL_6:
  v31 = v9;
  if ( v10 && v9 )
  {
    BaseAddress = 0LL;
    Count = 0;
    if ( (int)LdrpFindLoadedDllByHandle(v8, &BaseAddress, &Count) < 0
      || (Count = LdrpIncrementModuleLoadCount(BaseAddress), LdrpDereferenceModule(BaseAddress), Count < 0) )
    {
      v9 = 0;
      v31 = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 168) = v34;
      *(_DWORD *)(a1 + 144) |= 0x100u;
    }
  }
  if ( v10 )
    LdrUnlockLoaderLock(0, v6);
  if ( v9 )
  {
    TppCleanupGroupMemberCallbackProlog(a1, v7);
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
    {
      v15 = (__int64)NtCurrentPeb()->SharedData + 556;
      v14 = 2147353478LL;
    }
    else
    {
      v14 = 2147353478LL;
      v15 = 2147353478LL;
    }
    if ( *(_BYTE *)v15 )
    {
      Fields[0] = 0;
      Fields[1] = 471990272;
      v38 = 0LL;
      v39 = 0LL;
      v40 = *(_QWORD *)(v7 + 144);
      v41 = a2;
      v42 = *(_QWORD *)(v7 + 80);
      v43 = *(_QWORD *)(v7 + 88);
      v44 = *(_QWORD *)(v7 + 104);
      v16 = NtCurrentPeb()->SharedData;
      if ( v16 && *v16 )
        v17 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v17 = 2147353478LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v17, 0x402u, 0x28u, Fields);
    }
    v18 = *(_QWORD *)(v7 + 104);
    v19 = *(_QWORD *)(v7 + 88);
    v20 = *(_QWORD *)(v7 + 80);
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v22 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      v23 = v22;
      *((_DWORD *)ThreadPoolData + 3) = v22;
      v22 *= 32LL;
      v24 = (_QWORD *)((char *)ThreadPoolData + v22 + 32);
      *v24 = v20;
      *(_QWORD *)((char *)ThreadPoolData + v22 + 40) = v19;
      *(_QWORD *)((char *)ThreadPoolData + v22 + 48) = v18;
      ThreadPoolData[4 * v23 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v24 = 0LL;
    }
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(v7 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(v7 + 88);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(v7 + 80))(
      a1,
      *(_QWORD *)(v7 + 88),
      v36,
      v35,
      v7);
    v25 = NtCurrentPeb()->SharedData;
    if ( v25 && *v25 )
      v26 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v26 = 2147353478LL;
    if ( *(_BYTE *)v26 )
    {
      v45[0] = 0;
      v45[1] = 472055808;
      v46 = 0LL;
      v47 = 0LL;
      v48 = *(_QWORD *)(v7 + 144);
      v49 = a2;
      v50 = *(_QWORD *)(v7 + 80);
      v51 = *(_QWORD *)(v7 + 88);
      v52 = *(_QWORD *)(v7 + 104);
      v27 = NtCurrentPeb()->SharedData;
      if ( v27 )
      {
        if ( *v27 )
          v14 = (__int64)NtCurrentPeb()->SharedData + 556;
      }
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v14, 0x403u, 0x28u, v45);
    }
    return TppCompleteThreadData(v24);
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(v7 + 8))(v7);
  }
  return result;
}
