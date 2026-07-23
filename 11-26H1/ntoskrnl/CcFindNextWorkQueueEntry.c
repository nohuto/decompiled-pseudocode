/*
 * XREFs of CcFindNextWorkQueueEntry @ 0x1403870A0
 * Callers:
 *     CcCachemapUninitWorkerThread @ 0x140386E50 (CcCachemapUninitWorkerThread.c)
 *     CcAsyncLazywriteWorker @ 0x140387600 (CcAsyncLazywriteWorker.c)
 *     CcWorkerThread @ 0x140388380 (CcWorkerThread.c)
 *     CcAsyncReadWorker @ 0x14038A130 (CcAsyncReadWorker.c)
 *     CcCompleteAsyncReadWorker @ 0x1404B83D0 (CcCompleteAsyncReadWorker.c)
 *     CcCompleteAsyncLazywriteWorker @ 0x1405B5E78 (CcCompleteAsyncLazywriteWorker.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CcFindNextWorkQueueEntry(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // r10
  int v5; // eax
  _QWORD *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rcx
  unsigned int v10; // eax

  v3 = (_QWORD *)*a3;
  v4 = 0LL;
  if ( (_QWORD *)*a3 == a3 )
    return v4;
  v5 = *((_DWORD *)v3 + 32);
  v4 = (_QWORD *)*a3;
  if ( v5 != 4 )
  {
    if ( v5 == 2 )
    {
      v6 = v3 + 2;
    }
    else
    {
      if ( v5 != 7 )
      {
        if ( v5 == 1 )
          *(_QWORD *)(*(_QWORD *)(v3[2] + 48LL) + 112LL) = 0LL;
        goto LABEL_6;
      }
      v6 = v3 + 3;
    }
    *(_QWORD *)(*v6 + 504LL) = 0LL;
LABEL_6:
    v7 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v8 = (_QWORD *)v3[1], (_QWORD *)*v8 != v3) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v3[1] = 0LL;
    *v3 = 0LL;
    return v4;
  }
  v10 = *(_DWORD *)(a2 + 48);
  if ( v10 <= 1 && *(_DWORD *)(a2 + 152) <= 1u )
    goto LABEL_6;
  if ( !*(_BYTE *)(a2 + 196) )
  {
    *(_DWORD *)(a2 + 180) = v10;
    *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 152);
  }
  *(_BYTE *)(a2 + 196) = 1;
  return 0LL;
}
