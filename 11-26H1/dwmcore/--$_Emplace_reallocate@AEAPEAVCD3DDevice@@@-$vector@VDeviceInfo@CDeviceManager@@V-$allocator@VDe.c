/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@AEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x180295280
 * Callers:
 *     ??$emplace_back@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAAEAVDeviceInfo@CDeviceManager@@AEAPEAVCD3DDevice@@@Z @ 0x1802954B4 (--$emplace_back@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInf.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800E8734 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Change_array@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@AEAAXQEAVDeviceInfo@CDeviceManager@@_K1@Z @ 0x180216E84 (-_Change_array@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInfo@CDeviceManager@@@st.c)
 *     ??$_Uninitialized_move@PEAVDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAPEAVDeviceInfo@CDeviceManager@@QEAV12@0PEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x180295400 (--$_Uninitialized_move@PEAVDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInfo@CDeviceManager@@@.c)
 *     ??1_Reallocation_guard@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAA@XZ @ 0x180295544 (--1_Reallocation_guard@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDeviceInfo@CDeviceMana.c)
 */

char *__fastcall std::vector<CDeviceManager::DeviceInfo>::_Emplace_reallocate<CD3DDevice * &>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
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
  __int64 v15; // rcx
  char *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h]
  char *v24; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v15 = *a3;
  v16 = &v14[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v22[0] = a1;
  v22[2] = v3;
  v17 = (__int64)v14;
  v16[8] = 0;
  v24 = v16 + 16;
  *(_QWORD *)v16 = v15;
  if ( v15 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v15 + 8));
  v18 = a1[1];
  v19 = v17;
  v20 = *a1;
  v23 = (__int64)v16;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<CDeviceManager::DeviceInfo *>(v20, a2, v17);
    v18 = a1[1];
    v19 = (__int64)(v16 + 16);
    v20 = a2;
    v23 = v17;
  }
  std::_Uninitialized_move<CDeviceManager::DeviceInfo *>(v20, v18, v19);
  v22[1] = 0LL;
  std::vector<CDeviceManager::DeviceInfo>::_Change_array((__int64)a1, v17, v9, v3);
  std::vector<CDeviceManager::DeviceInfo>::_Reallocation_guard::~_Reallocation_guard(v22);
  return v16;
}
