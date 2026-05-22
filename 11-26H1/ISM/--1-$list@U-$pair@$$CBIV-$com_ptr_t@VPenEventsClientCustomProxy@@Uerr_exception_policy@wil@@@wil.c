/*
 * XREFs of ??1?$list@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x180198B2C
 * Callers:
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$13 @ 0x1801D5A5E (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$13.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801989FC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$com_ptr_t@VPenEventsClientCustomPro.c)
 */

void __fastcall std::list<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>::~list<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>>(
        __int64 ***a1)
{
  std::_List_node<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x20);
}
