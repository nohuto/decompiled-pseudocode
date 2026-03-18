/*
 * XREFs of FindAdjacentMonitor @ 0x140081B2C
 * Callers:
 *     TransformOffscreenAdjacentRect @ 0x140081918 (TransformOffscreenAdjacentRect.c)
 * Callees:
 *     ?ComputeAdjacencyOverlap@@YAJPEBUtagRECT@@0@Z @ 0x140081A88 (-ComputeAdjacencyOverlap@@YAJPEBUtagRECT@@0@Z.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1400828DC (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 */

__int64 __fastcall FindAdjacentMonitor(struct tagRECT *a1, unsigned int a2, int a3)
{
  __int64 v5; // rdi
  int v6; // ebp
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  tagRECT v12; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v13; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0LL;
  v6 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 56968) + 104LL);
  while ( v7 )
  {
    v8 = v6;
    v12 = *ExpandedMonitorRect(&v13, (struct tagMONITOR *)v7, a2);
    v9 = ComputeAdjacencyOverlap(a1, &v12);
    v10 = v7;
    v7 = *(_QWORD *)(v7 + 56);
    if ( v9 > v6 )
      v6 = v9;
    if ( v9 <= v8 )
      v10 = v5;
    v5 = v10;
  }
  return v5;
}
