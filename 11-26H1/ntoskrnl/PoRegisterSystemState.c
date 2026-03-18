/*
 * XREFs of PoRegisterSystemState @ 0x140436880
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLegacyPowerRequestFlags @ 0x140434DB8 (PopGetLegacyPowerRequestFlags.c)
 *     PoCaptureReasonContext @ 0x140436EC8 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x140436FDC (PopPowerRequestCreateCommon.c)
 *     PopDiagTraceRegisterSystemState @ 0x140437930 (PopDiagTraceRegisterSystemState.c)
 *     PoSetSystemState @ 0x140438370 (PoSetSystemState.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x1404A61E0 (PopApplyLegacyPowerRequestFlags.c)
 *     PoDestroyReasonContext @ 0x14050A3C0 (PoDestroyReasonContext.c)
 */

PVOID __stdcall PoRegisterSystemState(PVOID StateHandle, EXECUTION_STATE Flags)
{
  _DWORD *v2; // rbx
  int v5; // eax
  PVOID v6; // rsi
  int v8; // eax
  _DWORD *v9; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0LL;
  P = 0LL;
  if ( (Flags & 0x7FFFFFF8) == 0 )
  {
    if ( (int)Flags > 0 )
    {
      PoSetSystemState(Flags);
    }
    else
    {
      PopDiagTraceRegisterSystemState(Flags, StateHandle);
      v2 = StateHandle;
      v9 = StateHandle;
      if ( StateHandle
        || (v5 = PoCaptureReasonContext(0LL, 0LL, (__int64)&P), v6 = P, v5 >= 0)
        && (v8 = PopPowerRequestCreateCommon(P, 0LL, &v9), v2 = v9, v8 >= 0) )
      {
        PopGetLegacyPowerRequestFlags(v2, Flags, 0LL);
        PopApplyLegacyPowerRequestFlags(v2);
      }
      else if ( v6 )
      {
        PoDestroyReasonContext(v6);
      }
    }
  }
  return v2;
}
