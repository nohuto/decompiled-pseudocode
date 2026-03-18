/*
 * XREFs of PnpQueryStopDeviceNode @ 0x1407B3F0C
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x1407B3D7C (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x1404D2858 (PipSetDevNodeState.c)
 *     PnpFindMountableDevice @ 0x1404E5680 (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1404FEF2C (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x1405DD1A8 (PiRebalanceOptOut.c)
 *     IopQueryReconfiguration @ 0x1407B2A78 (IopQueryReconfiguration.c)
 *     PipSetDevNodeFlags @ 0x14090DD60 (PipSetDevNodeFlags.c)
 *     PnpPoFxActivateDevice @ 0x14090E180 (PnpPoFxActivateDevice.c)
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
