/*
 * XREFs of HalpMcaProcessorBankClear @ 0x14044C2EC
 * Callers:
 *     HalpMcaClearError @ 0x14044BFF4 (HalpMcaClearError.c)
 * Callees:
 *     HalpWheaReadMsrStatus @ 0x14044BAE8 (HalpWheaReadMsrStatus.c)
 *     HalpGetCpuVendor @ 0x14044BB30 (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpMcaProcessorBankClear(__int64 a1, int a2)
{
  __int64 MsrStatus; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  LOBYTE(MsrStatus) = HalpGetCpuVendor();
  if ( (_BYTE)MsrStatus == 1 )
  {
    if ( HalpMcaScalableRasSupported )
    {
      MsrStatus = HalpWheaReadMsrStatus(a1, v5, 0LL);
      if ( (MsrStatus & 0x100000000000LL) != 0 )
      {
        v6 = (unsigned int)(16 * a2 - 1073733624);
LABEL_8:
        LOBYTE(MsrStatus) = guard_dispatch_icall_no_overrides(a1, v6);
      }
    }
  }
  else if ( (_BYTE)MsrStatus == 2 )
  {
    MsrStatus = guard_dispatch_icall_no_overrides(a1, 377LL);
    if ( (MsrStatus & 0xFF0000) != 0 )
    {
      v6 = 392LL;
      goto LABEL_8;
    }
  }
  return MsrStatus;
}
