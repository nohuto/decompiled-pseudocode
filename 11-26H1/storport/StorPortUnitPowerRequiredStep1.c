/*
 * XREFs of StorPortUnitPowerRequiredStep1 @ 0x140033610
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x140018BD0 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidUnitReenablePendingTimer @ 0x1400337B0 (RaidUnitReenablePendingTimer.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1400338AC (StorPortUnitPowerRequiredStep2.c)
 *     RaidUnitSendPoFxPowerRequiredToMiniport @ 0x1400339DC (RaidUnitSendPoFxPowerRequiredToMiniport.c)
 *     McTemplateK0pquuutx_EtwWriteTransfer @ 0x14007E08C (McTemplateK0pquuutx_EtwWriteTransfer.c)
 */

void __fastcall StorPortUnitPowerRequiredStep1(char *Context)
{
  _QWORD *v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  char *v7; // r9
  unsigned __int64 v8; // rdx

  if ( !RaidUnitCheckAndAcquirePoFx((__int64)Context) )
    return;
  v2 = Context + 2152;
  v3 = *((_QWORD *)Context + 269);
  if ( v3 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) & 0x20) != 0 )
    {
      v7 = Context + 2152;
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)Context + 3) + 108LL) & 1) == 0 )
      {
LABEL_19:
        *v2 = 0LL;
        goto LABEL_3;
      }
      v7 = Context + 2152;
    }
    v8 = (MEMORY[0xFFFFF78000000008] - v3) / 0x2710uLL;
    *((_QWORD *)Context + 270) += v8;
    if ( v8 >= 0x2710 )
    {
      ++*((_DWORD *)Context + 550);
      v2 = v7;
    }
    if ( !*((_QWORD *)Context + 266) )
      *((_QWORD *)Context + 266) = *(_QWORD *)(*((_QWORD *)Context + 3) + 5280LL);
    goto LABEL_19;
  }
LABEL_3:
  ++*((_DWORD *)Context + 548);
  if ( StorEtwLoggingEnabled && (byte_140173442 & 0x10) != 0 )
    McTemplateK0pquuutx_EtwWriteTransfer(
      *((_QWORD *)Context + 3),
      (unsigned int)&EventUnitPowerRequiredStart,
      (_DWORD)v2,
      **((_QWORD **)Context + 234),
      *(_DWORD *)(*((_QWORD *)Context + 3) + 56LL),
      Context[104],
      Context[105],
      Context[106]);
  RaidUnitReenablePendingTimer(Context, 0LL);
  *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) |= 8u;
  v4 = *((_QWORD *)Context + 234);
  v5 = *(_DWORD *)(v4 + 32);
  if ( (v5 & 0x10) != 0 )
    *(_DWORD *)(v4 + 32) = v5 & 0xFFFFFFEF;
  else
    *((_DWORD *)Context + 234) = 1;
  if ( (*(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) & 4) != 0 )
  {
    if ( RaidIsUnitControlSupported((__int64)Context, 5) )
    {
      LOBYTE(v6) = 1;
      RaidUnitSendPoFxPowerRequiredToMiniport(Context, v6);
    }
  }
  StorPortUnitPowerRequiredStep2(Context);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
}
