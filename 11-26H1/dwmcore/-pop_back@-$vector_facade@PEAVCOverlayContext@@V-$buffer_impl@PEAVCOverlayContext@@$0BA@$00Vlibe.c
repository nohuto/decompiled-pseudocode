/*
 * XREFs of ?pop_back@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180140FF4
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180141868 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::pop_back(
        __int64 *a1)
{
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rbx
  void *v8; // rdi
  __int128 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]

  v2 = *a1;
  v3 = (a1[1] - *a1) >> 3;
  v4 = ((a1[1] - *a1 - 8) >> 3) + 1;
  if ( v4 > v3 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  result = (__int64)stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(&v11, v2, v3);
  if ( v4 != v3 )
  {
    v9 = v11;
    v10 = v12;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v9, v6);
    v7 = v2 + 8 * v3;
    v8 = (void *)(v2 + 8 * v4);
    v11 = v9;
    v12 = v10;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v11, (v7 - (__int64)v8) >> 3);
    result = std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
               v8,
               v7,
               (void *)(v9 + 8 * v10));
  }
  a1[1] -= 8LL;
  return result;
}
