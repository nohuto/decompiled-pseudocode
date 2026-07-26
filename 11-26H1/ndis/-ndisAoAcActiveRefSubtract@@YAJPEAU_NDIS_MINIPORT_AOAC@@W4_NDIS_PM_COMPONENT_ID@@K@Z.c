/*
 * XREFs of ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x140048C90
 * Callers:
 *     ndisDispatchRequest @ 0x14000C5E0 (ndisDispatchRequest.c)
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x140045330 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x140045A40 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x140046240 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140048630 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x140049D50 (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     NdisReleaseNicActive @ 0x14007A6C0 (NdisReleaseNicActive.c)
 * Callees:
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x140048D50 (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 *     ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x140048D80 (-ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400E7FA8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ndisAoAcActiveRefSubtract(__int64 a1, int a2, int a3)
{
  __int64 v4; // rbp
  unsigned int v5; // edi
  __int64 v6; // rsi
  bool v7; // sf

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 52) - a3;
  *(_DWORD *)(a1 + 52) = v5;
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 4LL * a2 + 468) - a3 < 0;
  *(_DWORD *)(a1 + 4LL * a2 + 468) -= a3;
  if ( v7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( *(_BYTE *)(a1 + 1081) && !*(_DWORD *)(a1 + 4 * v4 + 468) )
  {
    if ( *(_QWORD *)(a1 + 16 * (v4 + 34)) )
      ndisCloseTimeInterval((unsigned __int64 *)(16 * v6 + a1 + 536 + 8), (unsigned __int64 *)(16 * v6 + a1 + 536));
    if ( (_DWORD)v4 == 15 )
    {
      ndisAoAcStartRefTimeStats((struct _NDIS_MINIPORT_AOAC *)a1);
    }
    else if ( v5 == 1 && *(_QWORD *)(a1 + 544) )
    {
      *(_QWORD *)(a1 + 544) = MEMORY[0xFFFFF78000000008];
    }
  }
  return v5;
}
