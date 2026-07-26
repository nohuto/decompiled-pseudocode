/*
 * XREFs of ndisReportTimeoutWaitingForExternalDriver @ 0x1401452A8
 * Callers:
 *     ndisFindSomeoneToBlame @ 0x140145154 (ndisFindSomeoneToBlame.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisLiveBugCheck@@YAX_K000@Z @ 0x140092320 (-ndisLiveBugCheck@@YAX_K000@Z.c)
 *     ?ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z @ 0x140092368 (-ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z.c)
 *     Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x1400A4B60 (Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline.c)
 *     ndisWatchdogReportTimeoutToDriver @ 0x1400C98C0 (ndisWatchdogReportTimeoutToDriver.c)
 *     ndisGetMiniportFromObject @ 0x140156480 (ndisGetMiniportFromObject.c)
 */

void __fastcall ndisReportTimeoutWaitingForExternalDriver(unsigned int a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // rsi
  struct _NDIS_MINIPORT_BLOCK *MiniportFromObject; // rbp
  bool v5; // dl
  char v6; // bl

  v2 = a1;
  MiniportFromObject = (struct _NDIS_MINIPORT_BLOCK *)ndisGetMiniportFromObject(*(_QWORD *)(a2 + 16));
  v5 = MmIsDriverVerifying((struct _DRIVER_OBJECT *)ndisDriverObject) != 0;
  v6 = v5;
  if ( MiniportFromObject )
  {
    if ( MiniportFromObject->AoAc
      && MiniportFromObject->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi
      && !ndisWatchdogForceBugCheckForWDI )
    {
      v6 = 1;
    }
    else if ( (_DWORD)v2 == 39 && MiniportFromObject->DriverHandle->HookType == NdisMiniportHookDriverTypeWdi )
    {
      v6 = v5;
      if ( !ndisBugCheckOnReenumerationTimeout )
        v6 = 1;
    }
  }
  if ( (unsigned int)Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline() )
    ndisWatchdogReportTimeoutToDriver(v2, a2);
  if ( v6 )
    ndisBugCheckEx(0x25uLL, v2, a2, *(_QWORD *)(a2 + 40));
  if ( (_BYTE)KdDebuggerNotPresent )
  {
    if ( !MiniportFromObject || (_DWORD)v2 == 34 )
      ndisLiveBugCheck(37LL, v2, a2, *(_QWORD *)(a2 + 40));
    else
      ndisMLiveBugCheck(MiniportFromObject, 37LL, v2, a2, *(_QWORD *)(a2 + 40));
  }
}
