/*
 * XREFs of StorPortUnitDirectedPowerUp @ 0x140082200
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidUnitReenablePendingTimer @ 0x1400337B0 (RaidUnitReenablePendingTimer.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1400339DC (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     McTemplateK0pquuutx_EtwWriteTransfer @ 0x14007E08C (McTemplateK0pquuutx_EtwWriteTransfer.c)
 *     StorPortUnitDirectedPowerUpRequestD0 @ 0x1400823C8 (StorPortUnitDirectedPowerUpRequestD0.c)
 *     RaidNotifyPoAboutAdaptiveD3Engagement @ 0x1400C5430 (RaidNotifyPoAboutAdaptiveD3Engagement.c)
 */

void __fastcall StorPortUnitDirectedPowerUp(char *Context)
{
  int v2; // ecx
  _QWORD *v3; // r8
  __int64 v4; // rdx
  char *v5; // r9
  unsigned __int64 v6; // rdx

  if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    return;
  v2 = *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL);
  if ( (v2 & 0x300) == 0x300 )
  {
    if ( (Context[507] & 4) == 0 )
      RaidNotifyPoAboutAdaptiveD3Engagement(Context);
    PoFxReportDevicePoweredOn(**((_QWORD **)Context + 234));
    return;
  }
  v3 = Context + 2216;
  v4 = *((_QWORD *)Context + 277);
  if ( v4 )
  {
    if ( (v2 & 0x80u) != 0 )
    {
      v5 = Context + 2216;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) == 0 )
      {
LABEL_15:
        *v3 = 0LL;
        goto LABEL_16;
      }
      v5 = Context + 2216;
    }
    v6 = (MEMORY[0xFFFFF78000000008] - v4) / 0x2710uLL;
    *((_QWORD *)Context + 278) += v6;
    if ( v6 >= 0x2710 )
    {
      ++*((_DWORD *)Context + 550);
      v3 = v5;
    }
    if ( !*((_QWORD *)Context + 276) )
      *((_QWORD *)Context + 276) = *(_QWORD *)(*((_QWORD *)Context + 3) + 5280LL);
    goto LABEL_15;
  }
LABEL_16:
  ++*((_DWORD *)Context + 548);
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
    McTemplateK0pquuutx_EtwWriteTransfer(
      *((_QWORD *)Context + 3),
      &EventUnitDirectedPowerUpStart,
      (_DWORD)v3,
      **((_QWORD **)Context + 234),
      *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
      Context[104],
      Context[105],
      Context[106]);
  RaidUnitReenablePendingTimer((__int64)Context, 0);
  *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) |= 8u;
  if ( RaidIsUnitControlSupported((__int64)Context, 5) )
    RaidUnitSendPoFxPowerRequiredToMiniport((__int64)Context, 1u);
  StorPortUnitDirectedPowerUpRequestD0(Context);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
}
