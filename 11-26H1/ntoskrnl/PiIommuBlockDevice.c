/*
 * XREFs of PiIommuBlockDevice @ 0x1407B79E4
 * Callers:
 *     PnpIommuBlockUnblockDevice @ 0x1407B7ACC (PnpIommuBlockUnblockDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409B7700 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140B2C010 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiIommuBlockDevice(__int64 a1, __int64 a2)
{
  int v3; // ecx

  v3 = 0;
  if ( (*(_BYTE *)(a1 + 16) & 2) != 0 )
  {
    v3 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8), a2);
    if ( v3 >= 0 )
      *(_BYTE *)(a1 + 16) &= ~2u;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return (unsigned int)v3;
}
