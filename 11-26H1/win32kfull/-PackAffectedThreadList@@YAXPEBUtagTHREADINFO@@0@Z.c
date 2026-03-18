/*
 * XREFs of ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x140059A70
 * Callers:
 *     PackAffectedThreadsFromThreadCleanup @ 0x140059850 (PackAffectedThreadsFromThreadCleanup.c)
 *     zzzReattachThreads @ 0x140277664 (zzzReattachThreads.c)
 * Callees:
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x140059894 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     UnpackAffectedThreadList @ 0x140219200 (UnpackAffectedThreadList.c)
 */

void __fastcall PackAffectedThreadList(const struct tagTHREADINFO *a1, const struct tagTHREADINFO *a2)
{
  _QWORD **v2; // r15
  _QWORD *v3; // rbx
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  _QWORD *v10; // rbp
  __int64 v11; // rcx
  _QWORD *i; // r14
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD *v17; // rax

  v2 = (_QWORD **)(*((_QWORD *)a1 + 61) + 176LL);
  v3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v9 = UserSessionState;
  v10 = (_QWORD *)(UserSessionState + 16872);
  if ( (_QWORD *)*v10 != v10 )
  {
    v11 = *(_QWORD *)(UserSessionState + 16880);
    v7 = *(_QWORD *)(v11 + 16);
    if ( v7 && *(_QWORD *)(v7 + 488) != *((_QWORD *)a1 + 61) )
    {
      UnpackAffectedThreadList();
    }
    else
    {
      v8 = v11 + 24;
      v3 = (_QWORD *)(v8 & -(__int64)((*(_BYTE *)(UserSessionState + 16888) & 0x3F) != 0));
    }
  }
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    v13 = (volatile signed __int32 *)(i - 96);
    if ( *(i - 38) == *((_QWORD *)a1 + 58)
      || (v14 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18928), *((_QWORD *)v13 + 58) == v14)
      || (v15 = *(_QWORD *)(W32GetUserSessionState(v14, v7) + 18936), v16 = *((_QWORD *)v13 + 58), v16 == v15) )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
      if ( !a2 || v16 != *((_QWORD *)a2 + 58) )
        continue;
    }
    if ( (_InterlockedCompareExchange(v13 + 130, 0, 0) & 1) == 0
      && !InAffectedThreadList((const struct tagTHREADINFO *)(i - 96), v7) )
    {
      if ( (*(_DWORD *)(v9 + 16888) & 0x3F) == 0 )
      {
        v3 = (_QWORD *)Win32AllocPoolZInit(1536LL, 1767994197LL);
        if ( !v3 )
        {
          UnpackAffectedThreadList();
          return;
        }
      }
      v3[2] = v13;
      v17 = *(_QWORD **)(v9 + 16880);
      if ( (_QWORD *)*v17 != v10 )
        __fastfail(3u);
      *v3 = v10;
      v3[1] = v17;
      *v17 = v3;
      v10[1] = v3;
      v3 += 3;
      ++*(_DWORD *)(v9 + 16888);
    }
  }
}
