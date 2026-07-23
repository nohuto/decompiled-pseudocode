/*
 * XREFs of PnpQueryStopDeviceNode @ 0x1407B6F6C
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x1407B6DDC (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PnpFindMountableDevice @ 0x1404DEC20 (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1404F871C (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x1405DFB18 (PiRebalanceOptOut.c)
 *     IopQueryReconfiguration @ 0x1407B5AD8 (IopQueryReconfiguration.c)
 *     PipSetDevNodeFlags @ 0x1409AFE90 (PipSetDevNodeFlags.c)
 *     PnpPoFxActivateDevice @ 0x1409B02B0 (PnpPoFxActivateDevice.c)
 */

__int64 __fastcall PnpQueryStopDeviceNode(__int64 a1, char a2)
{
  unsigned int Reconfiguration; // edi

  Reconfiguration = -1073741823;
  if ( *(_DWORD *)(a1 + 300) == 778 && ((a2 & 1) == 0 || !PiRebalanceOptOut(a1)) )
  {
    if ( PnpFindMountableDevice(*(_QWORD *)(a1 + 32)) )
    {
      PnpLockMountableDevice(*(_QWORD **)(a1 + 32));
      PipSetDevNodeFlags(a1, 0x1000000LL);
    }
    PnpPoFxActivateDevice(a1, 32LL);
    Reconfiguration = IopQueryReconfiguration(5, *(_QWORD *)(a1 + 32));
    PipSetDevNodeState(a1, 779);
  }
  return Reconfiguration;
}
