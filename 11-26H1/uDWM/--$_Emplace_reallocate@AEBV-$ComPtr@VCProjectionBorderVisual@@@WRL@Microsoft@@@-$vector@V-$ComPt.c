/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18009D388
 * Callers:
 *     ?_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800A3FBC (-_AddProjectionBorderForDisplay@CCaptureManager@@AEAAJPEAUHMONITOR__@@PEAUCAPTURE_DISPLAY_MAP_EN.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002FDF4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ @ 0x180085AA8 (-_Xlength@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisualProxy@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@0@@Z @ 0x18009D848 (--$_Uninitialized_move@PEAV-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V-$allocator@V-$Co.c)
 *     ??1_Reallocation_guard@?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18009E5D4 (--1_Reallocation_guard@-$vector@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V-$allocator.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@_K1@Z @ 0x1800A4B60 (-_Change_array@-$vector@V-$ComPtr@VCProjectionBorderVisual@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 */

CBaseObject **__fastcall std::vector<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CProjectionBorderVisual> const &>(
        const char *a1,
        __int64 a2,
        CBaseObject **a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r14
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  char *v13; // rax
  CBaseObject *v14; // rcx
  char *v15; // rsi
  CBaseObject **v16; // r14
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx
  const char *v21; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  CBaseObject **v23; // [rsp+38h] [rbp-40h]
  _QWORD *v24; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<CVisualProxy *>::_Xlength(a1);
  v9 = v7 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v15 = v13;
  v21 = a1;
  v22 = v3;
  v16 = (CBaseObject **)&v13[8 * v5];
  *v16 = v14;
  v24 = v16 + 1;
  if ( v14 )
    CBaseObject::AddRef(v14);
  v17 = *((_QWORD *)a1 + 1);
  v18 = v15;
  v19 = *(_QWORD *)a1;
  v23 = v16;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<CProjectionBorderVisual> *,std::allocator<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>>(
      v19,
      a2,
      v15);
    v17 = *((_QWORD *)a1 + 1);
    v18 = v16 + 1;
    v19 = a2;
    v23 = (CBaseObject **)v15;
  }
  std::_Uninitialized_move<Microsoft::WRL::ComPtr<CProjectionBorderVisual> *,std::allocator<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>>(
    v19,
    v17,
    v18);
  std::vector<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>::_Change_array(a1, v15, v9, v3, v21, 0LL, v22, v23, v24);
  std::vector<Microsoft::WRL::ComPtr<CProjectionBorderVisual>>::_Reallocation_guard::~_Reallocation_guard(&v21);
  return v16;
}
