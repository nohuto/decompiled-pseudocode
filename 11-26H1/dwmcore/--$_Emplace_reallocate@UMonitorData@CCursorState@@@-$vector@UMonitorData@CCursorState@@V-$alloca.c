/*
 * XREFs of ??$_Emplace_reallocate@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAPEAUMonitorData@CCursorState@@QEAU23@$$QEAU23@@Z @ 0x18028FA34
 * Callers:
 *     ??$emplace_back@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAAAEAUMonitorData@CCursorState@@$$QEAU23@@Z @ 0x1802906C4 (--$emplace_back@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$allocator@UMo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x1801A4FF8 (--$_Get_size_of_n@$0IA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Uninitialized_move@PEAUMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@YAPEAUMonitorData@CCursorState@@QEAU12@0PEAU12@AEAV?$allocator@UMonitorData@CCursorState@@@0@@Z @ 0x18029052C (--$_Uninitialized_move@PEAUMonitorData@CCursorState@@V-$allocator@UMonitorData@CCursorState@@@st.c)
 *     ??0MonitorData@CCursorState@@QEAA@$$QEAU01@@Z @ 0x180290890 (--0MonitorData@CCursorState@@QEAA@$$QEAU01@@Z.c)
 *     ??1_Reallocation_guard@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAA@XZ @ 0x180290AFC (--1_Reallocation_guard@-$vector@UMonitorData@CCursorState@@V-$allocator@UMonitorData@CCursorStat.c)
 *     ?_Change_array@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@AEAAXQEAUMonitorData@CCursorState@@_K1@Z @ 0x1802925C4 (-_Change_array@-$vector@UMonitorData@CCursorState@@V-$allocator@UMonitorData@CCursorState@@@std@.c)
 */

char *__fastcall std::vector<CCursorState::MonitorData>::_Emplace_reallocate<CCursorState::MonitorData>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  char *v14; // rax
  char *v15; // r14
  char *v16; // rsi
  __int64 v17; // rdx
  char *v18; // r8
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 7;
  if ( v6 == 0x1FFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 7;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<128>(v3);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v21[0] = a1;
  v15 = &v14[v4 & 0xFFFFFFFFFFFFFF80uLL];
  v21[2] = v3;
  v16 = v14;
  v23 = v15 + 128;
  CCursorState::MonitorData::MonitorData(v15, a3);
  v17 = a1[1];
  v18 = v16;
  v19 = *a1;
  v22 = v15;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CCursorState::MonitorData *>(v19, a2, v16);
    v17 = a1[1];
    v18 = v15 + 128;
    v19 = a2;
    v22 = v16;
  }
  std::_Uninitialized_move<CCursorState::MonitorData *>(v19, v17, v18);
  v21[1] = 0LL;
  std::vector<CCursorState::MonitorData>::_Change_array(a1, v16, v9, v3);
  std::vector<CCursorState::MonitorData>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v15;
}
