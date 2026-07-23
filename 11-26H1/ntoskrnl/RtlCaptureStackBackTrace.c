/*
 * XREFs of RtlCaptureStackBackTrace @ 0x140260E90
 * Callers:
 *     PsBoostThreadIoEx @ 0x140248200 (PsBoostThreadIoEx.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     MiCaptureStackTraceCallout @ 0x1402603D4 (MiCaptureStackTraceCallout.c)
 *     DifGetReturnAddressForWrappers @ 0x14026040C (DifGetReturnAddressForWrappers.c)
 *     SepGetStackTraceHash @ 0x140260450 (SepGetStackTraceHash.c)
 *     RtlGetCallersAddress @ 0x1402605A0 (RtlGetCallersAddress.c)
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 *     PsBoostThreadIo @ 0x1403053C0 (PsBoostThreadIo.c)
 *     MiShowBadMapper @ 0x14036876C (MiShowBadMapper.c)
 *     RtlpHpHeapHandleError @ 0x140528F88 (RtlpHpHeapHandleError.c)
 *     RtlpHpPgContextFree @ 0x14063D310 (RtlpHpPgContextFree.c)
 *     CarInitializeTelemetryData @ 0x14064D870 (CarInitializeTelemetryData.c)
 *     UcOnUnexpectedCodePath @ 0x140717648 (UcOnUnexpectedCodePath.c)
 *     CmpLogDirtyVectorUse @ 0x1408BD7B8 (CmpLogDirtyVectorUse.c)
 *     HvpMarkDirty @ 0x1408E1510 (HvpMarkDirty.c)
 *     VfPendingFinishLogging @ 0x140C35EF0 (VfPendingFinishLogging.c)
 *     ViFaultsTracesLog @ 0x140C3B000 (ViFaultsTracesLog.c)
 *     VfDeadlockInitializeResource @ 0x140C3C330 (VfDeadlockInitializeResource.c)
 *     ViIrqlLogCRStackTrace @ 0x140C426F8 (ViIrqlLogCRStackTrace.c)
 *     VfDeadlockReleaseResource @ 0x140C4A94C (VfDeadlockReleaseResource.c)
 *     ViPtCaptureStackTraceCallout @ 0x140C4B190 (ViPtCaptureStackTraceCallout.c)
 *     IovpLogStackCallout @ 0x140C4BEC0 (IovpLogStackCallout.c)
 *     VfDeadlockAcquireResource @ 0x140C4D324 (VfDeadlockAcquireResource.c)
 *     ViKeIrqlLogCommon @ 0x140C4D9E8 (ViKeIrqlLogCommon.c)
 *     VfCheckUserHandle @ 0x140C4DC48 (VfCheckUserHandle.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1402622E0 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v7; // ebx
  ULONG i; // eax
  unsigned int v9; // r8d
  ULONG v10; // edx
  __int64 v11; // rcx

  v4 = 0xFFFF;
  if ( FramesToCapture <= 0xFFFF )
    v4 = FramesToCapture;
  if ( FramesToSkip > 0xFE
    || (v7 = FramesToSkip + 1, i = RtlWalkFrameChain(BackTrace, v4 + v7, v7 << 8), v9 = i, i <= v7) )
  {
    LOWORD(i) = 0;
  }
  else if ( BackTraceHash )
  {
    v10 = 0;
    for ( i = 0; i < v4; v10 += LODWORD(BackTrace[v11]) )
    {
      if ( i + v7 >= v9 )
        break;
      v11 = i++;
    }
    *BackTraceHash = v10;
  }
  else
  {
    LOWORD(i) = i - v7;
  }
  return i;
}
