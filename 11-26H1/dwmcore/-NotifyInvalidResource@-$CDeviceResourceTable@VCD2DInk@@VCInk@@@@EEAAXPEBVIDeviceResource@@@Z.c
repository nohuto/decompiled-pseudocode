/*
 * XREFs of ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@EEAAXPEBVIDeviceResource@@@Z @ 0x1802495E0
 * Callers:
 *     <none>
 * Callees:
 *     ?clear_region@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18019671C (-clear_region@-$vector_facade@V-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V-$buffer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DInk,CInk>::NotifyInvalidResource(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  _QWORD *v4; // rbx
  __int64 v6; // rbx
  __int64 result; // rax

  v2 = (__int64 *)(a1 + 16);
  v4 = *(_QWORD **)(a1 + 16);
  while ( v4 != *(_QWORD **)(a1 + 24) )
  {
    if ( *v4 == a2 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v4 + 80LL))(*v4, a1);
      v6 = ((__int64)v4 - *v2) >> 3;
      detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear_region(
        v2,
        v6,
        1LL);
      result = *v2;
      v4 = (_QWORD *)(*v2 + 8 * v6);
    }
    else
    {
      ++v4;
    }
  }
  return result;
}
