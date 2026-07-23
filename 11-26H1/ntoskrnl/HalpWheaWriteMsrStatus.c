/*
 * XREFs of HalpWheaWriteMsrStatus @ 0x14044B2BC
 * Callers:
 *     HalpMcaReadError @ 0x14044BC70 (HalpMcaReadError.c)
 *     HalpMcaClearError @ 0x14044BFF4 (HalpMcaClearError.c)
 *     HalpMcaReadErrorUncorrectedAMD @ 0x140580D68 (HalpMcaReadErrorUncorrectedAMD.c)
 *     HalpMcaSetProcessorConfig @ 0x140BEF1B8 (HalpMcaSetProcessorConfig.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpWheaWriteMsrStatus(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  __int64 v4; // r9
  __int64 v5; // rdx

  if ( (unsigned __int8)HalpGetCpuVendor(a1, a2, a3, a1) == 1 && HalpMcaScalableRasSupported )
    v5 = (unsigned int)(16 * v3 - 1073733631);
  else
    v5 = (unsigned int)(4 * v3 + 1025);
  return guard_dispatch_icall_no_overrides(v4, v5);
}
