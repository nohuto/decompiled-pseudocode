/*
 * XREFs of ?clear_region@?$vector_facade@URectInt32@Graphics@Windows@@V?$buffer_impl@URectInt32@Graphics@Windows@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180191610
 * Callers:
 *     ?SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@IPEAUIDisplayScanout@Core@Display@Devices@Windows@@_NW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x180209884 (-SetPerPresentDisplayScanoutOptions@CDDisplaySwapChain@@IEAAJPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ?_Verify_offset@?$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z @ 0x18000A774 (-_Verify_offset@-$checked_array_iterator@PEAD@stdext@@QEBAX_J@Z.c)
 *     ??0?$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z @ 0x18000CAD0 (--0-$checked_array_iterator@PEAU_LUID@@@stdext@@QEAA@QEAU_LUID@@_K1@Z.c)
 *     ??Y?$checked_array_iterator@PEAV?$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdext@@QEAAAEAV01@_J@Z @ 0x18000CAF0 (--Y-$checked_array_iterator@PEAV-$com_ptr_t@VCD2DBrush@@Uerr_returncode_policy@wil@@@wil@@@stdex.c)
 */

__int64 __fastcall detail::vector_facade<Windows::Graphics::RectInt32,detail::buffer_impl<Windows::Graphics::RectInt32,8,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int128 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-30h]
  __int128 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]

  v3 = *a1;
  v5 = (a1[1] - *a1) >> 4;
  if ( a3 > v5 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
    JUMPOUT(0x1801916FFLL);
  }
  result = (__int64)stdext::checked_array_iterator<_LUID *>::checked_array_iterator<_LUID *>(
                      &v12,
                      v3,
                      (a1[1] - *a1) >> 4);
  v8 = 16 * v7;
  if ( v7 != v5 )
  {
    v10 = v12;
    v11 = v13;
    stdext::checked_array_iterator<wil::com_ptr_t<CD2DBrush,wil::err_returncode_policy> *>::operator+=(&v10, 0LL);
    v9 = v3 + 16 * v5;
    v12 = v10;
    v13 = v11;
    stdext::checked_array_iterator<char *>::_Verify_offset((__int64)&v12, (v9 - (v3 + v8)) >> 4);
    result = std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
               (void *)(v3 + v8),
               v9,
               (void *)(v10 + 16 * v11));
  }
  a1[1] -= v8;
  return result;
}
