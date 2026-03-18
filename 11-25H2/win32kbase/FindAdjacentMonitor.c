/*
 * XREFs of FindAdjacentMonitor @ 0x1400630A0
 * Callers:
 *     TransformOffscreenAdjacentRect @ 0x140062EF0 (TransformOffscreenAdjacentRect.c)
 * Callees:
 *     ?ComputeAdjacencyOverlap@@YAJPEBUtagRECT@@0@Z @ 0x140062FFC (-ComputeAdjacencyOverlap@@YAJPEBUtagRECT@@0@Z.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x14006365C (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 */

__int64 __fastcall FindAdjacentMonitor(struct tagRECT *a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // rsi
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  tagRECT v11; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v12; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  v4 = 0LL;
  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 56968) + 112LL);
  while ( v6 )
  {
    v7 = v5;
    v11 = *ExpandedMonitorRect(&v12, (struct tagMONITOR *)v6, v2);
    v8 = ComputeAdjacencyOverlap(a1, &v11);
    v9 = v6;
    v6 = *(_QWORD *)(v6 + 56);
    if ( v8 > v5 )
      v5 = v8;
    if ( v8 <= v7 )
      v9 = v4;
    v4 = v9;
  }
  return v4;
}
