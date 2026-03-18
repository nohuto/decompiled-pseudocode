/*
 * XREFs of ?clear_region@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180175724
 * Callers:
 *     ?erase@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCPreComputeSubTreeContext@@@2@V?$basic_iterator@$$CBVCPreComputeSubTreeContext@@@2@@Z @ 0x1801753B4 (-erase@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCPreComputeSubTreeContext@@$0.c)
 *     ?clear@?$vector_facade@VCPreComputeSubTreeContext@@V?$buffer_impl@VCPreComputeSubTreeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180196E6C (-clear@-$vector_facade@VCPreComputeSubTreeContext@@V-$buffer_impl@VCPreComputeSubTreeContext@@$0.c)
 * Callees:
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     ??1CPreComputeSubTreeContext@@QEAA@XZ @ 0x180175834 (--1CPreComputeSubTreeContext@@QEAA@XZ.c)
 *     ??$move@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCPreComputeSubTreeContext@@@stdext@@V?$move_iterator@PEAVCPreComputeSubTreeContext@@@0@0V12@@Z @ 0x1802296C0 (--$move@V-$move_iterator@PEAVCPreComputeSubTreeContext@@@std@@V-$checked_array_iterator@PEAVCPre.c)
 */

void __fastcall detail::vector_facade<CPreComputeSubTreeContext,detail::buffer_impl<CPreComputeSubTreeContext,3,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  CPreComputeSubTreeContext *v3; // rdi
  __int64 v4; // rbx
  unsigned __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v10; // r8
  CPreComputeSubTreeContext *i; // rbx
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v4 = *a1;
  v7 = 0x2E8BA2E8BA2E8BA3LL * ((a1[1] - *a1) >> 5);
  v8 = a2 + a3;
  if ( a2 + a3 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    goto LABEL_8;
  }
  v3 = (CPreComputeSubTreeContext *)(v4 + 32 * ((a1[1] - *a1) >> 5));
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v14, *a1, v7);
  if ( v8 != v10 )
  {
LABEL_8:
    v12 = v14;
    v13 = v15;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, v9);
    v14 = v12;
    v15 = v13;
    std::move<std::move_iterator<CPreComputeSubTreeContext *>,stdext::checked_array_iterator<CPreComputeSubTreeContext *>>(
      &v12,
      v4 + 352 * v8,
      v3,
      &v14);
  }
  for ( i = (CPreComputeSubTreeContext *)((char *)v3 - 352 * a3);
        i != v3;
        i = (CPreComputeSubTreeContext *)((char *)i + 352) )
  {
    CPreComputeSubTreeContext::~CPreComputeSubTreeContext(i);
  }
  a1[1] -= 352 * a3;
}
