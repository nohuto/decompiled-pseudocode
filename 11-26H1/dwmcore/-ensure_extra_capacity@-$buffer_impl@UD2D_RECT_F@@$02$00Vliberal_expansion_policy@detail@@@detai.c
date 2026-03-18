/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18014334C
 * Callers:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801430B4 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x1801431C0 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansio.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 */

void __fastcall detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  LPVOID v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  __int64 v13; // r14
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]

  v3 = a1[1];
  if ( (a1[2] - v3) >> 4 < a2 )
  {
    v4 = (v3 - *a1) >> 4;
    v5 = (__int64)(a1[2] - *a1) >> 4;
    v6 = v4 + a2;
    if ( v4 + a2 < v4 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v7 = v5 >> 1;
    if ( v5 <= ~(v5 >> 1) )
    {
      v8 = v7 + v5;
      if ( v7 + v5 < v6 )
        v8 = v6;
      v6 = v8;
    }
    v9 = operator new[](saturated_mul(v6, 0x10uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, (__int64)v9, v4);
    v10 = a1[1];
    v11 = (_QWORD *)*a1;
    v16 = v14;
    v17 = v15;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v16, (v10 - (__int64)v11) >> 4);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
      v11,
      v10,
      (void *)(v14 + 16 * v15));
    v12 = (_QWORD *)*a1;
    *a1 = v9;
    if ( v12 == a1 + 3 )
      v12 = 0LL;
    operator delete(v12);
    v13 = *a1 + 16 * v4;
    a1[2] = *a1 + 16 * v6;
    a1[1] = v13;
  }
}
