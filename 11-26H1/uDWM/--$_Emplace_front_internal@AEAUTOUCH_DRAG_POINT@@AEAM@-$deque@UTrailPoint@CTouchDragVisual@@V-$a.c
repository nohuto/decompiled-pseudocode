/*
 * XREFs of ??$_Emplace_front_internal@AEAUTOUCH_DRAG_POINT@@AEAM@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAXAEAUTOUCH_DRAG_POINT@@AEAM@Z @ 0x1800CC45C
 * Callers:
 *     ??$emplace_front@AEBUTOUCH_DRAG_POINT@@AEAM@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@QEAAAEAUTrailPoint@CTouchDragVisual@@AEBUTOUCH_DRAG_POINT@@AEAM@Z @ 0x1800CC5A8 (--$emplace_front@AEBUTOUCH_DRAG_POINT@@AEAM@-$deque@UTrailPoint@CTouchDragVisual@@V-$allocator@U.c)
 * Callees:
 *     ?_Growmap@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAX_K@Z @ 0x1800CCD94 (-_Growmap@-$deque@UTrailPoint@CTouchDragVisual@@V-$allocator@UTrailPoint@CTouchDragVisual@@@std@.c)
 *     ?allocate@?$allocator@UTrailPoint@CTouchDragVisual@@@std@@QEAAPEAUTrailPoint@CTouchDragVisual@@_K@Z @ 0x1800CCF48 (-allocate@-$allocator@UTrailPoint@CTouchDragVisual@@@std@@QEAAPEAUTrailPoint@CTouchDragVisual@@_.c)
 */

__int64 __fastcall std::deque<CTouchDragVisual::TrailPoint>::_Emplace_front_internal<TOUCH_DRAG_POINT &,float &>(
        _QWORD *a1,
        unsigned int *a2,
        int *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rdx
  int v12; // eax
  __int64 result; // rax

  if ( a1[2] <= (unsigned __int64)(a1[4] + 1LL) )
    std::deque<CTouchDragVisual::TrailPoint>::_Growmap();
  v6 = a1[2];
  v7 = v6 - 1;
  v8 = ((v6 - 1) & a1[3]) == 0;
  a1[3] &= v6 - 1;
  v9 = a1[3];
  if ( v8 )
    v9 = v6;
  v10 = v9 - 1;
  if ( !*(_QWORD *)(a1[1] + 8 * (v7 & v10)) )
    *(_QWORD *)(a1[1] + 8 * (v7 & v10)) = std::allocator<CTouchDragVisual::TrailPoint>::allocate();
  v11 = *(_QWORD *)(a1[1] + 8 * (v10 & (a1[2] - 1LL)));
  v12 = *a3;
  *(_QWORD *)v11 = 0LL;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_QWORD *)(v11 + 16) = *(_QWORD *)(a2 + 1);
  *(_DWORD *)(v11 + 24) = v12;
  result = *a2;
  *(_DWORD *)(v11 + 28) = result;
  a1[3] = v10;
  ++a1[4];
  return result;
}
