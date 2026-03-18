/*
 * XREFs of PiIommuUninitializeDeviceAts @ 0x1404FF4C0
 * Callers:
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A8A8E0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiDmaGuardProcessPostRemove @ 0x140B29F90 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     ExUninitializeDeviceAts @ 0x1406D045C (ExUninitializeDeviceAts.c)
 */

__int64 __fastcall PiIommuUninitializeDeviceAts(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 720);
  if ( *(char *)(result + 16) < 0 )
    return ExUninitializeDeviceAts(*(_QWORD *)(a1 + 32));
  return result;
}
