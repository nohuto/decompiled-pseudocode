/*
 * XREFs of ??1?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x1800FCA60
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAA@XZ @ 0x1800FCA34 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800FD5F0 (-clear@-$vector_facade@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 */

int __fastcall detail::vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::~vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>(
        void **a1)
{
  detail::vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear();
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(a1);
}
