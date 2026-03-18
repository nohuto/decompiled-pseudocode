/*
 * XREFs of SlowAppThreadInShellFrame @ 0x140151514
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     IsDebuggerAttached @ 0x140151D14 (IsDebuggerAttached.c)
 *     ?OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z @ 0x140151F9C (-OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z.c)
 *     ??BINTERLOCKEDINT@@QEBAHXZ @ 0x1402756EC (--BINTERLOCKEDINT@@QEBAHXZ.c)
 */

struct tagTHREADINFO *__fastcall SlowAppThreadInShellFrame(
        struct tagTHREADINFO *a1,
        struct tagTHREADINFO *a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // edi
  struct tagTHREADINFO *v13; // rsi
  int v14; // r12d
  _DWORD *v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r8d
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // [rsp+70h] [rbp+18h]
  int v27; // [rsp+78h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v4 = *((_QWORD *)a1 + 59);
  v6 = 0LL;
  v8 = *(_QWORD *)(v4 + 24);
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v10 = *(_QWORD *)(v4 + 120);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( v11 )
    {
      if ( (unsigned int)IsDebuggerAttached(*(_QWORD *)(v11 + 464)) )
        return 0LL;
      a3 = v26;
      a4 = v27;
    }
  }
  if ( a4 )
  {
    v17 = *((_QWORD *)a1 + 89);
    v12 = 500;
    if ( v17 && (*(_DWORD *)(v17 + 200) & 0x8000) != 0 )
      v12 = 250;
  }
  else
  {
    v12 = 30000;
  }
  v13 = *(struct tagTHREADINFO **)(v4 + 72);
  if ( v13 )
  {
    if ( v13 == a2 && v13 != a1 )
    {
      v19 = *(_QWORD *)(v4 + 80);
      if ( v19 )
      {
        if ( a3 == v19 )
        {
          if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v13 + 58)) )
            return 0LL;
          if ( v8 && (int)v9 - *(_DWORD *)(*(_QWORD *)(v4 + 24) + 48LL) >= v12 )
            return v13;
          v20 = *((_QWORD *)v13 + 106);
          if ( v20 )
          {
            if ( (int)v9 - *(_DWORD *)(v20 + 48) >= v12 )
              return v13;
          }
          if ( (int)v9 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 72) + 488LL) + 20LL) >= v12 )
            return v13;
        }
      }
    }
  }
  if ( !v8 )
    goto LABEL_9;
  v13 = *(struct tagTHREADINFO **)(v8 + 104);
  if ( !v13 )
    goto LABEL_9;
  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v13 + 58)) )
    return 0LL;
  if ( v13 != a1 || (v13 = OtherThreadsKeyboardInput((struct tagQ *)v4, (struct tagQMSG *)v8)) != 0LL )
  {
    v14 = v27;
    if ( (v27 || (INTERLOCKEDINT::operator int(*((_QWORD *)a1 + 61) + 8LL) & 0x1084) != 0)
      && ((int)v9 - *(_DWORD *)(v8 + 48) >= v12 || (unsigned int)(*(_DWORD *)(v4 + 40) + *((_DWORD *)v13 + 216)) > 0x100) )
    {
      return v13;
    }
  }
  else
  {
LABEL_9:
    v14 = v27;
  }
  v13 = *(struct tagTHREADINFO **)(v4 + 72);
  if ( !v13 || v13 == a1 )
    goto LABEL_11;
  if ( (unsigned int)IsDebuggerAttached(*((_QWORD *)v13 + 58)) )
    return 0LL;
  v18 = *(_QWORD *)(v4 + 80);
  if ( v18 )
  {
    v24 = *((_QWORD *)v13 + 106);
    if ( v18 == v24 && (int)v9 - *(_DWORD *)(v24 + 48) >= v12 )
      return v13;
    v25 = *(_QWORD *)(v4 + 24);
    if ( v18 == v25 && (int)v9 - *(_DWORD *)(v25 + 48) >= v12 )
      return v13;
  }
  if ( v14
    && ((int)v9 - *(_DWORD *)(*((_QWORD *)v13 + 61) + 20LL) >= v12
     || (unsigned int)(*(_DWORD *)(v4 + 40) + *((_DWORD *)v13 + 216)) > 0x100) )
  {
    return v13;
  }
LABEL_11:
  v15 = (_DWORD *)*((_QWORD *)a1 + 89);
  if ( !v15 || (v15[50] & 0x8000) == 0 )
    return 0LL;
  v21 = v15[69];
  if ( v21 < 3 || v15[68] / v21 <= v12 )
  {
    v22 = v15[67];
    if ( !v22 || (int)v9 - v22 < 4 * v12 )
      return 0LL;
  }
  v23 = *((_QWORD *)a1 + 199);
  if ( v23 )
    return *(struct tagTHREADINFO **)(v23 + 16);
  return (struct tagTHREADINFO *)v6;
}
