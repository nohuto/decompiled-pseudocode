/*
 * XREFs of PopHandleDevicePowerIrpCompletion @ 0x1403BE5F0
 * Callers:
 *     PopRequestCompletion @ 0x1403BE4B0 (PopRequestCompletion.c)
 * Callees:
 *     PopFxQueueWorkItem @ 0x1403966C0 (PopFxQueueWorkItem.c)
 *     PopPepDeviceDState @ 0x1403BD1C4 (PopPepDeviceDState.c)
 *     PopDequeueQuerySetIrp @ 0x1403BDC38 (PopDequeueQuerySetIrp.c)
 *     PopFreeIrp @ 0x1403BFDEC (PopFreeIrp.c)
 *     PopFxNotifyPostDIrpCompletion @ 0x14046A938 (PopFxNotifyPostDIrpCompletion.c)
 *     PopDiagTraceFxDevicePowerState @ 0x1404BE634 (PopDiagTraceFxDevicePowerState.c)
 *     Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline @ 0x140603CFC (Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline.c)
 *     PopFxNotifyPendingSIrpReady @ 0x140607E58 (PopFxNotifyPendingSIrpReady.c)
 */

char __fastcall PopHandleDevicePowerIrpCompletion(__int64 a1)
{
  IRP *v2; // rbp
  _QWORD *v3; // rbx
  int IsEnabledNoReportingNoInline; // eax
  int v5; // ecx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  bool v8; // al
  bool v9; // zf
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  int v13; // eax
  __int64 v14; // r8
  int *v15; // r14
  int v16; // ecx
  bool v17; // al
  _DWORD *v18; // rsi

  v2 = *(IRP **)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 200);
  if ( *(_BYTE *)(a1 + 184) != 2 || *(_DWORD *)(a1 + 188) != 1 || !v3 )
    goto LABEL_33;
  if ( KeGetCurrentIrql() && *(_BYTE *)(a1 + 209) )
  {
    IsEnabledNoReportingNoInline = Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline();
    v5 = *(_DWORD *)(a1 + 192);
    if ( IsEnabledNoReportingNoInline )
    {
      if ( v5 == 1 )
      {
        _m_prefetchw(v3 + 4);
        v6 = *((_DWORD *)v3 + 8);
        do
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 8, v6, v6);
        }
        while ( v7 != v6 );
        v8 = (v6 & 2) != 0;
      }
      else
      {
        v8 = 1;
      }
      v9 = !v8;
    }
    else
    {
      if ( v5 != 1 )
        return PopFxQueueWorkItem((__int64)&PopFxBlockingDeviceListLock.ReadTransferCount, (_LIST_ENTRY *)(a1 + 248));
      _m_prefetchw(v3 + 4);
      v10 = *((_DWORD *)v3 + 8);
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)v3 + 8, v10, v10);
      }
      while ( v11 != v10 );
      v9 = (v10 & 2) == 0;
    }
    if ( !v9 )
      return PopFxQueueWorkItem((__int64)&PopFxBlockingDeviceListLock.ReadTransferCount, (_LIST_ENTRY *)(a1 + 248));
  }
  if ( *(_BYTE *)(a1 + 209) )
  {
    v13 = Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline();
    v15 = (int *)(a1 + 192);
    v16 = *(_DWORD *)(a1 + 192);
    if ( v13 )
    {
      if ( v16 == 1 )
      {
        _m_prefetchw(v3 + 4);
        v17 = (_InterlockedAnd((volatile signed __int32 *)v3 + 8, 0xFFFFFFFD) & 2) != 0;
      }
      else
      {
        v17 = 1;
      }
      v18 = (_DWORD *)(a1 + 192);
      if ( !v17 )
        goto LABEL_32;
      goto LABEL_29;
    }
    v18 = (_DWORD *)(a1 + 192);
    if ( v16 != 1 )
    {
LABEL_29:
      LOBYTE(v14) = 1;
      PopPepDeviceDState(v3[7], *v15, v14, *(unsigned int *)(a1 + 280));
      PopDiagTraceFxDevicePowerState(v3[6], (unsigned int)*v15);
      if ( (unsigned int)Feature_Sx_PEP_Notification_Synchronization__private_IsEnabledNoReportingNoInline() )
      {
        if ( *v18 != 1 )
          PopFxNotifyPendingSIrpReady(v3);
      }
      goto LABEL_32;
    }
    _m_prefetchw(v3 + 4);
    if ( (_InterlockedAnd((volatile signed __int32 *)v3 + 8, 0xFFFFFFFD) & 2) != 0 )
    {
      v18 = (_DWORD *)(a1 + 192);
      goto LABEL_29;
    }
  }
LABEL_32:
  PopFxNotifyPostDIrpCompletion(v3, *(unsigned int *)(a1 + 192));
LABEL_33:
  PopDequeueQuerySetIrp((__int64)v2);
  return PopFreeIrp(v2);
}
