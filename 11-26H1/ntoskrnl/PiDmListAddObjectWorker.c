/*
 * XREFs of PiDmListAddObjectWorker @ 0x140AF3F20
 * Callers:
 *     PiDmListAddObject @ 0x1409D94D0 (PiDmListAddObject.c)
 *     PiDmListAddList @ 0x140B2C964 (PiDmListAddList.c)
 * Callees:
 *     PiDmObjectManagerReleaseLock @ 0x1409D90A4 (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409D92BC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140AF4174 (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListAddObjectWorker(int a1, struct _ERESOURCE *a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  char v11; // si
  _QWORD *v12; // rax
  char *result; // rax

  v8 = 5LL * a1;
  v9 = (_QWORD *)(a4 + PiDmListDefs[v8 + 3]);
  v10 = a3 + PiDmListDefs[v8 + 1];
  if ( *v9 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    PiDmObjectManagerAcquireExclusiveLock(a2);
    ++*(_DWORD *)(a3 + 12);
    PiDmObjectManagerReleaseLock(a2);
    v12 = *(_QWORD **)(v10 + 8);
    if ( *v12 != v10 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v12;
    *v12 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    ++*(_DWORD *)(v10 + 16);
    PiDmListUpdateAggregationCountWorker(a3, a4, 1LL);
  }
  result = a5;
  if ( a5 )
    *a5 = v11;
  return result;
}
