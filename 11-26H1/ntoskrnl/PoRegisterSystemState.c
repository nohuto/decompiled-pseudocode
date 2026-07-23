/*
 * XREFs of PoRegisterSystemState @ 0x140425810
 * Callers:
 *     <none>
 * Callees:
 *     PoCaptureReasonContext @ 0x140425E58 (PoCaptureReasonContext.c)
 *     PopPowerRequestCreateCommon @ 0x140425F6C (PopPowerRequestCreateCommon.c)
 *     PopDiagTraceRegisterSystemState @ 0x1404268C0 (PopDiagTraceRegisterSystemState.c)
 *     PoSetSystemState @ 0x140427290 (PoSetSystemState.c)
 *     PopApplyLegacyPowerRequestFlags @ 0x14049F870 (PopApplyLegacyPowerRequestFlags.c)
 *     PopGetLegacyPowerRequestFlags @ 0x1404B2E80 (PopGetLegacyPowerRequestFlags.c)
 *     PoDestroyReasonContext @ 0x140503E30 (PoDestroyReasonContext.c)
 */

PVOID __stdcall PoRegisterSystemState(PVOID StateHandle, EXECUTION_STATE Flags)
{
  PVOID v2; // rbx
  int v5; // eax
  PVOID v6; // rsi
  int v8; // eax
  PVOID v9; // [rsp+50h] [rbp+18h] BYREF
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
