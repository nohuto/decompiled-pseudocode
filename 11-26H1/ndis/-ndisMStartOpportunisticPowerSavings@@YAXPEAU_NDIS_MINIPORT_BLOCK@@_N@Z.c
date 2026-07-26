/*
 * XREFs of ?ndisMStartOpportunisticPowerSavings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x14015C440
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x14015C1E0 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400457F0 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006AF00 (-ndisSetMediaDisconnectTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140087E90 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall ndisMStartOpportunisticPowerSavings(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  bool v4; // zf

  if ( a1->MediaConnectState == MediaConnectStateDisconnected )
    ndisSetMediaDisconnectTimer(a1);
  if ( a1->SelectiveSuspend )
    ndisSelectiveSuspendClearStop(a1, 8);
  if ( a2 )
  {
    v4 = a1->AoAc == 0LL;
    a1->PmInterruptedByPnp = 0;
    if ( !v4 )
      ndisAoAcClearStop(a1, 8);
  }
}
