/*
 * XREFs of ?OtherThreadsKeyboardInput@@YAPEAUtagTHREADINFO@@PEAUtagQ@@PEAUtagQMSG@@@Z @ 0x140151F9C
 * Callers:
 *     SlowAppThreadInShellFrame @ 0x140151514 (SlowAppThreadInShellFrame.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall OtherThreadsKeyboardInput(struct tagQ *a1, struct tagQMSG *a2)
{
  struct tagTHREADINFO *result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *((_DWORD *)a2 + 6) != 256
    && *((_DWORD *)a2 + 6) != 257
    && *((_DWORD *)a2 + 6) != 258
    && *((_DWORD *)a2 + 6) != 260
    && *((_DWORD *)a2 + 6) != 261
    && *((_DWORD *)a2 + 6) != 522
    && *((_DWORD *)a2 + 6) != 526 )
  {
    return 0LL;
  }
  v4 = *((_QWORD *)a1 + 15);
  result = 0LL;
  if ( v4 )
  {
    v5 = *(_QWORD *)(v4 + 16);
    if ( *((_QWORD *)a2 + 13) != v5 )
      return (struct tagTHREADINFO *)v5;
  }
  v6 = *((_QWORD *)a1 + 13);
  if ( !v6 )
    return 0LL;
  if ( *((_QWORD *)a2 + 13) != v6 )
    return (struct tagTHREADINFO *)*((_QWORD *)a1 + 13);
  return result;
}
