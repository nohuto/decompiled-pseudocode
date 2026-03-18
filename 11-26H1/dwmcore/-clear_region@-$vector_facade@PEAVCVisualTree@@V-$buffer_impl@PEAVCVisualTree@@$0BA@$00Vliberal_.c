/*
 * XREFs of ?clear_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008D430
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18008E700 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?FinalRelease@CVisualTree@@MEAAXXZ @ 0x1801493E0 (-FinalRelease@CVisualTree@@MEAAXXZ.c)
 *     ?RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z @ 0x1801497E0 (-RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ??1?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18019B9C0 (--1-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_p.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 */

__int64 __fastcall detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  unsigned __int64 v6; // rbx
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  void *v11; // rdi
  __int128 v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-30h]
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]

  v3 = *a1;
  v4 = a2 + a3;
  v6 = (a1[1] - *a1) >> 3;
  if ( a2 + a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x18008D51FLL);
  }
  result = (__int64)stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
                      &v14,
                      v3,
                      (a1[1] - *a1) >> 3);
  if ( v4 != v6 )
  {
    v12 = v14;
    v13 = v15;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v12, v9);
    v10 = v3 + 8 * v6;
    v11 = (void *)(v3 + 8 * v4);
    v14 = v12;
    v15 = v13;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v14, (v10 - (__int64)v11) >> 3);
    result = std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
               v11,
               v10,
               (void *)(v12 + 8 * v13));
  }
  a1[1] += -8 * a3;
  return result;
}
