/*
 * XREFs of MarkThreadsObjects @ 0x1400AE490
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMChangeOwnerThreadWorker @ 0x1401A5428 (HMChangeOwnerThreadWorker.c)
 */

__int64 __fastcall MarkThreadsObjects(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  _QWORD *i; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_QWORD *)(UserSessionState + 19888);
  v7 = v4 + 32LL * *(unsigned int *)(W32GetUserSessionState(v6, v5) + 19816);
  result = W32GetUserSessionState(v9, v8);
  v12 = *(_QWORD *)(UserSessionState + 19888);
  for ( i = *(_QWORD **)(result + 19832); v12 <= v7; i += 5 )
  {
    v14 = *(unsigned __int8 *)(v12 + 24);
    if ( (_BYTE)v14 )
    {
      result = 3 * v14;
      if ( (*((_BYTE *)&unk_14024703C + 24 * v14) & 2) == 0 && i[1] == a1 )
      {
        if ( (_BYTE)v14 == 23 )
          v15 = *(_QWORD *)(W32GetUserSessionState(v14, v11) + 36376);
        else
          v15 = *(_QWORD *)(W32GetUserSessionState(v14, v11) + 18648);
        result = HMChangeOwnerThreadWorker(*i, v15);
      }
    }
    v12 += 32LL;
  }
  return result;
}
