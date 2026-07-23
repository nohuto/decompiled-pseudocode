/*
 * XREFs of KiProcessDeferredDpcWatchdogViolation @ 0x14032F218
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14032F7F0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x14036A2A0 (VslKernelShadowStackAssist.c)
 */

void (__fastcall __noreturn *__fastcall KiProcessDeferredDpcWatchdogViolation(__int64 a1))()
{
  void (__fastcall __noreturn *result)(); // rax

  *(_QWORD *)&KsepShimDbLock.PriorityFloorCounts[16] = 1LL;
  *(_OWORD *)&KsepShimDbLock.ForegroundLossTime = 0LL;
  *(_OWORD *)&KsepShimDbLock.InGlobalForegroundList = 0LL;
  *(_OWORD *)&KsepShimDbLock.WriteOperationCount = 0LL;
  LOWORD(KsepShimDbLock.WriteOperationCount) = *(_WORD *)(a1 + 392);
  KsepShimDbLock.ReadOperationCount = *(_QWORD *)(a1 + 384);
  LODWORD(KsepShimDbLock.InGlobalForegroundList) = *(_DWORD *)(a1 + 376);
  LOWORD(KsepShimDbLock.GlobalForegroundListEntry.Flink) = *(_WORD *)(a1 + 368);
  *(_QWORD *)&KsepShimDbLock.ForegroundLossTime = *(_QWORD *)(a1 + 360);
  KsepShimDbLock.OtherOperationCount = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = &KsepShimDbLock.ForegroundLossTime;
  result = KiDeferredDpcWatchdogViolation;
  *(_QWORD *)(a1 + 360) = KiDeferredDpcWatchdogViolation;
  if ( (_BYTE)KiKernelCetEnabled )
    return (void (__fastcall __noreturn *)())VslKernelShadowStackAssist(
                                               3,
                                               *(_QWORD *)(a1 + 216),
                                               0,
                                               0,
                                               (__int64)KiDeferredDpcWatchdogViolation,
                                               4);
  return result;
}
