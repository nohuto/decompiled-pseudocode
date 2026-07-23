/*
 * XREFs of HalpWheaReadMsrMisc @ 0x14044B1DC
 * Callers:
 *     HalpMcaPopulateErrorData @ 0x14044AB14 (HalpMcaPopulateErrorData.c)
 *     HalpCmciSetProcessorConfigAMD @ 0x14044C9B8 (HalpCmciSetProcessorConfigAMD.c)
 *     HalpMcaPopulateErrorDataEx @ 0x14057D618 (HalpMcaPopulateErrorDataEx.c)
 *     HalpIsCmciImplementedAMD @ 0x140BF078C (HalpIsCmciImplementedAMD.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpWheaReadMsrMisc(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  __int64 v4; // r9
  __int64 v5; // rdx

  if ( (unsigned __int8)HalpGetCpuVendor(a1, a2, a3, a1) == 1 && HalpMcaScalableRasSupported )
    v5 = (unsigned int)(16 * v3 - 1073733629);
  else
    v5 = (unsigned int)(4 * v3 + 1027);
  return guard_dispatch_icall_no_overrides(v4, v5);
}
