/*
 * XREFs of VidSchQueryProcessNodeStatistics @ 0x14010A1B0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x140039488 (VidSchiDriverNodeEngineToSchedulerNode.c)
 */

__int64 __fastcall VidSchQueryProcessNodeStatistics(
        unsigned int *a1,
        unsigned __int16 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // ebx
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // r8d
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r10
  _DWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rdx
  _DWORD *v19; // rcx
  __int64 v20; // r9
  _DWORD *v21; // rcx

  v6 = a3;
  if ( a2 != 0xFFFF )
  {
    if ( a2 >= a1[21] )
      return 3221225485LL;
    v6 = VidSchiDriverNodeEngineToSchedulerNode((__int64)a1, a3, a2);
  }
  if ( v6 >= a1[22] )
    return 3221225485LL;
  v8 = a4 + 2664;
  ExAcquirePushLockSharedEx(a4 + 2664, 0LL);
  v9 = *(_QWORD *)(*(_QWORD *)(a4 + 32) + 8LL * a1[1]);
  if ( !v9 )
    goto LABEL_18;
  v10 = *(_DWORD *)(v9 + 80);
  v11 = *(_QWORD **)(v9 + 8);
  v12 = &v11[v6];
  if ( v6 >= v10 )
    v12 = v11;
  if ( !*v12 )
  {
LABEL_18:
    ExReleasePushLockSharedEx(v8, 0LL);
    return 3221225485LL;
  }
  if ( v6 < v10 )
    v11 += v6;
  v13 = *v11;
  v14 = 16LL;
  v15 = 4LL;
  *(_QWORD *)a5 = *(_QWORD *)v13;
  v16 = (_DWORD *)(a5 + 12);
  v17 = *(_DWORD *)(v13 + 8);
  v18 = v13 - a5;
  *(_DWORD *)(a5 + 8) = v17;
  do
  {
    *v16 = *(_DWORD *)((char *)v16 + v18);
    ++v16;
    --v14;
  }
  while ( v14 );
  v19 = (_DWORD *)(a5 + 76);
  v20 = 8LL;
  do
  {
    *v19 = *(_DWORD *)((char *)v19 + v18);
    v19[1] = *(_DWORD *)((char *)v19 + v18 + 4);
    v19 += 2;
    --v20;
  }
  while ( v20 );
  v21 = (_DWORD *)(a5 + 140);
  do
  {
    *v21 = *(_DWORD *)((char *)v21 + v18 + 8);
    v21[1] = *(_DWORD *)((char *)v21 + v18 + 12);
    v21[3] = *(_DWORD *)((char *)v21 + v18 + 20);
    v21[2] = *(_DWORD *)((char *)v21 + v18 + 16);
    v21 += 4;
    --v15;
  }
  while ( v15 );
  ExReleasePushLockSharedEx(v8, 0LL);
  return 0LL;
}
