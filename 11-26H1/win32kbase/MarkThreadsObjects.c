/*
 * XREFs of MarkThreadsObjects @ 0x1400949D0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMChangeOwnerThreadWorker @ 0x140094AC0 (HMChangeOwnerThreadWorker.c)
 */

__int64 __fastcall MarkThreadsObjects(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rdi
  __int64 v5; // rbx
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  unsigned __int64 v9; // rbp
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 result; // rax
  int v14; // edx
  int v15; // r8d
  unsigned __int64 v16; // rbx
  _QWORD *i; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v5 = *(_QWORD *)(UserSessionState + 19920);
  v9 = v5 + 32LL * *(unsigned int *)(W32GetUserSessionState(v7, v6, v8) + 19848);
  result = W32GetUserSessionState(v11, v10, v12);
  v16 = *(_QWORD *)(UserSessionState + 19920);
  for ( i = *(_QWORD **)(result + 19864); v16 <= v9; i += 5 )
  {
    v18 = *(unsigned __int8 *)(v16 + 24);
    if ( (_BYTE)v18 )
    {
      result = 3 * v18;
      if ( (*((_BYTE *)&unk_14025552C + 24 * v18) & 2) == 0 && i[1] == a1 )
      {
        if ( (_BYTE)v18 == 23 )
          v19 = *(_QWORD *)(W32GetUserSessionState(v18, v14, v15) + 36416);
        else
          v19 = *(_QWORD *)(W32GetUserSessionState(v18, v14, v15) + 18696);
        result = HMChangeOwnerThreadWorker(*i, v19);
      }
    }
    v16 += 32LL;
  }
  return result;
}
