/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800AF394
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisualTree@@_K0@Z @ 0x1800AF1B4 (-reserve_region@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vlibera.c)
 * Callees:
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@Z @ 0x18004FABC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@_J@std@@YA-A_TA.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rbp
  LPVOID v9; // rsi
  __int64 v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  void *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h]
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h]

  v2 = a1[1];
  v4 = a1[2];
  result = (v4 - v2) >> 3;
  if ( result < a2 )
  {
    v6 = (v2 - *a1) >> 3;
    v7 = v6 + a2;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v4 - *a1) >> 3),
           (v4 - *a1) >> 3,
           v7);
    v9 = operator new[](saturated_mul(v8, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v16, (__int64)v9, v6);
    v10 = a1[1];
    v11 = (_QWORD *)*a1;
    v12 = (v10 - *a1) >> 3;
    v18 = v16;
    v19 = v17;
    v13 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CDrawListEntry * *> &,__int64>(&v18, v12);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v11, v10, v13);
    v14 = (_QWORD *)*a1;
    *a1 = v9;
    if ( v14 == a1 + 3 )
      v14 = 0LL;
    operator delete(v14);
    v15 = (_QWORD *)*a1;
    a1[1] = *a1 + 8 * v6;
    result = (unsigned __int64)&v15[v8];
    a1[2] = result;
  }
  return result;
}
