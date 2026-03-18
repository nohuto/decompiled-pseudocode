/*
 * XREFs of ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x140151D70
 * Callers:
 *     PackAffectedThreadsFromThreadCleanup @ 0x140151B50 (PackAffectedThreadsFromThreadCleanup.c)
 *     zzzReattachThreads @ 0x14023FD24 (zzzReattachThreads.c)
 * Callees:
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x140151B94 (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     UnpackAffectedThreadList @ 0x140151F1C (UnpackAffectedThreadList.c)
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
  _QWORD *i; // r14
  volatile signed __int32 *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx

  v2 = (_QWORD **)(*((_QWORD *)a1 + 62) + 176LL);
  v3 = 0LL;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v9 = UserSessionState;
  v10 = (_QWORD *)(UserSessionState + 16880);
  if ( (_QWORD *)*v10 != v10 )
  {
    v17 = *(_QWORD *)(UserSessionState + 16888);
    v7 = *(_QWORD *)(v17 + 16);
    if ( !v7 || *(_QWORD *)(v7 + 496) == *((_QWORD *)a1 + 62) )
    {
      v8 = v17 + 24;
      v3 = (_QWORD *)(v8 & -(__int64)((*(_BYTE *)(UserSessionState + 16896) & 0x3F) != 0));
    }
    else
    {
      UnpackAffectedThreadList();
    }
  }
  for ( i = *v2; i != v2; i = (_QWORD *)*i )
  {
    v12 = (volatile signed __int32 *)(i - 97);
    if ( *(i - 38) == *((_QWORD *)a1 + 59)
      || (v13 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18888), *((_QWORD *)v12 + 59) == v13)
      || (v14 = *(_QWORD *)(W32GetUserSessionState(v13, v7) + 18896), v15 = *((_QWORD *)v12 + 59), v15 == v14) )
    {
      v8 = 0LL;
    }
    else
    {
      v8 = 0LL;
      if ( !a2 || v15 != *((_QWORD *)a2 + 59) )
        continue;
    }
    if ( (_InterlockedCompareExchange(v12 + 132, 0, 0) & 1) == 0
      && !InAffectedThreadList((const struct tagTHREADINFO *)(i - 97), v7) )
    {
      if ( (*(_DWORD *)(v9 + 16896) & 0x3F) == 0 )
      {
        v3 = (_QWORD *)Win32AllocPoolZInit(1536LL, 1767994197LL);
        if ( !v3 )
        {
          UnpackAffectedThreadList();
          return;
        }
      }
      v3[2] = v12;
      v16 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v16 != v10 )
        __fastfail(3u);
      *v3 = v10;
      v3[1] = v16;
      *v16 = v3;
      v10[1] = v3;
      v3 += 3;
      ++*(_DWORD *)(v9 + 16896);
    }
  }
}
