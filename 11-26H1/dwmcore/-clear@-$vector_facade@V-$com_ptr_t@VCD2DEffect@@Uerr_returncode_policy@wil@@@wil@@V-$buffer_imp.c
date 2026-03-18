/*
 * XREFs of ?clear@?$vector_facade@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18020CEC0
 * Callers:
 *     ??1?$vector_facade@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18020CE9C (--1-$vector_facade@V-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@V-.c)
 *     ??1?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAA@XZ @ 0x180245A70 (--1-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18020AD2C (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V-$buf.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(
        __int64 *a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = (a1[1] - *a1) >> 3;
  if ( v1 )
    return detail::vector_facade<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL,
             v1);
  return result;
}
