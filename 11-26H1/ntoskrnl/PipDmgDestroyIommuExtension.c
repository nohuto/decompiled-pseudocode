/*
 * XREFs of PipDmgDestroyIommuExtension @ 0x140AA7CBC
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A8A8E0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiProcessNewDeviceNode @ 0x140AA5E3C (PiProcessNewDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140B29F90 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     PiIommuFreeExtension @ 0x1407B49C8 (PiIommuFreeExtension.c)
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
