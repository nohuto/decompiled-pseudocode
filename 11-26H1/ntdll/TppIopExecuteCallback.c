/*
 * XREFs of TppIopExecuteCallback @ 0x18002ABD0
 * Callers:
 *     <none>
 * Callees:
 *     LdrUnlockLoaderLock @ 0x18002B040 (LdrUnlockLoaderLock.c)
 *     TppCompleteThreadData @ 0x18002B100 (TppCompleteThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18002B6D0 (TppCleanupGroupMemberCallbackProlog.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpIncrementModuleLoadCount @ 0x180054D50 (LdrpIncrementModuleLoadCount.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrLockLoaderLock @ 0x1800E67E0 (LdrLockLoaderLock.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TppIopExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r15
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
  __int64 v32; // [rsp+40h] [rbp-118h] BYREF
  __int64 v33; // [rsp+48h] [rbp-110h] BYREF
  __int64 v34; // [rsp+50h] [rbp-108h]
  __int64 v35; // [rsp+58h] [rbp-100h]
  __int64 v36; // [rsp+60h] [rbp-F8h]
  _DWORD v37[2]; // [rsp+70h] [rbp-E8h] BYREF
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
  v32 = 0LL;
  v7 = a2 - 200;
  v8 = *(_QWORD *)(a2 - 200 + 136);
  v34 = v8;
  v9 = 1;
  if ( v8 )
  {
    v10 = 1;
    v30 = 1;
    LdrLockLoaderLock(0LL, 0LL, &v32);
    v6 = v32;
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
    v33 = 0LL;
    Count = 0;
    if ( (int)LdrpFindLoadedDllByHandle(v8, &v33, &Count) < 0
      || (Count = LdrpIncrementModuleLoadCount(v33), LdrpDereferenceModule(v33), Count < 0) )
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
    LdrUnlockLoaderLock(0LL, v6);
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
      v37[0] = 0;
      v37[1] = 471990272;
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
      NtTraceEvent(*(unsigned __int8 *)v17, 1026LL, 40LL, v37);
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
      NtTraceEvent(*(unsigned __int8 *)v14, 1027LL, 40LL, v45);
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
