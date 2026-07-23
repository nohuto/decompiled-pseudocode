/*
 * XREFs of ?terminate@details@gsl@@YAXXZ @ 0x1404798A4
 * Callers:
 *     ??$copy@$$CBE$0?0E$0?0@gsl@@YAXV?$span@$$CBE$0?0@0@V?$span@E$0?0@0@@Z @ 0x1404C4544 (--$copy@$$CBE$0-0E$0-0@gsl@@YAXV-$span@$$CBE$0-0@0@V-$span@E$0-0@0@@Z.c)
 *     MiPerformFixups @ 0x14099FD30 (MiPerformFixups.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x1409A0274 (RtlDoesRequireFunctionOverrideFixups.c)
 *     ?RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x1409A05D4 (-RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_IN.c)
 *     RtlCreateFunctionOverrideFixupInfo @ 0x140A6AE10 (RtlCreateFunctionOverrideFixupInfo.c)
 *     ?RtlpFindFunctionOverrideDvrtRecord@@YAJV?$span@$$CBE$0?0@gsl@@PEAV12@@Z @ 0x140A6AF88 (-RtlpFindFunctionOverrideDvrtRecord@@YAJV-$span@$$CBE$0-0@gsl@@PEAV12@@Z.c)
 *     ?RtlpCreateFunctionOverrideFixupInfo@@YAJV?$span@$$CBE$0?0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@@Z @ 0x140A6B17C (-RtlpCreateFunctionOverrideFixupInfo@@YAJV-$span@$$CBE$0-0@gsl@@KKPEBU_RTL_FUNCTION_OVERRIDE_CAP.c)
 *     ?RtlpParseBinaryDecisionDiagram@@YAJV?$span@$$CBE$0?0@gsl@@V?$span@$$CBK$0?0@2@KPEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x140A6BBBC (-RtlpParseBinaryDecisionDiagram@@YAJV-$span@$$CBE$0-0@gsl@@V-$span@$$CBK$0-0@2@KPEBU_RTL_FUNCTIO.c)
 *     ?RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV?$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0?0@gsl@@V?$span@$$CBK$0?0@2@PEAU_RTL_FUNCTION_OVERRIDE_ENTRY@@PEBU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@EPEBU_RTL_SYSTEM_OVERRIDE_INFORMATION@@K@Z @ 0x140A6BDA0 (-RtlpSelectFunctionFromBinaryDecisionDiagram@@YAXV-$span@$$CBU_IMAGE_BDD_DYNAMIC_RELOCATION@@$0-.c)
 *     ?RtlpAllocateFunctionOverrideInfo@@YAJV?$span@$$CBK$0?0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@@Z @ 0x140A6C248 (-RtlpAllocateFunctionOverrideInfo@@YAJV-$span@$$CBK$0-0@gsl@@KPEAPEAU_RTL_FUNCTION_OVERRIDE_INFO.c)
 *     ?RtlpGetFunctionOverrideIndex@@YAPEAU_RTL_FUNCTION_OVERRIDE_INDEX@@PEAU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x140A6C554 (-RtlpGetFunctionOverrideIndex@@YAPEAU_RTL_FUNCTION_OVERRIDE_INDEX@@PEAU_RTL_FUNCTION_OVERRIDE_IN.c)
 *     ?PspFinalizeScpCfgPage@@YAJV?$span@E$0?0@gsl@@W4_RTL_SCP_CFG_PAGE_TYPE@@PEAX2PEAU_RTL_SCP_CFG_NTDLL_EXPORTS@@PEAU_RTL_SCP_CFG_NTDLL_EXPORTS_ARM64EC@@EK@Z @ 0x140CDF7A8 (-PspFinalizeScpCfgPage@@YAJV-$span@E$0-0@gsl@@W4_RTL_SCP_CFG_PAGE_TYPE@@PEAX2PEAU_RTL_SCP_CFG_NT.c)
 *     PsInitializeScpCfgPages @ 0x140CDFC1C (PsInitializeScpCfgPages.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall gsl::details::terminate(gsl::details *this, __int64 a2)
{
  guard_dispatch_icall_no_overrides(this, a2);
}
