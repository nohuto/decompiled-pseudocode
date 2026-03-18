/*
 * XREFs of ?RemoveVisualTree@CComposition@@QEAAXPEBVCVisualTree@@@Z @ 0x1801497E0
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18002456C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18008D430 (-clear_region@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_.c)
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x180149894 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 */

void __fastcall CComposition::RemoveVisualTree(CComposition *this, const struct CVisualTree *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const struct CVisualTree **i; // rdx
  _QWORD *v6; // rax

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 360);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 9);
  for ( i = (const struct CVisualTree **)*((_QWORD *)this + 50); i != *((const struct CVisualTree ***)this + 51); ++i )
  {
    if ( *i == a2 )
    {
      if ( *((_BYTE *)this + 5656) )
      {
        v6 = (_QWORD *)detail::vector_facade<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::reserve_region(
                         (char *)this + 552,
                         (__int64)(*((_QWORD *)this + 70) - *((_QWORD *)this + 69)) >> 3);
        wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
          v6,
          (__int64)a2);
      }
      else
      {
        detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::clear_region(
          (__int64 *)this + 50,
          ((__int64)i - *((_QWORD *)this + 50)) >> 3,
          1LL);
      }
      break;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
