/*
 * XREFs of PopDripsWatchdogCheckHwDivergence @ 0x1407E2930
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x1407E2A20 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 */

NTSTATUS __fastcall PopDripsWatchdogCheckHwDivergence(unsigned __int64 a1, unsigned __int64 a2)
{
  NTSTATUS result; // eax
  unsigned __int64 v3; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+58h] [rbp-20h]

  if ( a2 > a1 )
  {
    result = PopDripsSwHwDivergenceThreshold;
    if ( (unsigned int)PopDripsSwHwDivergenceThreshold < (a2 - a1) / 0xF4240 )
    {
      v3 = a2;
      v4 = a1;
      result = ZwUpdateWnfStateData(&WNF_PO_SW_HW_DRIPS_DIVERGENCE, &v3, 0x10u, 0LL, 0LL, 0, 0);
      if ( PopDripsSwHwDivergenceEnableLiveDump )
        return DbgkWerCaptureLiveKernelDump((unsigned int)L"DripsDiverge", 420, v3, v4, 0LL, 0LL, 0LL, 0LL, 0);
    }
  }
  return result;
}
