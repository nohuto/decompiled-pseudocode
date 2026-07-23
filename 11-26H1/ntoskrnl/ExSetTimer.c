/*
 * XREFs of ExSetTimer @ 0x14037C1D0
 * Callers:
 *     EnableFlushTimer @ 0x140451B78 (EnableFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageProviderPublishTimer @ 0x140535140 (CmFcpManagerArmFeatureUsageProviderPublishTimer.c)
 *     CmFcpManagerArmFeatureUsageProviderFlushTimer @ 0x140535188 (CmFcpManagerArmFeatureUsageProviderFlushTimer.c)
 *     CmFcpManagerArmFeatureUsageRetryTimer @ 0x1406E6F60 (CmFcpManagerArmFeatureUsageRetryTimer.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x140833450 (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x140833730 (SendCaptureStateNotificationsWorker.c)
 *     WdipTimeoutCheckRoutine @ 0x140AD5830 (WdipTimeoutCheckRoutine.c)
 *     HalpPmuArbiterStartPeriodicTimer @ 0x140B133D0 (HalpPmuArbiterStartPeriodicTimer.c)
 *     ?ExpLookasideMgrSetTimer@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K@Z @ 0x140B2E800 (-ExpLookasideMgrSetTimer@@YAXPEAU_EXP_LOOKASIDE_MGR@@_K@Z.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, signed __int64 a2, signed __int64 a3, ULONG_PTR a4)
{
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v6; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 > 0 && (*(_BYTE *)(BugCheckParameter1 + 129) & 4) != 0 )
  {
    v6 = a2;
    KeBugCheckEx(0xC7u, 9uLL, 2uLL, (ULONG_PTR)&v6, 0LL);
  }
  if ( a3 < 0 )
  {
    BugCheckParameter3[0] = a3;
    KeBugCheckEx(0xC7u, 9uLL, 4uLL, (ULONG_PTR)BugCheckParameter3, 0LL);
  }
  if ( a4 && (*(_DWORD *)a4 || *(__int64 *)(a4 + 8) < -1) )
    KeBugCheckEx(0xC7u, 9uLL, 1uLL, a4, 0LL);
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return KeSetTimer2(BugCheckParameter1, a2, a3, a4);
}
