/*
 * XREFs of ?_Growmap@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAX_K@Z @ 0x1800CCD94
 * Callers:
 *     ??$_Emplace_back_internal@UTrailPoint@CTouchDragVisual@@@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAX$$QEAUTrailPoint@CTouchDragVisual@@@Z @ 0x1800CC398 (--$_Emplace_back_internal@UTrailPoint@CTouchDragVisual@@@-$deque@UTrailPoint@CTouchDragVisual@@V.c)
 *     ??$_Emplace_front_internal@AEAUTOUCH_DRAG_POINT@@AEAM@?$deque@UTrailPoint@CTouchDragVisual@@V?$allocator@UTrailPoint@CTouchDragVisual@@@std@@@std@@AEAAXAEAUTOUCH_DRAG_POINT@@AEAM@Z @ 0x1800CC45C (--$_Emplace_front_internal@AEAUTOUCH_DRAG_POINT@@AEAM@-$deque@UTrailPoint@CTouchDragVisual@@V-$a.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002FDF4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180085D6C (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Uninitialized_value_construct_n_unchecked1@PEAPEAUTrailPoint@CTouchDragVisual@@_K@std@@YAPEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@_K@Z @ 0x1800CC534 (--$_Uninitialized_value_construct_n_unchecked1@PEAPEAUTrailPoint@CTouchDragVisual@@_K@std@@YAPEA.c)
 *     ??$uninitialized_copy@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CTouchDragVisual@@QEAPEAU12@0PEAPEAU12@@Z @ 0x1800CC5D8 (--$uninitialized_copy@PEAPEAUTrailPoint@CTouchDragVisual@@PEAPEAU12@@std@@YAPEAPEAUTrailPoint@CT.c)
 */

void __fastcall std::deque<CTouchDragVisual::TrailPoint>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  const char *v3; // rcx
  unsigned __int64 v4; // rsi
  unsigned __int64 size_of; // rax
  char *v6; // r14
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  void *v10; // rax
  void *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rcx

  v2 = 1LL;
  v3 = (const char *)a1[2];
  if ( v3 )
    v2 = (unsigned __int64)v3;
  while ( (const char *)v2 == v3 || v2 < 8 )
  {
    if ( 0x7FFFFFFFFFFFFFFLL - v2 < v2 )
      std::_Dwm_Xlength_error(v3);
    v2 *= 2LL;
  }
  v4 = a1[3];
  size_of = std::_Get_size_of_n<8>(v2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = v2 >> 1;
  while ( v2 <= v7 )
    v2 *= 2LL;
  v8 = a1[2];
  v9 = v2 - v8;
  v10 = (void *)std::uninitialized_copy<CTouchDragVisual::TrailPoint * *,CTouchDragVisual::TrailPoint * *>(
                  (void *)(a1[1] + 8 * v4),
                  a1[1] + 8 * v8,
                  &v6[8 * v4]);
  v11 = (void *)a1[1];
  if ( v4 > v9 )
  {
    std::uninitialized_copy<CTouchDragVisual::TrailPoint * *,CTouchDragVisual::TrailPoint * *>(
      v11,
      (__int64)v11 + 8 * v9,
      v10);
    v13 = std::uninitialized_copy<CTouchDragVisual::TrailPoint * *,CTouchDragVisual::TrailPoint * *>(
            (void *)(a1[1] + 8 * v9),
            a1[1] + 8 * v4,
            v6);
    v4 = v9;
  }
  else
  {
    v12 = std::uninitialized_copy<CTouchDragVisual::TrailPoint * *,CTouchDragVisual::TrailPoint * *>(
            v11,
            (__int64)v11 + 8 * v4,
            v10);
    std::_Uninitialized_value_construct_n_unchecked1<CTouchDragVisual::TrailPoint * *,unsigned __int64>(v12, v9 - v4);
    v13 = (__int64)v6;
  }
  std::_Uninitialized_value_construct_n_unchecked1<CTouchDragVisual::TrailPoint * *,unsigned __int64>(v13, v4);
  v14 = (void *)a1[1];
  if ( v14 )
    std::_Deallocate<16>(v14, 8LL * a1[2]);
  a1[1] = v6;
  a1[2] += v9;
}
