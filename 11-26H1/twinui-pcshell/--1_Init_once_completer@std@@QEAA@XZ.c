/*
 * XREFs of ??1_Init_once_completer@std@@QEAA@XZ @ 0x18044AF10
 * Callers:
 *     std::call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___ @ 0x1801D0A00 (std--call_once__lambda_74a3d5ef1a851f826ae0f3c921cff92c___.c)
 *     std::call_once__lambda_f5c7a19be5cc201203fc8ae0f408e847___ @ 0x1804523F4 (std--call_once__lambda_f5c7a19be5cc201203fc8ae0f408e847___.c)
 *     std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___ @ 0x18048274C (std--call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___.c)
 *     std::call_once__lambda_51403b28e8b81be276cead8d023ce32d___ @ 0x180485D60 (std--call_once__lambda_51403b28e8b81be276cead8d023ce32d___.c)
 *     ??$call_once@V_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@@Z @ 0x18048F68C (--$call_once@V_lambda_e35956ba6a8ff235f94dfb0bc6bc2b98_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 *     _anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy @ 0x1805D4EA0 (_anonymous_namespace_--IsWidgetsThirdPartyFeedEnabledByRegionalPolicy.c)
 *     _std::call_once__lambda_e35956ba6a8ff235f94dfb0bc6bc2b98____::_1_::dtor$0 @ 0x1806D9FF1 (_std--call_once__lambda_e35956ba6a8ff235f94dfb0bc6bc2b98____--_1_--dtor$0.c)
 *     __anonymous_namespace_::IsWidgetsThirdPartyFeedEnabledByRegionalPolicy_::_1_::dtor$0 @ 0x1806ED855 (__anonymous_namespace_--IsWidgetsThirdPartyFeedEnabledByRegionalPolicy_--_1_--dtor$0.c)
 * Callees:
 *     __std_init_once_link_alternate_names_and_abort @ 0x1802CDBA8 (__std_init_once_link_alternate_names_and_abort.c)
 */

void __fastcall std::_Init_once_completer::~_Init_once_completer(std::_Init_once_completer *this)
{
  if ( !InitOnceComplete(*(LPINIT_ONCE *)this, *((_DWORD *)this + 2), 0LL) )
    _std_init_once_link_alternate_names_and_abort();
}
