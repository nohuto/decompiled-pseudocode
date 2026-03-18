/*
 * XREFs of DpiMiracastReleaseMiracastDeviceContext @ 0x14006CDEC
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x14004C670 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x14004CCA0 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     DxgkMiracastStartMiracastSession @ 0x1400685F0 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x140088980 (DpiMiracastStopMiracastSessionAsync.c)
 *     DpiMiracastTargetDeviceChange @ 0x140088AC0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x140088FAC (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastGetNextChunkInfo @ 0x140089444 (DxgkMiracastGetNextChunkInfo.c)
 *     DxgkMiracastStopMiracastSession @ 0x140089744 (DxgkMiracastStopMiracastSession.c)
 *     DpiMiracastStopMiracastSessionWork @ 0x140196620 (DpiMiracastStopMiracastSessionWork.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x14024C490 (DpiMiracastCbSendUserModeMessage.c)
 *     DpiMiracastStartSessionRequestCallback @ 0x14024D530 (DpiMiracastStartSessionRequestCallback.c)
 *     DpiMiracastStopSessionRequestCallback @ 0x14024D610 (DpiMiracastStopSessionRequestCallback.c)
 *     DxgkMiracastQueryMiracastStatus @ 0x14024D658 (DxgkMiracastQueryMiracastStatus.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1403B5090 (DxgkMiracastStopAllMiracastSessions.c)
 *     DpiFdoStopMiracastSession @ 0x1403FB020 (DpiFdoStopMiracastSession.c)
 *     DxgkHandleMiracastEscape @ 0x14042CB5C (DxgkHandleMiracastEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastReleaseMiracastDeviceContext(int *P, unsigned int a2)
{
  __int64 v3; // rax
  void *v4; // rcx
  void *v5; // rcx
  _QWORD *v6; // rcx
  PVOID *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  _InterlockedXor(P + 7, a2);
  if ( _InterlockedExchangeAdd(P + 6, 0xFFFFFFFF) == 1 )
  {
    v3 = P[7];
    memset(&LockHandle, 0, sizeof(LockHandle));
    if ( (_DWORD)v3 )
    {
      WdLogSingleEntry2(2LL, v3, -1073741823LL);
      WdLogGlobalForLineNumber = 643;
    }
    v4 = (void *)*((_QWORD *)P + 60);
    P[4] = 0;
    if ( v4 )
      ObfDereferenceObject(v4);
    ObfDereferenceObject(*((PVOID *)P + 58));
    v5 = (void *)*((_QWORD *)P + 74);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v6 = *(_QWORD **)P;
    if ( *(int **)(*(_QWORD *)P + 8LL) != P || (v7 = (PVOID *)*((_QWORD *)P + 1), *v7 != P) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExFreePoolWithTag(P, 0);
  }
}
