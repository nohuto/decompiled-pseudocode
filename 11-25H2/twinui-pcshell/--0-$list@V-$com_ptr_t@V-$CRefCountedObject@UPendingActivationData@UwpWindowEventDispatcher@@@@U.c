/*
 * XREFs of ??0?$list@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800E3710
 * Callers:
 *     ??0UwpWindowEventDispatcher@@QEAA@XZ @ 0x1800E2848 (--0UwpWindowEventDispatcher@@QEAA@XZ.c)
 *     ??0?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@I@1@@Z @ 0x1801D7A98 (--0-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$allocator.c)
 *     ??$?0V?$allocator@U?$_List_node@IPEAX@std@@@std@@@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@IPEAX@std@@@1@@Z @ 0x18063BB4C (--$-0V-$allocator@U-$_List_node@IPEAX@std@@@std@@@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::list<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>::list<wil::com_ptr_t<CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>,wil::err_exception_policy>>(
        _QWORD *a1)
{
  _QWORD *v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
  *v2 = v2;
  v2[1] = v2;
  *a1 = v2;
  return a1;
}
