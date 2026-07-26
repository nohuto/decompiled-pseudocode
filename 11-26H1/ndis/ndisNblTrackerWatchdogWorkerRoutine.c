/*
 * XREFs of ndisNblTrackerWatchdogWorkerRoutine @ 0x14013B350
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x140015DA0 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z @ 0x140092368 (-ndisMLiveBugCheck@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_K111@Z.c)
 *     Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline @ 0x1400A4B60 (Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisWdfNotifyStuckOperation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CX_STUCK_OPERATION_TYPE@@_K@Z @ 0x1400B411C (-ndisWdfNotifyStuckOperation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CX_STUCK_OPERATION_TYPE@@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisNblTrackerWatchdogWorkerRoutine(_DWORD *P)
{
  int v1; // edx
  int v3; // edx
  __int64 v4; // rbx
  int v5; // r9d
  void (__fastcall *v6)(_QWORD); // rax

  v1 = P[2];
  if ( !v1 || (v3 = v1 - 3) == 0 || (unsigned int)(v3 - 1) <= 1 )
  {
    v4 = *(_QWORD *)P;
    if ( (_BYTE)KdDebuggerNotPresent )
      ndisMLiveBugCheck((struct _NDIS_MINIPORT_BLOCK *)v4, 48LL, *(_QWORD *)P, *(_QWORD *)(v4 + 3832), 0LL);
    if ( (unsigned int)Feature_NDPQualitySummer26__private_IsEnabledDeviceUsageNoInline() )
    {
      ndisWdfNotifyStuckOperation((struct _NDIS_MINIPORT_BLOCK *)v4, 0, 0LL, v5);
    }
    else if ( (mem::ReadNoFence<unsigned long,void>((unsigned int *)(v4 + 120)) & 0x80u) != 0LL )
    {
      v6 = *(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v4 + 3760) + 360LL) + 120LL);
      if ( v6 )
        v6(*(_QWORD *)(v4 + 24));
    }
    ndisDereferenceMiniport((struct _NDIS_MINIPORT_BLOCK *)v4, 0x68u);
  }
  ExFreePoolWithTag(P, 0);
}
