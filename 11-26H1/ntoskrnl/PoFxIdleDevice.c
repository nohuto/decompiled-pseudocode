/*
 * XREFs of PoFxIdleDevice @ 0x1404B2604
 * Callers:
 *     PopFxIdleDevicesFromSx @ 0x1404B2050 (PopFxIdleDevicesFromSx.c)
 *     PopCompleteDirectedPowerTransitionCallback @ 0x1404B2140 (PopCompleteDirectedPowerTransitionCallback.c)
 *     PopFxClearDeviceConstraints @ 0x1404E2030 (PopFxClearDeviceConstraints.c)
 *     PoFxAddDeviceRelation @ 0x140604200 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140604860 (PoFxRemoveDeviceRelation.c)
 *     PopPepPlatformStateRegistered @ 0x140611864 (PopPepPlatformStateRegistered.c)
 *     PopPlIdleDeviceIterator @ 0x140612630 (PopPlIdleDeviceIterator.c)
 *     PiProcessResourceRequirementsChanged @ 0x1407A50B4 (PiProcessResourceRequirementsChanged.c)
 *     PnpCancelStopDeviceNode @ 0x1407B3AD4 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x1407B4DF4 (PipProcessRestartPhase2.c)
 *     PipProcessDevNodeTree @ 0x14090C86C (PipProcessDevNodeTree.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x14090D1F0 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateDevice @ 0x14090DEA8 (PipEnumerateDevice.c)
 *     PiProcessQueryDeviceState @ 0x14090E340 (PiProcessQueryDeviceState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A89F58 (PnpDeleteLockedDeviceNodes.c)
 *     PnpDeleteLockedDeviceNode @ 0x140A8A1F0 (PnpDeleteLockedDeviceNode.c)
 *     PopFxUpdateVetoMaskWork @ 0x140B40080 (PopFxUpdateVetoMaskWork.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     PoFxIdleComponent @ 0x140394FE0 (PoFxIdleComponent.c)
 */

void __fastcall PoFxIdleDevice(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  volatile LONG *v3; // rsi
  KIRQL v4; // al
  int v5; // edx
  KIRQL v6; // bp
  ULONG_PTR v7; // rbx

  if ( a1 )
  {
    v1 = 0;
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( v2 )
    {
      v3 = (volatile LONG *)(v2 + 88);
      v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 88));
      v5 = *(_DWORD *)(v2 + 120);
      v6 = v4;
      _m_prefetchw((const void *)(v2 + 296));
      if ( (_InterlockedOr((volatile signed __int32 *)(v2 + 296), 0) & 4) == 0
        || (*(_DWORD *)(*(_QWORD *)(v2 + 80) + 864LL) & 1) == 0 )
      {
        *(_DWORD *)(v2 + 120) = v5 - 1;
        _m_prefetchw((const void *)(v2 + 296));
        if ( (_InterlockedOr((volatile signed __int32 *)(v2 + 296), 0) & 4) != 0 )
        {
          v7 = *(_QWORD *)(v2 + 80);
          if ( *(_DWORD *)(v7 + 868) )
          {
            do
              PoFxIdleComponent(v7, v1++);
            while ( v1 < *(_DWORD *)(v7 + 868) );
          }
        }
      }
      ExReleaseSpinLockExclusive(v3, v6);
    }
  }
}
