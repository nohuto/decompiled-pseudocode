/*
 * XREFs of StorPortUnitDirectedPowerDown @ 0x140081D30
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidUnitReenablePendingTimer @ 0x1400337B0 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1400339DC (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     McTemplateK0pquuutx_EtwWriteTransfer @ 0x14007E08C (McTemplateK0pquuutx_EtwWriteTransfer.c)
 *     StorPortUnitDirectedPowerDownRequestD3 @ 0x140081FAC (StorPortUnitDirectedPowerDownRequestD3.c)
 *     RaidNotifyPoAboutAdaptiveD3Engagement @ 0x1400C5430 (RaidNotifyPoAboutAdaptiveD3Engagement.c)
 */

void __fastcall StorPortUnitDirectedPowerDown(__int64 Context)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // [rsp+38h] [rbp-20h]

  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    v4 = *(_QWORD *)(Context + 1872);
    if ( (*(_DWORD *)(v4 + 32) & 0x300) == 0x300 )
    {
      if ( (*(_BYTE *)(Context + 507) & 4) == 0 )
        RaidNotifyPoAboutAdaptiveD3Engagement(Context);
      PoFxCompleteDirectedPowerDown(**(_QWORD **)(Context + 1872), v2, v3);
    }
    else
    {
      if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
      {
        v5 = *(_BYTE *)(Context + 106);
        McTemplateK0pquuutx_EtwWriteTransfer(
          *(_QWORD *)(Context + 24),
          &EventUnitDirectedPowerDownStart,
          v3,
          *(_QWORD *)v4,
          *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
          *(_BYTE *)(Context + 104),
          *(_BYTE *)(Context + 105),
          v5);
      }
      RaidUnitReenablePendingTimer(Context, 0);
      *(_DWORD *)(*(_QWORD *)(Context + 1872) + 32LL) &= ~8u;
      *(_DWORD *)(*(_QWORD *)(Context + 1872) + 32LL) &= ~0x10u;
      if ( *(_DWORD *)(Context + 1040) && (*(_BYTE *)(Context + 505) & 0x40) != 0 )
        *(_BYTE *)(Context + 1862) = 0;
      if ( RaidIsUnitControlSupported(Context, 5) )
        RaidUnitSendPoFxPowerRequiredToMiniport(Context, 0);
      StorPortUnitDirectedPowerDownRequestD3((PVOID)Context);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1864));
    }
  }
}
