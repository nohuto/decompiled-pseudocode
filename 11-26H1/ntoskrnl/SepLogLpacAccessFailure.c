/*
 * XREFs of SepLogLpacAccessFailure @ 0x1404EFB5C
 * Callers:
 *     SeAccessCheckWithHint @ 0x140301070 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x1403AD570 (SepCommonAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepGetStackTraceHash @ 0x140260450 (SepGetStackTraceHash.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     DbgkQueueUserExceptionReport @ 0x14078D54C (DbgkQueueUserExceptionReport.c)
 *     EtwTraceLpacAccessFailure @ 0x140B242FC (EtwTraceLpacAccessFailure.c)
 */

__int64 SepLogLpacAccessFailure()
{
  unsigned __int8 v1; // bl
  _DWORD v2[4]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v3; // [rsp+30h] [rbp-98h]
  int v4; // [rsp+38h] [rbp-90h]
  __int64 v5; // [rsp+40h] [rbp-88h]
  __int64 v6; // [rsp+48h] [rbp-80h]
  ULONG v7; // [rsp+D0h] [rbp+8h] BYREF

  v7 = 0;
  if ( KeGetCurrentIrql() >= 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    return 3221225659LL;
  if ( !LODWORD(RtlpBootStatHandleLock.FirstArgument) )
    return 3221226326LL;
  SepGetStackTraceHash(&v7);
  v1 = v7 ^ BYTE2(v7) ^ ((unsigned __int16)(v7 ^ HIWORD(v7)) >> 8);
  EtwTraceLpacAccessFailure(v7);
  if ( SeLpacEnableWatsonThrottling
    && _interlockedbittestandset(
         (volatile signed __int32 *)&RtlpBootStatHandleLock.SavedApcStateFill[4 * ((unsigned __int64)v1 >> 5) + 8],
         v1 & 0x1F) )
  {
    return 0LL;
  }
  memset_0(v2, 0, 0x98uLL);
  v6 = v7;
  v2[0] = -1073740791;
  v2[1] = 0;
  v3 = 0LL;
  v4 = 2;
  v5 = 43LL;
  return DbgkQueueUserExceptionReport(KeGetCurrentThread());
}
