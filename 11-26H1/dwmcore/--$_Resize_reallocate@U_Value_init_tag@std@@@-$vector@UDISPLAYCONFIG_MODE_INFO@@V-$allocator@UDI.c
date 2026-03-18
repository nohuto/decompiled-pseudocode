/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18025C314
 * Callers:
 *     CalculateDisplayBlankTime @ 0x1801DEDC4 (CalculateDisplayBlankTime.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x1801B42E0 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K1@Z @ 0x1801BF5D0 (-_Change_array@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@0@@Z @ 0x18025C63C (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     ??1_Reallocation_guard@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@QEAA@XZ @ 0x18025C9D0 (--1_Reallocation_guard@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$allocator@UDISPLAYCONFIG_MODE_INFO@.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // rdx
  char *v11; // rax
  void *v12; // rbx
  __int64 v13; // rax
  size_t v14; // r8
  const void *v15; // rdx
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  char *v18; // [rsp+38h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-18h]

  v2 = 0x3FFFFFFFFFFFFFFLL;
  if ( a2 > 0x3FFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v5 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v6 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 6;
  v7 = v5 >> 6;
  v8 = v6 >> 1;
  if ( v6 <= 0x3FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<64>(v2);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v10);
  v17[0] = a1;
  v17[2] = v2;
  v18 = &v11[64 * v7];
  v12 = v11;
  v13 = std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_MODE_INFO>>(v18, a2 - v7);
  v14 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v15 = *a1;
  v19 = v13;
  memmove_0(v12, v15, v14);
  v17[1] = 0LL;
  std::vector<DISPLAYCONFIG_MODE_INFO>::_Change_array((__int64)a1, (__int64)v12, a2, v2);
  return std::vector<DISPLAYCONFIG_MODE_INFO>::_Reallocation_guard::~_Reallocation_guard(v17);
}
