/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@PEAVICapabilitiesContributorTarget@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800FCBF8
 * Callers:
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x1800FCA84 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?reserve_region@?$vector_facade@PEAVICompositionSurfaceInfoListener@@V?$buffer_impl@PEAVICompositionSurfaceInfoListener@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVICompositionSurfaceInfoListener@@_K0@Z @ 0x18012C5CC (-reserve_region@-$vector_facade@PEAVICompositionSurfaceInfoListener@@V-$buffer_impl@PEAVIComposi.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 */

unsigned __int64 __fastcall detail::buffer_impl<ICapabilitiesContributorTarget *,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v3; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  LPVOID v10; // rsi
  __int64 v11; // rbx
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int128 v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h]

  v3 = a1[1];
  result = (a1[2] - v3) >> 3;
  if ( result < a2 )
  {
    v5 = (v3 - *a1) >> 3;
    v6 = (__int64)(a1[2] - *a1) >> 3;
    v7 = v5 + a2;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = v6 >> 1;
    if ( v6 <= ~(v6 >> 1) )
    {
      v9 = v8 + v6;
      if ( v8 + v6 < v7 )
        v9 = v7;
      v7 = v9;
    }
    v10 = operator new[](saturated_mul(v7, 8uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v15, (__int64)v10, v5);
    v11 = a1[1];
    v12 = (_QWORD *)*a1;
    v17 = v15;
    v18 = v16;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v17, (v11 - (__int64)v12) >> 3);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(
      v12,
      v11,
      (void *)(v15 + 8 * v16));
    v13 = (_QWORD *)*a1;
    *a1 = v10;
    if ( v13 == a1 + 3 )
      v13 = 0LL;
    operator delete(v13);
    v14 = (_QWORD *)*a1;
    a1[1] = *a1 + 8 * v5;
    result = (unsigned __int64)&v14[v7];
    a1[2] = result;
  }
  return result;
}
