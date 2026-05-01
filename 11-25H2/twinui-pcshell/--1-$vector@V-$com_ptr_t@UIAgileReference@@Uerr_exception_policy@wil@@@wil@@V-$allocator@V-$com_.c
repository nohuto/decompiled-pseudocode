/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18022B0AC
 * Callers:
 *     _Microsoft::WRL::Details::Make_AgileRegistrationList::AgileCallbackArray_std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item____&__::_1_::dtor$4 @ 0x1806A5EE2 (_Microsoft--WRL--Details--Make_AgileRegistrationList--AgileCallbackArray_std--vecto_ea_1806A5EE2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>(
        void **a1)
{
  std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Tidy(a1);
}
