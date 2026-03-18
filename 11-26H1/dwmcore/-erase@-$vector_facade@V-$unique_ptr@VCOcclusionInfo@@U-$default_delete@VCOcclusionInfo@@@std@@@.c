/*
 * XREFs of ?erase@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@V?$basic_iterator@$$CBV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@2@@Z @ 0x18008B8F0
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateZFromValidParent@CWindowOcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z @ 0x1800CAF30 (-UpdateZFromValidParent@CWindowOcclusionInfo@@MEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z @ 0x1800CB340 (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z.c)
 *     ?GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z @ 0x1800CB7D0 (-GetSpriteBitmapZ@CWindowOcclusionInfo@@QEBAHPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::erase(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rbp
  unsigned __int64 v7; // r8
  __int64 v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // r8
  __int64 *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  void (__fastcall ***v14)(_QWORD, __int64); // rcx
  __int64 *v15; // rbx
  __int128 v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h]
  __int128 v19; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h]

  v4 = *a1;
  v6 = (*a3 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  v8 = v6 + 1;
  if ( v6 + 1 > v7 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  v9 = (__int64 *)(v4 + 8 * v7);
  stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v19, v4, v7);
  if ( v8 != v10 )
  {
    v17 = v19;
    v18 = v20;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v17, v6);
    v11 = (__int64 *)(v4 + 8 * v8);
    v19 = v17;
    v20 = v18;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v19, v9 - v11);
    v12 = v17 + 8 * v18 - (_QWORD)v11;
    while ( v11 != v9 )
    {
      v13 = *v11;
      *v11 = 0LL;
      v14 = *(void (__fastcall ****)(_QWORD, __int64))((char *)v11 + v12);
      *(__int64 *)((char *)v11 + v12) = v13;
      if ( v14 )
        (**v14)(v14, 1LL);
      ++v11;
    }
  }
  v15 = v9 - 1;
  do
  {
    if ( *v15 )
      (**(void (__fastcall ***)(__int64, __int64))*v15)(*v15, 1LL);
    ++v15;
  }
  while ( v15 != v9 );
  a1[1] -= 8LL;
  *a2 = *a1 + 8 * v6;
  return a2;
}
