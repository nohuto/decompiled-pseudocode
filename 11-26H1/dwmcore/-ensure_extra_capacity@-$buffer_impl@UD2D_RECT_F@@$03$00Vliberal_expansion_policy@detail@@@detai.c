/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180143494
 * Callers:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x180141E1C (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$03$00Vliberal_expansio.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x18000A724 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 */

void __fastcall detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
  LPVOID v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  void *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r14
  __int128 v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int128 v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]

  v2 = a1[1];
  v4 = a1[2];
  if ( (v4 - v2) >> 4 < a2 )
  {
    v5 = (v2 - *a1) >> 4;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801435BBLL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v4 - *a1) >> 4),
           (v4 - *a1) >> 4,
           v5 + a2);
    v7 = operator new[](saturated_mul(v6, 0x10uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v13, (__int64)v7, v5);
    v8 = a1[1];
    v9 = (_QWORD *)*a1;
    v15 = v13;
    v16 = v14;
    v10 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(&v15);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v9, v8, v10);
    v11 = (_QWORD *)*a1;
    *a1 = v7;
    if ( v11 == a1 + 3 )
      v11 = 0LL;
    operator delete(v11);
    v12 = *a1 + 16 * v5;
    a1[2] = *a1 + 16 * v6;
    a1[1] = v12;
  }
}
