/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes_::_1_::dtor$1 @ 0x1800BEBCA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180067F88 (--1-$vector@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 */

void __fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::~vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>(*(_QWORD **)(a2 + 64));
  }
}
