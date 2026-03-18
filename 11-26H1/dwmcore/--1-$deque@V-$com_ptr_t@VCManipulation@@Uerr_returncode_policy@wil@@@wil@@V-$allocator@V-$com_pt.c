/*
 * XREFs of ??1?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18013D750
 * Callers:
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x18013C898 (--1InteractionSourceManager@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18013D780 (-_Tidy@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 */

void __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::~deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>(
        void **a1)
{
  void *v2; // rcx

  std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Tidy(a1);
  v2 = *a1;
  *a1 = 0LL;
  std::_Deallocate<16>(v2, 0x10uLL);
}
