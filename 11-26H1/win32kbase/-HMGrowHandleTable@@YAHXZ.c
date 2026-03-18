/*
 * XREFs of ?HMGrowHandleTable@@YAHXZ @ 0x140153418
 * Callers:
 *     HMCreateHandleForObject @ 0x140095100 (HMCreateHandleForObject.c)
 *     HMAllocObjectEx @ 0x14011DE20 (HMAllocObjectEx.c)
 *     HMInitHandleTable @ 0x1402F54F4 (HMInitHandleTable.c)
 * Callees:
 *     CommitReadOnlyMemory @ 0x140153710 (CommitReadOnlyMemory.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

__int64 __fastcall HMGrowHandleTable(int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rsi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  unsigned int v17; // ebx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  __int64 v21; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // edx
  int v30; // r8d
  __int64 v31; // rax
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  __int64 v35; // rcx
  int v36; // edx
  int v37; // r8d
  __int64 v38; // rcx
  __int64 v39; // rbx
  int v40; // r8d
  __int64 v41; // rcx
  int v42; // edx
  int v43; // r8d
  int v44; // edx
  __int64 v45; // rcx
  int v46; // r8d
  __int64 v47; // rdi
  __int64 v48; // rax
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  __int64 v52; // rbx
  int v53; // edx
  int v54; // ecx
  int v55; // r8d
  __int64 v56; // rax
  int v57; // edx
  int v58; // ecx
  int v59; // r8d
  __int64 v60; // rcx
  __int64 v61; // rbx
  int v62; // edx
  int v63; // r8d
  _QWORD *v64; // rdx
  int v65; // r8d
  _WORD *v66; // rcx
  __int64 v67; // rcx
  __int64 result; // rax
  __int64 v69; // [rsp+30h] [rbp+8h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v8 = *(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 19904);
  if ( *(_QWORD *)(v8 + 8) == 65534LL )
    return 0LL;
  v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 19904);
  v11 = *(unsigned int *)(v10 + 864);
  v12 = v11 + UserSessionState[2490];
  if ( v12 >= *(_QWORD *)(W32GetUserSessionState(v10, v11, v13) + 19896) )
    return 0LL;
  v17 = v12 - *(_DWORD *)(W32GetUserSessionState(v15, v14, v16) + 19888);
  v69 = 4096LL;
  v21 = W32GetUserSessionState(v19, v18, v20);
  if ( (int)CommitReadOnlyMemory(*(_QWORD *)(v21 + 19872), &v69, v17, 0LL) < 0 )
    return 0LL;
  v25 = W32GetUserSessionState(v23, v22, v24);
  v26 = v69;
  v27 = *(_QWORD *)(v25 + 19904);
  v28 = 5LL * *(_QWORD *)(v27 + 8);
  v31 = W32GetUserSessionState(v27, v29, v30);
  if ( (int)MmCommitSessionMappedView(*(_QWORD *)(v31 + 19864) + 8 * v28, v26) < 0 )
    return 0LL;
  v35 = *(_QWORD *)(W32GetUserSessionState(v33, v32, v34) + 19904);
  *(_DWORD *)(v35 + 864) += 4096;
  v38 = *(_QWORD *)(W32GetUserSessionState(v35, v36, v37) + 19904);
  v39 = *(_DWORD *)(v38 + 864) / 0x28u;
  v41 = *(_QWORD *)(W32GetUserSessionState(v38, *(_DWORD *)(v38 + 864) / 0x28u, v40) + 19904);
  *(_QWORD *)(v41 + 8) = v39;
  v45 = *(_QWORD *)(W32GetUserSessionState(v41, v42, v43) + 19904);
  if ( *(_QWORD *)(v45 + 8) > 0xFFFEuLL )
  {
    v45 = *(_QWORD *)(W32GetUserSessionState(v45, v44, v46) + 19904);
    *(_QWORD *)(v45 + 8) = 65534LL;
  }
  v47 = UserSessionState[2465];
  v48 = W32GetUserSessionState(v45, v44, v46);
  memset((void *)(UserSessionState[2490] + 32 * v47), 0, 32 * (*(_QWORD *)(*(_QWORD *)(v48 + 19904) + 8LL) - v47));
  v52 = *(_QWORD *)(W32GetUserSessionState(v50, v49, v51) + 19904);
  v56 = W32GetUserSessionState(v54, v53, v55);
  memset((void *)(*(_QWORD *)(v56 + 19864) + 40 * v47), 0, 40 * (*(_QWORD *)(v52 + 8) - v47));
  v60 = *(_QWORD *)(W32GetUserSessionState(v58, v57, v59) + 19904);
  v61 = *(_QWORD *)(v60 + 8) - 1LL;
  v64 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v60, v62, v63) + 19864) + 40 * v61);
  v66 = (_WORD *)(32 * v61 + 26);
  if ( v61 >= v47 )
  {
    v66 = (_WORD *)((char *)v66 + UserSessionState[2490]);
    do
    {
      *v66 = 1;
      if ( (v61 & 1) != 0 )
      {
        *v64 = UserSessionState[2467];
        UserSessionState[2467] = v61;
      }
      else
      {
        *v64 = UserSessionState[2466];
        UserSessionState[2466] = v61;
      }
      --v61;
      v66 -= 16;
      v64 -= 5;
    }
    while ( v61 >= v47 );
  }
  v67 = *(_QWORD *)(W32GetUserSessionState((_DWORD)v66, (_DWORD)v64, v65) + 19904);
  result = 1LL;
  UserSessionState[2465] = *(_QWORD *)(v67 + 8);
  return result;
}
