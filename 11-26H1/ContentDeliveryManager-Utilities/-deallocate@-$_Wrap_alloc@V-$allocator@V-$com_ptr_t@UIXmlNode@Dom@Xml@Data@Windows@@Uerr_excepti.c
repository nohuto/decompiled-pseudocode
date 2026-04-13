/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXPEAV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x1800B1EE8
 * Callers:
 *     _std::vector_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy__std::allocator_wil::com_ptr_t_Windows::Data::Xml::Dom::IXmlNode_wil::err_exception_policy_____::_Reallocate_::_1_::catch$0 @ 0x1800BF00E (_std--vector_wil--com_ptr_t_Windows--Data--Xml--Dom--IXmlNode_wil--err_exception_policy__std--al.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>>::deallocate(
        __int64 a1,
        void *a2)
{
  operator delete(a2);
}
