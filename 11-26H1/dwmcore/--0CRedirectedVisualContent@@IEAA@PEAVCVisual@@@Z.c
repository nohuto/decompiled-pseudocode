/*
 * XREFs of ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x18014DB08
 * Callers:
 *     ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18014DA44 (-Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z @ 0x1800F80BC (--0-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedTexture@@@Z.c)
 */

CRedirectedVisualContent *__fastcall CRedirectedVisualContent::CRedirectedVisualContent(
        CRedirectedVisualContent *this,
        struct CVisual *a2)
{
  __int64 v2; // rax
  CRedirectedVisualContent *result; // rax

  v2 = *((_QWORD *)a2 + 3);
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = v2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CRedirectedVisualContent::`vftable';
  wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>::com_ptr_t<CCachedTexture,wil::err_returncode_policy>(
    (_QWORD *)this + 9,
    (__int64)a2);
  result = this;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
