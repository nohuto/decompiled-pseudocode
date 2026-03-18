/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18025C414
 * Callers:
 *     CalculateDisplayBlankTime @ 0x1801DEDC4 (CalculateDisplayBlankTime.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDISPLAYCONFIG_PATH_INFO@@PEAU1@_KAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@0@@Z @ 0x18025C678 (--$_Uninitialized_value_construct_n@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@YAPEAUDIS.c)
 *     ??1_Reallocation_guard@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@XZ @ 0x18025C9F8 (--1_Reallocation_guard@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@.c)
 *     ?_Change_array@?$vector@UDISPLAYCONFIG_PATH_INFO@@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@AEAAXQEAUDISPLAYCONFIG_PATH_INFO@@_K1@Z @ 0x18025D380 (-_Change_array@-$vector@UDISPLAYCONFIG_PATH_INFO@@V-$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@.c)
 *     memmove_0 @ 0x1802B97BC (memmove_0.c)
 */

__int64 __fastcall std::vector<DISPLAYCONFIG_PATH_INFO>::_Resize_reallocate<std::_Value_init_tag>(
        const void **a1,
        unsigned __int64 a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  char *v9; // rbx
  __int64 v10; // rax
  size_t v11; // r8
  const void *v12; // rdx
  _QWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  char *v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]

  if ( a2 > 0x38E38E38E38E38ELL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v4 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v5 = 0x8E38E38E38E38E39uLL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v6 = 0x8E38E38E38E38E39uLL * (v4 >> 3);
  v7 = v5 >> 1;
  if ( v5 <= 0x38E38E38E38E38ELL - (v5 >> 1) )
  {
    v8 = v7 + v5;
    if ( v7 + v5 >= a2 )
    {
      if ( v8 > 0x38E38E38E38E38ELL )
        std::_Throw_bad_array_new_length();
    }
    else
    {
      v8 = a2;
    }
  }
  else
  {
    v8 = 0x38E38E38E38E38ELL;
  }
  v14[0] = a1;
  v14[2] = v8;
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(72 * v8, v7);
  v15 = &v9[72 * v6];
  v10 = std::_Uninitialized_value_construct_n<std::allocator<DISPLAYCONFIG_PATH_INFO>>(v15);
  v11 = (_BYTE *)a1[1] - (_BYTE *)*a1;
  v12 = *a1;
  v16 = v10;
  memmove_0(v9, v12, v11);
  std::vector<DISPLAYCONFIG_PATH_INFO>::_Change_array(a1, v9, a2, v8, a1, 0LL, v8, v15, v16);
  return std::vector<DISPLAYCONFIG_PATH_INFO>::_Reallocation_guard::~_Reallocation_guard(v14);
}
