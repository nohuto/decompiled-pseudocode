/*
 * XREFs of ??$_Emplace_reallocate@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAPEAUSecondaryViewInfo@JointResize@@QEAU23@$$QEAU23@@Z @ 0x1805368EC
 * Callers:
 *     ??$emplace_back@USecondaryViewInfo@JointResize@@@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAAAEAUSecondaryViewInfo@JointResize@@$$QEAU23@@Z @ 0x180536F98 (--$emplace_back@USecondaryViewInfo@JointResize@@@-$vector@USecondaryViewInfo@JointResize@@V-$all.c)
 * Callees:
 *     ??$_Get_size_of_n@$0GA@@std@@YA_K_K@Z @ 0x180228484 (--$_Get_size_of_n@$0GA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0SecondaryViewInfo@JointResize@@QEAA@$$QEAU01@@Z @ 0x1802A28C4 (--0SecondaryViewInfo@JointResize@@QEAA@$$QEAU01@@Z.c)
 *     ??$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@YAPEAUSecondaryViewInfo@JointResize@@QEAU12@0PEAU12@AEAV?$allocator@USecondaryViewInfo@JointResize@@@0@@Z @ 0x180536A50 (--$_Uninitialized_move@PEAUSecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointR.c)
 *     ??1_Reallocation_guard@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@QEAA@XZ @ 0x180537A04 (--1_Reallocation_guard@-$vector@USecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@.c)
 *     ?_Change_array@?$vector@USecondaryViewInfo@JointResize@@V?$allocator@USecondaryViewInfo@JointResize@@@std@@@std@@AEAAXQEAUSecondaryViewInfo@JointResize@@_K1@Z @ 0x18053B094 (-_Change_array@-$vector@USecondaryViewInfo@JointResize@@V-$allocator@USecondaryViewInfo@JointRes.c)
 */

__int64 __fastcall std::vector<JointResize::SecondaryViewInfo>::_Emplace_reallocate<JointResize::SecondaryViewInfo>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  void *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-38h]

  v4 = 0x2AAAAAAAAAAAAAALL;
  v7 = (a2 - *a1) / 96;
  v8 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 5);
  if ( v8 == 0x2AAAAAAAAAAAAAALL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v8 + 1;
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 5);
  v11 = v10 >> 1;
  if ( v10 <= 0x2AAAAAAAAAAAAAALL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<96>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v20 = a1;
  v14 = (__int64)v13 + 96 * v7;
  v21 = v4;
  v15 = (__int64)v13;
  v23 = v14 + 96;
  JointResize::SecondaryViewInfo::SecondaryViewInfo(v14, a3);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  v22 = v14;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<JointResize::SecondaryViewInfo *>(v18, a2, v15);
    v16 = a1[1];
    v17 = v14 + 96;
    v18 = a2;
    v22 = v15;
  }
  std::_Uninitialized_move<JointResize::SecondaryViewInfo *>(v18, v16, v17);
  std::vector<JointResize::SecondaryViewInfo>::_Change_array(a1, v15, v9, v4, v20, 0LL, v21, v22, v23);
  std::vector<JointResize::SecondaryViewInfo>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v14;
}
