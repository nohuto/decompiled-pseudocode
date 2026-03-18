/*
 * XREFs of VidSchQueryNodeStatistics @ 0x140104500
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x140039488 (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     CopyNodeStatistics @ 0x1401045A0 (CopyNodeStatistics.c)
 */

__int64 __fastcall VidSchQueryNodeStatistics(__int64 a1, unsigned __int16 a2, int a3, __int64 a4)
{
  unsigned int v4; // r10d
  _QWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r11
  __int64 v10; // rax
  _QWORD *v11; // rdx
  unsigned int v12; // r10d

  v4 = a3;
  if ( a2 != 0xFFFF )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 84) )
      return 3221225485LL;
    v4 = VidSchiDriverNodeEngineToSchedulerNode(a1, a3, a2);
  }
  if ( v4 >= *(_DWORD *)(a1 + 88) )
    return 3221225485LL;
  v6 = *(_QWORD **)(a1 + 696);
  if ( v4 < *(_DWORD *)(a1 + 768) )
    v6 += v4;
  CopyNodeStatistics(a4, *v6 + 2776LL, v4);
  v10 = *(_QWORD *)(*(_QWORD *)(g_pVidSchSystemProcess + 32) + 8LL * *(unsigned int *)(v9 + 4));
  v11 = *(_QWORD **)(v10 + 8);
  if ( v12 < *(_DWORD *)(v10 + 80) )
    v11 += v7;
  CopyNodeStatistics(v8 + 272, *v11, v7);
  return 0LL;
}
