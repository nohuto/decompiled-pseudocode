/*
 * XREFs of PiIommuUninitializeDeviceAts @ 0x1404F8CB0
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409B7700 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140B2C010 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     ExUninitializeDeviceAts @ 0x1406D448C (ExUninitializeDeviceAts.c)
 */

__int64 __fastcall PiIommuUninitializeDeviceAts(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 720);
  if ( *(char *)(result + 16) < 0 )
    return ExUninitializeDeviceAts(*(_QWORD *)(a1 + 32));
  return result;
}
