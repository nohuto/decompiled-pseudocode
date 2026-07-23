/*
 * XREFs of PopFxCompleteDirectedPowerTransition @ 0x1406075B8
 * Callers:
 *     PopFxHandleDirectedPowerTransition @ 0x1403C172C (PopFxHandleDirectedPowerTransition.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1404F6108 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 * Callees:
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1403B8400 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1404AB64C (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x14050DD08 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopFxEnforceDirectedPowerTransition @ 0x1406079E8 (PopFxEnforceDirectedPowerTransition.c)
 */

LONG __fastcall PopFxCompleteDirectedPowerTransition(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  KIRQL v8; // r12
  unsigned __int8 v9; // r9
  unsigned __int32 v10; // eax
  unsigned __int32 v11; // ett
  int v12; // esi
  __int64 v13; // r14
  unsigned int v14; // edi

  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v4 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v4, v4);
  }
  while ( v5 != v4 );
  if ( (v4 & 0x2000) == 0 )
    goto LABEL_18;
  _m_prefetchw((const void *)(BugCheckParameter3 + 1200));
  v6 = *(_DWORD *)(BugCheckParameter3 + 1200);
  do
  {
    v7 = v6;
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 1200), v6, v6);
  }
  while ( v7 != v6 );
  if ( v6 )
    goto LABEL_18;
  PopFxDisableWorkOrderWatchdog((__int64 *)(BugCheckParameter3 + 1016));
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3 + 1192));
  PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 1LL);
  _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter3 + 32), 0xFFFFDFFF);
  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v10 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v11 = v10;
    v10 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v10, v10);
  }
  while ( v11 != v10 );
  if ( (v9 & (unsigned __int8)(v10 >> 12)) != a2 )
LABEL_18:
    PopFxBugCheck(0x910uLL, 2uLL, BugCheckParameter3, 0LL);
  if ( !a2 )
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter3 + 32), 0xFFFFBFFF);
  v12 = *(_DWORD *)(BugCheckParameter3 + 1220);
  v13 = *(_QWORD *)(BugCheckParameter3 + 1208);
  v14 = *(_DWORD *)(BugCheckParameter3 + 1216);
  *(_DWORD *)(BugCheckParameter3 + 1220) = v12 & 0xFFFFFFFD;
  *(_QWORD *)(BugCheckParameter3 + 1208) = 0LL;
  *(_DWORD *)(BugCheckParameter3 + 1216) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter3 + 1192), v8);
  PopDiagTraceFxDeviceDirectedCompletion(*(_QWORD *)(BugCheckParameter3 + 48), a2);
  if ( stru_140F12EA0.WaitBlockFill6[108] )
    goto LABEL_16;
  if ( (v12 & 2) == 0 )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 864) & 1) == 0 )
      goto LABEL_17;
LABEL_16:
    v14 = 0;
    goto LABEL_17;
  }
  PopFxEnforceDirectedPowerTransition(BugCheckParameter3);
LABEL_17:
  PopCompleteDirectedPowerTransitionCallback(BugCheckParameter3, v13, v14);
  return PopFxDereferenceDevice(BugCheckParameter3, 5);
}
