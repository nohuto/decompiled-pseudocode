/*
 * XREFs of ??1?$vector_facade@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18020CE9C
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAA@XZ @ 0x180245A70 (--1-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18020CEC0 (-clear@-$vector_facade@V-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_imp.c)
 */

int __fastcall detail::vector_facade<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::~vector_facade<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>(
        void **a1)
{
  detail::vector_facade<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear();
  return detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(a1);
}
