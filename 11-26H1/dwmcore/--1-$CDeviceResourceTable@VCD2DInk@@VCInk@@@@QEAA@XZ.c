/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ @ 0x180245AE8
 * Callers:
 *     ??1CInk@@UEAA@XZ @ 0x180245FA4 (--1CInk@@UEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801966F4 (-clear@-$vector_facade@V-$com_ptr_t@VCD2DInk@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@V.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CDeviceResourceTable<CD2DInk,CInk>::~CDeviceResourceTable<CD2DInk,CInk>(_QWORD *a1)
{
  void **v1; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi

  v1 = (void **)(a1 + 2);
  *a1 = &CDeviceResourceTable<CD2DInk,CInk>::`vftable';
  v3 = (_QWORD *)a1[2];
  v4 = (_QWORD *)a1[3];
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v3 + 80LL))(*v3, a1);
    ++v3;
  }
  detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(v1);
  return detail::vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::~vector_facade<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>(v1);
}
