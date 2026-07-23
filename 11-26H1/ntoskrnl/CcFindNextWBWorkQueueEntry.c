/*
 * XREFs of CcFindNextWBWorkQueueEntry @ 0x1405B61C0
 * Callers:
 *     CcAsyncLazywriteWorkerMulti @ 0x1404B4E10 (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CcFindNextWBWorkQueueEntry(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // r10
  int v6; // eax
  __int64 v8; // rax
  _QWORD *v9; // rdx

  v4 = (_QWORD *)*a3;
  v5 = 0LL;
  if ( (_QWORD *)*a3 != a3 )
  {
    v6 = *((_DWORD *)v4 + 32);
    v5 = (_QWORD *)*a3;
    if ( v6 == 4 )
    {
      if ( a4 || *(_DWORD *)(a2 + 304) > 1u )
      {
        *(_BYTE *)(a2 + 196) = 1;
        return 0LL;
      }
    }
    else if ( v6 == 7 )
    {
      *(_QWORD *)(v4[3] + 504LL) = 0LL;
    }
    v8 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v9 = (_QWORD *)v4[1], (_QWORD *)*v9 != v4) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    v4[1] = 0LL;
    *v4 = 0LL;
  }
  return v5;
}
