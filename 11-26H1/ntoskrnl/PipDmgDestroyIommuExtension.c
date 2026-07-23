/*
 * XREFs of PipDmgDestroyIommuExtension @ 0x1409DB1F0
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409B7700 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140B2C010 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PiIommuFreeExtension @ 0x1407B7A28 (PiIommuFreeExtension.c)
 */

void __fastcall PipDmgDestroyIommuExtension(__int64 a1)
{
  _BYTE *v2; // rcx

  v2 = *(_BYTE **)(a1 + 720);
  if ( v2 )
  {
    PiIommuFreeExtension(v2);
    *(_QWORD *)(a1 + 720) = 0LL;
  }
}
