/*
 * XREFs of ?HMGrowHandleTable@@YAHXZ @ 0x1401131B4
 * Callers:
 *     HMCreateHandleForObject @ 0x14003B950 (HMCreateHandleForObject.c)
 *     HMAllocObjectEx @ 0x14003E880 (HMAllocObjectEx.c)
 *     HMInitHandleTable @ 0x1402E83C8 (HMInitHandleTable.c)
 * Callees:
 *     CommitReadOnlyMemory @ 0x1401134A0 (CommitReadOnlyMemory.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall HMGrowHandleTable(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rdx
  _QWORD *v47; // rdx
  _WORD *v48; // rcx
  __int64 v49; // rcx
  __int64 result; // rax
  __int64 v51; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)(W32GetUserSessionState(a1, a2) + 19688);
  v6 = *(_QWORD *)(W32GetUserSessionState(v4, v3) + 19872);
  if ( *(_QWORD *)(v6 + 8) == 65534LL )
    return 0LL;
  v7 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 19872);
  v8 = v2[25] + *(unsigned int *)(v7 + 864);
  if ( v8 >= *(_QWORD *)(W32GetUserSessionState(v7, v9) + 19864) )
    return 0LL;
  v12 = v8 - *(_DWORD *)(W32GetUserSessionState(v11, v10) + 19856);
  v51 = 4096LL;
  UserSessionState = W32GetUserSessionState(v14, v13);
  if ( (int)CommitReadOnlyMemory(*(_QWORD *)(UserSessionState + 19840), &v51, v12, 0LL) < 0 )
    return 0LL;
  v18 = W32GetUserSessionState(v17, v16);
  v19 = v51;
  v20 = *(_QWORD *)(v18 + 19872);
  v21 = 40LL * *(_QWORD *)(v20 + 8);
  v23 = W32GetUserSessionState(v20, v22);
  if ( (int)MmCommitSessionMappedView(v21 + *(_QWORD *)(v23 + 19832), v19) < 0 )
    return 0LL;
  v26 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19872);
  *(_DWORD *)(v26 + 864) += 4096;
  v28 = *(_QWORD *)(W32GetUserSessionState(v26, v27) + 19872);
  v29 = *(_DWORD *)(v28 + 864) / 0x28u;
  v30 = *(_QWORD *)(W32GetUserSessionState(v28, v29) + 19872);
  *(_QWORD *)(v30 + 8) = v29;
  v33 = *(_QWORD *)(W32GetUserSessionState(v30, v31) + 19872);
  if ( *(_QWORD *)(v33 + 8) > 0xFFFEuLL )
  {
    v33 = *(_QWORD *)(W32GetUserSessionState(v33, v32) + 19872);
    *(_QWORD *)(v33 + 8) = 65534LL;
  }
  v34 = *v2;
  v35 = W32GetUserSessionState(v33, v32);
  memset((void *)(v2[25] + 32 * v34), 0, 32 * (*(_QWORD *)(*(_QWORD *)(v35 + 19872) + 8LL) - v34));
  v38 = *(_QWORD *)(W32GetUserSessionState(v37, v36) + 19872);
  v41 = W32GetUserSessionState(v40, v39);
  memset((void *)(*(_QWORD *)(v41 + 19832) + 40 * v34), 0, 40 * (*(_QWORD *)(v38 + 8) - v34));
  v44 = *(_QWORD *)(W32GetUserSessionState(v43, v42) + 19872);
  v45 = *(_QWORD *)(v44 + 8) - 1LL;
  v47 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v44, v46) + 19832) + 40 * v45);
  v48 = (_WORD *)(32 * v45 + 26);
  if ( v45 >= v34 )
  {
    v48 = (_WORD *)((char *)v48 + v2[25]);
    do
    {
      *v48 = 1;
      if ( (v45 & 1) != 0 )
      {
        *v47 = v2[2];
        v2[2] = v45;
      }
      else
      {
        *v47 = v2[1];
        v2[1] = v45;
      }
      --v45;
      v48 -= 16;
      v47 -= 5;
    }
    while ( v45 >= v34 );
  }
  v49 = *(_QWORD *)(W32GetUserSessionState(v48, v47) + 19872);
  result = 1LL;
  *v2 = *(_QWORD *)(v49 + 8);
  return result;
}
