/*
 * XREFs of ??$emplace@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@1@V?$basic_iterator@$$CBV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@1@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801D0BB0
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1800FE020 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800F5FD8 (--1-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1800F8660 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@w.c)
 */

_QWORD *__fastcall detail::vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::emplace<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v6; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8

  v6 = (*a3 - *a1) >> 3;
  v8 = (_QWORD *)detail::vector_facade<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD3DConstantBuffer,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                   a1,
                   v6,
                   (__int64)a3);
  v9 = *a4;
  *a4 = 0LL;
  *v8 = v9;
  *a2 = *a1 + 8 * v6;
  wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::~com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>(a4);
  return a2;
}
