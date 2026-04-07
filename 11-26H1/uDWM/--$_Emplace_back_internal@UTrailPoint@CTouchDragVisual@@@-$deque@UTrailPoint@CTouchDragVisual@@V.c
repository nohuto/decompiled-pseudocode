/*
 * XREFs of ??$_Emplace_back_internal@UTrailPoint@CTouchDragVisual@@@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAX$$QEAUTrailPoint@CTouchDragVisual@@@Z @ 0x1800CC398
 * Callers:
 *     ??$emplace_back@UTrailPoint@CTouchDragVisual@@@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAAAEAUTrailPoint@CTouchDragVisual@@$$QEAU23@@Z @ 0x1800CC56C (--$emplace_back@UTrailPoint@CTouchDragVisual@@@-$deque@UTrailPoint@CTouchDragVisual@@V-$allocato.c)
 * Callees:
 *     ?_Growmap@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAX_K@Z @ 0x1800CCD94 (-_Growmap@-$deque@UTrailPoint@CTouchDragVisual@@V-$allocator@UTrailPoint@CTouchDragVisual@@@std@.c)
 *     ?allocate@?$allocator@UTrailPoint@CTouchDragVisual@@@std@@QEAAPEAUTrailPoint@CTouchDragVisual@@_K@Z @ 0x1800CCF48 (-allocate@-$allocator@UTrailPoint@CTouchDragVisual@@@std@@QEAAPEAUTrailPoint@CTouchDragVisual@@_.c)
 */

__int64 __fastcall std::deque<CTouchDragVisual::TrailPoint>::_Emplace_back_internal<CTouchDragVisual::TrailPoint>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<CTouchDragVisual::TrailPoint>::_Growmap();
  v4 = a1[2] - 1LL;
  a1[3] &= v4;
  v5 = a1[3] + a1[4];
  if ( !*(_QWORD *)(a1[1] + 8 * (v4 & v5)) )
    *(_QWORD *)(a1[1] + 8 * (v4 & v5)) = std::allocator<CTouchDragVisual::TrailPoint>::allocate();
  v6 = *(_QWORD *)(a1[1] + 8 * (v5 & (a1[2] - 1LL)));
  v7 = *a2;
  *a2 = 0LL;
  *(_QWORD *)v6 = v7;
  v8 = a2[1];
  a2[1] = 0LL;
  *(_QWORD *)(v6 + 8) = v8;
  *(_QWORD *)(v6 + 16) = a2[2];
  *(_DWORD *)(v6 + 24) = *((_DWORD *)a2 + 6);
  result = *((unsigned int *)a2 + 7);
  *(_DWORD *)(v6 + 28) = result;
  ++a1[4];
  return result;
}
