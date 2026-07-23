/*
 * XREFs of PiDmListRemoveObjectWorker @ 0x140B16674
 * Callers:
 *     PiDmListRemoveObject @ 0x140B165EC (PiDmListRemoveObject.c)
 *     PiDmListRemoveList @ 0x140B6F648 (PiDmListRemoveList.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     PiDmObjectRelease @ 0x140966A60 (PiDmObjectRelease.c)
 *     PiDmObjectManagerReleaseLock @ 0x1409A9F94 (PiDmObjectManagerReleaseLock.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409AA1AC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140B16780 (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListRemoveObjectWorker(int a1, __int64 a2, unsigned int *a3, __int64 a4, char *a5)
{
  __int64 v7; // rcx
  char *v8; // r10
  __int64 *v9; // rcx
  int v10; // edx
  __int64 v11; // r8
  char v12; // bl
  char *result; // rax
  __int64 **v14; // rax
  int v15; // eax
  char *v16; // rax
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v7 = 5LL * a1;
  v8 = (char *)a3 + PiDmListDefs[v7 + 1];
  v9 = (__int64 *)(a4 + PiDmListDefs[v7 + 3]);
  v10 = 0;
  v11 = *v9;
  if ( *v9 )
  {
    v12 = 1;
    if ( *(__int64 **)(v11 + 8) != v9 || (v14 = (__int64 **)v9[1], *v14 != v9) )
      __fastfail(3u);
    *v14 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v14;
    v15 = *((_DWORD *)v8 + 4);
    if ( v15 )
    {
      v10 = v15 - 1;
    }
    else
    {
      v16 = *(char **)v8;
      while ( v16 != v8 )
      {
        v16 = *(char **)v16;
        ++v10;
      }
    }
    *((_DWORD *)v8 + 4) = v10;
    *v9 = 0LL;
    v9[1] = 0LL;
    PiDmObjectManagerAcquireExclusiveLock((struct _ERESOURCE *)a2);
    if ( !--Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a2 + 104), &Buffer);
      PiDmObjectRelease(Buffer);
    }
    PiDmObjectManagerReleaseLock((struct _ERESOURCE *)a2);
    PiDmListUpdateAggregationCountWorker(Buffer, a4, 0xFFFFFFFFLL);
  }
  else
  {
    v12 = 0;
  }
  result = a5;
  if ( a5 )
    *a5 = v12;
  return result;
}
