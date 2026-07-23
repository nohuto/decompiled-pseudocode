/*
 * XREFs of PopFxHandleReportDevicePoweredOn @ 0x1404D4680
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x1404D4660 (PoFxReportDevicePoweredOn.c)
 *     DifPoFxReportDevicePoweredOnWrapper @ 0x140697500 (DifPoFxReportDevicePoweredOnWrapper.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     PopFxQueueWorkItem @ 0x1403966C0 (PopFxQueueWorkItem.c)
 *     PoFxIdleComponent @ 0x140396D60 (PoFxIdleComponent.c)
 *     PopFxBugCheck @ 0x1403BAB64 (PopFxBugCheck.c)
 *     PopFxCompleteDevicePowerRequired @ 0x1403BCB54 (PopFxCompleteDevicePowerRequired.c)
 *     PopPepDeviceDState @ 0x1403BD1C4 (PopPepDeviceDState.c)
 *     PopFxGetDeviceDStateReason @ 0x1404BDBEC (PopFxGetDeviceDStateReason.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1404BE634 (PopDiagTraceFxDevicePowerState.c)
 *     PopFxDerefAndCompleteDirectedPowerTransition @ 0x1404F6108 (PopFxDerefAndCompleteDirectedPowerTransition.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x140603CFC (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 *     PopFxNotifyPendingSIrpReady @ 0x140607E58 (PopFxNotifyPendingSIrpReady.c)
 *     PopSystemIrpCompletion @ 0x140C13DC0 (PopSystemIrpCompletion.c)
 */

char __fastcall PopFxHandleReportDevicePoweredOn(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r14
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  int IsEnabledNoReportingNoInline; // eax
  unsigned int DeviceDStateReason; // eax
  __int64 v7; // r8
  KIRQL v8; // al
  __int64 v9; // rsi
  int v10; // edi
  KIRQL v11; // r12
  int v12; // ebp
  __int64 v13; // rdx
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  unsigned int v16; // eax
  __int64 v17; // r15
  unsigned int i; // ebp
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  signed __int32 v21; // eax
  signed __int32 v22; // ett

  v1 = *(_QWORD *)(BugCheckParameter2 + 48);
  if ( !KeGetCurrentIrql() )
    goto LABEL_6;
  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  v3 = *(_DWORD *)(BugCheckParameter2 + 32);
  do
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v3, v3);
  }
  while ( v4 != v3 );
  if ( (v3 & 2) != 0 )
  {
    LOBYTE(IsEnabledNoReportingNoInline) = PopFxQueueWorkItem(
                                             (__int64)&PopFxBlockingDeviceListLock.ReadTransferCount,
                                             (_LIST_ENTRY *)(BugCheckParameter2 + 1248));
  }
  else
  {
LABEL_6:
    _m_prefetchw((const void *)(BugCheckParameter2 + 32));
    if ( (_InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 32), 0xFFFFFFFD) & 2) != 0 )
    {
      DeviceDStateReason = PopFxGetDeviceDStateReason(BugCheckParameter2);
      LOBYTE(v7) = 1;
      PopPepDeviceDState(*(_QWORD *)(BugCheckParameter2 + 56), 1, v7, DeviceDStateReason);
      PopDiagTraceFxDevicePowerState(v1, 1);
    }
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
    v9 = 0LL;
    v10 = _InterlockedExchange((volatile __int32 *)(v1 + 124), 0);
    v11 = v8;
    if ( v10 > 0 )
    {
      v12 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL);
      if ( v10 > v12 )
        PopFxBugCheck(0x602uLL, v1, v10, 0LL);
      _InterlockedAnd(
        (volatile signed __int32 *)(BugCheckParameter2 + 32),
        (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline() != 0
      ? -16386
      : -18434);
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 120LL) = v12 - v10;
      v13 = *(_QWORD *)(BugCheckParameter2 + 48);
      _m_prefetchw((const void *)(v13 + 296));
      v14 = *(_DWORD *)(v13 + 296);
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 296), v14, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 4) != 0 )
      {
        v16 = *(_DWORD *)(BugCheckParameter2 + 868);
        v17 = (unsigned int)v10;
        do
        {
          for ( i = 0; i < v16; ++i )
          {
            PoFxIdleComponent(BugCheckParameter2, i);
            v16 = *(_DWORD *)(BugCheckParameter2 + 868);
          }
          --v17;
        }
        while ( v17 );
      }
      if ( !(unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline() )
      {
        _m_prefetchw((const void *)(BugCheckParameter2 + 32));
        v19 = *(_DWORD *)(BugCheckParameter2 + 32);
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v19 & 0xFFFFFBFF, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 0x400) != 0 )
          v9 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 280LL);
      }
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88), v11);
    IsEnabledNoReportingNoInline = Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline();
    if ( IsEnabledNoReportingNoInline )
    {
      LOBYTE(IsEnabledNoReportingNoInline) = PopFxNotifyPendingSIrpReady(BugCheckParameter2);
    }
    else if ( v9 )
    {
      LOBYTE(IsEnabledNoReportingNoInline) = PopSystemIrpCompletion(
                                               0LL,
                                               v9,
                                               *(_QWORD *)(v9 + 72LL * *(char *)(v9 + 66) + 200));
    }
    if ( !v10 )
    {
      _m_prefetchw((const void *)(BugCheckParameter2 + 32));
      v21 = *(_DWORD *)(BugCheckParameter2 + 32);
      do
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 32), v21, v21);
      }
      while ( v22 != v21 );
      if ( (v21 & 0x2000) != 0 )
        LOBYTE(IsEnabledNoReportingNoInline) = PopFxDerefAndCompleteDirectedPowerTransition(BugCheckParameter2);
      else
        LOBYTE(IsEnabledNoReportingNoInline) = PopFxCompleteDevicePowerRequired(BugCheckParameter2, 0LL);
    }
  }
  return IsEnabledNoReportingNoInline;
}
