/*
 * XREFs of ??1_Init_once_completer@std@@QEAA@XZ @ 0x18043E8E8
 * Callers:
 *     std::call_once__lambda_9bddc4078b1d39a971e74b38e7baa9d1___ @ 0x18043E138 (std--call_once__lambda_9bddc4078b1d39a971e74b38e7baa9d1___.c)
 *     std::call_once__lambda_1a4613c3767b380bb1c3edf448000594___ @ 0x180445CC0 (std--call_once__lambda_1a4613c3767b380bb1c3edf448000594___.c)
 *     std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___ @ 0x1804737EC (std--call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___.c)
 *     std::call_once__lambda_7955c0cef9a206a729d3199fa08370a3___ @ 0x1804763B8 (std--call_once__lambda_7955c0cef9a206a729d3199fa08370a3___.c)
 *     ?PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ @ 0x18047FCD0 (-PreCreateThumbnailDevice@ThumbnailDeviceFactory@@UEAAXXZ.c)
 *     _anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy @ 0x1805B0FE0 (_anonymous_namespace_--IsWidgetsThirdPartyFeedEnabledByRegionalPolicy.c)
 *     _std::call_once__lambda_9bddc4078b1d39a971e74b38e7baa9d1____::_1_::dtor$0 @ 0x1806C577C (_std--call_once__lambda_9bddc4078b1d39a971e74b38e7baa9d1____--_1_--dtor$0.c)
 *     __anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy_::_1_::dtor$0 @ 0x1806C599D (__anonymous_namespace_--IsWidgetsThirdPartyFeedEnabledByRegionalPolicy_--_1_--dtor$0.c)
 * Callees:
 *     __std_init_once_link_alternate_names_and_abort @ 0x1802D51C8 (__std_init_once_link_alternate_names_and_abort.c)
 */

void __fastcall std::_Init_once_completer::~_Init_once_completer(std::_Init_once_completer *this)
{
  if ( !InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL) )
    _std_init_once_link_alternate_names_and_abort();
}
