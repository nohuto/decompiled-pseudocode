/*
 * XREFs of ?ndisMStopPowerSavingsForBindings@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016E070
 * Callers:
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x140157B40 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 * Callees:
 *     ?ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z @ 0x140046240 (-ndisAoAcStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@W4CallRunMode@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x140051E50 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140088080 (-ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140091624 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400C67A4 (-ndisSelectiveSuspendStopWdf@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 */

void __fastcall ndisMStopPowerSavingsForBindings(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int IsEnabledDeviceUsageNoInline; // eax
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rcx

  IsEnabledDeviceUsageNoInline = Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline();
  SelectiveSuspend = a1->SelectiveSuspend;
  if ( !IsEnabledDeviceUsageNoInline )
  {
    if ( !SelectiveSuspend )
      goto LABEL_4;
    goto LABEL_3;
  }
  if ( SelectiveSuspend )
  {
    if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) == 0LL )
    {
LABEL_3:
      ndisSelectiveSuspendStop(a1, 0xDu);
      goto LABEL_4;
    }
    ndisSelectiveSuspendStopWdf(a1, 13);
  }
LABEL_4:
  if ( a1->AoAc )
    ndisAoAcStop(a1, 13, RunAsynchronous);
}
