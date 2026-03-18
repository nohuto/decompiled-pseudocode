/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801BD0D0
 * Callers:
 *     ?reserve_region@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexXYW_ColorDW_UV2_AAFixup@@_K0@Z @ 0x18000A36C (-reserve_region@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorD.c)
 * Callees:
 *     ??$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@QEAPEAPEAV1@0@Z @ 0x18000A7C4 (--$_Uninitialized_copy_unchecked@PEAPEAPEAVCMegaRectBatchCommand@@PEAPEAPEAV1@@std@@YAPEAPEAPEAV.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D598 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18002D660 (--_U@YAPEAX_K@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@_J@Z @ 0x18015C070 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@_J@.c)
 */

void __fastcall detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
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
  __int64 v10; // rdx
  void *v11; // rax
  _QWORD *v12; // rcx
  unsigned __int64 v13; // r14
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]

  v2 = a1[1];
  v4 = a1[2];
  if ( (v4 - v2) >> 6 < a2 )
  {
    v5 = (v2 - *a1) >> 6;
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801BD1F6LL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)((v4 - *a1) >> 6),
           (v4 - *a1) >> 6,
           v5 + a2);
    v7 = operator new[](saturated_mul(v6, 0x40uLL));
    stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, (__int64)v7, v5);
    v8 = a1[1];
    v9 = (_QWORD *)*a1;
    v10 = (v8 - *a1) >> 6;
    v16 = v14;
    v17 = v15;
    v11 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *> &,__int64>(
                    &v16,
                    v10);
    std::_Uninitialized_copy_unchecked<CMegaRectBatchCommand * * *,CMegaRectBatchCommand * * *>(v9, v8, v11);
    v12 = (_QWORD *)*a1;
    *a1 = v7;
    if ( v12 == a1 + 4 )
      v12 = 0LL;
    operator delete(v12);
    v13 = *a1 + (v5 << 6);
    a1[2] = *a1 + (v6 << 6);
    a1[1] = v13;
  }
}
