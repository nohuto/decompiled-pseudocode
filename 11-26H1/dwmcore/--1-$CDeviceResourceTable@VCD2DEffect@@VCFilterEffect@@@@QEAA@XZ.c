/*
 * XREFs of ??1?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAA@XZ @ 0x180245A70
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180245F14 (--1CFilterEffect@@MEAA@XZ.c)
 * Callees:
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18020CEC0 (-clear@-$vector_facade@V-$com_ptr_t@VCD2DEffect@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_imp.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect>::~CDeviceResourceTable<CD2DEffect,CFilterEffect>(
        _QWORD *a1)
{
  __int64 *v1; // rsi
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi

  v1 = a1 + 2;
  *a1 = &CDeviceResourceTable<CD2DEffect,CFilterEffect>::`vftable';
  v3 = (_QWORD *)a1[2];
  v4 = (_QWORD *)a1[3];
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v3 + 80LL))(*v3, a1);
    ++v3;
  }
  detail::vector_facade<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::clear(v1);
  return detail::vector_facade<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::~vector_facade<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DEffect,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>((void **)v1);
}
