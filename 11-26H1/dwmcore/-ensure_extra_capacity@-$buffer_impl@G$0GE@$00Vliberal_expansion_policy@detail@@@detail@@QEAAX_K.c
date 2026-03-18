/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18000A460
 * Callers:
 *     ?reserve_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAG_K0@Z @ 0x18000A288 (-reserve_region@-$vector_facade@GV-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@deta.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAG@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAG@stdext@@_J@Z @ 0x18000A74C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAG@stdext@@_J@std@@YA-A_TAEAV-$checked_array_.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbp
  void *v8; // rsi
  __int64 v9; // r9
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]

  v2 = a1[1];
  v4 = a1[2];
  result = (v4 - v2) >> 1;
  if ( result < a2 )
  {
    v6 = (v2 - *a1) >> 1;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x18000A57FLL);
    }
    v7 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v4 - *a1) >> 1),
           (v4 - *a1) >> 1,
           v6 + a2);
    v8 = operator new[](saturated_mul(v7, 2uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, v8, v6, v9);
    v10 = (_QWORD *)*a1;
    v11 = (__int64)(a1[1] - *a1) >> 1;
    v16 = v14;
    v17 = v15;
    std::_Get_unwrapped_n<stdext::checked_array_iterator<unsigned short *> &,__int64>(&v16, v11);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v10);
    v12 = (_QWORD *)*a1;
    *a1 = v8;
    if ( v12 == a1 + 3 )
      v12 = 0LL;
    operator delete(v12);
    v13 = (_QWORD *)*a1;
    a1[1] = *a1 + 2 * v6;
    result = (unsigned __int64)v13 + 2 * v7;
    a1[2] = result;
  }
  return result;
}
