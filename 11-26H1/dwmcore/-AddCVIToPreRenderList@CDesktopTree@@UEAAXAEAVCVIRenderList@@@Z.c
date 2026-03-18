/*
 * XREFs of ?AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z @ 0x180170760
 * Callers:
 *     <none>
 * Callees:
 *     ??$insert_unchecked@AEBVCVIRenderList@@@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@VCVIRenderList@@@1@V?$basic_iterator@$$CBVCVIRenderList@@@1@AEBVCVIRenderList@@@Z @ 0x180170794 (--$insert_unchecked@AEBVCVIRenderList@@@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRende.c)
 */

void __fastcall CDesktopTree::AddCVIToPreRenderList(CDesktopTree *this, struct CVIRenderList *a2)
{
  char *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  char v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = (char *)this + 4120;
  v3 = *((_QWORD *)v2 + 1);
  detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::insert_unchecked<CVIRenderList const &>(
    v2,
    &v4,
    &v3,
    a2);
}
